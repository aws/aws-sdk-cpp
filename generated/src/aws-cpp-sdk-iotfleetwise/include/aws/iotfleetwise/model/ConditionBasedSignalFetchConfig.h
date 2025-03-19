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
   * <p>Specifies the condition under which a signal fetch occurs.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ConditionBasedSignalFetchConfig">AWS
   * API Reference</a></p>
   */
  class ConditionBasedSignalFetchConfig
  {
  public:
    AWS_IOTFLEETWISE_API ConditionBasedSignalFetchConfig() = default;
    AWS_IOTFLEETWISE_API ConditionBasedSignalFetchConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API ConditionBasedSignalFetchConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The condition that must be satisfied to trigger a signal fetch.</p>
     */
    inline const Aws::String& GetConditionExpression() const { return m_conditionExpression; }
    inline bool ConditionExpressionHasBeenSet() const { return m_conditionExpressionHasBeenSet; }
    template<typename ConditionExpressionT = Aws::String>
    void SetConditionExpression(ConditionExpressionT&& value) { m_conditionExpressionHasBeenSet = true; m_conditionExpression = std::forward<ConditionExpressionT>(value); }
    template<typename ConditionExpressionT = Aws::String>
    ConditionBasedSignalFetchConfig& WithConditionExpression(ConditionExpressionT&& value) { SetConditionExpression(std::forward<ConditionExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the mode in which the signal fetch is triggered.</p>
     */
    inline TriggerMode GetTriggerMode() const { return m_triggerMode; }
    inline bool TriggerModeHasBeenSet() const { return m_triggerModeHasBeenSet; }
    inline void SetTriggerMode(TriggerMode value) { m_triggerModeHasBeenSet = true; m_triggerMode = value; }
    inline ConditionBasedSignalFetchConfig& WithTriggerMode(TriggerMode value) { SetTriggerMode(value); return *this;}
    ///@}
  private:

    Aws::String m_conditionExpression;
    bool m_conditionExpressionHasBeenSet = false;

    TriggerMode m_triggerMode{TriggerMode::NOT_SET};
    bool m_triggerModeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
