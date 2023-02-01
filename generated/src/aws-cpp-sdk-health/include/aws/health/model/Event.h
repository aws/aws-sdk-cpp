/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/health/model/EventTypeCategory.h>
#include <aws/core/utils/DateTime.h>
#include <aws/health/model/EventStatusCode.h>
#include <aws/health/model/EventScopeCode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Health
{
namespace Model
{

  /**
   * <p>Summary information about an Health event.</p> <p>Health events can be public
   * or account-specific:</p> <ul> <li> <p> <i>Public events</i> might be service
   * events that are not specific to an Amazon Web Services account. For example, if
   * there is an issue with an Amazon Web Services Region, Health provides
   * information about the event, even if you don't use services or resources in that
   * Region.</p> </li> <li> <p> <i>Account-specific</i> events are specific to either
   * your Amazon Web Services account or an account in your organization. For
   * example, if there's an issue with Amazon Elastic Compute Cloud in a Region that
   * you use, Health provides information about the event and the affected resources
   * in the account.</p> </li> </ul> <p>You can determine if an event is public or
   * account-specific by using the <code>eventScopeCode</code> parameter. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/health/latest/APIReference/API_Event.html#AWSHealth-Type-Event-eventScopeCode">eventScopeCode</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/Event">AWS API
   * Reference</a></p>
   */
  class Event
  {
  public:
    AWS_HEALTH_API Event();
    AWS_HEALTH_API Event(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API Event& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline Event& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline Event& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline Event& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Web Services service that is affected by the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }

    /**
     * <p>The Amazon Web Services service that is affected by the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p>The Amazon Web Services service that is affected by the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The Amazon Web Services service that is affected by the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p>The Amazon Web Services service that is affected by the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }

    /**
     * <p>The Amazon Web Services service that is affected by the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline Event& WithService(const Aws::String& value) { SetService(value); return *this;}

    /**
     * <p>The Amazon Web Services service that is affected by the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline Event& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services service that is affected by the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline Event& WithService(const char* value) { SetService(value); return *this;}


    /**
     * <p>The unique identifier for the event type. The format is
     * <code>AWS_<i>SERVICE</i>_<i>DESCRIPTION</i> </code>; for example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>.</p>
     */
    inline const Aws::String& GetEventTypeCode() const{ return m_eventTypeCode; }

    /**
     * <p>The unique identifier for the event type. The format is
     * <code>AWS_<i>SERVICE</i>_<i>DESCRIPTION</i> </code>; for example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>.</p>
     */
    inline bool EventTypeCodeHasBeenSet() const { return m_eventTypeCodeHasBeenSet; }

    /**
     * <p>The unique identifier for the event type. The format is
     * <code>AWS_<i>SERVICE</i>_<i>DESCRIPTION</i> </code>; for example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>.</p>
     */
    inline void SetEventTypeCode(const Aws::String& value) { m_eventTypeCodeHasBeenSet = true; m_eventTypeCode = value; }

    /**
     * <p>The unique identifier for the event type. The format is
     * <code>AWS_<i>SERVICE</i>_<i>DESCRIPTION</i> </code>; for example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>.</p>
     */
    inline void SetEventTypeCode(Aws::String&& value) { m_eventTypeCodeHasBeenSet = true; m_eventTypeCode = std::move(value); }

    /**
     * <p>The unique identifier for the event type. The format is
     * <code>AWS_<i>SERVICE</i>_<i>DESCRIPTION</i> </code>; for example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>.</p>
     */
    inline void SetEventTypeCode(const char* value) { m_eventTypeCodeHasBeenSet = true; m_eventTypeCode.assign(value); }

    /**
     * <p>The unique identifier for the event type. The format is
     * <code>AWS_<i>SERVICE</i>_<i>DESCRIPTION</i> </code>; for example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>.</p>
     */
    inline Event& WithEventTypeCode(const Aws::String& value) { SetEventTypeCode(value); return *this;}

    /**
     * <p>The unique identifier for the event type. The format is
     * <code>AWS_<i>SERVICE</i>_<i>DESCRIPTION</i> </code>; for example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>.</p>
     */
    inline Event& WithEventTypeCode(Aws::String&& value) { SetEventTypeCode(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the event type. The format is
     * <code>AWS_<i>SERVICE</i>_<i>DESCRIPTION</i> </code>; for example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>.</p>
     */
    inline Event& WithEventTypeCode(const char* value) { SetEventTypeCode(value); return *this;}


    /**
     * <p>A list of event type category codes. Possible values are <code>issue</code>,
     * <code>accountNotification</code>, or <code>scheduledChange</code>. Currently,
     * the <code>investigation</code> value isn't supported at this time.</p>
     */
    inline const EventTypeCategory& GetEventTypeCategory() const{ return m_eventTypeCategory; }

    /**
     * <p>A list of event type category codes. Possible values are <code>issue</code>,
     * <code>accountNotification</code>, or <code>scheduledChange</code>. Currently,
     * the <code>investigation</code> value isn't supported at this time.</p>
     */
    inline bool EventTypeCategoryHasBeenSet() const { return m_eventTypeCategoryHasBeenSet; }

    /**
     * <p>A list of event type category codes. Possible values are <code>issue</code>,
     * <code>accountNotification</code>, or <code>scheduledChange</code>. Currently,
     * the <code>investigation</code> value isn't supported at this time.</p>
     */
    inline void SetEventTypeCategory(const EventTypeCategory& value) { m_eventTypeCategoryHasBeenSet = true; m_eventTypeCategory = value; }

    /**
     * <p>A list of event type category codes. Possible values are <code>issue</code>,
     * <code>accountNotification</code>, or <code>scheduledChange</code>. Currently,
     * the <code>investigation</code> value isn't supported at this time.</p>
     */
    inline void SetEventTypeCategory(EventTypeCategory&& value) { m_eventTypeCategoryHasBeenSet = true; m_eventTypeCategory = std::move(value); }

    /**
     * <p>A list of event type category codes. Possible values are <code>issue</code>,
     * <code>accountNotification</code>, or <code>scheduledChange</code>. Currently,
     * the <code>investigation</code> value isn't supported at this time.</p>
     */
    inline Event& WithEventTypeCategory(const EventTypeCategory& value) { SetEventTypeCategory(value); return *this;}

    /**
     * <p>A list of event type category codes. Possible values are <code>issue</code>,
     * <code>accountNotification</code>, or <code>scheduledChange</code>. Currently,
     * the <code>investigation</code> value isn't supported at this time.</p>
     */
    inline Event& WithEventTypeCategory(EventTypeCategory&& value) { SetEventTypeCategory(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services Region name of the event.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Amazon Web Services Region name of the event.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region name of the event.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Amazon Web Services Region name of the event.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Amazon Web Services Region name of the event.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Amazon Web Services Region name of the event.</p>
     */
    inline Event& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region name of the event.</p>
     */
    inline Event& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region name of the event.</p>
     */
    inline Event& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The Amazon Web Services Availability Zone of the event. For example,
     * us-east-1a.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Amazon Web Services Availability Zone of the event. For example,
     * us-east-1a.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Amazon Web Services Availability Zone of the event. For example,
     * us-east-1a.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Amazon Web Services Availability Zone of the event. For example,
     * us-east-1a.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Amazon Web Services Availability Zone of the event. For example,
     * us-east-1a.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Amazon Web Services Availability Zone of the event. For example,
     * us-east-1a.</p>
     */
    inline Event& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Amazon Web Services Availability Zone of the event. For example,
     * us-east-1a.</p>
     */
    inline Event& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Availability Zone of the event. For example,
     * us-east-1a.</p>
     */
    inline Event& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The date and time that the event began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The date and time that the event began.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The date and time that the event began.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The date and time that the event began.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The date and time that the event began.</p>
     */
    inline Event& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time that the event began.</p>
     */
    inline Event& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the event ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The date and time that the event ended.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The date and time that the event ended.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The date and time that the event ended.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The date and time that the event ended.</p>
     */
    inline Event& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The date and time that the event ended.</p>
     */
    inline Event& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The most recent date and time that the event was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The most recent date and time that the event was updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The most recent date and time that the event was updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The most recent date and time that the event was updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The most recent date and time that the event was updated.</p>
     */
    inline Event& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The most recent date and time that the event was updated.</p>
     */
    inline Event& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The most recent status of the event. Possible values are <code>open</code>,
     * <code>closed</code>, and <code>upcoming</code>.</p>
     */
    inline const EventStatusCode& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The most recent status of the event. Possible values are <code>open</code>,
     * <code>closed</code>, and <code>upcoming</code>.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The most recent status of the event. Possible values are <code>open</code>,
     * <code>closed</code>, and <code>upcoming</code>.</p>
     */
    inline void SetStatusCode(const EventStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The most recent status of the event. Possible values are <code>open</code>,
     * <code>closed</code>, and <code>upcoming</code>.</p>
     */
    inline void SetStatusCode(EventStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>The most recent status of the event. Possible values are <code>open</code>,
     * <code>closed</code>, and <code>upcoming</code>.</p>
     */
    inline Event& WithStatusCode(const EventStatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The most recent status of the event. Possible values are <code>open</code>,
     * <code>closed</code>, and <code>upcoming</code>.</p>
     */
    inline Event& WithStatusCode(EventStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}


    /**
     * <p>This parameter specifies if the Health event is a public Amazon Web Services
     * service event or an account-specific event.</p> <ul> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>PUBLIC</code>, then the
     * <code>affectedAccounts</code> value is always empty.</p> </li> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>ACCOUNT_SPECIFIC</code>, then the
     * <code>affectedAccounts</code> value lists the affected Amazon Web Services
     * accounts in your organization. For example, if an event affects a service such
     * as Amazon Elastic Compute Cloud and you have Amazon Web Services accounts that
     * use that service, those account IDs appear in the response.</p> </li> <li> <p>If
     * the <code>eventScopeCode</code> value is <code>NONE</code>, then the
     * <code>eventArn</code> that you specified in the request is invalid or doesn't
     * exist.</p> </li> </ul>
     */
    inline const EventScopeCode& GetEventScopeCode() const{ return m_eventScopeCode; }

    /**
     * <p>This parameter specifies if the Health event is a public Amazon Web Services
     * service event or an account-specific event.</p> <ul> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>PUBLIC</code>, then the
     * <code>affectedAccounts</code> value is always empty.</p> </li> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>ACCOUNT_SPECIFIC</code>, then the
     * <code>affectedAccounts</code> value lists the affected Amazon Web Services
     * accounts in your organization. For example, if an event affects a service such
     * as Amazon Elastic Compute Cloud and you have Amazon Web Services accounts that
     * use that service, those account IDs appear in the response.</p> </li> <li> <p>If
     * the <code>eventScopeCode</code> value is <code>NONE</code>, then the
     * <code>eventArn</code> that you specified in the request is invalid or doesn't
     * exist.</p> </li> </ul>
     */
    inline bool EventScopeCodeHasBeenSet() const { return m_eventScopeCodeHasBeenSet; }

    /**
     * <p>This parameter specifies if the Health event is a public Amazon Web Services
     * service event or an account-specific event.</p> <ul> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>PUBLIC</code>, then the
     * <code>affectedAccounts</code> value is always empty.</p> </li> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>ACCOUNT_SPECIFIC</code>, then the
     * <code>affectedAccounts</code> value lists the affected Amazon Web Services
     * accounts in your organization. For example, if an event affects a service such
     * as Amazon Elastic Compute Cloud and you have Amazon Web Services accounts that
     * use that service, those account IDs appear in the response.</p> </li> <li> <p>If
     * the <code>eventScopeCode</code> value is <code>NONE</code>, then the
     * <code>eventArn</code> that you specified in the request is invalid or doesn't
     * exist.</p> </li> </ul>
     */
    inline void SetEventScopeCode(const EventScopeCode& value) { m_eventScopeCodeHasBeenSet = true; m_eventScopeCode = value; }

    /**
     * <p>This parameter specifies if the Health event is a public Amazon Web Services
     * service event or an account-specific event.</p> <ul> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>PUBLIC</code>, then the
     * <code>affectedAccounts</code> value is always empty.</p> </li> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>ACCOUNT_SPECIFIC</code>, then the
     * <code>affectedAccounts</code> value lists the affected Amazon Web Services
     * accounts in your organization. For example, if an event affects a service such
     * as Amazon Elastic Compute Cloud and you have Amazon Web Services accounts that
     * use that service, those account IDs appear in the response.</p> </li> <li> <p>If
     * the <code>eventScopeCode</code> value is <code>NONE</code>, then the
     * <code>eventArn</code> that you specified in the request is invalid or doesn't
     * exist.</p> </li> </ul>
     */
    inline void SetEventScopeCode(EventScopeCode&& value) { m_eventScopeCodeHasBeenSet = true; m_eventScopeCode = std::move(value); }

    /**
     * <p>This parameter specifies if the Health event is a public Amazon Web Services
     * service event or an account-specific event.</p> <ul> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>PUBLIC</code>, then the
     * <code>affectedAccounts</code> value is always empty.</p> </li> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>ACCOUNT_SPECIFIC</code>, then the
     * <code>affectedAccounts</code> value lists the affected Amazon Web Services
     * accounts in your organization. For example, if an event affects a service such
     * as Amazon Elastic Compute Cloud and you have Amazon Web Services accounts that
     * use that service, those account IDs appear in the response.</p> </li> <li> <p>If
     * the <code>eventScopeCode</code> value is <code>NONE</code>, then the
     * <code>eventArn</code> that you specified in the request is invalid or doesn't
     * exist.</p> </li> </ul>
     */
    inline Event& WithEventScopeCode(const EventScopeCode& value) { SetEventScopeCode(value); return *this;}

    /**
     * <p>This parameter specifies if the Health event is a public Amazon Web Services
     * service event or an account-specific event.</p> <ul> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>PUBLIC</code>, then the
     * <code>affectedAccounts</code> value is always empty.</p> </li> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>ACCOUNT_SPECIFIC</code>, then the
     * <code>affectedAccounts</code> value lists the affected Amazon Web Services
     * accounts in your organization. For example, if an event affects a service such
     * as Amazon Elastic Compute Cloud and you have Amazon Web Services accounts that
     * use that service, those account IDs appear in the response.</p> </li> <li> <p>If
     * the <code>eventScopeCode</code> value is <code>NONE</code>, then the
     * <code>eventArn</code> that you specified in the request is invalid or doesn't
     * exist.</p> </li> </ul>
     */
    inline Event& WithEventScopeCode(EventScopeCode&& value) { SetEventScopeCode(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    Aws::String m_eventTypeCode;
    bool m_eventTypeCodeHasBeenSet = false;

    EventTypeCategory m_eventTypeCategory;
    bool m_eventTypeCategoryHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    EventStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    EventScopeCode m_eventScopeCode;
    bool m_eventScopeCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
