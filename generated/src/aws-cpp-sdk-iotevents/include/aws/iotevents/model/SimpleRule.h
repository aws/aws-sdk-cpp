/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/ComparisonOperator.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>A rule that compares an input property value to a threshold value with a
   * comparison operator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/SimpleRule">AWS
   * API Reference</a></p>
   */
  class SimpleRule
  {
  public:
    AWS_IOTEVENTS_API SimpleRule() = default;
    AWS_IOTEVENTS_API SimpleRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API SimpleRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value on the left side of the comparison operator. You can specify an AWS
     * IoT Events input attribute as an input property.</p>
     */
    inline const Aws::String& GetInputProperty() const { return m_inputProperty; }
    inline bool InputPropertyHasBeenSet() const { return m_inputPropertyHasBeenSet; }
    template<typename InputPropertyT = Aws::String>
    void SetInputProperty(InputPropertyT&& value) { m_inputPropertyHasBeenSet = true; m_inputProperty = std::forward<InputPropertyT>(value); }
    template<typename InputPropertyT = Aws::String>
    SimpleRule& WithInputProperty(InputPropertyT&& value) { SetInputProperty(std::forward<InputPropertyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comparison operator.</p>
     */
    inline ComparisonOperator GetComparisonOperator() const { return m_comparisonOperator; }
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
    inline void SetComparisonOperator(ComparisonOperator value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }
    inline SimpleRule& WithComparisonOperator(ComparisonOperator value) { SetComparisonOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value on the right side of the comparison operator. You can enter a
     * number or specify an AWS IoT Events input attribute.</p>
     */
    inline const Aws::String& GetThreshold() const { return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    template<typename ThresholdT = Aws::String>
    void SetThreshold(ThresholdT&& value) { m_thresholdHasBeenSet = true; m_threshold = std::forward<ThresholdT>(value); }
    template<typename ThresholdT = Aws::String>
    SimpleRule& WithThreshold(ThresholdT&& value) { SetThreshold(std::forward<ThresholdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inputProperty;
    bool m_inputPropertyHasBeenSet = false;

    ComparisonOperator m_comparisonOperator{ComparisonOperator::NOT_SET};
    bool m_comparisonOperatorHasBeenSet = false;

    Aws::String m_threshold;
    bool m_thresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
