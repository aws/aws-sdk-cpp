/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/ArchiveState.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchEvents
{
namespace Model
{
  class DescribeArchiveResult
  {
  public:
    AWS_CLOUDWATCHEVENTS_API DescribeArchiveResult();
    AWS_CLOUDWATCHEVENTS_API DescribeArchiveResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API DescribeArchiveResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the archive.</p>
     */
    inline const Aws::String& GetArchiveArn() const{ return m_archiveArn; }
    inline void SetArchiveArn(const Aws::String& value) { m_archiveArn = value; }
    inline void SetArchiveArn(Aws::String&& value) { m_archiveArn = std::move(value); }
    inline void SetArchiveArn(const char* value) { m_archiveArn.assign(value); }
    inline DescribeArchiveResult& WithArchiveArn(const Aws::String& value) { SetArchiveArn(value); return *this;}
    inline DescribeArchiveResult& WithArchiveArn(Aws::String&& value) { SetArchiveArn(std::move(value)); return *this;}
    inline DescribeArchiveResult& WithArchiveArn(const char* value) { SetArchiveArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the archive.</p>
     */
    inline const Aws::String& GetArchiveName() const{ return m_archiveName; }
    inline void SetArchiveName(const Aws::String& value) { m_archiveName = value; }
    inline void SetArchiveName(Aws::String&& value) { m_archiveName = std::move(value); }
    inline void SetArchiveName(const char* value) { m_archiveName.assign(value); }
    inline DescribeArchiveResult& WithArchiveName(const Aws::String& value) { SetArchiveName(value); return *this;}
    inline DescribeArchiveResult& WithArchiveName(Aws::String&& value) { SetArchiveName(std::move(value)); return *this;}
    inline DescribeArchiveResult& WithArchiveName(const char* value) { SetArchiveName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the event source associated with the archive.</p>
     */
    inline const Aws::String& GetEventSourceArn() const{ return m_eventSourceArn; }
    inline void SetEventSourceArn(const Aws::String& value) { m_eventSourceArn = value; }
    inline void SetEventSourceArn(Aws::String&& value) { m_eventSourceArn = std::move(value); }
    inline void SetEventSourceArn(const char* value) { m_eventSourceArn.assign(value); }
    inline DescribeArchiveResult& WithEventSourceArn(const Aws::String& value) { SetEventSourceArn(value); return *this;}
    inline DescribeArchiveResult& WithEventSourceArn(Aws::String&& value) { SetEventSourceArn(std::move(value)); return *this;}
    inline DescribeArchiveResult& WithEventSourceArn(const char* value) { SetEventSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the archive.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeArchiveResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeArchiveResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeArchiveResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event pattern used to filter events sent to the archive.</p>
     */
    inline const Aws::String& GetEventPattern() const{ return m_eventPattern; }
    inline void SetEventPattern(const Aws::String& value) { m_eventPattern = value; }
    inline void SetEventPattern(Aws::String&& value) { m_eventPattern = std::move(value); }
    inline void SetEventPattern(const char* value) { m_eventPattern.assign(value); }
    inline DescribeArchiveResult& WithEventPattern(const Aws::String& value) { SetEventPattern(value); return *this;}
    inline DescribeArchiveResult& WithEventPattern(Aws::String&& value) { SetEventPattern(std::move(value)); return *this;}
    inline DescribeArchiveResult& WithEventPattern(const char* value) { SetEventPattern(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the archive.</p>
     */
    inline const ArchiveState& GetState() const{ return m_state; }
    inline void SetState(const ArchiveState& value) { m_state = value; }
    inline void SetState(ArchiveState&& value) { m_state = std::move(value); }
    inline DescribeArchiveResult& WithState(const ArchiveState& value) { SetState(value); return *this;}
    inline DescribeArchiveResult& WithState(ArchiveState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the archive is in the state.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }
    inline void SetStateReason(const Aws::String& value) { m_stateReason = value; }
    inline void SetStateReason(Aws::String&& value) { m_stateReason = std::move(value); }
    inline void SetStateReason(const char* value) { m_stateReason.assign(value); }
    inline DescribeArchiveResult& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}
    inline DescribeArchiveResult& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}
    inline DescribeArchiveResult& WithStateReason(const char* value) { SetStateReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to retain events for in the archive.</p>
     */
    inline int GetRetentionDays() const{ return m_retentionDays; }
    inline void SetRetentionDays(int value) { m_retentionDays = value; }
    inline DescribeArchiveResult& WithRetentionDays(int value) { SetRetentionDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the archive in bytes.</p>
     */
    inline long long GetSizeBytes() const{ return m_sizeBytes; }
    inline void SetSizeBytes(long long value) { m_sizeBytes = value; }
    inline DescribeArchiveResult& WithSizeBytes(long long value) { SetSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of events in the archive.</p>
     */
    inline long long GetEventCount() const{ return m_eventCount; }
    inline void SetEventCount(long long value) { m_eventCount = value; }
    inline DescribeArchiveResult& WithEventCount(long long value) { SetEventCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the archive was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeArchiveResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeArchiveResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeArchiveResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeArchiveResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeArchiveResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_archiveArn;

    Aws::String m_archiveName;

    Aws::String m_eventSourceArn;

    Aws::String m_description;

    Aws::String m_eventPattern;

    ArchiveState m_state;

    Aws::String m_stateReason;

    int m_retentionDays;

    long long m_sizeBytes;

    long long m_eventCount;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
