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
            NOT_STARTED,
            IN_PROGRESS,
            FAILED,
            COMPLETED
        };

        enum class TransferDirection
        {
            UPLOAD,
            DOWNLOAD
        };

        class AWS_TRANSFER_API TransferHandle
        {
        public:
            TransferHandle(const Aws::String& bucketName, const Aws::String& keyName, uint64_t totalSize, const Aws::String& targetFilePath = "") : 
                m_isMultipart(false), m_direction(TransferDirection::UPLOAD), m_bytesTransferred(0), m_bucket(bucketName), 
                m_key(keyName), m_fileName(targetFilePath), m_bytesTotalSize(totalSize), m_status(TransferStatus::NOT_STARTED), m_cancel(false)
            {}

            TransferHandle(const Aws::String& bucketName, const Aws::String& keyName, const Aws::String& targetFilePath = "") :
                m_isMultipart(false), m_direction(TransferDirection::DOWNLOAD), m_bytesTransferred(0), m_bucket(bucketName),
                m_key(keyName), m_fileName(targetFilePath), m_bytesTotalSize(0), m_status(TransferStatus::NOT_STARTED), m_cancel(false)
            {}

            inline bool IsMultipart() const { return m_isMultipart; }
            inline void SetIsMultipart(bool value) { m_isMultipart = value; }
            inline const Aws::String& GetMultiPartId() const { return m_multipartId; }
            inline void SetMultipartId(const Aws::String& value) { m_multipartId = value; }

            Aws::Set<std::pair<int, Aws::String>> GetCompletedParts() const;
            void ChangePartToCompleted(int, const Aws::String&);

            Aws::Set<int> GetPendingParts() const;
            void AddPendingPart(int);

            Aws::Set<int> GetFailedParts() const;
            void ChangePartToFailed(int);

            bool Continue();
            void Cancel();

            inline uint64_t GetBytesTransferred() const { return m_bytesTransferred.load(); }
            inline void AddTransferredBytes(uint64_t bytes) { m_bytesTransferred += bytes; }
            inline void SetTransferredBytes(uint64_t bytes) { m_bytesTransferred = bytes; }

            inline uint64_t GetBytesTotalSize() const { return m_bytesTotalSize; }
            inline void SetBytesTotalSize(uint64_t value) { m_bytesTotalSize = value; }

            inline const Aws::String& GetBucketName() const { return m_bucket; }
            inline const Aws::String& GetKey() const { return m_key; }
            inline const Aws::String& GetTargetFilePath() const { return m_fileName; }
            inline TransferDirection GetTransferDirection() const { return m_direction; }
            inline const Aws::String& GetContentType() const { return m_contentType; }
            inline void SetContentType(const Aws::String& value) { m_contentType = value; } 
            inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
            inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadata = value; }

            inline TransferStatus GetStatus() const { return m_status.load(); }
            void UpdateStatus(TransferStatus value);

            inline const Aws::Client::AWSError<Aws::S3::S3Errors>& GetLastError() const { return m_lastError; }
            inline void SetError(const Aws::Client::AWSError<Aws::S3::S3Errors>& error) { m_lastError = error; }
            void WaitUntilFinished() const;

        private:
            bool m_isMultipart;
            Aws::String m_multipartId;
            TransferDirection m_direction;
            Aws::Set<std::pair<int, Aws::String>> m_completedParts;
            Aws::Set<int> m_pendingParts;
            Aws::Set<int> m_failedParts;
            std::atomic<uint64_t> m_bytesTransferred;
            uint64_t m_bytesTotalSize;
            Aws::String m_bucket;
            Aws::String m_key;
            Aws::String m_fileName;
            Aws::String m_contentType;
            Aws::Map<Aws::String, Aws::String> m_metadata;
            std::atomic<TransferStatus> m_status;
            Aws::Client::AWSError<Aws::S3::S3Errors> m_lastError;
            std::atomic<bool> m_cancel;

            mutable std::recursive_mutex m_completedPartsLock;
            mutable std::recursive_mutex m_pendingPartsLock;
            mutable std::recursive_mutex m_failedPartsLock;
            mutable std::mutex m_statusLock;
            mutable std::condition_variable m_waitUntilFinishedSignal;
        };
    }
}
