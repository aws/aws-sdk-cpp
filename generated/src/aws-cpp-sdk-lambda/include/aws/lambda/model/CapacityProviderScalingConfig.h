/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/CapacityProviderScalingMode.h>
#include <aws/lambda/model/TargetTrackingScalingPolicy.h>

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
 * <p>Configuration that defines how the capacity provider scales compute instances
 * based on demand and policies.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CapacityProviderScalingConfig">AWS
 * API Reference</a></p>
 */
class CapacityProviderScalingConfig {
 public:
  AWS_LAMBDA_API CapacityProviderScalingConfig() = default;
  AWS_LAMBDA_API CapacityProviderScalingConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API CapacityProviderScalingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum number of vCPUs that the capacity provider can provision across
   * all compute instances.</p>
   */
  inline int GetMaxVCpuCount() const { return m_maxVCpuCount; }
  inline bool MaxVCpuCountHasBeenSet() const { return m_maxVCpuCountHasBeenSet; }
  inline void SetMaxVCpuCount(int value) {
    m_maxVCpuCountHasBeenSet = true;
    m_maxVCpuCount = value;
  }
  inline CapacityProviderScalingConfig& WithMaxVCpuCount(int value) {
    SetMaxVCpuCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scaling mode that determines how the capacity provider responds to
   * changes in demand.</p>
   */
  inline CapacityProviderScalingMode GetScalingMode() const { return m_scalingMode; }
  inline bool ScalingModeHasBeenSet() const { return m_scalingModeHasBeenSet; }
  inline void SetScalingMode(CapacityProviderScalingMode value) {
    m_scalingModeHasBeenSet = true;
    m_scalingMode = value;
  }
  inline CapacityProviderScalingConfig& WithScalingMode(CapacityProviderScalingMode value) {
    SetScalingMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of scaling policies that define how the capacity provider scales
   * compute instances based on metrics and thresholds.</p>
   */
  inline const Aws::Vector<TargetTrackingScalingPolicy>& GetScalingPolicies() const { return m_scalingPolicies; }
  inline bool ScalingPoliciesHasBeenSet() const { return m_scalingPoliciesHasBeenSet; }
  template <typename ScalingPoliciesT = Aws::Vector<TargetTrackingScalingPolicy>>
  void SetScalingPolicies(ScalingPoliciesT&& value) {
    m_scalingPoliciesHasBeenSet = true;
    m_scalingPolicies = std::forward<ScalingPoliciesT>(value);
  }
  template <typename ScalingPoliciesT = Aws::Vector<TargetTrackingScalingPolicy>>
  CapacityProviderScalingConfig& WithScalingPolicies(ScalingPoliciesT&& value) {
    SetScalingPolicies(std::forward<ScalingPoliciesT>(value));
    return *this;
  }
  template <typename ScalingPoliciesT = TargetTrackingScalingPolicy>
  CapacityProviderScalingConfig& AddScalingPolicies(ScalingPoliciesT&& value) {
    m_scalingPoliciesHasBeenSet = true;
    m_scalingPolicies.emplace_back(std::forward<ScalingPoliciesT>(value));
    return *this;
  }
  ///@}
 private:
  int m_maxVCpuCount{0};
  bool m_maxVCpuCountHasBeenSet = false;

  CapacityProviderScalingMode m_scalingMode{CapacityProviderScalingMode::NOT_SET};
  bool m_scalingModeHasBeenSet = false;

  Aws::Vector<TargetTrackingScalingPolicy> m_scalingPolicies;
  bool m_scalingPoliciesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
