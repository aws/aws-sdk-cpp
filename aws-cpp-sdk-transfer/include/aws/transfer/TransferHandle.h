/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once

#include <aws/transfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSSet.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/client/AWSError.h>
#include <aws/s3/S3Errors.h>
#include <iostream>
#include <atomic>
#include <mutex>
#include <condition_variable>

namespace Aws
{
    namespace Transfer
    {
        enum class TransferStatus
        {
            //this value is only used for directory synchronization
            EXACT_OBJECT_ALREADY_EXISTS,    
            //Operation is still queued and has not begun processing        
            NOT_STARTED,
            //Operation is now running
            IN_PROGRESS,
            //Operation was canceled. A Canceled operation can still be retried
            CANCELED,
            //Operation failed, A failed operaton can still be retried.
            FAILED,
            //Operation was successful
            COMPLETED,
            //Operation either failed or was canceled and a user deleted the multi-part upload from S3.
            ABORTED
        };

        enum class TransferDirection
        {
            UPLOAD,
            DOWNLOAD
        };

        /**
         * This is the interface for interacting with an in-process transfer. All operations from TransferManager return an instance of this class.
         * In addition to the status of the transfer and details about what operation is being performed, this class also has the Cancel() operation which is
         * used to cancel a transfer, and WaitUntilCompleted() which will cause the calling thread to block until the transfer is finished.
         *
         * In the context that by the time you are using this class, it is thread safe.
         */
        class AWS_TRANSFER_API TransferHandle
        {
        public:
            /**
             * Initialize with required information for an UPLOAD
             */
            TransferHandle(const Aws::String& bucketName, const Aws::String& keyName, uint64_t totalSize, const Aws::String& targetFilePath = "") : 
                m_isMultipart(false), m_direction(TransferDirection::UPLOAD), m_bytesTransferred(0), m_bytesTotalSize(totalSize),
                m_bucket(bucketName), m_key(keyName), m_fileName(targetFilePath),  m_status(static_cast<long>(TransferStatus::NOT_STARTED)), m_cancel(false)
            {}

            /**
             * Initialize with required information for a DOWNLOAD
             */
            TransferHandle(const Aws::String& bucketName, const Aws::String& keyName, const Aws::String& targetFilePath = "") :
                m_isMultipart(false), m_direction(TransferDirection::DOWNLOAD), m_bytesTransferred(0), m_bytesTotalSize(0),
                m_bucket(bucketName), m_key(keyName), m_fileName(targetFilePath), m_status(static_cast<long>(TransferStatus::NOT_STARTED)), m_cancel(false)
            {}

            /**
             * Whether or not this transfer is being performed using parallel parts via a multi-part s3 api.
             */
            inline bool IsMultipart() const { return m_isMultipart; }
            /**
            * Whether or not this transfer is being performed using parallel parts via a multi-part s3 api.
            */
            inline void SetIsMultipart(bool value) { m_isMultipart = value; }
            /**
            * If this is a multi-part transfer, this is the ID of it. e.g. UploadId for UploadPart
            */
            inline const Aws::String& GetMultiPartId() const { return m_multipartId; }
            /**
            * If this is a multi-part transfer, this is the ID of it. e.g. UploadId for UploadPart
            */
            inline void SetMultipartId(const Aws::String& value) { m_multipartId = value; }
            /**
             * Returns a copy of the completed parts, in the structure of <partId, ETag>. Used for all transfers.
             */
            Aws::Set<std::pair<int, Aws::String>> GetCompletedParts() const;
            /**
             * Set a pending part to completed along with its etag. Used fore all transfers.
             */
            void ChangePartToCompleted(int, const Aws::String&);
            /**
             * Returns a copy of the pending parts. Used for all transfers.
             */
            Aws::Set<int> GetPendingParts() const;
            /**
             * Set a part to pending. Used for all transfers.
             */
            void AddPendingPart(int);
            /**
             * Returns a copy of the queued parts. Used for all transfers.
             */
            Aws::Set<int> GetQueuedParts() const;
            /**
             * Set a part to queued. Used for all transfers.
             */
            void AddQueuedPart(int);
            /**
             * Returns a copy of the failed parts. Used for all transfers.
             */
            Aws::Set<int> GetFailedParts() const;
            /**
             * Set a pending part to failed. Used for all transfers.
             */
            void ChangePartToFailed(int);
            /**
             * Get the parts transactionally, mostly for internal purposes.
             */
             void GetAllPartsTransactional(Aws::Set<int>& queuedParts, Aws::Set<int>& pendingParts,
                 Aws::Set<int>& failedParts, Aws::Set<std::pair<int, Aws::String>>& completedParts);
            /**
             * Returns false if Cancel has been called. Largely for internal use.
             */
            bool ShouldContinue() const;
            /**
             * Cancel the transfer. This will happen asynchronously, so if you need to wait for it to be canceled, either handle the callbacks,
             *  or call WaitUntilFinished.
             */
            void Cancel();

            /**
             * Reset the cancellation status for a retry. This will be done automatically by Transfermanager.
             */
            void Restart();
            /**
             * Total bytes transferred successfully on this transfer operation.
             */
            inline uint64_t GetBytesTransferred() const { return m_bytesTransferred.load(); }
            /**
             * Atomically add bytes to the total bytes transferred
             */
            inline void AddTransferredBytes(uint64_t bytes) { m_bytesTransferred += bytes; }
            /**
             * Atomically set the total bytes transfered
             */
            inline void SetTransferredBytes(uint64_t bytes) { m_bytesTransferred = bytes; }

            /**
             * The calculated total size of the object being transferred.
             */
            inline uint64_t GetBytesTotalSize() const { return m_bytesTotalSize; }
            /**
             * Sets the total size of the object being transferred.
             */
            inline void SetBytesTotalSize(uint64_t value) { m_bytesTotalSize = value; }

            /**
             * Bucket portion of the object location in Amazon S3.
             */
            inline const Aws::String& GetBucketName() const { return m_bucket; }
            /**
             * Key of the object location in Amazon S3.
             */
            inline const Aws::String& GetKey() const { return m_key; }
            /**
             * If known, this is the location of the local file being uploaded from, or downloaded to. If you use the stream api however, this will
             * always be blank.
             */
            inline const Aws::String& GetTargetFilePath() const { return m_fileName; }
            /**
             * Upload or Download?
             */
            inline TransferDirection GetTransferDirection() const { return m_direction; }
            /**
             * Content type of the object being transferred
             */
            inline const Aws::String& GetContentType() const { return m_contentType; }
            /**
             * Content type of the object being transferred
             */
            inline void SetContentType(const Aws::String& value) { m_contentType = value; } 
            /**
             * In case of an upload, this is the metadata that was placed on the object when it was uploaded.
             * In the case of a download, this is the object metadata from the GetObject operation.
             */
            inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
            /**
            * In case of an upload, this is the metadata that was placed on the object when it was uploaded.
            * In the case of a download, this is the object metadata from the GetObject operation.
            */
            inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadata = value; }

            /**
             * The current status of the operation
             */
            inline TransferStatus GetStatus() const { return static_cast<TransferStatus>(m_status.load()); }
            /**
            * The current status of the operation
            */
            void UpdateStatus(TransferStatus value);

            /**
             * The last error that was encountered by the transfer. You can handle each error individually via the errorCallback callback function
             * in the TransferConfiguration.
             */
            inline const Aws::Client::AWSError<Aws::S3::S3Errors>& GetLastError() const { return m_lastError; }
            /**
             * The last error that was encountered by the transfer. You can handle each error individually via the errorCallback callback function
             * in the TransferConfiguration.
             */
            inline void SetError(const Aws::Client::AWSError<Aws::S3::S3Errors>& error) { m_lastError = error; }
            /**
             * Blocks the calling thread until the operation has finished. This function does not busy wait. It is safe for your CPU.
             */
            void WaitUntilFinished() const;      

        private:
            bool m_isMultipart;
            Aws::String m_multipartId;
            TransferDirection m_direction;
            Aws::Set<std::pair<int, Aws::String>> m_completedParts;
            Aws::Set<int> m_pendingParts;
            Aws::Set<int> m_queuedParts;
            Aws::Set<int> m_failedParts;
            std::atomic<uint64_t> m_bytesTransferred;
            uint64_t m_bytesTotalSize;
            Aws::String m_bucket;
            Aws::String m_key;
            Aws::String m_fileName;
            Aws::String m_contentType;
            Aws::Map<Aws::String, Aws::String> m_metadata;
            std::atomic<long> m_status;
            Aws::Client::AWSError<Aws::S3::S3Errors> m_lastError;
            std::atomic<bool> m_cancel;

            mutable std::mutex m_partsLock;
            mutable std::mutex m_statusLock;
            mutable std::condition_variable m_waitUntilFinishedSignal;
        };
    }
}
