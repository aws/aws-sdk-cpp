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
    AWS_CLOUDWATCHEVENTS_API DescribeArchiveResult() = default;
    AWS_CLOUDWATCHEVENTS_API DescribeArchiveResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API DescribeArchiveResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the archive.</p>
     */
    inline const Aws::String& GetArchiveArn() const { return m_archiveArn; }
    template<typename ArchiveArnT = Aws::String>
    void SetArchiveArn(ArchiveArnT&& value) { m_archiveArnHasBeenSet = true; m_archiveArn = std::forward<ArchiveArnT>(value); }
    template<typename ArchiveArnT = Aws::String>
    DescribeArchiveResult& WithArchiveArn(ArchiveArnT&& value) { SetArchiveArn(std::forward<ArchiveArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the archive.</p>
     */
    inline const Aws::String& GetArchiveName() const { return m_archiveName; }
    template<typename ArchiveNameT = Aws::String>
    void SetArchiveName(ArchiveNameT&& value) { m_archiveNameHasBeenSet = true; m_archiveName = std::forward<ArchiveNameT>(value); }
    template<typename ArchiveNameT = Aws::String>
    DescribeArchiveResult& WithArchiveName(ArchiveNameT&& value) { SetArchiveName(std::forward<ArchiveNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the event source associated with the archive.</p>
     */
    inline const Aws::String& GetEventSourceArn() const { return m_eventSourceArn; }
    template<typename EventSourceArnT = Aws::String>
    void SetEventSourceArn(EventSourceArnT&& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = std::forward<EventSourceArnT>(value); }
    template<typename EventSourceArnT = Aws::String>
    DescribeArchiveResult& WithEventSourceArn(EventSourceArnT&& value) { SetEventSourceArn(std::forward<EventSourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the archive.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeArchiveResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event pattern used to filter events sent to the archive.</p>
     */
    inline const Aws::String& GetEventPattern() const { return m_eventPattern; }
    template<typename EventPatternT = Aws::String>
    void SetEventPattern(EventPatternT&& value) { m_eventPatternHasBeenSet = true; m_eventPattern = std::forward<EventPatternT>(value); }
    template<typename EventPatternT = Aws::String>
    DescribeArchiveResult& WithEventPattern(EventPatternT&& value) { SetEventPattern(std::forward<EventPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the archive.</p>
     */
    inline ArchiveState GetState() const { return m_state; }
    inline void SetState(ArchiveState value) { m_stateHasBeenSet = true; m_state = value; }
    inline DescribeArchiveResult& WithState(ArchiveState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the archive is in the state.</p>
     */
    inline const Aws::String& GetStateReason() const { return m_stateReason; }
    template<typename StateReasonT = Aws::String>
    void SetStateReason(StateReasonT&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::forward<StateReasonT>(value); }
    template<typename StateReasonT = Aws::String>
    DescribeArchiveResult& WithStateReason(StateReasonT&& value) { SetStateReason(std::forward<StateReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to retain events for in the archive.</p>
     */
    inline int GetRetentionDays() const { return m_retentionDays; }
    inline void SetRetentionDays(int value) { m_retentionDaysHasBeenSet = true; m_retentionDays = value; }
    inline DescribeArchiveResult& WithRetentionDays(int value) { SetRetentionDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the archive in bytes.</p>
     */
    inline long long GetSizeBytes() const { return m_sizeBytes; }
    inline void SetSizeBytes(long long value) { m_sizeBytesHasBeenSet = true; m_sizeBytes = value; }
    inline DescribeArchiveResult& WithSizeBytes(long long value) { SetSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of events in the archive.</p>
     */
    inline long long GetEventCount() const { return m_eventCount; }
    inline void SetEventCount(long long value) { m_eventCountHasBeenSet = true; m_eventCount = value; }
    inline DescribeArchiveResult& WithEventCount(long long value) { SetEventCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the archive was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeArchiveResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeArchiveResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_archiveArn;
    bool m_archiveArnHasBeenSet = false;

    Aws::String m_archiveName;
    bool m_archiveNameHasBeenSet = false;

    Aws::String m_eventSourceArn;
    bool m_eventSourceArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_eventPattern;
    bool m_eventPatternHasBeenSet = false;

    ArchiveState m_state{ArchiveState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    int m_retentionDays{0};
    bool m_retentionDaysHasBeenSet = false;

    long long m_sizeBytes{0};
    bool m_sizeBytesHasBeenSet = false;

    long long m_eventCount{0};
    bool m_eventCountHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
