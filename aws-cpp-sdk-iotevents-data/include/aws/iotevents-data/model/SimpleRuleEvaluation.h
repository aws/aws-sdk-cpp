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
    AWS_IOTEVENTSDATA_API SimpleRuleEvaluation();
    AWS_IOTEVENTSDATA_API SimpleRuleEvaluation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API SimpleRuleEvaluation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of the input property, on the left side of the comparison
     * operator.</p>
     */
    inline const Aws::String& GetInputPropertyValue() const{ return m_inputPropertyValue; }

    /**
     * <p>The value of the input property, on the left side of the comparison
     * operator.</p>
     */
    inline bool InputPropertyValueHasBeenSet() const { return m_inputPropertyValueHasBeenSet; }

    /**
     * <p>The value of the input property, on the left side of the comparison
     * operator.</p>
     */
    inline void SetInputPropertyValue(const Aws::String& value) { m_inputPropertyValueHasBeenSet = true; m_inputPropertyValue = value; }

    /**
     * <p>The value of the input property, on the left side of the comparison
     * operator.</p>
     */
    inline void SetInputPropertyValue(Aws::String&& value) { m_inputPropertyValueHasBeenSet = true; m_inputPropertyValue = std::move(value); }

    /**
     * <p>The value of the input property, on the left side of the comparison
     * operator.</p>
     */
    inline void SetInputPropertyValue(const char* value) { m_inputPropertyValueHasBeenSet = true; m_inputPropertyValue.assign(value); }

    /**
     * <p>The value of the input property, on the left side of the comparison
     * operator.</p>
     */
    inline SimpleRuleEvaluation& WithInputPropertyValue(const Aws::String& value) { SetInputPropertyValue(value); return *this;}

    /**
     * <p>The value of the input property, on the left side of the comparison
     * operator.</p>
     */
    inline SimpleRuleEvaluation& WithInputPropertyValue(Aws::String&& value) { SetInputPropertyValue(std::move(value)); return *this;}

    /**
     * <p>The value of the input property, on the left side of the comparison
     * operator.</p>
     */
    inline SimpleRuleEvaluation& WithInputPropertyValue(const char* value) { SetInputPropertyValue(value); return *this;}


    /**
     * <p>The comparison operator.</p>
     */
    inline const ComparisonOperator& GetOperator() const{ return m_operator; }

    /**
     * <p>The comparison operator.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The comparison operator.</p>
     */
    inline void SetOperator(const ComparisonOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The comparison operator.</p>
     */
    inline void SetOperator(ComparisonOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The comparison operator.</p>
     */
    inline SimpleRuleEvaluation& WithOperator(const ComparisonOperator& value) { SetOperator(value); return *this;}

    /**
     * <p>The comparison operator.</p>
     */
    inline SimpleRuleEvaluation& WithOperator(ComparisonOperator&& value) { SetOperator(std::move(value)); return *this;}


    /**
     * <p>The threshold value, on the right side of the comparison operator.</p>
     */
    inline const Aws::String& GetThresholdValue() const{ return m_thresholdValue; }

    /**
     * <p>The threshold value, on the right side of the comparison operator.</p>
     */
    inline bool ThresholdValueHasBeenSet() const { return m_thresholdValueHasBeenSet; }

    /**
     * <p>The threshold value, on the right side of the comparison operator.</p>
     */
    inline void SetThresholdValue(const Aws::String& value) { m_thresholdValueHasBeenSet = true; m_thresholdValue = value; }

    /**
     * <p>The threshold value, on the right side of the comparison operator.</p>
     */
    inline void SetThresholdValue(Aws::String&& value) { m_thresholdValueHasBeenSet = true; m_thresholdValue = std::move(value); }

    /**
     * <p>The threshold value, on the right side of the comparison operator.</p>
     */
    inline void SetThresholdValue(const char* value) { m_thresholdValueHasBeenSet = true; m_thresholdValue.assign(value); }

    /**
     * <p>The threshold value, on the right side of the comparison operator.</p>
     */
    inline SimpleRuleEvaluation& WithThresholdValue(const Aws::String& value) { SetThresholdValue(value); return *this;}

    /**
     * <p>The threshold value, on the right side of the comparison operator.</p>
     */
    inline SimpleRuleEvaluation& WithThresholdValue(Aws::String&& value) { SetThresholdValue(std::move(value)); return *this;}

    /**
     * <p>The threshold value, on the right side of the comparison operator.</p>
     */
    inline SimpleRuleEvaluation& WithThresholdValue(const char* value) { SetThresholdValue(value); return *this;}

  private:

    Aws::String m_inputPropertyValue;
    bool m_inputPropertyValueHasBeenSet = false;

    ComparisonOperator m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::String m_thresholdValue;
    bool m_thresholdValueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
