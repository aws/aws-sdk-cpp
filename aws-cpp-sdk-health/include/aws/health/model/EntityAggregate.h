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
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * <p>The number of entities that are affected by one or more events. Returned by
   * the <a>DescribeEntityAggregates</a> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/EntityAggregate">AWS
   * API Reference</a></p>
   */
  class AWS_HEALTH_API EntityAggregate
  {
  public:
    EntityAggregate();
    EntityAggregate(const Aws::Utils::Json::JsonValue& jsonValue);
    EntityAggregate& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The unique identifier for the event. Format:
     * <code>arn:aws:health:<i>event-region</i>::event/<i>EVENT_TYPE_PLUS_ID</i>
     * </code>. Example:
     * <code>arn:aws:health:us-east-1::event/AWS_EC2_MAINTENANCE_5331</code> </p>
     */
    inline const Aws::String& GetEventArn() const{ return m_eventArn; }

    /**
     * <p>The unique identifier for the event. Format:
     * <code>arn:aws:health:<i>event-region</i>::event/<i>EVENT_TYPE_PLUS_ID</i>
     * </code>. Example:
     * <code>arn:aws:health:us-east-1::event/AWS_EC2_MAINTENANCE_5331</code> </p>
     */
    inline void SetEventArn(const Aws::String& value) { m_eventArnHasBeenSet = true; m_eventArn = value; }

    /**
     * <p>The unique identifier for the event. Format:
     * <code>arn:aws:health:<i>event-region</i>::event/<i>EVENT_TYPE_PLUS_ID</i>
     * </code>. Example:
     * <code>arn:aws:health:us-east-1::event/AWS_EC2_MAINTENANCE_5331</code> </p>
     */
    inline void SetEventArn(Aws::String&& value) { m_eventArnHasBeenSet = true; m_eventArn = value; }

    /**
     * <p>The unique identifier for the event. Format:
     * <code>arn:aws:health:<i>event-region</i>::event/<i>EVENT_TYPE_PLUS_ID</i>
     * </code>. Example:
     * <code>arn:aws:health:us-east-1::event/AWS_EC2_MAINTENANCE_5331</code> </p>
     */
    inline void SetEventArn(const char* value) { m_eventArnHasBeenSet = true; m_eventArn.assign(value); }

    /**
     * <p>The unique identifier for the event. Format:
     * <code>arn:aws:health:<i>event-region</i>::event/<i>EVENT_TYPE_PLUS_ID</i>
     * </code>. Example:
     * <code>arn:aws:health:us-east-1::event/AWS_EC2_MAINTENANCE_5331</code> </p>
     */
    inline EntityAggregate& WithEventArn(const Aws::String& value) { SetEventArn(value); return *this;}

    /**
     * <p>The unique identifier for the event. Format:
     * <code>arn:aws:health:<i>event-region</i>::event/<i>EVENT_TYPE_PLUS_ID</i>
     * </code>. Example:
     * <code>arn:aws:health:us-east-1::event/AWS_EC2_MAINTENANCE_5331</code> </p>
     */
    inline EntityAggregate& WithEventArn(Aws::String&& value) { SetEventArn(value); return *this;}

    /**
     * <p>The unique identifier for the event. Format:
     * <code>arn:aws:health:<i>event-region</i>::event/<i>EVENT_TYPE_PLUS_ID</i>
     * </code>. Example:
     * <code>arn:aws:health:us-east-1::event/AWS_EC2_MAINTENANCE_5331</code> </p>
     */
    inline EntityAggregate& WithEventArn(const char* value) { SetEventArn(value); return *this;}

    /**
     * <p>The number entities that match the criteria for the specified events.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number entities that match the criteria for the specified events.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number entities that match the criteria for the specified events.</p>
     */
    inline EntityAggregate& WithCount(int value) { SetCount(value); return *this;}

  private:
    Aws::String m_eventArn;
    bool m_eventArnHasBeenSet;
    int m_count;
    bool m_countHasBeenSet;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
