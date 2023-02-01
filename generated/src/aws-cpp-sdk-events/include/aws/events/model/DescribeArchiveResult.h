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


    /**
     * <p>The ARN of the archive.</p>
     */
    inline const Aws::String& GetArchiveArn() const{ return m_archiveArn; }

    /**
     * <p>The ARN of the archive.</p>
     */
    inline void SetArchiveArn(const Aws::String& value) { m_archiveArn = value; }

    /**
     * <p>The ARN of the archive.</p>
     */
    inline void SetArchiveArn(Aws::String&& value) { m_archiveArn = std::move(value); }

    /**
     * <p>The ARN of the archive.</p>
     */
    inline void SetArchiveArn(const char* value) { m_archiveArn.assign(value); }

    /**
     * <p>The ARN of the archive.</p>
     */
    inline DescribeArchiveResult& WithArchiveArn(const Aws::String& value) { SetArchiveArn(value); return *this;}

    /**
     * <p>The ARN of the archive.</p>
     */
    inline DescribeArchiveResult& WithArchiveArn(Aws::String&& value) { SetArchiveArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the archive.</p>
     */
    inline DescribeArchiveResult& WithArchiveArn(const char* value) { SetArchiveArn(value); return *this;}


    /**
     * <p>The name of the archive.</p>
     */
    inline const Aws::String& GetArchiveName() const{ return m_archiveName; }

    /**
     * <p>The name of the archive.</p>
     */
    inline void SetArchiveName(const Aws::String& value) { m_archiveName = value; }

    /**
     * <p>The name of the archive.</p>
     */
    inline void SetArchiveName(Aws::String&& value) { m_archiveName = std::move(value); }

    /**
     * <p>The name of the archive.</p>
     */
    inline void SetArchiveName(const char* value) { m_archiveName.assign(value); }

    /**
     * <p>The name of the archive.</p>
     */
    inline DescribeArchiveResult& WithArchiveName(const Aws::String& value) { SetArchiveName(value); return *this;}

    /**
     * <p>The name of the archive.</p>
     */
    inline DescribeArchiveResult& WithArchiveName(Aws::String&& value) { SetArchiveName(std::move(value)); return *this;}

    /**
     * <p>The name of the archive.</p>
     */
    inline DescribeArchiveResult& WithArchiveName(const char* value) { SetArchiveName(value); return *this;}


    /**
     * <p>The ARN of the event source associated with the archive.</p>
     */
    inline const Aws::String& GetEventSourceArn() const{ return m_eventSourceArn; }

    /**
     * <p>The ARN of the event source associated with the archive.</p>
     */
    inline void SetEventSourceArn(const Aws::String& value) { m_eventSourceArn = value; }

    /**
     * <p>The ARN of the event source associated with the archive.</p>
     */
    inline void SetEventSourceArn(Aws::String&& value) { m_eventSourceArn = std::move(value); }

    /**
     * <p>The ARN of the event source associated with the archive.</p>
     */
    inline void SetEventSourceArn(const char* value) { m_eventSourceArn.assign(value); }

    /**
     * <p>The ARN of the event source associated with the archive.</p>
     */
    inline DescribeArchiveResult& WithEventSourceArn(const Aws::String& value) { SetEventSourceArn(value); return *this;}

    /**
     * <p>The ARN of the event source associated with the archive.</p>
     */
    inline DescribeArchiveResult& WithEventSourceArn(Aws::String&& value) { SetEventSourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the event source associated with the archive.</p>
     */
    inline DescribeArchiveResult& WithEventSourceArn(const char* value) { SetEventSourceArn(value); return *this;}


    /**
     * <p>The description of the archive.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the archive.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the archive.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the archive.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the archive.</p>
     */
    inline DescribeArchiveResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the archive.</p>
     */
    inline DescribeArchiveResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the archive.</p>
     */
    inline DescribeArchiveResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The event pattern used to filter events sent to the archive.</p>
     */
    inline const Aws::String& GetEventPattern() const{ return m_eventPattern; }

    /**
     * <p>The event pattern used to filter events sent to the archive.</p>
     */
    inline void SetEventPattern(const Aws::String& value) { m_eventPattern = value; }

    /**
     * <p>The event pattern used to filter events sent to the archive.</p>
     */
    inline void SetEventPattern(Aws::String&& value) { m_eventPattern = std::move(value); }

    /**
     * <p>The event pattern used to filter events sent to the archive.</p>
     */
    inline void SetEventPattern(const char* value) { m_eventPattern.assign(value); }

    /**
     * <p>The event pattern used to filter events sent to the archive.</p>
     */
    inline DescribeArchiveResult& WithEventPattern(const Aws::String& value) { SetEventPattern(value); return *this;}

    /**
     * <p>The event pattern used to filter events sent to the archive.</p>
     */
    inline DescribeArchiveResult& WithEventPattern(Aws::String&& value) { SetEventPattern(std::move(value)); return *this;}

    /**
     * <p>The event pattern used to filter events sent to the archive.</p>
     */
    inline DescribeArchiveResult& WithEventPattern(const char* value) { SetEventPattern(value); return *this;}


    /**
     * <p>The state of the archive.</p>
     */
    inline const ArchiveState& GetState() const{ return m_state; }

    /**
     * <p>The state of the archive.</p>
     */
    inline void SetState(const ArchiveState& value) { m_state = value; }

    /**
     * <p>The state of the archive.</p>
     */
    inline void SetState(ArchiveState&& value) { m_state = std::move(value); }

    /**
     * <p>The state of the archive.</p>
     */
    inline DescribeArchiveResult& WithState(const ArchiveState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the archive.</p>
     */
    inline DescribeArchiveResult& WithState(ArchiveState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The reason that the archive is in the state.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }

    /**
     * <p>The reason that the archive is in the state.</p>
     */
    inline void SetStateReason(const Aws::String& value) { m_stateReason = value; }

    /**
     * <p>The reason that the archive is in the state.</p>
     */
    inline void SetStateReason(Aws::String&& value) { m_stateReason = std::move(value); }

    /**
     * <p>The reason that the archive is in the state.</p>
     */
    inline void SetStateReason(const char* value) { m_stateReason.assign(value); }

    /**
     * <p>The reason that the archive is in the state.</p>
     */
    inline DescribeArchiveResult& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}

    /**
     * <p>The reason that the archive is in the state.</p>
     */
    inline DescribeArchiveResult& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}

    /**
     * <p>The reason that the archive is in the state.</p>
     */
    inline DescribeArchiveResult& WithStateReason(const char* value) { SetStateReason(value); return *this;}


    /**
     * <p>The number of days to retain events for in the archive.</p>
     */
    inline int GetRetentionDays() const{ return m_retentionDays; }

    /**
     * <p>The number of days to retain events for in the archive.</p>
     */
    inline void SetRetentionDays(int value) { m_retentionDays = value; }

    /**
     * <p>The number of days to retain events for in the archive.</p>
     */
    inline DescribeArchiveResult& WithRetentionDays(int value) { SetRetentionDays(value); return *this;}


    /**
     * <p>The size of the archive in bytes.</p>
     */
    inline long long GetSizeBytes() const{ return m_sizeBytes; }

    /**
     * <p>The size of the archive in bytes.</p>
     */
    inline void SetSizeBytes(long long value) { m_sizeBytes = value; }

    /**
     * <p>The size of the archive in bytes.</p>
     */
    inline DescribeArchiveResult& WithSizeBytes(long long value) { SetSizeBytes(value); return *this;}


    /**
     * <p>The number of events in the archive.</p>
     */
    inline long long GetEventCount() const{ return m_eventCount; }

    /**
     * <p>The number of events in the archive.</p>
     */
    inline void SetEventCount(long long value) { m_eventCount = value; }

    /**
     * <p>The number of events in the archive.</p>
     */
    inline DescribeArchiveResult& WithEventCount(long long value) { SetEventCount(value); return *this;}


    /**
     * <p>The time at which the archive was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time at which the archive was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time at which the archive was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time at which the archive was created.</p>
     */
    inline DescribeArchiveResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time at which the archive was created.</p>
     */
    inline DescribeArchiveResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
