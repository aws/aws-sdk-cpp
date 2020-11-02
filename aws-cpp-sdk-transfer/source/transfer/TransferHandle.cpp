/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transfer/TransferHandle.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <cassert>

namespace Aws
{
    namespace Transfer
    {

        PartState::PartState() :
            m_partId(0),
            m_eTag(""),
            m_currentProgressInBytes(0),
            m_bestProgressInBytes(0),
            m_sizeInBytes(0),
            m_rangeBegin(0),
            m_downloadPartStream(nullptr),
            m_downloadBuffer(nullptr),
            m_lastPart(false)
        {}

        PartState::PartState(int partId, uint64_t bestProgressInBytes, uint64_t sizeInBytes, bool lastPart) :
            m_partId(partId),
            m_eTag(""),
            m_currentProgressInBytes(0),
            m_bestProgressInBytes(bestProgressInBytes),
            m_sizeInBytes(sizeInBytes),
            m_rangeBegin(0),
            m_downloadPartStream(nullptr),
            m_downloadBuffer(nullptr),
            m_lastPart(lastPart)
        {}


        void PartState::Reset()
        {
            m_currentProgressInBytes = 0;
        }

        void PartState::OnDataTransferred(uint64_t amount, const std::shared_ptr<TransferHandle> &transferHandle)
        {
            m_currentProgressInBytes += amount;
            if (m_currentProgressInBytes > m_bestProgressInBytes)
            {
                transferHandle->UpdateBytesTransferred(m_currentProgressInBytes - m_bestProgressInBytes);
                m_bestProgressInBytes = m_currentProgressInBytes;
                AWS_LOGSTREAM_TRACE(CLASS_TAG, "Transfer handle ID [" << transferHandle->GetId() << "] "
                        << m_bestProgressInBytes << " bytes transferred for part [" << m_partId << "].");
            }
        }

        PartStateMap TransferHandle::GetCompletedParts() const
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            return m_completedParts;
        }

        TransferHandle::TransferHandle(const Aws::String& bucketName, const Aws::String& keyName, uint64_t totalSize, const Aws::String& targetFilePath) :
            m_isMultipart(false),
            m_direction(TransferDirection::UPLOAD),
            m_bytesTransferred(0),
            m_lastPart(false),
            m_bytesTotalSize(totalSize),
            m_offset(0),
            m_bucket(bucketName),
            m_key(keyName),
            m_fileName(targetFilePath),
            m_versionId(""),
            m_status(TransferStatus::NOT_STARTED),
            m_cancel(false),
            m_handleId(Utils::UUID::RandomUUID()),
            m_createDownloadStreamFn(),
            m_downloadStream(nullptr)
        {}

        TransferHandle::TransferHandle(const Aws::String& bucketName, const Aws::String& keyName, const Aws::String& targetFilePath) :
            m_isMultipart(false),
            m_direction(TransferDirection::DOWNLOAD),
            m_bytesTransferred(0),
            m_lastPart(false),
            m_bytesTotalSize(0),
            m_offset(0),
            m_bucket(bucketName),
            m_key(keyName),
            m_fileName(targetFilePath),
            m_versionId(""),
            m_status(TransferStatus::NOT_STARTED),
            m_cancel(false),
            m_handleId(Utils::UUID::RandomUUID()),
            m_createDownloadStreamFn(),
            m_downloadStream(nullptr)
        {}

        TransferHandle::TransferHandle(const Aws::String& bucketName, const Aws::String& keyName, CreateDownloadStreamCallback createDownloadStreamFn, const Aws::String& targetFilePath) :
            m_isMultipart(false),
            m_direction(TransferDirection::DOWNLOAD),
            m_bytesTransferred(0),
            m_lastPart(false),
            m_bytesTotalSize(0),
            m_offset(0),
            m_bucket(bucketName),
            m_key(keyName),
            m_fileName(targetFilePath),
            m_versionId(""),
            m_status(TransferStatus::NOT_STARTED),
            m_cancel(false),
            m_handleId(Utils::UUID::RandomUUID()),
            m_createDownloadStreamFn(createDownloadStreamFn),
            m_downloadStream(nullptr)
        {}


        TransferHandle::TransferHandle(const Aws::String& bucketName, const Aws::String& keyName,
            const uint64_t fileOffset, const uint64_t downloadBytes,
            CreateDownloadStreamCallback createDownloadStreamFn, const Aws::String& targetFilePath) :
            m_isMultipart(false),
            m_direction(TransferDirection::DOWNLOAD),
            m_bytesTransferred(0),
            m_lastPart(false),
            m_bytesTotalSize(downloadBytes),
            m_offset(fileOffset),
            m_bucket(bucketName),
            m_key(keyName),
            m_fileName(targetFilePath),
            m_versionId(""),
            m_status(TransferStatus::NOT_STARTED),
            m_cancel(false),
            m_handleId(Utils::UUID::RandomUUID()),
            m_createDownloadStreamFn(createDownloadStreamFn),
            m_downloadStream(nullptr)
        {}

        TransferHandle::~TransferHandle()
        {
            CleanupDownloadStream();
        }

        void TransferHandle::ChangePartToCompleted(const PartPointer& partState, const Aws::String &eTag)
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            const auto partId = partState->GetPartId();
            if (!m_pendingParts.erase(partId))
            {
                m_failedParts.erase(partId);
            }

            partState->SetETag(eTag);
            if (partState->IsLastPart())
            {
                AddMetadataEntry("ETag", eTag);
            }
            m_completedParts[partId] = partState;
            AWS_LOGSTREAM_DEBUG(CLASS_TAG, "Transfer handle ID [" << GetId() << "] Setting part [" << partId
                    << "] to [" << TransferStatus::COMPLETED << "].");
        }

        PartStateMap TransferHandle::GetQueuedParts() const
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            return m_queuedParts;
        }

        bool TransferHandle::HasQueuedParts() const
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            return m_queuedParts.size() > 0;
        }

        void TransferHandle::AddQueuedPart(const PartPointer& partState)
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            partState->Reset();
            m_failedParts.erase(partState->GetPartId());
            m_queuedParts[partState->GetPartId()] = partState;
        }

        PartStateMap TransferHandle::GetPendingParts() const
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            return m_pendingParts;
        }

        bool TransferHandle::HasPendingParts() const
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            return m_pendingParts.size() > 0;
        }

        void TransferHandle::AddPendingPart(const PartPointer& partState)
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            m_queuedParts.erase(partState->GetPartId());
            m_pendingParts[partState->GetPartId()] = partState;
        }

        PartStateMap TransferHandle::GetFailedParts() const
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            return m_failedParts;
        }

        bool TransferHandle::HasFailedParts() const
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            return m_failedParts.size() > 0;
        }

        void TransferHandle::ChangePartToFailed(const PartPointer& partState)
        {
            int partId = partState->GetPartId();

            std::lock_guard<std::mutex> locker(m_partsLock);
            partState->Reset();
            m_pendingParts.erase(partId);
            m_queuedParts.erase(partId);
            m_failedParts[partId] = partState;
            AWS_LOGSTREAM_DEBUG(CLASS_TAG, "Transfer handle ID [" << GetId() << "] Setting part [" << partId
                    << "] to [" << TransferStatus::FAILED << "].");
        }

        void TransferHandle::GetAllPartsTransactional(PartStateMap& queuedParts, PartStateMap& pendingParts,
            PartStateMap& failedParts, PartStateMap& completedParts)
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            queuedParts = m_queuedParts;
            pendingParts = m_pendingParts;
            failedParts = m_failedParts;
            completedParts = m_completedParts;
        }

        bool TransferHandle::HasParts() const
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            return !m_queuedParts.empty() || !m_pendingParts.empty() || !m_failedParts.empty() || !m_completedParts.empty();
        }

        static bool IsFinishedStatus(TransferStatus value)
        {
            switch(value)
            {
                case TransferStatus::ABORTED:
                case TransferStatus::COMPLETED:
                case TransferStatus::FAILED:
                case TransferStatus::CANCELED:
                case TransferStatus::EXACT_OBJECT_ALREADY_EXISTS:
                    return true;
                default:
                    return false;
            }
        }

        static bool IsTransitionAllowed(TransferStatus currentValue, TransferStatus nextState)
        {
            // If current state is the same as next state, the transition is allowed.
            // otherwise, we can only change from a final state to a final state if moving from canceled to aborted
            if (currentValue == nextState)
            {
                return true;
            }

            if (IsFinishedStatus(currentValue) && IsFinishedStatus(nextState))
            {
                return currentValue == TransferStatus::CANCELED && nextState == TransferStatus::ABORTED;
            }

            return true;
        }

        static Aws::String GetNameForStatus(TransferStatus value)
        {
            switch (value)
            {
                case TransferStatus::EXACT_OBJECT_ALREADY_EXISTS:
                    return "EXACT_OBJECT_ALREADY_EXISTS";
                case TransferStatus::NOT_STARTED:
                    return "NOT_STARTED";
                case TransferStatus::IN_PROGRESS:
                    return "IN_PROGRESS";
                case TransferStatus::CANCELED:
                    return "CANCELED";
                case TransferStatus::FAILED:
                    return "FAILED";
                case TransferStatus::COMPLETED:
                    return "COMPLETED";
                case TransferStatus::ABORTED:
                    return "ABORTED";
                default:
                    return "UNKNOWN";
            }
        }

        Aws::OStream& operator << (Aws::OStream& s, TransferStatus status)
        {
            s << GetNameForStatus(status);
            return s;
        }

        void TransferHandle::UpdateStatus(TransferStatus value)
        {
            std::unique_lock<std::mutex> semaphoreLock(m_statusLock);


            if(IsTransitionAllowed(m_status, value))
            {
                AWS_LOGSTREAM_INFO(CLASS_TAG, "Transfer handle ID [" << GetId() << "] Updated handle status from ["
                    << m_status << "] to [" << value << "].");

                m_status = value;

                if (IsFinishedStatus(value))
                {
                    if(value == TransferStatus::COMPLETED)
                    {
                        CleanupDownloadStream();
                    }

                    semaphoreLock.unlock();
                    m_waitUntilFinishedSignal.notify_all();
                }
            }
            else
            {
                AWS_LOGSTREAM_DEBUG(CLASS_TAG, "Transfer handle ID [" << GetId()
                        << "]  Failed to update handle status from [" << m_status << "] to [" << value
                        << "]. Transition is not allowed.");
            }
        }

        void TransferHandle::WaitUntilFinished() const
        {
            std::unique_lock<std::mutex> semaphoreLock(m_statusLock);
            while (!IsFinishedStatus(m_status) || HasPendingParts())
            {
                m_waitUntilFinishedSignal.wait(semaphoreLock);
            }
        }

        void TransferHandle::Cancel()
        {
            AWS_LOGSTREAM_TRACE(CLASS_TAG, "Transfer handle ID [" << GetId() << "] Cancelling transfer.");
            m_cancel.store(true);
        }

        void TransferHandle::Restart()
        {
            AWS_LOGSTREAM_TRACE(CLASS_TAG, "Transfer handle ID [" << GetId() << "] Restarting transfer.");
            m_cancel.store(false);
            m_lastPart.store(false);
        }

        bool TransferHandle::ShouldContinue() const
        {
            return !m_cancel.load();
        }

        void TransferHandle::WritePartToDownloadStream(Aws::IOStream* partStream, std::size_t writeOffset)
        {
            std::lock_guard<std::mutex> lock(m_downloadStreamLock);

            if(m_downloadStream == nullptr)
            {
                m_downloadStream = m_createDownloadStreamFn();
                assert(m_downloadStream->good());
                m_downloadStreamBaseOffset = m_downloadStream->tellp();
            }

            partStream->seekg(0);
            m_downloadStream->seekp(m_downloadStreamBaseOffset + writeOffset);
            (*m_downloadStream) << partStream->rdbuf();
            m_downloadStream->flush();
        }

        void TransferHandle::ApplyDownloadConfiguration(const DownloadConfiguration& downloadConfig)
        {
            SetVersionId(downloadConfig.versionId);
        }

        void TransferHandle::CleanupDownloadStream()
        {
            std::lock_guard<std::mutex> locker(m_downloadStreamLock);
            if(m_downloadStream)
            {
                m_downloadStream->flush();
                Aws::Delete(m_downloadStream);
                m_downloadStream = nullptr;
            }
        }

        TransferStatus TransferHandle::GetStatus() const
        {
            std::lock_guard<std::mutex> lock(m_statusLock);
            return m_status;
        }

        Aws::String TransferHandle::GetId() const
        {
            return m_handleId;
        }
    }
}
