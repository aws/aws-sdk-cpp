/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/EventBridgeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/eventbridge/model/ReplayDestination.h>
#include <utility>

namespace Aws
{
namespace EventBridge
{
namespace Model
{

  /**
   */
  class StartReplayRequest : public EventBridgeRequest
  {
  public:
    AWS_EVENTBRIDGE_API StartReplayRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartReplay"; }

    AWS_EVENTBRIDGE_API Aws::String SerializePayload() const override;

    AWS_EVENTBRIDGE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the replay to start.</p>
     */
    inline const Aws::String& GetReplayName() const{ return m_replayName; }

    /**
     * <p>The name of the replay to start.</p>
     */
    inline bool ReplayNameHasBeenSet() const { return m_replayNameHasBeenSet; }

    /**
     * <p>The name of the replay to start.</p>
     */
    inline void SetReplayName(const Aws::String& value) { m_replayNameHasBeenSet = true; m_replayName = value; }

    /**
     * <p>The name of the replay to start.</p>
     */
    inline void SetReplayName(Aws::String&& value) { m_replayNameHasBeenSet = true; m_replayName = std::move(value); }

    /**
     * <p>The name of the replay to start.</p>
     */
    inline void SetReplayName(const char* value) { m_replayNameHasBeenSet = true; m_replayName.assign(value); }

    /**
     * <p>The name of the replay to start.</p>
     */
    inline StartReplayRequest& WithReplayName(const Aws::String& value) { SetReplayName(value); return *this;}

    /**
     * <p>The name of the replay to start.</p>
     */
    inline StartReplayRequest& WithReplayName(Aws::String&& value) { SetReplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the replay to start.</p>
     */
    inline StartReplayRequest& WithReplayName(const char* value) { SetReplayName(value); return *this;}


    /**
     * <p>A description for the replay to start.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the replay to start.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the replay to start.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the replay to start.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the replay to start.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the replay to start.</p>
     */
    inline StartReplayRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the replay to start.</p>
     */
    inline StartReplayRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the replay to start.</p>
     */
    inline StartReplayRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ARN of the archive to replay events from.</p>
     */
    inline const Aws::String& GetEventSourceArn() const{ return m_eventSourceArn; }

    /**
     * <p>The ARN of the archive to replay events from.</p>
     */
    inline bool EventSourceArnHasBeenSet() const { return m_eventSourceArnHasBeenSet; }

    /**
     * <p>The ARN of the archive to replay events from.</p>
     */
    inline void SetEventSourceArn(const Aws::String& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = value; }

    /**
     * <p>The ARN of the archive to replay events from.</p>
     */
    inline void SetEventSourceArn(Aws::String&& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = std::move(value); }

    /**
     * <p>The ARN of the archive to replay events from.</p>
     */
    inline void SetEventSourceArn(const char* value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn.assign(value); }

    /**
     * <p>The ARN of the archive to replay events from.</p>
     */
    inline StartReplayRequest& WithEventSourceArn(const Aws::String& value) { SetEventSourceArn(value); return *this;}

    /**
     * <p>The ARN of the archive to replay events from.</p>
     */
    inline StartReplayRequest& WithEventSourceArn(Aws::String&& value) { SetEventSourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the archive to replay events from.</p>
     */
    inline StartReplayRequest& WithEventSourceArn(const char* value) { SetEventSourceArn(value); return *this;}


    /**
     * <p>A time stamp for the time to start replaying events. Only events that
     * occurred between the <code>EventStartTime</code> and <code>EventEndTime</code>
     * are replayed.</p>
     */
    inline const Aws::Utils::DateTime& GetEventStartTime() const{ return m_eventStartTime; }

    /**
     * <p>A time stamp for the time to start replaying events. Only events that
     * occurred between the <code>EventStartTime</code> and <code>EventEndTime</code>
     * are replayed.</p>
     */
    inline bool EventStartTimeHasBeenSet() const { return m_eventStartTimeHasBeenSet; }

    /**
     * <p>A time stamp for the time to start replaying events. Only events that
     * occurred between the <code>EventStartTime</code> and <code>EventEndTime</code>
     * are replayed.</p>
     */
    inline void SetEventStartTime(const Aws::Utils::DateTime& value) { m_eventStartTimeHasBeenSet = true; m_eventStartTime = value; }

    /**
     * <p>A time stamp for the time to start replaying events. Only events that
     * occurred between the <code>EventStartTime</code> and <code>EventEndTime</code>
     * are replayed.</p>
     */
    inline void SetEventStartTime(Aws::Utils::DateTime&& value) { m_eventStartTimeHasBeenSet = true; m_eventStartTime = std::move(value); }

    /**
     * <p>A time stamp for the time to start replaying events. Only events that
     * occurred between the <code>EventStartTime</code> and <code>EventEndTime</code>
     * are replayed.</p>
     */
    inline StartReplayRequest& WithEventStartTime(const Aws::Utils::DateTime& value) { SetEventStartTime(value); return *this;}

    /**
     * <p>A time stamp for the time to start replaying events. Only events that
     * occurred between the <code>EventStartTime</code> and <code>EventEndTime</code>
     * are replayed.</p>
     */
    inline StartReplayRequest& WithEventStartTime(Aws::Utils::DateTime&& value) { SetEventStartTime(std::move(value)); return *this;}


    /**
     * <p>A time stamp for the time to stop replaying events. Only events that occurred
     * between the <code>EventStartTime</code> and <code>EventEndTime</code> are
     * replayed.</p>
     */
    inline const Aws::Utils::DateTime& GetEventEndTime() const{ return m_eventEndTime; }

    /**
     * <p>A time stamp for the time to stop replaying events. Only events that occurred
     * between the <code>EventStartTime</code> and <code>EventEndTime</code> are
     * replayed.</p>
     */
    inline bool EventEndTimeHasBeenSet() const { return m_eventEndTimeHasBeenSet; }

    /**
     * <p>A time stamp for the time to stop replaying events. Only events that occurred
     * between the <code>EventStartTime</code> and <code>EventEndTime</code> are
     * replayed.</p>
     */
    inline void SetEventEndTime(const Aws::Utils::DateTime& value) { m_eventEndTimeHasBeenSet = true; m_eventEndTime = value; }

    /**
     * <p>A time stamp for the time to stop replaying events. Only events that occurred
     * between the <code>EventStartTime</code> and <code>EventEndTime</code> are
     * replayed.</p>
     */
    inline void SetEventEndTime(Aws::Utils::DateTime&& value) { m_eventEndTimeHasBeenSet = true; m_eventEndTime = std::move(value); }

    /**
     * <p>A time stamp for the time to stop replaying events. Only events that occurred
     * between the <code>EventStartTime</code> and <code>EventEndTime</code> are
     * replayed.</p>
     */
    inline StartReplayRequest& WithEventEndTime(const Aws::Utils::DateTime& value) { SetEventEndTime(value); return *this;}

    /**
     * <p>A time stamp for the time to stop replaying events. Only events that occurred
     * between the <code>EventStartTime</code> and <code>EventEndTime</code> are
     * replayed.</p>
     */
    inline StartReplayRequest& WithEventEndTime(Aws::Utils::DateTime&& value) { SetEventEndTime(std::move(value)); return *this;}


    /**
     * <p>A <code>ReplayDestination</code> object that includes details about the
     * destination for the replay.</p>
     */
    inline const ReplayDestination& GetDestination() const{ return m_destination; }

    /**
     * <p>A <code>ReplayDestination</code> object that includes details about the
     * destination for the replay.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>A <code>ReplayDestination</code> object that includes details about the
     * destination for the replay.</p>
     */
    inline void SetDestination(const ReplayDestination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>A <code>ReplayDestination</code> object that includes details about the
     * destination for the replay.</p>
     */
    inline void SetDestination(ReplayDestination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>A <code>ReplayDestination</code> object that includes details about the
     * destination for the replay.</p>
     */
    inline StartReplayRequest& WithDestination(const ReplayDestination& value) { SetDestination(value); return *this;}

    /**
     * <p>A <code>ReplayDestination</code> object that includes details about the
     * destination for the replay.</p>
     */
    inline StartReplayRequest& WithDestination(ReplayDestination&& value) { SetDestination(std::move(value)); return *this;}

  private:

    Aws::String m_replayName;
    bool m_replayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_eventSourceArn;
    bool m_eventSourceArnHasBeenSet = false;

    Aws::Utils::DateTime m_eventStartTime;
    bool m_eventStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_eventEndTime;
    bool m_eventEndTimeHasBeenSet = false;

    ReplayDestination m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
