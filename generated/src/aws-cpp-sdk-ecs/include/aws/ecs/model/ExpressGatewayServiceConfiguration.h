/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ExpressGatewayContainer.h>
#include <aws/ecs/model/ExpressGatewayScalingTarget.h>
#include <aws/ecs/model/ExpressGatewayServiceNetworkConfiguration.h>
#include <aws/ecs/model/IngressPathSummary.h>

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
 * <p>Represents a specific configuration revision of an Express service,
 * containing all the settings and parameters for that revision.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ExpressGatewayServiceConfiguration">AWS
 * API Reference</a></p>
 */
class ExpressGatewayServiceConfiguration {
 public:
  AWS_ECS_API ExpressGatewayServiceConfiguration() = default;
  AWS_ECS_API ExpressGatewayServiceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API ExpressGatewayServiceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the service revision.</p>
   */
  inline const Aws::String& GetServiceRevisionArn() const { return m_serviceRevisionArn; }
  inline bool ServiceRevisionArnHasBeenSet() const { return m_serviceRevisionArnHasBeenSet; }
  template <typename ServiceRevisionArnT = Aws::String>
  void SetServiceRevisionArn(ServiceRevisionArnT&& value) {
    m_serviceRevisionArnHasBeenSet = true;
    m_serviceRevisionArn = std::forward<ServiceRevisionArnT>(value);
  }
  template <typename ServiceRevisionArnT = Aws::String>
  ExpressGatewayServiceConfiguration& WithServiceRevisionArn(ServiceRevisionArnT&& value) {
    SetServiceRevisionArn(std::forward<ServiceRevisionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the task execution role for the service revision.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  ExpressGatewayServiceConfiguration& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the task role for the service revision.</p>
   */
  inline const Aws::String& GetTaskRoleArn() const { return m_taskRoleArn; }
  inline bool TaskRoleArnHasBeenSet() const { return m_taskRoleArnHasBeenSet; }
  template <typename TaskRoleArnT = Aws::String>
  void SetTaskRoleArn(TaskRoleArnT&& value) {
    m_taskRoleArnHasBeenSet = true;
    m_taskRoleArn = std::forward<TaskRoleArnT>(value);
  }
  template <typename TaskRoleArnT = Aws::String>
  ExpressGatewayServiceConfiguration& WithTaskRoleArn(TaskRoleArnT&& value) {
    SetTaskRoleArn(std::forward<TaskRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CPU allocation for tasks in this service revision.</p>
   */
  inline const Aws::String& GetCpu() const { return m_cpu; }
  inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
  template <typename CpuT = Aws::String>
  void SetCpu(CpuT&& value) {
    m_cpuHasBeenSet = true;
    m_cpu = std::forward<CpuT>(value);
  }
  template <typename CpuT = Aws::String>
  ExpressGatewayServiceConfiguration& WithCpu(CpuT&& value) {
    SetCpu(std::forward<CpuT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The memory allocation for tasks in this service revision.</p>
   */
  inline const Aws::String& GetMemory() const { return m_memory; }
  inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
  template <typename MemoryT = Aws::String>
  void SetMemory(MemoryT&& value) {
    m_memoryHasBeenSet = true;
    m_memory = std::forward<MemoryT>(value);
  }
  template <typename MemoryT = Aws::String>
  ExpressGatewayServiceConfiguration& WithMemory(MemoryT&& value) {
    SetMemory(std::forward<MemoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network configuration for tasks in this service revision.</p>
   */
  inline const ExpressGatewayServiceNetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
  inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
  template <typename NetworkConfigurationT = ExpressGatewayServiceNetworkConfiguration>
  void SetNetworkConfiguration(NetworkConfigurationT&& value) {
    m_networkConfigurationHasBeenSet = true;
    m_networkConfiguration = std::forward<NetworkConfigurationT>(value);
  }
  template <typename NetworkConfigurationT = ExpressGatewayServiceNetworkConfiguration>
  ExpressGatewayServiceConfiguration& WithNetworkConfiguration(NetworkConfigurationT&& value) {
    SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The health check path for this service revision.</p>
   */
  inline const Aws::String& GetHealthCheckPath() const { return m_healthCheckPath; }
  inline bool HealthCheckPathHasBeenSet() const { return m_healthCheckPathHasBeenSet; }
  template <typename HealthCheckPathT = Aws::String>
  void SetHealthCheckPath(HealthCheckPathT&& value) {
    m_healthCheckPathHasBeenSet = true;
    m_healthCheckPath = std::forward<HealthCheckPathT>(value);
  }
  template <typename HealthCheckPathT = Aws::String>
  ExpressGatewayServiceConfiguration& WithHealthCheckPath(HealthCheckPathT&& value) {
    SetHealthCheckPath(std::forward<HealthCheckPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The primary container configuration for this service revision.</p>
   */
  inline const ExpressGatewayContainer& GetPrimaryContainer() const { return m_primaryContainer; }
  inline bool PrimaryContainerHasBeenSet() const { return m_primaryContainerHasBeenSet; }
  template <typename PrimaryContainerT = ExpressGatewayContainer>
  void SetPrimaryContainer(PrimaryContainerT&& value) {
    m_primaryContainerHasBeenSet = true;
    m_primaryContainer = std::forward<PrimaryContainerT>(value);
  }
  template <typename PrimaryContainerT = ExpressGatewayContainer>
  ExpressGatewayServiceConfiguration& WithPrimaryContainer(PrimaryContainerT&& value) {
    SetPrimaryContainer(std::forward<PrimaryContainerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The auto-scaling configuration for this service revision.</p>
   */
  inline const ExpressGatewayScalingTarget& GetScalingTarget() const { return m_scalingTarget; }
  inline bool ScalingTargetHasBeenSet() const { return m_scalingTargetHasBeenSet; }
  template <typename ScalingTargetT = ExpressGatewayScalingTarget>
  void SetScalingTarget(ScalingTargetT&& value) {
    m_scalingTargetHasBeenSet = true;
    m_scalingTarget = std::forward<ScalingTargetT>(value);
  }
  template <typename ScalingTargetT = ExpressGatewayScalingTarget>
  ExpressGatewayServiceConfiguration& WithScalingTarget(ScalingTargetT&& value) {
    SetScalingTarget(std::forward<ScalingTargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entry point into this service revision.</p>
   */
  inline const Aws::Vector<IngressPathSummary>& GetIngressPaths() const { return m_ingressPaths; }
  inline bool IngressPathsHasBeenSet() const { return m_ingressPathsHasBeenSet; }
  template <typename IngressPathsT = Aws::Vector<IngressPathSummary>>
  void SetIngressPaths(IngressPathsT&& value) {
    m_ingressPathsHasBeenSet = true;
    m_ingressPaths = std::forward<IngressPathsT>(value);
  }
  template <typename IngressPathsT = Aws::Vector<IngressPathSummary>>
  ExpressGatewayServiceConfiguration& WithIngressPaths(IngressPathsT&& value) {
    SetIngressPaths(std::forward<IngressPathsT>(value));
    return *this;
  }
  template <typename IngressPathsT = IngressPathSummary>
  ExpressGatewayServiceConfiguration& AddIngressPaths(IngressPathsT&& value) {
    m_ingressPathsHasBeenSet = true;
    m_ingressPaths.emplace_back(std::forward<IngressPathsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix timestamp for when this service revision was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ExpressGatewayServiceConfiguration& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceRevisionArn;
  bool m_serviceRevisionArnHasBeenSet = false;

  Aws::String m_executionRoleArn;
  bool m_executionRoleArnHasBeenSet = false;

  Aws::String m_taskRoleArn;
  bool m_taskRoleArnHasBeenSet = false;

  Aws::String m_cpu;
  bool m_cpuHasBeenSet = false;

  Aws::String m_memory;
  bool m_memoryHasBeenSet = false;

  ExpressGatewayServiceNetworkConfiguration m_networkConfiguration;
  bool m_networkConfigurationHasBeenSet = false;

  Aws::String m_healthCheckPath;
  bool m_healthCheckPathHasBeenSet = false;

  ExpressGatewayContainer m_primaryContainer;
  bool m_primaryContainerHasBeenSet = false;

  ExpressGatewayScalingTarget m_scalingTarget;
  bool m_scalingTargetHasBeenSet = false;

  Aws::Vector<IngressPathSummary> m_ingressPaths;
  bool m_ingressPathsHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
