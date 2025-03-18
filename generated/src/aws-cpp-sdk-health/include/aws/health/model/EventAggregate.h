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
    AWS_HEALTH_API EventAggregate() = default;
    AWS_HEALTH_API EventAggregate(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API EventAggregate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The issue type for the associated count.</p>
     */
    inline const Aws::String& GetAggregateValue() const { return m_aggregateValue; }
    inline bool AggregateValueHasBeenSet() const { return m_aggregateValueHasBeenSet; }
    template<typename AggregateValueT = Aws::String>
    void SetAggregateValue(AggregateValueT&& value) { m_aggregateValueHasBeenSet = true; m_aggregateValue = std::forward<AggregateValueT>(value); }
    template<typename AggregateValueT = Aws::String>
    EventAggregate& WithAggregateValue(AggregateValueT&& value) { SetAggregateValue(std::forward<AggregateValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of events of the associated issue type.</p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline EventAggregate& WithCount(int value) { SetCount(value); return *this;}
    ///@}
  private:

    Aws::String m_aggregateValue;
    bool m_aggregateValueHasBeenSet = false;

    int m_count{0};
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
