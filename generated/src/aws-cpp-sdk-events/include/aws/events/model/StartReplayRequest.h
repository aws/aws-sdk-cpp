/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/CloudWatchEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/events/model/ReplayDestination.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

  /**
   */
  class StartReplayRequest : public CloudWatchEventsRequest
  {
  public:
    AWS_CLOUDWATCHEVENTS_API StartReplayRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartReplay"; }

    AWS_CLOUDWATCHEVENTS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHEVENTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the replay to start.</p>
     */
    inline const Aws::String& GetReplayName() const { return m_replayName; }
    inline bool ReplayNameHasBeenSet() const { return m_replayNameHasBeenSet; }
    template<typename ReplayNameT = Aws::String>
    void SetReplayName(ReplayNameT&& value) { m_replayNameHasBeenSet = true; m_replayName = std::forward<ReplayNameT>(value); }
    template<typename ReplayNameT = Aws::String>
    StartReplayRequest& WithReplayName(ReplayNameT&& value) { SetReplayName(std::forward<ReplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the replay to start.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    StartReplayRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the archive to replay events from.</p>
     */
    inline const Aws::String& GetEventSourceArn() const { return m_eventSourceArn; }
    inline bool EventSourceArnHasBeenSet() const { return m_eventSourceArnHasBeenSet; }
    template<typename EventSourceArnT = Aws::String>
    void SetEventSourceArn(EventSourceArnT&& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = std::forward<EventSourceArnT>(value); }
    template<typename EventSourceArnT = Aws::String>
    StartReplayRequest& WithEventSourceArn(EventSourceArnT&& value) { SetEventSourceArn(std::forward<EventSourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time to start replaying events. Only events that
     * occurred between the <code>EventStartTime</code> and <code>EventEndTime</code>
     * are replayed.</p>
     */
    inline const Aws::Utils::DateTime& GetEventStartTime() const { return m_eventStartTime; }
    inline bool EventStartTimeHasBeenSet() const { return m_eventStartTimeHasBeenSet; }
    template<typename EventStartTimeT = Aws::Utils::DateTime>
    void SetEventStartTime(EventStartTimeT&& value) { m_eventStartTimeHasBeenSet = true; m_eventStartTime = std::forward<EventStartTimeT>(value); }
    template<typename EventStartTimeT = Aws::Utils::DateTime>
    StartReplayRequest& WithEventStartTime(EventStartTimeT&& value) { SetEventStartTime(std::forward<EventStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time to stop replaying events. Only events that occurred
     * between the <code>EventStartTime</code> and <code>EventEndTime</code> are
     * replayed.</p>
     */
    inline const Aws::Utils::DateTime& GetEventEndTime() const { return m_eventEndTime; }
    inline bool EventEndTimeHasBeenSet() const { return m_eventEndTimeHasBeenSet; }
    template<typename EventEndTimeT = Aws::Utils::DateTime>
    void SetEventEndTime(EventEndTimeT&& value) { m_eventEndTimeHasBeenSet = true; m_eventEndTime = std::forward<EventEndTimeT>(value); }
    template<typename EventEndTimeT = Aws::Utils::DateTime>
    StartReplayRequest& WithEventEndTime(EventEndTimeT&& value) { SetEventEndTime(std::forward<EventEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>ReplayDestination</code> object that includes details about the
     * destination for the replay.</p>
     */
    inline const ReplayDestination& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = ReplayDestination>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = ReplayDestination>
    StartReplayRequest& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replayName;
    bool m_replayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_eventSourceArn;
    bool m_eventSourceArnHasBeenSet = false;

    Aws::Utils::DateTime m_eventStartTime{};
    bool m_eventStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_eventEndTime{};
    bool m_eventEndTimeHasBeenSet = false;

    ReplayDestination m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
