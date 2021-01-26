/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/health/model/EventTypeCategory.h>
#include <aws/health/model/EventScopeCode.h>
#include <aws/core/utils/DateTime.h>
#include <aws/health/model/EventStatusCode.h>
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
   * <p>Summary information about an event, returned by the <a
   * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEventsForOrganization.html">DescribeEventsForOrganization</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/OrganizationEvent">AWS
   * API Reference</a></p>
   */
  class AWS_HEALTH_API OrganizationEvent
  {
  public:
    OrganizationEvent();
    OrganizationEvent(Aws::Utils::Json::JsonView jsonValue);
    OrganizationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the event. Format:
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code>. Example: <code>Example:
     * arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The unique identifier for the event. Format:
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code>. Example: <code>Example:
     * arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The unique identifier for the event. Format:
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code>. Example: <code>Example:
     * arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The unique identifier for the event. Format:
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code>. Example: <code>Example:
     * arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The unique identifier for the event. Format:
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code>. Example: <code>Example:
     * arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The unique identifier for the event. Format:
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code>. Example: <code>Example:
     * arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline OrganizationEvent& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The unique identifier for the event. Format:
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code>. Example: <code>Example:
     * arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline OrganizationEvent& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the event. Format:
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code>. Example: <code>Example:
     * arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline OrganizationEvent& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The AWS service that is affected by the event. For example, EC2, RDS.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }

    /**
     * <p>The AWS service that is affected by the event. For example, EC2, RDS.</p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p>The AWS service that is affected by the event. For example, EC2, RDS.</p>
     */
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The AWS service that is affected by the event. For example, EC2, RDS.</p>
     */
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p>The AWS service that is affected by the event. For example, EC2, RDS.</p>
     */
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }

    /**
     * <p>The AWS service that is affected by the event. For example, EC2, RDS.</p>
     */
    inline OrganizationEvent& WithService(const Aws::String& value) { SetService(value); return *this;}

    /**
     * <p>The AWS service that is affected by the event. For example, EC2, RDS.</p>
     */
    inline OrganizationEvent& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}

    /**
     * <p>The AWS service that is affected by the event. For example, EC2, RDS.</p>
     */
    inline OrganizationEvent& WithService(const char* value) { SetService(value); return *this;}


    /**
     * <p>The unique identifier for the event type. The format is
     * <code>AWS_SERVICE_DESCRIPTION</code>. For example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>.</p>
     */
    inline const Aws::String& GetEventTypeCode() const{ return m_eventTypeCode; }

    /**
     * <p>The unique identifier for the event type. The format is
     * <code>AWS_SERVICE_DESCRIPTION</code>. For example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>.</p>
     */
    inline bool EventTypeCodeHasBeenSet() const { return m_eventTypeCodeHasBeenSet; }

    /**
     * <p>The unique identifier for the event type. The format is
     * <code>AWS_SERVICE_DESCRIPTION</code>. For example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>.</p>
     */
    inline void SetEventTypeCode(const Aws::String& value) { m_eventTypeCodeHasBeenSet = true; m_eventTypeCode = value; }

    /**
     * <p>The unique identifier for the event type. The format is
     * <code>AWS_SERVICE_DESCRIPTION</code>. For example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>.</p>
     */
    inline void SetEventTypeCode(Aws::String&& value) { m_eventTypeCodeHasBeenSet = true; m_eventTypeCode = std::move(value); }

    /**
     * <p>The unique identifier for the event type. The format is
     * <code>AWS_SERVICE_DESCRIPTION</code>. For example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>.</p>
     */
    inline void SetEventTypeCode(const char* value) { m_eventTypeCodeHasBeenSet = true; m_eventTypeCode.assign(value); }

    /**
     * <p>The unique identifier for the event type. The format is
     * <code>AWS_SERVICE_DESCRIPTION</code>. For example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>.</p>
     */
    inline OrganizationEvent& WithEventTypeCode(const Aws::String& value) { SetEventTypeCode(value); return *this;}

    /**
     * <p>The unique identifier for the event type. The format is
     * <code>AWS_SERVICE_DESCRIPTION</code>. For example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>.</p>
     */
    inline OrganizationEvent& WithEventTypeCode(Aws::String&& value) { SetEventTypeCode(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the event type. The format is
     * <code>AWS_SERVICE_DESCRIPTION</code>. For example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>.</p>
     */
    inline OrganizationEvent& WithEventTypeCode(const char* value) { SetEventTypeCode(value); return *this;}


    /**
     * <p>The category of the event type.</p>
     */
    inline const EventTypeCategory& GetEventTypeCategory() const{ return m_eventTypeCategory; }

    /**
     * <p>The category of the event type.</p>
     */
    inline bool EventTypeCategoryHasBeenSet() const { return m_eventTypeCategoryHasBeenSet; }

    /**
     * <p>The category of the event type.</p>
     */
    inline void SetEventTypeCategory(const EventTypeCategory& value) { m_eventTypeCategoryHasBeenSet = true; m_eventTypeCategory = value; }

    /**
     * <p>The category of the event type.</p>
     */
    inline void SetEventTypeCategory(EventTypeCategory&& value) { m_eventTypeCategoryHasBeenSet = true; m_eventTypeCategory = std::move(value); }

    /**
     * <p>The category of the event type.</p>
     */
    inline OrganizationEvent& WithEventTypeCategory(const EventTypeCategory& value) { SetEventTypeCategory(value); return *this;}

    /**
     * <p>The category of the event type.</p>
     */
    inline OrganizationEvent& WithEventTypeCategory(EventTypeCategory&& value) { SetEventTypeCategory(std::move(value)); return *this;}


    /**
     * <p>This parameter specifies if the AWS Health event is a public AWS service
     * event or an account-specific event.</p> <ul> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>PUBLIC</code>, then the
     * <code>affectedAccounts</code> value is always empty.</p> </li> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>ACCOUNT_SPECIFIC</code>, then the
     * <code>affectedAccounts</code> value lists the affected AWS accounts in your
     * organization. For example, if an event affects a service such as Amazon Elastic
     * Compute Cloud and you have AWS accounts that use that service, those account IDs
     * appear in the response.</p> </li> <li> <p>If the <code>eventScopeCode</code>
     * value is <code>NONE</code>, then the <code>eventArn</code> that you specified in
     * the request is invalid or doesn't exist.</p> </li> </ul>
     */
    inline const EventScopeCode& GetEventScopeCode() const{ return m_eventScopeCode; }

    /**
     * <p>This parameter specifies if the AWS Health event is a public AWS service
     * event or an account-specific event.</p> <ul> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>PUBLIC</code>, then the
     * <code>affectedAccounts</code> value is always empty.</p> </li> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>ACCOUNT_SPECIFIC</code>, then the
     * <code>affectedAccounts</code> value lists the affected AWS accounts in your
     * organization. For example, if an event affects a service such as Amazon Elastic
     * Compute Cloud and you have AWS accounts that use that service, those account IDs
     * appear in the response.</p> </li> <li> <p>If the <code>eventScopeCode</code>
     * value is <code>NONE</code>, then the <code>eventArn</code> that you specified in
     * the request is invalid or doesn't exist.</p> </li> </ul>
     */
    inline bool EventScopeCodeHasBeenSet() const { return m_eventScopeCodeHasBeenSet; }

    /**
     * <p>This parameter specifies if the AWS Health event is a public AWS service
     * event or an account-specific event.</p> <ul> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>PUBLIC</code>, then the
     * <code>affectedAccounts</code> value is always empty.</p> </li> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>ACCOUNT_SPECIFIC</code>, then the
     * <code>affectedAccounts</code> value lists the affected AWS accounts in your
     * organization. For example, if an event affects a service such as Amazon Elastic
     * Compute Cloud and you have AWS accounts that use that service, those account IDs
     * appear in the response.</p> </li> <li> <p>If the <code>eventScopeCode</code>
     * value is <code>NONE</code>, then the <code>eventArn</code> that you specified in
     * the request is invalid or doesn't exist.</p> </li> </ul>
     */
    inline void SetEventScopeCode(const EventScopeCode& value) { m_eventScopeCodeHasBeenSet = true; m_eventScopeCode = value; }

    /**
     * <p>This parameter specifies if the AWS Health event is a public AWS service
     * event or an account-specific event.</p> <ul> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>PUBLIC</code>, then the
     * <code>affectedAccounts</code> value is always empty.</p> </li> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>ACCOUNT_SPECIFIC</code>, then the
     * <code>affectedAccounts</code> value lists the affected AWS accounts in your
     * organization. For example, if an event affects a service such as Amazon Elastic
     * Compute Cloud and you have AWS accounts that use that service, those account IDs
     * appear in the response.</p> </li> <li> <p>If the <code>eventScopeCode</code>
     * value is <code>NONE</code>, then the <code>eventArn</code> that you specified in
     * the request is invalid or doesn't exist.</p> </li> </ul>
     */
    inline void SetEventScopeCode(EventScopeCode&& value) { m_eventScopeCodeHasBeenSet = true; m_eventScopeCode = std::move(value); }

    /**
     * <p>This parameter specifies if the AWS Health event is a public AWS service
     * event or an account-specific event.</p> <ul> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>PUBLIC</code>, then the
     * <code>affectedAccounts</code> value is always empty.</p> </li> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>ACCOUNT_SPECIFIC</code>, then the
     * <code>affectedAccounts</code> value lists the affected AWS accounts in your
     * organization. For example, if an event affects a service such as Amazon Elastic
     * Compute Cloud and you have AWS accounts that use that service, those account IDs
     * appear in the response.</p> </li> <li> <p>If the <code>eventScopeCode</code>
     * value is <code>NONE</code>, then the <code>eventArn</code> that you specified in
     * the request is invalid or doesn't exist.</p> </li> </ul>
     */
    inline OrganizationEvent& WithEventScopeCode(const EventScopeCode& value) { SetEventScopeCode(value); return *this;}

    /**
     * <p>This parameter specifies if the AWS Health event is a public AWS service
     * event or an account-specific event.</p> <ul> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>PUBLIC</code>, then the
     * <code>affectedAccounts</code> value is always empty.</p> </li> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>ACCOUNT_SPECIFIC</code>, then the
     * <code>affectedAccounts</code> value lists the affected AWS accounts in your
     * organization. For example, if an event affects a service such as Amazon Elastic
     * Compute Cloud and you have AWS accounts that use that service, those account IDs
     * appear in the response.</p> </li> <li> <p>If the <code>eventScopeCode</code>
     * value is <code>NONE</code>, then the <code>eventArn</code> that you specified in
     * the request is invalid or doesn't exist.</p> </li> </ul>
     */
    inline OrganizationEvent& WithEventScopeCode(EventScopeCode&& value) { SetEventScopeCode(std::move(value)); return *this;}


    /**
     * <p>The AWS Region name of the event.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The AWS Region name of the event.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The AWS Region name of the event.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The AWS Region name of the event.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The AWS Region name of the event.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The AWS Region name of the event.</p>
     */
    inline OrganizationEvent& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The AWS Region name of the event.</p>
     */
    inline OrganizationEvent& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region name of the event.</p>
     */
    inline OrganizationEvent& WithRegion(const char* value) { SetRegion(value); return *this;}


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
    inline OrganizationEvent& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time that the event began.</p>
     */
    inline OrganizationEvent& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


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
    inline OrganizationEvent& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The date and time that the event ended.</p>
     */
    inline OrganizationEvent& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


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
    inline OrganizationEvent& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The most recent date and time that the event was updated.</p>
     */
    inline OrganizationEvent& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


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
    inline OrganizationEvent& WithStatusCode(const EventStatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The most recent status of the event. Possible values are <code>open</code>,
     * <code>closed</code>, and <code>upcoming</code>.</p>
     */
    inline OrganizationEvent& WithStatusCode(EventStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_service;
    bool m_serviceHasBeenSet;

    Aws::String m_eventTypeCode;
    bool m_eventTypeCodeHasBeenSet;

    EventTypeCategory m_eventTypeCategory;
    bool m_eventTypeCategoryHasBeenSet;

    EventScopeCode m_eventScopeCode;
    bool m_eventScopeCodeHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet;

    EventStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
