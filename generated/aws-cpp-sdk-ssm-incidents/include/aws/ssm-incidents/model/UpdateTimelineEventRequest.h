/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/SSMIncidentsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

  /**
   */
  class AWS_SSMINCIDENTS_API UpdateTimelineEventRequest : public SSMIncidentsRequest
  {
  public:
    UpdateTimelineEventRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTimelineEvent"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline UpdateTimelineEventRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline UpdateTimelineEventRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline UpdateTimelineEventRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>A short description of the event.</p>
     */
    inline const Aws::String& GetEventData() const{ return m_eventData; }

    /**
     * <p>A short description of the event.</p>
     */
    inline bool EventDataHasBeenSet() const { return m_eventDataHasBeenSet; }

    /**
     * <p>A short description of the event.</p>
     */
    inline void SetEventData(const Aws::String& value) { m_eventDataHasBeenSet = true; m_eventData = value; }

    /**
     * <p>A short description of the event.</p>
     */
    inline void SetEventData(Aws::String&& value) { m_eventDataHasBeenSet = true; m_eventData = std::move(value); }

    /**
     * <p>A short description of the event.</p>
     */
    inline void SetEventData(const char* value) { m_eventDataHasBeenSet = true; m_eventData.assign(value); }

    /**
     * <p>A short description of the event.</p>
     */
    inline UpdateTimelineEventRequest& WithEventData(const Aws::String& value) { SetEventData(value); return *this;}

    /**
     * <p>A short description of the event.</p>
     */
    inline UpdateTimelineEventRequest& WithEventData(Aws::String&& value) { SetEventData(std::move(value)); return *this;}

    /**
     * <p>A short description of the event.</p>
     */
    inline UpdateTimelineEventRequest& WithEventData(const char* value) { SetEventData(value); return *this;}


    /**
     * <p>The ID of the event you are updating. You can find this by using
     * <code>ListTimelineEvents</code>.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>The ID of the event you are updating. You can find this by using
     * <code>ListTimelineEvents</code>.</p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p>The ID of the event you are updating. You can find this by using
     * <code>ListTimelineEvents</code>.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The ID of the event you are updating. You can find this by using
     * <code>ListTimelineEvents</code>.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>The ID of the event you are updating. You can find this by using
     * <code>ListTimelineEvents</code>.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>The ID of the event you are updating. You can find this by using
     * <code>ListTimelineEvents</code>.</p>
     */
    inline UpdateTimelineEventRequest& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>The ID of the event you are updating. You can find this by using
     * <code>ListTimelineEvents</code>.</p>
     */
    inline UpdateTimelineEventRequest& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>The ID of the event you are updating. You can find this by using
     * <code>ListTimelineEvents</code>.</p>
     */
    inline UpdateTimelineEventRequest& WithEventId(const char* value) { SetEventId(value); return *this;}


    /**
     * <p>The time that the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const{ return m_eventTime; }

    /**
     * <p>The time that the event occurred.</p>
     */
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }

    /**
     * <p>The time that the event occurred.</p>
     */
    inline void SetEventTime(const Aws::Utils::DateTime& value) { m_eventTimeHasBeenSet = true; m_eventTime = value; }

    /**
     * <p>The time that the event occurred.</p>
     */
    inline void SetEventTime(Aws::Utils::DateTime&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::move(value); }

    /**
     * <p>The time that the event occurred.</p>
     */
    inline UpdateTimelineEventRequest& WithEventTime(const Aws::Utils::DateTime& value) { SetEventTime(value); return *this;}

    /**
     * <p>The time that the event occurred.</p>
     */
    inline UpdateTimelineEventRequest& WithEventTime(Aws::Utils::DateTime&& value) { SetEventTime(std::move(value)); return *this;}


    /**
     * <p>The type of the event. You can update events of type <code>Custom
     * Event</code>.</p>
     */
    inline const Aws::String& GetEventType() const{ return m_eventType; }

    /**
     * <p>The type of the event. You can update events of type <code>Custom
     * Event</code>.</p>
     */
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    /**
     * <p>The type of the event. You can update events of type <code>Custom
     * Event</code>.</p>
     */
    inline void SetEventType(const Aws::String& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>The type of the event. You can update events of type <code>Custom
     * Event</code>.</p>
     */
    inline void SetEventType(Aws::String&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * <p>The type of the event. You can update events of type <code>Custom
     * Event</code>.</p>
     */
    inline void SetEventType(const char* value) { m_eventTypeHasBeenSet = true; m_eventType.assign(value); }

    /**
     * <p>The type of the event. You can update events of type <code>Custom
     * Event</code>.</p>
     */
    inline UpdateTimelineEventRequest& WithEventType(const Aws::String& value) { SetEventType(value); return *this;}

    /**
     * <p>The type of the event. You can update events of type <code>Custom
     * Event</code>.</p>
     */
    inline UpdateTimelineEventRequest& WithEventType(Aws::String&& value) { SetEventType(std::move(value)); return *this;}

    /**
     * <p>The type of the event. You can update events of type <code>Custom
     * Event</code>.</p>
     */
    inline UpdateTimelineEventRequest& WithEventType(const char* value) { SetEventType(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline const Aws::String& GetIncidentRecordArn() const{ return m_incidentRecordArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline bool IncidentRecordArnHasBeenSet() const { return m_incidentRecordArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline void SetIncidentRecordArn(const Aws::String& value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline void SetIncidentRecordArn(Aws::String&& value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline void SetIncidentRecordArn(const char* value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline UpdateTimelineEventRequest& WithIncidentRecordArn(const Aws::String& value) { SetIncidentRecordArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline UpdateTimelineEventRequest& WithIncidentRecordArn(Aws::String&& value) { SetIncidentRecordArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline UpdateTimelineEventRequest& WithIncidentRecordArn(const char* value) { SetIncidentRecordArn(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_eventData;
    bool m_eventDataHasBeenSet;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet;

    Aws::Utils::DateTime m_eventTime;
    bool m_eventTimeHasBeenSet;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet;

    Aws::String m_incidentRecordArn;
    bool m_incidentRecordArnHasBeenSet;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
