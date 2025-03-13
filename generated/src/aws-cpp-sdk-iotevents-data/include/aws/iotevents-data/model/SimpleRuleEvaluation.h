/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents-data/model/ComparisonOperator.h>
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
namespace IoTEventsData
{
namespace Model
{

  /**
   * <p>Information needed to compare two values with a comparison
   * operator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/SimpleRuleEvaluation">AWS
   * API Reference</a></p>
   */
  class SimpleRuleEvaluation
  {
  public:
    AWS_IOTEVENTSDATA_API SimpleRuleEvaluation() = default;
    AWS_IOTEVENTSDATA_API SimpleRuleEvaluation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API SimpleRuleEvaluation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of the input property, on the left side of the comparison
     * operator.</p>
     */
    inline const Aws::String& GetInputPropertyValue() const { return m_inputPropertyValue; }
    inline bool InputPropertyValueHasBeenSet() const { return m_inputPropertyValueHasBeenSet; }
    template<typename InputPropertyValueT = Aws::String>
    void SetInputPropertyValue(InputPropertyValueT&& value) { m_inputPropertyValueHasBeenSet = true; m_inputPropertyValue = std::forward<InputPropertyValueT>(value); }
    template<typename InputPropertyValueT = Aws::String>
    SimpleRuleEvaluation& WithInputPropertyValue(InputPropertyValueT&& value) { SetInputPropertyValue(std::forward<InputPropertyValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comparison operator.</p>
     */
    inline ComparisonOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(ComparisonOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline SimpleRuleEvaluation& WithOperator(ComparisonOperator value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The threshold value, on the right side of the comparison operator.</p>
     */
    inline const Aws::String& GetThresholdValue() const { return m_thresholdValue; }
    inline bool ThresholdValueHasBeenSet() const { return m_thresholdValueHasBeenSet; }
    template<typename ThresholdValueT = Aws::String>
    void SetThresholdValue(ThresholdValueT&& value) { m_thresholdValueHasBeenSet = true; m_thresholdValue = std::forward<ThresholdValueT>(value); }
    template<typename ThresholdValueT = Aws::String>
    SimpleRuleEvaluation& WithThresholdValue(ThresholdValueT&& value) { SetThresholdValue(std::forward<ThresholdValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inputPropertyValue;
    bool m_inputPropertyValueHasBeenSet = false;

    ComparisonOperator m_operator{ComparisonOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;

    Aws::String m_thresholdValue;
    bool m_thresholdValueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
