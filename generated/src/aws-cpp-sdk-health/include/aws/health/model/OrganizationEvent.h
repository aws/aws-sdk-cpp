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
  class OrganizationEvent
  {
  public:
    AWS_HEALTH_API OrganizationEvent() = default;
    AWS_HEALTH_API OrganizationEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API OrganizationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    OrganizationEvent& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services service that is affected by the event, such as EC2
     * and RDS.</p>
     */
    inline const Aws::String& GetService() const { return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    template<typename ServiceT = Aws::String>
    void SetService(ServiceT&& value) { m_serviceHasBeenSet = true; m_service = std::forward<ServiceT>(value); }
    template<typename ServiceT = Aws::String>
    OrganizationEvent& WithService(ServiceT&& value) { SetService(std::forward<ServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the event type. The format is
     * <code>AWS_SERVICE_DESCRIPTION</code>. For example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>.</p>
     */
    inline const Aws::String& GetEventTypeCode() const { return m_eventTypeCode; }
    inline bool EventTypeCodeHasBeenSet() const { return m_eventTypeCodeHasBeenSet; }
    template<typename EventTypeCodeT = Aws::String>
    void SetEventTypeCode(EventTypeCodeT&& value) { m_eventTypeCodeHasBeenSet = true; m_eventTypeCode = std::forward<EventTypeCodeT>(value); }
    template<typename EventTypeCodeT = Aws::String>
    OrganizationEvent& WithEventTypeCode(EventTypeCodeT&& value) { SetEventTypeCode(std::forward<EventTypeCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of event type category codes. Possible values are <code>issue</code>,
     * <code>accountNotification</code>, or <code>scheduledChange</code>. Currently,
     * the <code>investigation</code> value isn't supported at this time.</p>
     */
    inline EventTypeCategory GetEventTypeCategory() const { return m_eventTypeCategory; }
    inline bool EventTypeCategoryHasBeenSet() const { return m_eventTypeCategoryHasBeenSet; }
    inline void SetEventTypeCategory(EventTypeCategory value) { m_eventTypeCategoryHasBeenSet = true; m_eventTypeCategory = value; }
    inline OrganizationEvent& WithEventTypeCategory(EventTypeCategory value) { SetEventTypeCategory(value); return *this;}
    ///@}

    ///@{
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
    inline EventScopeCode GetEventScopeCode() const { return m_eventScopeCode; }
    inline bool EventScopeCodeHasBeenSet() const { return m_eventScopeCodeHasBeenSet; }
    inline void SetEventScopeCode(EventScopeCode value) { m_eventScopeCodeHasBeenSet = true; m_eventScopeCode = value; }
    inline OrganizationEvent& WithEventScopeCode(EventScopeCode value) { SetEventScopeCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region name of the event.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    OrganizationEvent& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the event began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    OrganizationEvent& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the event ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    OrganizationEvent& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent date and time that the event was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    OrganizationEvent& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent status of the event. Possible values are <code>open</code>,
     * <code>closed</code>, and <code>upcoming</code>.</p>
     */
    inline EventStatusCode GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(EventStatusCode value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline OrganizationEvent& WithStatusCode(EventStatusCode value) { SetStatusCode(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    Aws::String m_eventTypeCode;
    bool m_eventTypeCodeHasBeenSet = false;

    EventTypeCategory m_eventTypeCategory{EventTypeCategory::NOT_SET};
    bool m_eventTypeCategoryHasBeenSet = false;

    EventScopeCode m_eventScopeCode{EventScopeCode::NOT_SET};
    bool m_eventScopeCodeHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    EventStatusCode m_statusCode{EventStatusCode::NOT_SET};
    bool m_statusCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
