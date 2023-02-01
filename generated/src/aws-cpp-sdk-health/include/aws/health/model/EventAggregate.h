/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The number of events of each issue type. Returned by the <a
   * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEventAggregates.html">DescribeEventAggregates</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/EventAggregate">AWS
   * API Reference</a></p>
   */
  class EventAggregate
  {
  public:
    AWS_HEALTH_API EventAggregate();
    AWS_HEALTH_API EventAggregate(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API EventAggregate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_aggregateValueHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
