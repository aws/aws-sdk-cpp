﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/health/model/DateTimeRange.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/health/model/EntityStatusCode.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Health
{
namespace Model
{

  /**
   * <p>The values to use to filter results from the <a>DescribeAffectedEntities</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/EntityFilter">AWS
   * API Reference</a></p>
   */
  class AWS_HEALTH_API EntityFilter
  {
  public:
    EntityFilter();
    EntityFilter(const Aws::Utils::Json::JsonValue& jsonValue);
    EntityFilter& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/AWS_EC2_MAINTENANCE_5331",
     * "arn:aws:health:us-west-1::event/AWS_EBS_LOST_VOLUME_xyz"</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetEventArns() const{ return m_eventArns; }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/AWS_EC2_MAINTENANCE_5331",
     * "arn:aws:health:us-west-1::event/AWS_EBS_LOST_VOLUME_xyz"</code> </p>
     */
    inline void SetEventArns(const Aws::Vector<Aws::String>& value) { m_eventArnsHasBeenSet = true; m_eventArns = value; }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/AWS_EC2_MAINTENANCE_5331",
     * "arn:aws:health:us-west-1::event/AWS_EBS_LOST_VOLUME_xyz"</code> </p>
     */
    inline void SetEventArns(Aws::Vector<Aws::String>&& value) { m_eventArnsHasBeenSet = true; m_eventArns = value; }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/AWS_EC2_MAINTENANCE_5331",
     * "arn:aws:health:us-west-1::event/AWS_EBS_LOST_VOLUME_xyz"</code> </p>
     */
    inline EntityFilter& WithEventArns(const Aws::Vector<Aws::String>& value) { SetEventArns(value); return *this;}

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/AWS_EC2_MAINTENANCE_5331",
     * "arn:aws:health:us-west-1::event/AWS_EBS_LOST_VOLUME_xyz"</code> </p>
     */
    inline EntityFilter& WithEventArns(Aws::Vector<Aws::String>&& value) { SetEventArns(value); return *this;}

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/AWS_EC2_MAINTENANCE_5331",
     * "arn:aws:health:us-west-1::event/AWS_EBS_LOST_VOLUME_xyz"</code> </p>
     */
    inline EntityFilter& AddEventArns(const Aws::String& value) { m_eventArnsHasBeenSet = true; m_eventArns.push_back(value); return *this; }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/AWS_EC2_MAINTENANCE_5331",
     * "arn:aws:health:us-west-1::event/AWS_EBS_LOST_VOLUME_xyz"</code> </p>
     */
    inline EntityFilter& AddEventArns(Aws::String&& value) { m_eventArnsHasBeenSet = true; m_eventArns.push_back(value); return *this; }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/AWS_EC2_MAINTENANCE_5331",
     * "arn:aws:health:us-west-1::event/AWS_EBS_LOST_VOLUME_xyz"</code> </p>
     */
    inline EntityFilter& AddEventArns(const char* value) { m_eventArnsHasBeenSet = true; m_eventArns.push_back(value); return *this; }

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntityArns() const{ return m_entityArns; }

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline void SetEntityArns(const Aws::Vector<Aws::String>& value) { m_entityArnsHasBeenSet = true; m_entityArns = value; }

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline void SetEntityArns(Aws::Vector<Aws::String>&& value) { m_entityArnsHasBeenSet = true; m_entityArns = value; }

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline EntityFilter& WithEntityArns(const Aws::Vector<Aws::String>& value) { SetEntityArns(value); return *this;}

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline EntityFilter& WithEntityArns(Aws::Vector<Aws::String>&& value) { SetEntityArns(value); return *this;}

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline EntityFilter& AddEntityArns(const Aws::String& value) { m_entityArnsHasBeenSet = true; m_entityArns.push_back(value); return *this; }

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline EntityFilter& AddEntityArns(Aws::String&& value) { m_entityArnsHasBeenSet = true; m_entityArns.push_back(value); return *this; }

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
    inline void SetEntityValues(const Aws::Vector<Aws::String>& value) { m_entityValuesHasBeenSet = true; m_entityValues = value; }

    /**
     * <p>A list of IDs for affected entities.</p>
     */
    inline void SetEntityValues(Aws::Vector<Aws::String>&& value) { m_entityValuesHasBeenSet = true; m_entityValues = value; }

    /**
     * <p>A list of IDs for affected entities.</p>
     */
    inline EntityFilter& WithEntityValues(const Aws::Vector<Aws::String>& value) { SetEntityValues(value); return *this;}

    /**
     * <p>A list of IDs for affected entities.</p>
     */
    inline EntityFilter& WithEntityValues(Aws::Vector<Aws::String>&& value) { SetEntityValues(value); return *this;}

    /**
     * <p>A list of IDs for affected entities.</p>
     */
    inline EntityFilter& AddEntityValues(const Aws::String& value) { m_entityValuesHasBeenSet = true; m_entityValues.push_back(value); return *this; }

    /**
     * <p>A list of IDs for affected entities.</p>
     */
    inline EntityFilter& AddEntityValues(Aws::String&& value) { m_entityValuesHasBeenSet = true; m_entityValues.push_back(value); return *this; }

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
    inline void SetLastUpdatedTimes(const Aws::Vector<DateTimeRange>& value) { m_lastUpdatedTimesHasBeenSet = true; m_lastUpdatedTimes = value; }

    /**
     * <p>A list of the most recent dates and times that the entity was updated.</p>
     */
    inline void SetLastUpdatedTimes(Aws::Vector<DateTimeRange>&& value) { m_lastUpdatedTimesHasBeenSet = true; m_lastUpdatedTimes = value; }

    /**
     * <p>A list of the most recent dates and times that the entity was updated.</p>
     */
    inline EntityFilter& WithLastUpdatedTimes(const Aws::Vector<DateTimeRange>& value) { SetLastUpdatedTimes(value); return *this;}

    /**
     * <p>A list of the most recent dates and times that the entity was updated.</p>
     */
    inline EntityFilter& WithLastUpdatedTimes(Aws::Vector<DateTimeRange>&& value) { SetLastUpdatedTimes(value); return *this;}

    /**
     * <p>A list of the most recent dates and times that the entity was updated.</p>
     */
    inline EntityFilter& AddLastUpdatedTimes(const DateTimeRange& value) { m_lastUpdatedTimesHasBeenSet = true; m_lastUpdatedTimes.push_back(value); return *this; }

    /**
     * <p>A list of the most recent dates and times that the entity was updated.</p>
     */
    inline EntityFilter& AddLastUpdatedTimes(DateTimeRange&& value) { m_lastUpdatedTimesHasBeenSet = true; m_lastUpdatedTimes.push_back(value); return *this; }

    /**
     * <p>A map of entity tags attached to the affected entity.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetTags() const{ return m_tags; }

    /**
     * <p>A map of entity tags attached to the affected entity.</p>
     */
    inline void SetTags(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map of entity tags attached to the affected entity.</p>
     */
    inline void SetTags(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map of entity tags attached to the affected entity.</p>
     */
    inline EntityFilter& WithTags(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { SetTags(value); return *this;}

    /**
     * <p>A map of entity tags attached to the affected entity.</p>
     */
    inline EntityFilter& WithTags(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { SetTags(value); return *this;}

    /**
     * <p>A map of entity tags attached to the affected entity.</p>
     */
    inline EntityFilter& AddTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A map of entity tags attached to the affected entity.</p>
     */
    inline EntityFilter& AddTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of entity status codes (<code>IMPAIRED</code>,
     * <code>UNIMPAIRED</code>, or <code>UNKNOWN</code>).</p>
     */
    inline const Aws::Vector<EntityStatusCode>& GetStatusCodes() const{ return m_statusCodes; }

    /**
     * <p>A list of entity status codes (<code>IMPAIRED</code>,
     * <code>UNIMPAIRED</code>, or <code>UNKNOWN</code>).</p>
     */
    inline void SetStatusCodes(const Aws::Vector<EntityStatusCode>& value) { m_statusCodesHasBeenSet = true; m_statusCodes = value; }

    /**
     * <p>A list of entity status codes (<code>IMPAIRED</code>,
     * <code>UNIMPAIRED</code>, or <code>UNKNOWN</code>).</p>
     */
    inline void SetStatusCodes(Aws::Vector<EntityStatusCode>&& value) { m_statusCodesHasBeenSet = true; m_statusCodes = value; }

    /**
     * <p>A list of entity status codes (<code>IMPAIRED</code>,
     * <code>UNIMPAIRED</code>, or <code>UNKNOWN</code>).</p>
     */
    inline EntityFilter& WithStatusCodes(const Aws::Vector<EntityStatusCode>& value) { SetStatusCodes(value); return *this;}

    /**
     * <p>A list of entity status codes (<code>IMPAIRED</code>,
     * <code>UNIMPAIRED</code>, or <code>UNKNOWN</code>).</p>
     */
    inline EntityFilter& WithStatusCodes(Aws::Vector<EntityStatusCode>&& value) { SetStatusCodes(value); return *this;}

    /**
     * <p>A list of entity status codes (<code>IMPAIRED</code>,
     * <code>UNIMPAIRED</code>, or <code>UNKNOWN</code>).</p>
     */
    inline EntityFilter& AddStatusCodes(const EntityStatusCode& value) { m_statusCodesHasBeenSet = true; m_statusCodes.push_back(value); return *this; }

    /**
     * <p>A list of entity status codes (<code>IMPAIRED</code>,
     * <code>UNIMPAIRED</code>, or <code>UNKNOWN</code>).</p>
     */
    inline EntityFilter& AddStatusCodes(EntityStatusCode&& value) { m_statusCodesHasBeenSet = true; m_statusCodes.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_eventArns;
    bool m_eventArnsHasBeenSet;
    Aws::Vector<Aws::String> m_entityArns;
    bool m_entityArnsHasBeenSet;
    Aws::Vector<Aws::String> m_entityValues;
    bool m_entityValuesHasBeenSet;
    Aws::Vector<DateTimeRange> m_lastUpdatedTimes;
    bool m_lastUpdatedTimesHasBeenSet;
    Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_tags;
    bool m_tagsHasBeenSet;
    Aws::Vector<EntityStatusCode> m_statusCodes;
    bool m_statusCodesHasBeenSet;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
