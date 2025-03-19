/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/health/model/DateTimeRange.h>
#include <aws/health/model/EventTypeCategory.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>The values to use to filter results from the <a
   * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEvents.html">DescribeEvents</a>
   * and <a
   * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEventAggregates.html">DescribeEventAggregates</a>
   * operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/EventFilter">AWS
   * API Reference</a></p>
   */
  class EventFilter
  {
  public:
    AWS_HEALTH_API EventFilter() = default;
    AWS_HEALTH_API EventFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API EventFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetEventArns() const { return m_eventArns; }
    inline bool EventArnsHasBeenSet() const { return m_eventArnsHasBeenSet; }
    template<typename EventArnsT = Aws::Vector<Aws::String>>
    void SetEventArns(EventArnsT&& value) { m_eventArnsHasBeenSet = true; m_eventArns = std::forward<EventArnsT>(value); }
    template<typename EventArnsT = Aws::Vector<Aws::String>>
    EventFilter& WithEventArns(EventArnsT&& value) { SetEventArns(std::forward<EventArnsT>(value)); return *this;}
    template<typename EventArnsT = Aws::String>
    EventFilter& AddEventArns(EventArnsT&& value) { m_eventArnsHasBeenSet = true; m_eventArns.emplace_back(std::forward<EventArnsT>(value)); return *this; }
    ///@}

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
    EventFilter& WithEventTypeCodes(EventTypeCodesT&& value) { SetEventTypeCodes(std::forward<EventTypeCodesT>(value)); return *this;}
    template<typename EventTypeCodesT = Aws::String>
    EventFilter& AddEventTypeCodes(EventTypeCodesT&& value) { m_eventTypeCodesHasBeenSet = true; m_eventTypeCodes.emplace_back(std::forward<EventTypeCodesT>(value)); return *this; }
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
    EventFilter& WithServices(ServicesT&& value) { SetServices(std::forward<ServicesT>(value)); return *this;}
    template<typename ServicesT = Aws::String>
    EventFilter& AddServices(ServicesT&& value) { m_servicesHasBeenSet = true; m_services.emplace_back(std::forward<ServicesT>(value)); return *this; }
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
    EventFilter& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    template<typename RegionsT = Aws::String>
    EventFilter& AddRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions.emplace_back(std::forward<RegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Amazon Web Services Availability Zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    EventFilter& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = Aws::String>
    EventFilter& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of dates and times that the event began.</p>
     */
    inline const Aws::Vector<DateTimeRange>& GetStartTimes() const { return m_startTimes; }
    inline bool StartTimesHasBeenSet() const { return m_startTimesHasBeenSet; }
    template<typename StartTimesT = Aws::Vector<DateTimeRange>>
    void SetStartTimes(StartTimesT&& value) { m_startTimesHasBeenSet = true; m_startTimes = std::forward<StartTimesT>(value); }
    template<typename StartTimesT = Aws::Vector<DateTimeRange>>
    EventFilter& WithStartTimes(StartTimesT&& value) { SetStartTimes(std::forward<StartTimesT>(value)); return *this;}
    template<typename StartTimesT = DateTimeRange>
    EventFilter& AddStartTimes(StartTimesT&& value) { m_startTimesHasBeenSet = true; m_startTimes.emplace_back(std::forward<StartTimesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of dates and times that the event ended.</p>
     */
    inline const Aws::Vector<DateTimeRange>& GetEndTimes() const { return m_endTimes; }
    inline bool EndTimesHasBeenSet() const { return m_endTimesHasBeenSet; }
    template<typename EndTimesT = Aws::Vector<DateTimeRange>>
    void SetEndTimes(EndTimesT&& value) { m_endTimesHasBeenSet = true; m_endTimes = std::forward<EndTimesT>(value); }
    template<typename EndTimesT = Aws::Vector<DateTimeRange>>
    EventFilter& WithEndTimes(EndTimesT&& value) { SetEndTimes(std::forward<EndTimesT>(value)); return *this;}
    template<typename EndTimesT = DateTimeRange>
    EventFilter& AddEndTimes(EndTimesT&& value) { m_endTimesHasBeenSet = true; m_endTimes.emplace_back(std::forward<EndTimesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of dates and times that the event was last updated.</p>
     */
    inline const Aws::Vector<DateTimeRange>& GetLastUpdatedTimes() const { return m_lastUpdatedTimes; }
    inline bool LastUpdatedTimesHasBeenSet() const { return m_lastUpdatedTimesHasBeenSet; }
    template<typename LastUpdatedTimesT = Aws::Vector<DateTimeRange>>
    void SetLastUpdatedTimes(LastUpdatedTimesT&& value) { m_lastUpdatedTimesHasBeenSet = true; m_lastUpdatedTimes = std::forward<LastUpdatedTimesT>(value); }
    template<typename LastUpdatedTimesT = Aws::Vector<DateTimeRange>>
    EventFilter& WithLastUpdatedTimes(LastUpdatedTimesT&& value) { SetLastUpdatedTimes(std::forward<LastUpdatedTimesT>(value)); return *this;}
    template<typename LastUpdatedTimesT = DateTimeRange>
    EventFilter& AddLastUpdatedTimes(LastUpdatedTimesT&& value) { m_lastUpdatedTimesHasBeenSet = true; m_lastUpdatedTimes.emplace_back(std::forward<LastUpdatedTimesT>(value)); return *this; }
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
    EventFilter& WithEntityArns(EntityArnsT&& value) { SetEntityArns(std::forward<EntityArnsT>(value)); return *this;}
    template<typename EntityArnsT = Aws::String>
    EventFilter& AddEntityArns(EntityArnsT&& value) { m_entityArnsHasBeenSet = true; m_entityArns.emplace_back(std::forward<EntityArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of entity identifiers, such as EC2 instance IDs
     * (<code>i-34ab692e</code>) or EBS volumes (<code>vol-426ab23e</code>).</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntityValues() const { return m_entityValues; }
    inline bool EntityValuesHasBeenSet() const { return m_entityValuesHasBeenSet; }
    template<typename EntityValuesT = Aws::Vector<Aws::String>>
    void SetEntityValues(EntityValuesT&& value) { m_entityValuesHasBeenSet = true; m_entityValues = std::forward<EntityValuesT>(value); }
    template<typename EntityValuesT = Aws::Vector<Aws::String>>
    EventFilter& WithEntityValues(EntityValuesT&& value) { SetEntityValues(std::forward<EntityValuesT>(value)); return *this;}
    template<typename EntityValuesT = Aws::String>
    EventFilter& AddEntityValues(EntityValuesT&& value) { m_entityValuesHasBeenSet = true; m_entityValues.emplace_back(std::forward<EntityValuesT>(value)); return *this; }
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
    EventFilter& WithEventTypeCategories(EventTypeCategoriesT&& value) { SetEventTypeCategories(std::forward<EventTypeCategoriesT>(value)); return *this;}
    inline EventFilter& AddEventTypeCategories(EventTypeCategory value) { m_eventTypeCategoriesHasBeenSet = true; m_eventTypeCategories.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map of entity tags attached to the affected entity.</p> 
     * <p>Currently, the <code>tags</code> property isn't supported.</p> 
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
    EventFilter& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    EventFilter& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
    EventFilter& WithEventStatusCodes(EventStatusCodesT&& value) { SetEventStatusCodes(std::forward<EventStatusCodesT>(value)); return *this;}
    inline EventFilter& AddEventStatusCodes(EventStatusCode value) { m_eventStatusCodesHasBeenSet = true; m_eventStatusCodes.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_eventArns;
    bool m_eventArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventTypeCodes;
    bool m_eventTypeCodesHasBeenSet = false;

    Aws::Vector<Aws::String> m_services;
    bool m_servicesHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::Vector<DateTimeRange> m_startTimes;
    bool m_startTimesHasBeenSet = false;

    Aws::Vector<DateTimeRange> m_endTimes;
    bool m_endTimesHasBeenSet = false;

    Aws::Vector<DateTimeRange> m_lastUpdatedTimes;
    bool m_lastUpdatedTimesHasBeenSet = false;

    Aws::Vector<Aws::String> m_entityArns;
    bool m_entityArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_entityValues;
    bool m_entityValuesHasBeenSet = false;

    Aws::Vector<EventTypeCategory> m_eventTypeCategories;
    bool m_eventTypeCategoriesHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<EventStatusCode> m_eventStatusCodes;
    bool m_eventStatusCodesHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
