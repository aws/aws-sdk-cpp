/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/health/model/DateTimeRange.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/health/model/EntityStatusCode.h>
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
   * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeAffectedEntities.html">DescribeAffectedEntities</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/EntityFilter">AWS
   * API Reference</a></p>
   */
  class EntityFilter
  {
  public:
    AWS_HEALTH_API EntityFilter();
    AWS_HEALTH_API EntityFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API EntityFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline EntityFilter& WithEventArns(const Aws::Vector<Aws::String>& value) { SetEventArns(value); return *this;}

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline EntityFilter& WithEventArns(Aws::Vector<Aws::String>&& value) { SetEventArns(std::move(value)); return *this;}

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline EntityFilter& AddEventArns(const Aws::String& value) { m_eventArnsHasBeenSet = true; m_eventArns.push_back(value); return *this; }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline EntityFilter& AddEventArns(Aws::String&& value) { m_eventArnsHasBeenSet = true; m_eventArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline EntityFilter& AddEventArns(const char* value) { m_eventArnsHasBeenSet = true; m_eventArns.push_back(value); return *this; }


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
    inline EntityFilter& WithEntityArns(const Aws::Vector<Aws::String>& value) { SetEntityArns(value); return *this;}

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline EntityFilter& WithEntityArns(Aws::Vector<Aws::String>&& value) { SetEntityArns(std::move(value)); return *this;}

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline EntityFilter& AddEntityArns(const Aws::String& value) { m_entityArnsHasBeenSet = true; m_entityArns.push_back(value); return *this; }

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline EntityFilter& AddEntityArns(Aws::String&& value) { m_entityArnsHasBeenSet = true; m_entityArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline EntityFilter& AddEntityArns(const char* value) { m_entityArnsHasBeenSet = true; m_entityArns.push_back(value); return *this; }


    /**
     * <p>A list of IDs for affected entities.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntityValues() const{ return m_entityValues; }

    /**
     * <p>A list of IDs for affected entities.</p>
     */
    inline bool EntityValuesHasBeenSet() const { return m_entityValuesHasBeenSet; }

    /**
     * <p>A list of IDs for affected entities.</p>
     */
    inline void SetEntityValues(const Aws::Vector<Aws::String>& value) { m_entityValuesHasBeenSet = true; m_entityValues = value; }

    /**
     * <p>A list of IDs for affected entities.</p>
     */
    inline void SetEntityValues(Aws::Vector<Aws::String>&& value) { m_entityValuesHasBeenSet = true; m_entityValues = std::move(value); }

    /**
     * <p>A list of IDs for affected entities.</p>
     */
    inline EntityFilter& WithEntityValues(const Aws::Vector<Aws::String>& value) { SetEntityValues(value); return *this;}

    /**
     * <p>A list of IDs for affected entities.</p>
     */
    inline EntityFilter& WithEntityValues(Aws::Vector<Aws::String>&& value) { SetEntityValues(std::move(value)); return *this;}

    /**
     * <p>A list of IDs for affected entities.</p>
     */
    inline EntityFilter& AddEntityValues(const Aws::String& value) { m_entityValuesHasBeenSet = true; m_entityValues.push_back(value); return *this; }

    /**
     * <p>A list of IDs for affected entities.</p>
     */
    inline EntityFilter& AddEntityValues(Aws::String&& value) { m_entityValuesHasBeenSet = true; m_entityValues.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of IDs for affected entities.</p>
     */
    inline EntityFilter& AddEntityValues(const char* value) { m_entityValuesHasBeenSet = true; m_entityValues.push_back(value); return *this; }


    /**
     * <p>A list of the most recent dates and times that the entity was updated.</p>
     */
    inline const Aws::Vector<DateTimeRange>& GetLastUpdatedTimes() const{ return m_lastUpdatedTimes; }

    /**
     * <p>A list of the most recent dates and times that the entity was updated.</p>
     */
    inline bool LastUpdatedTimesHasBeenSet() const { return m_lastUpdatedTimesHasBeenSet; }

    /**
     * <p>A list of the most recent dates and times that the entity was updated.</p>
     */
    inline void SetLastUpdatedTimes(const Aws::Vector<DateTimeRange>& value) { m_lastUpdatedTimesHasBeenSet = true; m_lastUpdatedTimes = value; }

    /**
     * <p>A list of the most recent dates and times that the entity was updated.</p>
     */
    inline void SetLastUpdatedTimes(Aws::Vector<DateTimeRange>&& value) { m_lastUpdatedTimesHasBeenSet = true; m_lastUpdatedTimes = std::move(value); }

    /**
     * <p>A list of the most recent dates and times that the entity was updated.</p>
     */
    inline EntityFilter& WithLastUpdatedTimes(const Aws::Vector<DateTimeRange>& value) { SetLastUpdatedTimes(value); return *this;}

    /**
     * <p>A list of the most recent dates and times that the entity was updated.</p>
     */
    inline EntityFilter& WithLastUpdatedTimes(Aws::Vector<DateTimeRange>&& value) { SetLastUpdatedTimes(std::move(value)); return *this;}

    /**
     * <p>A list of the most recent dates and times that the entity was updated.</p>
     */
    inline EntityFilter& AddLastUpdatedTimes(const DateTimeRange& value) { m_lastUpdatedTimesHasBeenSet = true; m_lastUpdatedTimes.push_back(value); return *this; }

    /**
     * <p>A list of the most recent dates and times that the entity was updated.</p>
     */
    inline EntityFilter& AddLastUpdatedTimes(DateTimeRange&& value) { m_lastUpdatedTimesHasBeenSet = true; m_lastUpdatedTimes.push_back(std::move(value)); return *this; }


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
    inline EntityFilter& WithTags(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { SetTags(value); return *this;}

    /**
     * <p>A map of entity tags attached to the affected entity.</p> 
     * <p>Currently, the <code>tags</code> property isn't supported.</p> 
     */
    inline EntityFilter& WithTags(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map of entity tags attached to the affected entity.</p> 
     * <p>Currently, the <code>tags</code> property isn't supported.</p> 
     */
    inline EntityFilter& AddTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A map of entity tags attached to the affected entity.</p> 
     * <p>Currently, the <code>tags</code> property isn't supported.</p> 
     */
    inline EntityFilter& AddTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of entity status codes (<code>IMPAIRED</code>,
     * <code>UNIMPAIRED</code>, or <code>UNKNOWN</code>).</p>
     */
    inline const Aws::Vector<EntityStatusCode>& GetStatusCodes() const{ return m_statusCodes; }

    /**
     * <p>A list of entity status codes (<code>IMPAIRED</code>,
     * <code>UNIMPAIRED</code>, or <code>UNKNOWN</code>).</p>
     */
    inline bool StatusCodesHasBeenSet() const { return m_statusCodesHasBeenSet; }

    /**
     * <p>A list of entity status codes (<code>IMPAIRED</code>,
     * <code>UNIMPAIRED</code>, or <code>UNKNOWN</code>).</p>
     */
    inline void SetStatusCodes(const Aws::Vector<EntityStatusCode>& value) { m_statusCodesHasBeenSet = true; m_statusCodes = value; }

    /**
     * <p>A list of entity status codes (<code>IMPAIRED</code>,
     * <code>UNIMPAIRED</code>, or <code>UNKNOWN</code>).</p>
     */
    inline void SetStatusCodes(Aws::Vector<EntityStatusCode>&& value) { m_statusCodesHasBeenSet = true; m_statusCodes = std::move(value); }

    /**
     * <p>A list of entity status codes (<code>IMPAIRED</code>,
     * <code>UNIMPAIRED</code>, or <code>UNKNOWN</code>).</p>
     */
    inline EntityFilter& WithStatusCodes(const Aws::Vector<EntityStatusCode>& value) { SetStatusCodes(value); return *this;}

    /**
     * <p>A list of entity status codes (<code>IMPAIRED</code>,
     * <code>UNIMPAIRED</code>, or <code>UNKNOWN</code>).</p>
     */
    inline EntityFilter& WithStatusCodes(Aws::Vector<EntityStatusCode>&& value) { SetStatusCodes(std::move(value)); return *this;}

    /**
     * <p>A list of entity status codes (<code>IMPAIRED</code>,
     * <code>UNIMPAIRED</code>, or <code>UNKNOWN</code>).</p>
     */
    inline EntityFilter& AddStatusCodes(const EntityStatusCode& value) { m_statusCodesHasBeenSet = true; m_statusCodes.push_back(value); return *this; }

    /**
     * <p>A list of entity status codes (<code>IMPAIRED</code>,
     * <code>UNIMPAIRED</code>, or <code>UNKNOWN</code>).</p>
     */
    inline EntityFilter& AddStatusCodes(EntityStatusCode&& value) { m_statusCodesHasBeenSet = true; m_statusCodes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_eventArns;
    bool m_eventArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_entityArns;
    bool m_entityArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_entityValues;
    bool m_entityValuesHasBeenSet = false;

    Aws::Vector<DateTimeRange> m_lastUpdatedTimes;
    bool m_lastUpdatedTimesHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<EntityStatusCode> m_statusCodes;
    bool m_statusCodesHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
