/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ManagedAutoScaling.h>
#include <aws/ecs/model/ManagedIngressPath.h>
#include <aws/ecs/model/ManagedLogGroup.h>
#include <aws/ecs/model/ManagedMetricAlarm.h>
#include <aws/ecs/model/ManagedSecurityGroup.h>

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
 * <p>Represents the Amazon Web Services resources managed by Amazon ECS for an
 * Express service, including ingress paths, auto-scaling policies, metric alarms,
 * and security groups.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ECSManagedResources">AWS
 * API Reference</a></p>
 */
class ECSManagedResources {
 public:
  AWS_ECS_API ECSManagedResources() = default;
  AWS_ECS_API ECSManagedResources(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API ECSManagedResources& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ingress paths and endpoints for the Express service.</p>
   */
  inline const Aws::Vector<ManagedIngressPath>& GetIngressPaths() const { return m_ingressPaths; }
  inline bool IngressPathsHasBeenSet() const { return m_ingressPathsHasBeenSet; }
  template <typename IngressPathsT = Aws::Vector<ManagedIngressPath>>
  void SetIngressPaths(IngressPathsT&& value) {
    m_ingressPathsHasBeenSet = true;
    m_ingressPaths = std::forward<IngressPathsT>(value);
  }
  template <typename IngressPathsT = Aws::Vector<ManagedIngressPath>>
  ECSManagedResources& WithIngressPaths(IngressPathsT&& value) {
    SetIngressPaths(std::forward<IngressPathsT>(value));
    return *this;
  }
  template <typename IngressPathsT = ManagedIngressPath>
  ECSManagedResources& AddIngressPaths(IngressPathsT&& value) {
    m_ingressPathsHasBeenSet = true;
    m_ingressPaths.emplace_back(std::forward<IngressPathsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The auto-scaling configuration and policies for the Express service.</p>
   */
  inline const ManagedAutoScaling& GetAutoScaling() const { return m_autoScaling; }
  inline bool AutoScalingHasBeenSet() const { return m_autoScalingHasBeenSet; }
  template <typename AutoScalingT = ManagedAutoScaling>
  void SetAutoScaling(AutoScalingT&& value) {
    m_autoScalingHasBeenSet = true;
    m_autoScaling = std::forward<AutoScalingT>(value);
  }
  template <typename AutoScalingT = ManagedAutoScaling>
  ECSManagedResources& WithAutoScaling(AutoScalingT&& value) {
    SetAutoScaling(std::forward<AutoScalingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CloudWatch metric alarms associated with the Express service.</p>
   */
  inline const Aws::Vector<ManagedMetricAlarm>& GetMetricAlarms() const { return m_metricAlarms; }
  inline bool MetricAlarmsHasBeenSet() const { return m_metricAlarmsHasBeenSet; }
  template <typename MetricAlarmsT = Aws::Vector<ManagedMetricAlarm>>
  void SetMetricAlarms(MetricAlarmsT&& value) {
    m_metricAlarmsHasBeenSet = true;
    m_metricAlarms = std::forward<MetricAlarmsT>(value);
  }
  template <typename MetricAlarmsT = Aws::Vector<ManagedMetricAlarm>>
  ECSManagedResources& WithMetricAlarms(MetricAlarmsT&& value) {
    SetMetricAlarms(std::forward<MetricAlarmsT>(value));
    return *this;
  }
  template <typename MetricAlarmsT = ManagedMetricAlarm>
  ECSManagedResources& AddMetricAlarms(MetricAlarmsT&& value) {
    m_metricAlarmsHasBeenSet = true;
    m_metricAlarms.emplace_back(std::forward<MetricAlarmsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The security groups managed by the Express service.</p>
   */
  inline const Aws::Vector<ManagedSecurityGroup>& GetServiceSecurityGroups() const { return m_serviceSecurityGroups; }
  inline bool ServiceSecurityGroupsHasBeenSet() const { return m_serviceSecurityGroupsHasBeenSet; }
  template <typename ServiceSecurityGroupsT = Aws::Vector<ManagedSecurityGroup>>
  void SetServiceSecurityGroups(ServiceSecurityGroupsT&& value) {
    m_serviceSecurityGroupsHasBeenSet = true;
    m_serviceSecurityGroups = std::forward<ServiceSecurityGroupsT>(value);
  }
  template <typename ServiceSecurityGroupsT = Aws::Vector<ManagedSecurityGroup>>
  ECSManagedResources& WithServiceSecurityGroups(ServiceSecurityGroupsT&& value) {
    SetServiceSecurityGroups(std::forward<ServiceSecurityGroupsT>(value));
    return *this;
  }
  template <typename ServiceSecurityGroupsT = ManagedSecurityGroup>
  ECSManagedResources& AddServiceSecurityGroups(ServiceSecurityGroupsT&& value) {
    m_serviceSecurityGroupsHasBeenSet = true;
    m_serviceSecurityGroups.emplace_back(std::forward<ServiceSecurityGroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The log groups managed by the Express service.</p>
   */
  inline const Aws::Vector<ManagedLogGroup>& GetLogGroups() const { return m_logGroups; }
  inline bool LogGroupsHasBeenSet() const { return m_logGroupsHasBeenSet; }
  template <typename LogGroupsT = Aws::Vector<ManagedLogGroup>>
  void SetLogGroups(LogGroupsT&& value) {
    m_logGroupsHasBeenSet = true;
    m_logGroups = std::forward<LogGroupsT>(value);
  }
  template <typename LogGroupsT = Aws::Vector<ManagedLogGroup>>
  ECSManagedResources& WithLogGroups(LogGroupsT&& value) {
    SetLogGroups(std::forward<LogGroupsT>(value));
    return *this;
  }
  template <typename LogGroupsT = ManagedLogGroup>
  ECSManagedResources& AddLogGroups(LogGroupsT&& value) {
    m_logGroupsHasBeenSet = true;
    m_logGroups.emplace_back(std::forward<LogGroupsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ManagedIngressPath> m_ingressPaths;
  bool m_ingressPathsHasBeenSet = false;

  ManagedAutoScaling m_autoScaling;
  bool m_autoScalingHasBeenSet = false;

  Aws::Vector<ManagedMetricAlarm> m_metricAlarms;
  bool m_metricAlarmsHasBeenSet = false;

  Aws::Vector<ManagedSecurityGroup> m_serviceSecurityGroups;
  bool m_serviceSecurityGroupsHasBeenSet = false;

  Aws::Vector<ManagedLogGroup> m_logGroups;
  bool m_logGroupsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
