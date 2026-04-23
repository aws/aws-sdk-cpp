/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>The number of events of each issue type. Returned by the
   * <a>DescribeEventAggregates</a> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/EventAggregate">AWS
   * API Reference</a></p>
   */
  class AWS_HEALTH_API EventAggregate
  {
  public:
    EventAggregate();
    EventAggregate(Aws::Utils::Json::JsonView jsonValue);
    EventAggregate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The issue type for the associated count.</p>
     */
    inline const Aws::String& GetAggregateValue() const{ return m_aggregateValue; }

    /**
     * <p>The issue type for the associated count.</p>
     */
    inline bool AggregateValueHasBeenSet() const { return m_aggregateValueHasBeenSet; }

    /**
     * <p>The issue type for the associated count.</p>
     */
    inline void SetAggregateValue(const Aws::String& value) { m_aggregateValueHasBeenSet = true; m_aggregateValue = value; }

    /**
     * <p>The issue type for the associated count.</p>
     */
    inline void SetAggregateValue(Aws::String&& value) { m_aggregateValueHasBeenSet = true; m_aggregateValue = std::move(value); }

    /**
     * <p>The issue type for the associated count.</p>
     */
    inline void SetAggregateValue(const char* value) { m_aggregateValueHasBeenSet = true; m_aggregateValue.assign(value); }

    /**
     * <p>The issue type for the associated count.</p>
     */
    inline EventAggregate& WithAggregateValue(const Aws::String& value) { SetAggregateValue(value); return *this;}

    /**
     * <p>The issue type for the associated count.</p>
     */
    inline EventAggregate& WithAggregateValue(Aws::String&& value) { SetAggregateValue(std::move(value)); return *this;}

    /**
     * <p>The issue type for the associated count.</p>
     */
    inline EventAggregate& WithAggregateValue(const char* value) { SetAggregateValue(value); return *this;}


    /**
     * <p>The number of events of the associated issue type.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of events of the associated issue type.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of events of the associated issue type.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of events of the associated issue type.</p>
     */
    inline EventAggregate& WithCount(int value) { SetCount(value); return *this;}

  private:

    Aws::String m_aggregateValue;
    bool m_aggregateValueHasBeenSet;

    int m_count;
    bool m_countHasBeenSet;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
