/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ManagedResourceStatus.h>

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
 * <p>The Application Auto Scaling policy created by Amazon ECS when you create an
 * Express service.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ManagedApplicationAutoScalingPolicy">AWS
 * API Reference</a></p>
 */
class ManagedApplicationAutoScalingPolicy {
 public:
  AWS_ECS_API ManagedApplicationAutoScalingPolicy() = default;
  AWS_ECS_API ManagedApplicationAutoScalingPolicy(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API ManagedApplicationAutoScalingPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Application Auto Scaling policy
   * associated with the Express service.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  ManagedApplicationAutoScalingPolicy& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of Application Auto Scaling policy creation.</p>
   */
  inline ManagedResourceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ManagedResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ManagedApplicationAutoScalingPolicy& WithStatus(ManagedResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about why the Application Auto Scaling policy is in the current
   * status.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  ManagedApplicationAutoScalingPolicy& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix timestamp for when the Application Auto Scaling policy was last
   * updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ManagedApplicationAutoScalingPolicy& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of Application Auto Scaling policy associated with the Express
   * service. Valid values are <code>TargetTrackingScaling</code>,
   * <code>StepScaling</code>, and <code>PredictiveScaling</code>.</p>
   */
  inline const Aws::String& GetPolicyType() const { return m_policyType; }
  inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
  template <typename PolicyTypeT = Aws::String>
  void SetPolicyType(PolicyTypeT&& value) {
    m_policyTypeHasBeenSet = true;
    m_policyType = std::forward<PolicyTypeT>(value);
  }
  template <typename PolicyTypeT = Aws::String>
  ManagedApplicationAutoScalingPolicy& WithPolicyType(PolicyTypeT&& value) {
    SetPolicyType(std::forward<PolicyTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target value for the auto scaling metric.</p>
   */
  inline double GetTargetValue() const { return m_targetValue; }
  inline bool TargetValueHasBeenSet() const { return m_targetValueHasBeenSet; }
  inline void SetTargetValue(double value) {
    m_targetValueHasBeenSet = true;
    m_targetValue = value;
  }
  inline ManagedApplicationAutoScalingPolicy& WithTargetValue(double value) {
    SetTargetValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metric used for auto scaling decisions. The available metrics are
   * <code>ECSServiceAverageCPUUtilization</code>,
   * <code>ECSServiceAverageMemoryUtilization</code>, and
   * <code>ALBRequestCOuntPerTarget</code>.</p>
   */
  inline const Aws::String& GetMetric() const { return m_metric; }
  inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }
  template <typename MetricT = Aws::String>
  void SetMetric(MetricT&& value) {
    m_metricHasBeenSet = true;
    m_metric = std::forward<MetricT>(value);
  }
  template <typename MetricT = Aws::String>
  ManagedApplicationAutoScalingPolicy& WithMetric(MetricT&& value) {
    SetMetric(std::forward<MetricT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  ManagedResourceStatus m_status{ManagedResourceStatus::NOT_SET};

  Aws::String m_statusReason;

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_policyType;

  double m_targetValue{0.0};

  Aws::String m_metric;
  bool m_arnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_policyTypeHasBeenSet = false;
  bool m_targetValueHasBeenSet = false;
  bool m_metricHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
