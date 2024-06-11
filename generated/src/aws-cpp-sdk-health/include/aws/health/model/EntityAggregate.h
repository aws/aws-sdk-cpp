﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The number of entities that are affected by one or more events. Returned by
   * the <a
   * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEntityAggregates.html">DescribeEntityAggregates</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/EntityAggregate">AWS
   * API Reference</a></p>
   */
  class EntityAggregate
  {
  public:
    AWS_HEALTH_API EntityAggregate();
    AWS_HEALTH_API EntityAggregate(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API EntityAggregate& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline const Aws::String& GetEventArn() const{ return m_eventArn; }
    inline bool EventArnHasBeenSet() const { return m_eventArnHasBeenSet; }
    inline void SetEventArn(const Aws::String& value) { m_eventArnHasBeenSet = true; m_eventArn = value; }
    inline void SetEventArn(Aws::String&& value) { m_eventArnHasBeenSet = true; m_eventArn = std::move(value); }
    inline void SetEventArn(const char* value) { m_eventArnHasBeenSet = true; m_eventArn.assign(value); }
    inline EntityAggregate& WithEventArn(const Aws::String& value) { SetEventArn(value); return *this;}
    inline EntityAggregate& WithEventArn(Aws::String&& value) { SetEventArn(std::move(value)); return *this;}
    inline EntityAggregate& WithEventArn(const char* value) { SetEventArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of entities that match the criteria for the specified events.</p>
     */
    inline int GetCount() const{ return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline EntityAggregate& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of affected entities aggregated by the entity status codes.</p>
     */
    inline const Aws::Map<EntityStatusCode, int>& GetStatuses() const{ return m_statuses; }
    inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }
    inline void SetStatuses(const Aws::Map<EntityStatusCode, int>& value) { m_statusesHasBeenSet = true; m_statuses = value; }
    inline void SetStatuses(Aws::Map<EntityStatusCode, int>&& value) { m_statusesHasBeenSet = true; m_statuses = std::move(value); }
    inline EntityAggregate& WithStatuses(const Aws::Map<EntityStatusCode, int>& value) { SetStatuses(value); return *this;}
    inline EntityAggregate& WithStatuses(Aws::Map<EntityStatusCode, int>&& value) { SetStatuses(std::move(value)); return *this;}
    inline EntityAggregate& AddStatuses(const EntityStatusCode& key, int value) { m_statusesHasBeenSet = true; m_statuses.emplace(key, value); return *this; }
    inline EntityAggregate& AddStatuses(EntityStatusCode&& key, int value) { m_statusesHasBeenSet = true; m_statuses.emplace(std::move(key), value); return *this; }
    ///@}
  private:

    Aws::String m_eventArn;
    bool m_eventArnHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;

    Aws::Map<EntityStatusCode, int> m_statuses;
    bool m_statusesHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
