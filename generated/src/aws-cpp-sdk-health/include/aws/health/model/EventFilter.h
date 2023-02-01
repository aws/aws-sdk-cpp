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
    AWS_HEALTH_API EventFilter();
    AWS_HEALTH_API EventFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API EventFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetEventArns() const{ return m_eventArns; }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline bool EventArnsHasBeenSet() const { return m_eventArnsHasBeenSet; }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline void SetEventArns(const Aws::Vector<Aws::String>& value) { m_eventArnsHasBeenSet = true; m_eventArns = value; }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline void SetEventArns(Aws::Vector<Aws::String>&& value) { m_eventArnsHasBeenSet = true; m_eventArns = std::move(value); }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline EventFilter& WithEventArns(const Aws::Vector<Aws::String>& value) { SetEventArns(value); return *this;}

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline EventFilter& WithEventArns(Aws::Vector<Aws::String>&& value) { SetEventArns(std::move(value)); return *this;}

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline EventFilter& AddEventArns(const Aws::String& value) { m_eventArnsHasBeenSet = true; m_eventArns.push_back(value); return *this; }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline EventFilter& AddEventArns(Aws::String&& value) { m_eventArnsHasBeenSet = true; m_eventArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline EventFilter& AddEventArns(const char* value) { m_eventArnsHasBeenSet = true; m_eventArns.push_back(value); return *this; }


    /**
     * <p>A list of unique identifiers for event types. For example,
     * <code>"AWS_EC2_SYSTEM_MAINTENANCE_EVENT","AWS_RDS_MAINTENANCE_SCHEDULED".</code>
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetEventTypeCodes() const{ return m_eventTypeCodes; }

    /**
     * <p>A list of unique identifiers for event types. For example,
     * <code>"AWS_EC2_SYSTEM_MAINTENANCE_EVENT","AWS_RDS_MAINTENANCE_SCHEDULED".</code>
     * </p>
     */
    inline bool EventTypeCodesHasBeenSet() const { return m_eventTypeCodesHasBeenSet; }

    /**
     * <p>A list of unique identifiers for event types. For example,
     * <code>"AWS_EC2_SYSTEM_MAINTENANCE_EVENT","AWS_RDS_MAINTENANCE_SCHEDULED".</code>
     * </p>
     */
    inline void SetEventTypeCodes(const Aws::Vector<Aws::String>& value) { m_eventTypeCodesHasBeenSet = true; m_eventTypeCodes = value; }

    /**
     * <p>A list of unique identifiers for event types. For example,
     * <code>"AWS_EC2_SYSTEM_MAINTENANCE_EVENT","AWS_RDS_MAINTENANCE_SCHEDULED".</code>
     * </p>
     */
    inline void SetEventTypeCodes(Aws::Vector<Aws::String>&& value) { m_eventTypeCodesHasBeenSet = true; m_eventTypeCodes = std::move(value); }

    /**
     * <p>A list of unique identifiers for event types. For example,
     * <code>"AWS_EC2_SYSTEM_MAINTENANCE_EVENT","AWS_RDS_MAINTENANCE_SCHEDULED".</code>
     * </p>
     */
    inline EventFilter& WithEventTypeCodes(const Aws::Vector<Aws::String>& value) { SetEventTypeCodes(value); return *this;}

    /**
     * <p>A list of unique identifiers for event types. For example,
     * <code>"AWS_EC2_SYSTEM_MAINTENANCE_EVENT","AWS_RDS_MAINTENANCE_SCHEDULED".</code>
     * </p>
     */
    inline EventFilter& WithEventTypeCodes(Aws::Vector<Aws::String>&& value) { SetEventTypeCodes(std::move(value)); return *this;}

    /**
     * <p>A list of unique identifiers for event types. For example,
     * <code>"AWS_EC2_SYSTEM_MAINTENANCE_EVENT","AWS_RDS_MAINTENANCE_SCHEDULED".</code>
     * </p>
     */
    inline EventFilter& AddEventTypeCodes(const Aws::String& value) { m_eventTypeCodesHasBeenSet = true; m_eventTypeCodes.push_back(value); return *this; }

    /**
     * <p>A list of unique identifiers for event types. For example,
     * <code>"AWS_EC2_SYSTEM_MAINTENANCE_EVENT","AWS_RDS_MAINTENANCE_SCHEDULED".</code>
     * </p>
     */
    inline EventFilter& AddEventTypeCodes(Aws::String&& value) { m_eventTypeCodesHasBeenSet = true; m_eventTypeCodes.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of unique identifiers for event types. For example,
     * <code>"AWS_EC2_SYSTEM_MAINTENANCE_EVENT","AWS_RDS_MAINTENANCE_SCHEDULED".</code>
     * </p>
     */
    inline EventFilter& AddEventTypeCodes(const char* value) { m_eventTypeCodesHasBeenSet = true; m_eventTypeCodes.push_back(value); return *this; }


    /**
     * <p>The Amazon Web Services services associated with the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServices() const{ return m_services; }

    /**
     * <p>The Amazon Web Services services associated with the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline bool ServicesHasBeenSet() const { return m_servicesHasBeenSet; }

    /**
     * <p>The Amazon Web Services services associated with the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline void SetServices(const Aws::Vector<Aws::String>& value) { m_servicesHasBeenSet = true; m_services = value; }

    /**
     * <p>The Amazon Web Services services associated with the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline void SetServices(Aws::Vector<Aws::String>&& value) { m_servicesHasBeenSet = true; m_services = std::move(value); }

    /**
     * <p>The Amazon Web Services services associated with the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline EventFilter& WithServices(const Aws::Vector<Aws::String>& value) { SetServices(value); return *this;}

    /**
     * <p>The Amazon Web Services services associated with the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline EventFilter& WithServices(Aws::Vector<Aws::String>&& value) { SetServices(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services services associated with the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline EventFilter& AddServices(const Aws::String& value) { m_servicesHasBeenSet = true; m_services.push_back(value); return *this; }

    /**
     * <p>The Amazon Web Services services associated with the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline EventFilter& AddServices(Aws::String&& value) { m_servicesHasBeenSet = true; m_services.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Web Services services associated with the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline EventFilter& AddServices(const char* value) { m_servicesHasBeenSet = true; m_services.push_back(value); return *this; }


    /**
     * <p>A list of Amazon Web Services Regions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const{ return m_regions; }

    /**
     * <p>A list of Amazon Web Services Regions.</p>
     */
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }

    /**
     * <p>A list of Amazon Web Services Regions.</p>
     */
    inline void SetRegions(const Aws::Vector<Aws::String>& value) { m_regionsHasBeenSet = true; m_regions = value; }

    /**
     * <p>A list of Amazon Web Services Regions.</p>
     */
    inline void SetRegions(Aws::Vector<Aws::String>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }

    /**
     * <p>A list of Amazon Web Services Regions.</p>
     */
    inline EventFilter& WithRegions(const Aws::Vector<Aws::String>& value) { SetRegions(value); return *this;}

    /**
     * <p>A list of Amazon Web Services Regions.</p>
     */
    inline EventFilter& WithRegions(Aws::Vector<Aws::String>&& value) { SetRegions(std::move(value)); return *this;}

    /**
     * <p>A list of Amazon Web Services Regions.</p>
     */
    inline EventFilter& AddRegions(const Aws::String& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

    /**
     * <p>A list of Amazon Web Services Regions.</p>
     */
    inline EventFilter& AddRegions(Aws::String&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Amazon Web Services Regions.</p>
     */
    inline EventFilter& AddRegions(const char* value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }


    /**
     * <p>A list of Amazon Web Services Availability Zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>A list of Amazon Web Services Availability Zones.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>A list of Amazon Web Services Availability Zones.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>A list of Amazon Web Services Availability Zones.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>A list of Amazon Web Services Availability Zones.</p>
     */
    inline EventFilter& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>A list of Amazon Web Services Availability Zones.</p>
     */
    inline EventFilter& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>A list of Amazon Web Services Availability Zones.</p>
     */
    inline EventFilter& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>A list of Amazon Web Services Availability Zones.</p>
     */
    inline EventFilter& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Amazon Web Services Availability Zones.</p>
     */
    inline EventFilter& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>A list of dates and times that the event began.</p>
     */
    inline const Aws::Vector<DateTimeRange>& GetStartTimes() const{ return m_startTimes; }

    /**
     * <p>A list of dates and times that the event began.</p>
     */
    inline bool StartTimesHasBeenSet() const { return m_startTimesHasBeenSet; }

    /**
     * <p>A list of dates and times that the event began.</p>
     */
    inline void SetStartTimes(const Aws::Vector<DateTimeRange>& value) { m_startTimesHasBeenSet = true; m_startTimes = value; }

    /**
     * <p>A list of dates and times that the event began.</p>
     */
    inline void SetStartTimes(Aws::Vector<DateTimeRange>&& value) { m_startTimesHasBeenSet = true; m_startTimes = std::move(value); }

    /**
     * <p>A list of dates and times that the event began.</p>
     */
    inline EventFilter& WithStartTimes(const Aws::Vector<DateTimeRange>& value) { SetStartTimes(value); return *this;}

    /**
     * <p>A list of dates and times that the event began.</p>
     */
    inline EventFilter& WithStartTimes(Aws::Vector<DateTimeRange>&& value) { SetStartTimes(std::move(value)); return *this;}

    /**
     * <p>A list of dates and times that the event began.</p>
     */
    inline EventFilter& AddStartTimes(const DateTimeRange& value) { m_startTimesHasBeenSet = true; m_startTimes.push_back(value); return *this; }

    /**
     * <p>A list of dates and times that the event began.</p>
     */
    inline EventFilter& AddStartTimes(DateTimeRange&& value) { m_startTimesHasBeenSet = true; m_startTimes.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of dates and times that the event ended.</p>
     */
    inline const Aws::Vector<DateTimeRange>& GetEndTimes() const{ return m_endTimes; }

    /**
     * <p>A list of dates and times that the event ended.</p>
     */
    inline bool EndTimesHasBeenSet() const { return m_endTimesHasBeenSet; }

    /**
     * <p>A list of dates and times that the event ended.</p>
     */
    inline void SetEndTimes(const Aws::Vector<DateTimeRange>& value) { m_endTimesHasBeenSet = true; m_endTimes = value; }

    /**
     * <p>A list of dates and times that the event ended.</p>
     */
    inline void SetEndTimes(Aws::Vector<DateTimeRange>&& value) { m_endTimesHasBeenSet = true; m_endTimes = std::move(value); }

    /**
     * <p>A list of dates and times that the event ended.</p>
     */
    inline EventFilter& WithEndTimes(const Aws::Vector<DateTimeRange>& value) { SetEndTimes(value); return *this;}

    /**
     * <p>A list of dates and times that the event ended.</p>
     */
    inline EventFilter& WithEndTimes(Aws::Vector<DateTimeRange>&& value) { SetEndTimes(std::move(value)); return *this;}

    /**
     * <p>A list of dates and times that the event ended.</p>
     */
    inline EventFilter& AddEndTimes(const DateTimeRange& value) { m_endTimesHasBeenSet = true; m_endTimes.push_back(value); return *this; }

    /**
     * <p>A list of dates and times that the event ended.</p>
     */
    inline EventFilter& AddEndTimes(DateTimeRange&& value) { m_endTimesHasBeenSet = true; m_endTimes.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of dates and times that the event was last updated.</p>
     */
    inline const Aws::Vector<DateTimeRange>& GetLastUpdatedTimes() const{ return m_lastUpdatedTimes; }

    /**
     * <p>A list of dates and times that the event was last updated.</p>
     */
    inline bool LastUpdatedTimesHasBeenSet() const { return m_lastUpdatedTimesHasBeenSet; }

    /**
     * <p>A list of dates and times that the event was last updated.</p>
     */
    inline void SetLastUpdatedTimes(const Aws::Vector<DateTimeRange>& value) { m_lastUpdatedTimesHasBeenSet = true; m_lastUpdatedTimes = value; }

    /**
     * <p>A list of dates and times that the event was last updated.</p>
     */
    inline void SetLastUpdatedTimes(Aws::Vector<DateTimeRange>&& value) { m_lastUpdatedTimesHasBeenSet = true; m_lastUpdatedTimes = std::move(value); }

    /**
     * <p>A list of dates and times that the event was last updated.</p>
     */
    inline EventFilter& WithLastUpdatedTimes(const Aws::Vector<DateTimeRange>& value) { SetLastUpdatedTimes(value); return *this;}

    /**
     * <p>A list of dates and times that the event was last updated.</p>
     */
    inline EventFilter& WithLastUpdatedTimes(Aws::Vector<DateTimeRange>&& value) { SetLastUpdatedTimes(std::move(value)); return *this;}

    /**
     * <p>A list of dates and times that the event was last updated.</p>
     */
    inline EventFilter& AddLastUpdatedTimes(const DateTimeRange& value) { m_lastUpdatedTimesHasBeenSet = true; m_lastUpdatedTimes.push_back(value); return *this; }

    /**
     * <p>A list of dates and times that the event was last updated.</p>
     */
    inline EventFilter& AddLastUpdatedTimes(DateTimeRange&& value) { m_lastUpdatedTimesHasBeenSet = true; m_lastUpdatedTimes.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntityArns() const{ return m_entityArns; }

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline bool EntityArnsHasBeenSet() const { return m_entityArnsHasBeenSet; }

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline void SetEntityArns(const Aws::Vector<Aws::String>& value) { m_entityArnsHasBeenSet = true; m_entityArns = value; }

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline void SetEntityArns(Aws::Vector<Aws::String>&& value) { m_entityArnsHasBeenSet = true; m_entityArns = std::move(value); }

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline EventFilter& WithEntityArns(const Aws::Vector<Aws::String>& value) { SetEntityArns(value); return *this;}

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline EventFilter& WithEntityArns(Aws::Vector<Aws::String>&& value) { SetEntityArns(std::move(value)); return *this;}

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline EventFilter& AddEntityArns(const Aws::String& value) { m_entityArnsHasBeenSet = true; m_entityArns.push_back(value); return *this; }

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline EventFilter& AddEntityArns(Aws::String&& value) { m_entityArnsHasBeenSet = true; m_entityArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline EventFilter& AddEntityArns(const char* value) { m_entityArnsHasBeenSet = true; m_entityArns.push_back(value); return *this; }


    /**
     * <p>A list of entity identifiers, such as EC2 instance IDs
     * (<code>i-34ab692e</code>) or EBS volumes (<code>vol-426ab23e</code>).</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntityValues() const{ return m_entityValues; }

    /**
     * <p>A list of entity identifiers, such as EC2 instance IDs
     * (<code>i-34ab692e</code>) or EBS volumes (<code>vol-426ab23e</code>).</p>
     */
    inline bool EntityValuesHasBeenSet() const { return m_entityValuesHasBeenSet; }

    /**
     * <p>A list of entity identifiers, such as EC2 instance IDs
     * (<code>i-34ab692e</code>) or EBS volumes (<code>vol-426ab23e</code>).</p>
     */
    inline void SetEntityValues(const Aws::Vector<Aws::String>& value) { m_entityValuesHasBeenSet = true; m_entityValues = value; }

    /**
     * <p>A list of entity identifiers, such as EC2 instance IDs
     * (<code>i-34ab692e</code>) or EBS volumes (<code>vol-426ab23e</code>).</p>
     */
    inline void SetEntityValues(Aws::Vector<Aws::String>&& value) { m_entityValuesHasBeenSet = true; m_entityValues = std::move(value); }

    /**
     * <p>A list of entity identifiers, such as EC2 instance IDs
     * (<code>i-34ab692e</code>) or EBS volumes (<code>vol-426ab23e</code>).</p>
     */
    inline EventFilter& WithEntityValues(const Aws::Vector<Aws::String>& value) { SetEntityValues(value); return *this;}

    /**
     * <p>A list of entity identifiers, such as EC2 instance IDs
     * (<code>i-34ab692e</code>) or EBS volumes (<code>vol-426ab23e</code>).</p>
     */
    inline EventFilter& WithEntityValues(Aws::Vector<Aws::String>&& value) { SetEntityValues(std::move(value)); return *this;}

    /**
     * <p>A list of entity identifiers, such as EC2 instance IDs
     * (<code>i-34ab692e</code>) or EBS volumes (<code>vol-426ab23e</code>).</p>
     */
    inline EventFilter& AddEntityValues(const Aws::String& value) { m_entityValuesHasBeenSet = true; m_entityValues.push_back(value); return *this; }

    /**
     * <p>A list of entity identifiers, such as EC2 instance IDs
     * (<code>i-34ab692e</code>) or EBS volumes (<code>vol-426ab23e</code>).</p>
     */
    inline EventFilter& AddEntityValues(Aws::String&& value) { m_entityValuesHasBeenSet = true; m_entityValues.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of entity identifiers, such as EC2 instance IDs
     * (<code>i-34ab692e</code>) or EBS volumes (<code>vol-426ab23e</code>).</p>
     */
    inline EventFilter& AddEntityValues(const char* value) { m_entityValuesHasBeenSet = true; m_entityValues.push_back(value); return *this; }


    /**
     * <p>A list of event type category codes. Possible values are <code>issue</code>,
     * <code>accountNotification</code>, or <code>scheduledChange</code>. Currently,
     * the <code>investigation</code> value isn't supported at this time.</p>
     */
    inline const Aws::Vector<EventTypeCategory>& GetEventTypeCategories() const{ return m_eventTypeCategories; }

    /**
     * <p>A list of event type category codes. Possible values are <code>issue</code>,
     * <code>accountNotification</code>, or <code>scheduledChange</code>. Currently,
     * the <code>investigation</code> value isn't supported at this time.</p>
     */
    inline bool EventTypeCategoriesHasBeenSet() const { return m_eventTypeCategoriesHasBeenSet; }

    /**
     * <p>A list of event type category codes. Possible values are <code>issue</code>,
     * <code>accountNotification</code>, or <code>scheduledChange</code>. Currently,
     * the <code>investigation</code> value isn't supported at this time.</p>
     */
    inline void SetEventTypeCategories(const Aws::Vector<EventTypeCategory>& value) { m_eventTypeCategoriesHasBeenSet = true; m_eventTypeCategories = value; }

    /**
     * <p>A list of event type category codes. Possible values are <code>issue</code>,
     * <code>accountNotification</code>, or <code>scheduledChange</code>. Currently,
     * the <code>investigation</code> value isn't supported at this time.</p>
     */
    inline void SetEventTypeCategories(Aws::Vector<EventTypeCategory>&& value) { m_eventTypeCategoriesHasBeenSet = true; m_eventTypeCategories = std::move(value); }

    /**
     * <p>A list of event type category codes. Possible values are <code>issue</code>,
     * <code>accountNotification</code>, or <code>scheduledChange</code>. Currently,
     * the <code>investigation</code> value isn't supported at this time.</p>
     */
    inline EventFilter& WithEventTypeCategories(const Aws::Vector<EventTypeCategory>& value) { SetEventTypeCategories(value); return *this;}

    /**
     * <p>A list of event type category codes. Possible values are <code>issue</code>,
     * <code>accountNotification</code>, or <code>scheduledChange</code>. Currently,
     * the <code>investigation</code> value isn't supported at this time.</p>
     */
    inline EventFilter& WithEventTypeCategories(Aws::Vector<EventTypeCategory>&& value) { SetEventTypeCategories(std::move(value)); return *this;}

    /**
     * <p>A list of event type category codes. Possible values are <code>issue</code>,
     * <code>accountNotification</code>, or <code>scheduledChange</code>. Currently,
     * the <code>investigation</code> value isn't supported at this time.</p>
     */
    inline EventFilter& AddEventTypeCategories(const EventTypeCategory& value) { m_eventTypeCategoriesHasBeenSet = true; m_eventTypeCategories.push_back(value); return *this; }

    /**
     * <p>A list of event type category codes. Possible values are <code>issue</code>,
     * <code>accountNotification</code>, or <code>scheduledChange</code>. Currently,
     * the <code>investigation</code> value isn't supported at this time.</p>
     */
    inline EventFilter& AddEventTypeCategories(EventTypeCategory&& value) { m_eventTypeCategoriesHasBeenSet = true; m_eventTypeCategories.push_back(std::move(value)); return *this; }


    /**
     * <p>A map of entity tags attached to the affected entity.</p> 
     * <p>Currently, the <code>tags</code> property isn't supported.</p> 
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetTags() const{ return m_tags; }

    /**
     * <p>A map of entity tags attached to the affected entity.</p> 
     * <p>Currently, the <code>tags</code> property isn't supported.</p> 
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map of entity tags attached to the affected entity.</p> 
     * <p>Currently, the <code>tags</code> property isn't supported.</p> 
     */
    inline void SetTags(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map of entity tags attached to the affected entity.</p> 
     * <p>Currently, the <code>tags</code> property isn't supported.</p> 
     */
    inline void SetTags(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map of entity tags attached to the affected entity.</p> 
     * <p>Currently, the <code>tags</code> property isn't supported.</p> 
     */
    inline EventFilter& WithTags(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { SetTags(value); return *this;}

    /**
     * <p>A map of entity tags attached to the affected entity.</p> 
     * <p>Currently, the <code>tags</code> property isn't supported.</p> 
     */
    inline EventFilter& WithTags(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map of entity tags attached to the affected entity.</p> 
     * <p>Currently, the <code>tags</code> property isn't supported.</p> 
     */
    inline EventFilter& AddTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A map of entity tags attached to the affected entity.</p> 
     * <p>Currently, the <code>tags</code> property isn't supported.</p> 
     */
    inline EventFilter& AddTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of event status codes.</p>
     */
    inline const Aws::Vector<EventStatusCode>& GetEventStatusCodes() const{ return m_eventStatusCodes; }

    /**
     * <p>A list of event status codes.</p>
     */
    inline bool EventStatusCodesHasBeenSet() const { return m_eventStatusCodesHasBeenSet; }

    /**
     * <p>A list of event status codes.</p>
     */
    inline void SetEventStatusCodes(const Aws::Vector<EventStatusCode>& value) { m_eventStatusCodesHasBeenSet = true; m_eventStatusCodes = value; }

    /**
     * <p>A list of event status codes.</p>
     */
    inline void SetEventStatusCodes(Aws::Vector<EventStatusCode>&& value) { m_eventStatusCodesHasBeenSet = true; m_eventStatusCodes = std::move(value); }

    /**
     * <p>A list of event status codes.</p>
     */
    inline EventFilter& WithEventStatusCodes(const Aws::Vector<EventStatusCode>& value) { SetEventStatusCodes(value); return *this;}

    /**
     * <p>A list of event status codes.</p>
     */
    inline EventFilter& WithEventStatusCodes(Aws::Vector<EventStatusCode>&& value) { SetEventStatusCodes(std::move(value)); return *this;}

    /**
     * <p>A list of event status codes.</p>
     */
    inline EventFilter& AddEventStatusCodes(const EventStatusCode& value) { m_eventStatusCodesHasBeenSet = true; m_eventStatusCodes.push_back(value); return *this; }

    /**
     * <p>A list of event status codes.</p>
     */
    inline EventFilter& AddEventStatusCodes(EventStatusCode&& value) { m_eventStatusCodesHasBeenSet = true; m_eventStatusCodes.push_back(std::move(value)); return *this; }

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
