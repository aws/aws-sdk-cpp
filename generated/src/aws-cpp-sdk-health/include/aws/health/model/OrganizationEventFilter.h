/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/health/model/DateTimeRange.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/health/model/EventTypeCategory.h>
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
   * <p>The values to filter results from the <a
   * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEventsForOrganization.html">DescribeEventsForOrganization</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/OrganizationEventFilter">AWS
   * API Reference</a></p>
   */
  class OrganizationEventFilter
  {
  public:
    AWS_HEALTH_API OrganizationEventFilter() = default;
    AWS_HEALTH_API OrganizationEventFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API OrganizationEventFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of unique identifiers for event types. For example,
     * <code>"AWS_EC2_SYSTEM_MAINTENANCE_EVENT","AWS_RDS_MAINTENANCE_SCHEDULED".</code>
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetEventTypeCodes() const { return m_eventTypeCodes; }
    inline bool EventTypeCodesHasBeenSet() const { return m_eventTypeCodesHasBeenSet; }
    template<typename EventTypeCodesT = Aws::Vector<Aws::String>>
    void SetEventTypeCodes(EventTypeCodesT&& value) { m_eventTypeCodesHasBeenSet = true; m_eventTypeCodes = std::forward<EventTypeCodesT>(value); }
    template<typename EventTypeCodesT = Aws::Vector<Aws::String>>
    OrganizationEventFilter& WithEventTypeCodes(EventTypeCodesT&& value) { SetEventTypeCodes(std::forward<EventTypeCodesT>(value)); return *this;}
    template<typename EventTypeCodesT = Aws::String>
    OrganizationEventFilter& AddEventTypeCodes(EventTypeCodesT&& value) { m_eventTypeCodesHasBeenSet = true; m_eventTypeCodes.emplace_back(std::forward<EventTypeCodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of 12-digit Amazon Web Services account numbers that contains the
     * affected entities.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAwsAccountIds() const { return m_awsAccountIds; }
    inline bool AwsAccountIdsHasBeenSet() const { return m_awsAccountIdsHasBeenSet; }
    template<typename AwsAccountIdsT = Aws::Vector<Aws::String>>
    void SetAwsAccountIds(AwsAccountIdsT&& value) { m_awsAccountIdsHasBeenSet = true; m_awsAccountIds = std::forward<AwsAccountIdsT>(value); }
    template<typename AwsAccountIdsT = Aws::Vector<Aws::String>>
    OrganizationEventFilter& WithAwsAccountIds(AwsAccountIdsT&& value) { SetAwsAccountIds(std::forward<AwsAccountIdsT>(value)); return *this;}
    template<typename AwsAccountIdsT = Aws::String>
    OrganizationEventFilter& AddAwsAccountIds(AwsAccountIdsT&& value) { m_awsAccountIdsHasBeenSet = true; m_awsAccountIds.emplace_back(std::forward<AwsAccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services services associated with the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServices() const { return m_services; }
    inline bool ServicesHasBeenSet() const { return m_servicesHasBeenSet; }
    template<typename ServicesT = Aws::Vector<Aws::String>>
    void SetServices(ServicesT&& value) { m_servicesHasBeenSet = true; m_services = std::forward<ServicesT>(value); }
    template<typename ServicesT = Aws::Vector<Aws::String>>
    OrganizationEventFilter& WithServices(ServicesT&& value) { SetServices(std::forward<ServicesT>(value)); return *this;}
    template<typename ServicesT = Aws::String>
    OrganizationEventFilter& AddServices(ServicesT&& value) { m_servicesHasBeenSet = true; m_services.emplace_back(std::forward<ServicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Amazon Web Services Regions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    void SetRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions = std::forward<RegionsT>(value); }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    OrganizationEventFilter& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    template<typename RegionsT = Aws::String>
    OrganizationEventFilter& AddRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions.emplace_back(std::forward<RegionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const DateTimeRange& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = DateTimeRange>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = DateTimeRange>
    OrganizationEventFilter& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DateTimeRange& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = DateTimeRange>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = DateTimeRange>
    OrganizationEventFilter& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DateTimeRange& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = DateTimeRange>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = DateTimeRange>
    OrganizationEventFilter& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntityArns() const { return m_entityArns; }
    inline bool EntityArnsHasBeenSet() const { return m_entityArnsHasBeenSet; }
    template<typename EntityArnsT = Aws::Vector<Aws::String>>
    void SetEntityArns(EntityArnsT&& value) { m_entityArnsHasBeenSet = true; m_entityArns = std::forward<EntityArnsT>(value); }
    template<typename EntityArnsT = Aws::Vector<Aws::String>>
    OrganizationEventFilter& WithEntityArns(EntityArnsT&& value) { SetEntityArns(std::forward<EntityArnsT>(value)); return *this;}
    template<typename EntityArnsT = Aws::String>
    OrganizationEventFilter& AddEntityArns(EntityArnsT&& value) { m_entityArnsHasBeenSet = true; m_entityArns.emplace_back(std::forward<EntityArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of entity identifiers, such as EC2 instance IDs (i-34ab692e) or EBS
     * volumes (vol-426ab23e).</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntityValues() const { return m_entityValues; }
    inline bool EntityValuesHasBeenSet() const { return m_entityValuesHasBeenSet; }
    template<typename EntityValuesT = Aws::Vector<Aws::String>>
    void SetEntityValues(EntityValuesT&& value) { m_entityValuesHasBeenSet = true; m_entityValues = std::forward<EntityValuesT>(value); }
    template<typename EntityValuesT = Aws::Vector<Aws::String>>
    OrganizationEventFilter& WithEntityValues(EntityValuesT&& value) { SetEntityValues(std::forward<EntityValuesT>(value)); return *this;}
    template<typename EntityValuesT = Aws::String>
    OrganizationEventFilter& AddEntityValues(EntityValuesT&& value) { m_entityValuesHasBeenSet = true; m_entityValues.emplace_back(std::forward<EntityValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of event type category codes. Possible values are <code>issue</code>,
     * <code>accountNotification</code>, or <code>scheduledChange</code>. Currently,
     * the <code>investigation</code> value isn't supported at this time.</p>
     */
    inline const Aws::Vector<EventTypeCategory>& GetEventTypeCategories() const { return m_eventTypeCategories; }
    inline bool EventTypeCategoriesHasBeenSet() const { return m_eventTypeCategoriesHasBeenSet; }
    template<typename EventTypeCategoriesT = Aws::Vector<EventTypeCategory>>
    void SetEventTypeCategories(EventTypeCategoriesT&& value) { m_eventTypeCategoriesHasBeenSet = true; m_eventTypeCategories = std::forward<EventTypeCategoriesT>(value); }
    template<typename EventTypeCategoriesT = Aws::Vector<EventTypeCategory>>
    OrganizationEventFilter& WithEventTypeCategories(EventTypeCategoriesT&& value) { SetEventTypeCategories(std::forward<EventTypeCategoriesT>(value)); return *this;}
    inline OrganizationEventFilter& AddEventTypeCategories(EventTypeCategory value) { m_eventTypeCategoriesHasBeenSet = true; m_eventTypeCategories.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of event status codes.</p>
     */
    inline const Aws::Vector<EventStatusCode>& GetEventStatusCodes() const { return m_eventStatusCodes; }
    inline bool EventStatusCodesHasBeenSet() const { return m_eventStatusCodesHasBeenSet; }
    template<typename EventStatusCodesT = Aws::Vector<EventStatusCode>>
    void SetEventStatusCodes(EventStatusCodesT&& value) { m_eventStatusCodesHasBeenSet = true; m_eventStatusCodes = std::forward<EventStatusCodesT>(value); }
    template<typename EventStatusCodesT = Aws::Vector<EventStatusCode>>
    OrganizationEventFilter& WithEventStatusCodes(EventStatusCodesT&& value) { SetEventStatusCodes(std::forward<EventStatusCodesT>(value)); return *this;}
    inline OrganizationEventFilter& AddEventStatusCodes(EventStatusCode value) { m_eventStatusCodesHasBeenSet = true; m_eventStatusCodes.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_eventTypeCodes;
    bool m_eventTypeCodesHasBeenSet = false;

    Aws::Vector<Aws::String> m_awsAccountIds;
    bool m_awsAccountIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_services;
    bool m_servicesHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;

    DateTimeRange m_startTime;
    bool m_startTimeHasBeenSet = false;

    DateTimeRange m_endTime;
    bool m_endTimeHasBeenSet = false;

    DateTimeRange m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_entityArns;
    bool m_entityArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_entityValues;
    bool m_entityValuesHasBeenSet = false;

    Aws::Vector<EventTypeCategory> m_eventTypeCategories;
    bool m_eventTypeCategoriesHasBeenSet = false;

    Aws::Vector<EventStatusCode> m_eventStatusCodes;
    bool m_eventStatusCodesHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
