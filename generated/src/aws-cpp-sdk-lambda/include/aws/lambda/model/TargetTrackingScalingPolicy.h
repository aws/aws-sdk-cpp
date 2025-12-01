/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/CapacityProviderPredefinedMetricType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {

/**
 * <p>A scaling policy for the capacity provider that automatically adjusts
 * capacity to maintain a target value for a specific metric.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/TargetTrackingScalingPolicy">AWS
 * API Reference</a></p>
 */
class TargetTrackingScalingPolicy {
 public:
  AWS_LAMBDA_API TargetTrackingScalingPolicy() = default;
  AWS_LAMBDA_API TargetTrackingScalingPolicy(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API TargetTrackingScalingPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The predefined metric type to track for scaling decisions.</p>
   */
  inline CapacityProviderPredefinedMetricType GetPredefinedMetricType() const { return m_predefinedMetricType; }
  inline bool PredefinedMetricTypeHasBeenSet() const { return m_predefinedMetricTypeHasBeenSet; }
  inline void SetPredefinedMetricType(CapacityProviderPredefinedMetricType value) {
    m_predefinedMetricTypeHasBeenSet = true;
    m_predefinedMetricType = value;
  }
  inline TargetTrackingScalingPolicy& WithPredefinedMetricType(CapacityProviderPredefinedMetricType value) {
    SetPredefinedMetricType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target value for the metric that the scaling policy attempts to maintain
   * through scaling actions.</p>
   */
  inline double GetTargetValue() const { return m_targetValue; }
  inline bool TargetValueHasBeenSet() const { return m_targetValueHasBeenSet; }
  inline void SetTargetValue(double value) {
    m_targetValueHasBeenSet = true;
    m_targetValue = value;
  }
  inline TargetTrackingScalingPolicy& WithTargetValue(double value) {
    SetTargetValue(value);
    return *this;
  }
  ///@}
 private:
  CapacityProviderPredefinedMetricType m_predefinedMetricType{CapacityProviderPredefinedMetricType::NOT_SET};
  bool m_predefinedMetricTypeHasBeenSet = false;

  double m_targetValue{0.0};
  bool m_targetValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
