/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/TriggerMode.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>Information about a collection scheme that uses a simple logical expression
   * to recognize what data to collect.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ConditionBasedCollectionScheme">AWS
   * API Reference</a></p>
   */
  class ConditionBasedCollectionScheme
  {
  public:
    AWS_IOTFLEETWISE_API ConditionBasedCollectionScheme() = default;
    AWS_IOTFLEETWISE_API ConditionBasedCollectionScheme(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API ConditionBasedCollectionScheme& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The logical expression used to recognize what data to collect. For example,
     * <code>$variable.`Vehicle.OutsideAirTemperature` &gt;= 105.0</code>.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    ConditionBasedCollectionScheme& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum duration of time between two triggering events to collect data,
     * in milliseconds.</p>  <p>If a signal changes often, you might want to
     * collect data at a slower rate.</p> 
     */
    inline long long GetMinimumTriggerIntervalMs() const { return m_minimumTriggerIntervalMs; }
    inline bool MinimumTriggerIntervalMsHasBeenSet() const { return m_minimumTriggerIntervalMsHasBeenSet; }
    inline void SetMinimumTriggerIntervalMs(long long value) { m_minimumTriggerIntervalMsHasBeenSet = true; m_minimumTriggerIntervalMs = value; }
    inline ConditionBasedCollectionScheme& WithMinimumTriggerIntervalMs(long long value) { SetMinimumTriggerIntervalMs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to collect data for all triggering events (<code>ALWAYS</code>).
     * Specify (<code>RISING_EDGE</code>), or specify only when the condition first
     * evaluates to false. For example, triggering on "AirbagDeployed"; Users aren't
     * interested on triggering when the airbag is already exploded; they only care
     * about the change from not deployed =&gt; deployed.</p>
     */
    inline TriggerMode GetTriggerMode() const { return m_triggerMode; }
    inline bool TriggerModeHasBeenSet() const { return m_triggerModeHasBeenSet; }
    inline void SetTriggerMode(TriggerMode value) { m_triggerModeHasBeenSet = true; m_triggerMode = value; }
    inline ConditionBasedCollectionScheme& WithTriggerMode(TriggerMode value) { SetTriggerMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the version of the conditional expression language.</p>
     */
    inline int GetConditionLanguageVersion() const { return m_conditionLanguageVersion; }
    inline bool ConditionLanguageVersionHasBeenSet() const { return m_conditionLanguageVersionHasBeenSet; }
    inline void SetConditionLanguageVersion(int value) { m_conditionLanguageVersionHasBeenSet = true; m_conditionLanguageVersion = value; }
    inline ConditionBasedCollectionScheme& WithConditionLanguageVersion(int value) { SetConditionLanguageVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    long long m_minimumTriggerIntervalMs{0};
    bool m_minimumTriggerIntervalMsHasBeenSet = false;

    TriggerMode m_triggerMode{TriggerMode::NOT_SET};
    bool m_triggerModeHasBeenSet = false;

    int m_conditionLanguageVersion{0};
    bool m_conditionLanguageVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
