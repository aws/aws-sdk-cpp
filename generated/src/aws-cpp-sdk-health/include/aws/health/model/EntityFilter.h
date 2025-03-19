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
    AWS_HEALTH_API EntityFilter() = default;
    AWS_HEALTH_API EntityFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API EntityFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    EntityFilter& WithEventArns(EventArnsT&& value) { SetEventArns(std::forward<EventArnsT>(value)); return *this;}
    template<typename EventArnsT = Aws::String>
    EntityFilter& AddEventArns(EventArnsT&& value) { m_eventArnsHasBeenSet = true; m_eventArns.emplace_back(std::forward<EventArnsT>(value)); return *this; }
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
    EntityFilter& WithEntityArns(EntityArnsT&& value) { SetEntityArns(std::forward<EntityArnsT>(value)); return *this;}
    template<typename EntityArnsT = Aws::String>
    EntityFilter& AddEntityArns(EntityArnsT&& value) { m_entityArnsHasBeenSet = true; m_entityArns.emplace_back(std::forward<EntityArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of IDs for affected entities.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntityValues() const { return m_entityValues; }
    inline bool EntityValuesHasBeenSet() const { return m_entityValuesHasBeenSet; }
    template<typename EntityValuesT = Aws::Vector<Aws::String>>
    void SetEntityValues(EntityValuesT&& value) { m_entityValuesHasBeenSet = true; m_entityValues = std::forward<EntityValuesT>(value); }
    template<typename EntityValuesT = Aws::Vector<Aws::String>>
    EntityFilter& WithEntityValues(EntityValuesT&& value) { SetEntityValues(std::forward<EntityValuesT>(value)); return *this;}
    template<typename EntityValuesT = Aws::String>
    EntityFilter& AddEntityValues(EntityValuesT&& value) { m_entityValuesHasBeenSet = true; m_entityValues.emplace_back(std::forward<EntityValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the most recent dates and times that the entity was updated.</p>
     */
    inline const Aws::Vector<DateTimeRange>& GetLastUpdatedTimes() const { return m_lastUpdatedTimes; }
    inline bool LastUpdatedTimesHasBeenSet() const { return m_lastUpdatedTimesHasBeenSet; }
    template<typename LastUpdatedTimesT = Aws::Vector<DateTimeRange>>
    void SetLastUpdatedTimes(LastUpdatedTimesT&& value) { m_lastUpdatedTimesHasBeenSet = true; m_lastUpdatedTimes = std::forward<LastUpdatedTimesT>(value); }
    template<typename LastUpdatedTimesT = Aws::Vector<DateTimeRange>>
    EntityFilter& WithLastUpdatedTimes(LastUpdatedTimesT&& value) { SetLastUpdatedTimes(std::forward<LastUpdatedTimesT>(value)); return *this;}
    template<typename LastUpdatedTimesT = DateTimeRange>
    EntityFilter& AddLastUpdatedTimes(LastUpdatedTimesT&& value) { m_lastUpdatedTimesHasBeenSet = true; m_lastUpdatedTimes.emplace_back(std::forward<LastUpdatedTimesT>(value)); return *this; }
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
    EntityFilter& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    EntityFilter& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of entity status codes (<code>IMPAIRED</code>,
     * <code>UNIMPAIRED</code>, or <code>UNKNOWN</code>).</p>
     */
    inline const Aws::Vector<EntityStatusCode>& GetStatusCodes() const { return m_statusCodes; }
    inline bool StatusCodesHasBeenSet() const { return m_statusCodesHasBeenSet; }
    template<typename StatusCodesT = Aws::Vector<EntityStatusCode>>
    void SetStatusCodes(StatusCodesT&& value) { m_statusCodesHasBeenSet = true; m_statusCodes = std::forward<StatusCodesT>(value); }
    template<typename StatusCodesT = Aws::Vector<EntityStatusCode>>
    EntityFilter& WithStatusCodes(StatusCodesT&& value) { SetStatusCodes(std::forward<StatusCodesT>(value)); return *this;}
    inline EntityFilter& AddStatusCodes(EntityStatusCode value) { m_statusCodesHasBeenSet = true; m_statusCodes.push_back(value); return *this; }
    ///@}
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
