/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ManagedApplicationAutoScalingPolicy.h>
#include <aws/ecs/model/ManagedScalableTarget.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>The auto scaling configuration created by Amazon ECS for an Express
 * service.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ManagedAutoScaling">AWS
 * API Reference</a></p>
 */
class ManagedAutoScaling {
 public:
  AWS_ECS_API ManagedAutoScaling() = default;
  AWS_ECS_API ManagedAutoScaling(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API ManagedAutoScaling& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Represents a scalable target.</p>
   */
  inline const ManagedScalableTarget& GetScalableTarget() const { return m_scalableTarget; }
  inline bool ScalableTargetHasBeenSet() const { return m_scalableTargetHasBeenSet; }
  template <typename ScalableTargetT = ManagedScalableTarget>
  void SetScalableTarget(ScalableTargetT&& value) {
    m_scalableTargetHasBeenSet = true;
    m_scalableTarget = std::forward<ScalableTargetT>(value);
  }
  template <typename ScalableTargetT = ManagedScalableTarget>
  ManagedAutoScaling& WithScalableTarget(ScalableTargetT&& value) {
    SetScalableTarget(std::forward<ScalableTargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The policy used for auto scaling.</p>
   */
  inline const Aws::Vector<ManagedApplicationAutoScalingPolicy>& GetApplicationAutoScalingPolicies() const {
    return m_applicationAutoScalingPolicies;
  }
  inline bool ApplicationAutoScalingPoliciesHasBeenSet() const { return m_applicationAutoScalingPoliciesHasBeenSet; }
  template <typename ApplicationAutoScalingPoliciesT = Aws::Vector<ManagedApplicationAutoScalingPolicy>>
  void SetApplicationAutoScalingPolicies(ApplicationAutoScalingPoliciesT&& value) {
    m_applicationAutoScalingPoliciesHasBeenSet = true;
    m_applicationAutoScalingPolicies = std::forward<ApplicationAutoScalingPoliciesT>(value);
  }
  template <typename ApplicationAutoScalingPoliciesT = Aws::Vector<ManagedApplicationAutoScalingPolicy>>
  ManagedAutoScaling& WithApplicationAutoScalingPolicies(ApplicationAutoScalingPoliciesT&& value) {
    SetApplicationAutoScalingPolicies(std::forward<ApplicationAutoScalingPoliciesT>(value));
    return *this;
  }
  template <typename ApplicationAutoScalingPoliciesT = ManagedApplicationAutoScalingPolicy>
  ManagedAutoScaling& AddApplicationAutoScalingPolicies(ApplicationAutoScalingPoliciesT&& value) {
    m_applicationAutoScalingPoliciesHasBeenSet = true;
    m_applicationAutoScalingPolicies.emplace_back(std::forward<ApplicationAutoScalingPoliciesT>(value));
    return *this;
  }
  ///@}
 private:
  ManagedScalableTarget m_scalableTarget;
  bool m_scalableTargetHasBeenSet = false;

  Aws::Vector<ManagedApplicationAutoScalingPolicy> m_applicationAutoScalingPolicies;
  bool m_applicationAutoScalingPoliciesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
