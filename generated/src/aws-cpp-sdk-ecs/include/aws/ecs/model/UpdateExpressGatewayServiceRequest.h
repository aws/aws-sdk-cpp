/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ExpressGatewayContainer.h>
#include <aws/ecs/model/ExpressGatewayScalingTarget.h>
#include <aws/ecs/model/ExpressGatewayServiceNetworkConfiguration.h>

#include <utility>

namespace Aws {
namespace ECS {
namespace Model {

/**
 */
class UpdateExpressGatewayServiceRequest : public ECSRequest {
 public:
  AWS_ECS_API UpdateExpressGatewayServiceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateExpressGatewayService"; }

  AWS_ECS_API Aws::String SerializePayload() const override;

  AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Express service to update.</p>
   */
  inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
  inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
  template <typename ServiceArnT = Aws::String>
  void SetServiceArn(ServiceArnT&& value) {
    m_serviceArnHasBeenSet = true;
    m_serviceArn = std::forward<ServiceArnT>(value);
  }
  template <typename ServiceArnT = Aws::String>
  UpdateExpressGatewayServiceRequest& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the task execution role for the Express
   * service.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  UpdateExpressGatewayServiceRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path on the container for Application Load Balancer health checks.</p>
   */
  inline const Aws::String& GetHealthCheckPath() const { return m_healthCheckPath; }
  inline bool HealthCheckPathHasBeenSet() const { return m_healthCheckPathHasBeenSet; }
  template <typename HealthCheckPathT = Aws::String>
  void SetHealthCheckPath(HealthCheckPathT&& value) {
    m_healthCheckPathHasBeenSet = true;
    m_healthCheckPath = std::forward<HealthCheckPathT>(value);
  }
  template <typename HealthCheckPathT = Aws::String>
  UpdateExpressGatewayServiceRequest& WithHealthCheckPath(HealthCheckPathT&& value) {
    SetHealthCheckPath(std::forward<HealthCheckPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The primary container configuration for the Express service.</p>
   */
  inline const ExpressGatewayContainer& GetPrimaryContainer() const { return m_primaryContainer; }
  inline bool PrimaryContainerHasBeenSet() const { return m_primaryContainerHasBeenSet; }
  template <typename PrimaryContainerT = ExpressGatewayContainer>
  void SetPrimaryContainer(PrimaryContainerT&& value) {
    m_primaryContainerHasBeenSet = true;
    m_primaryContainer = std::forward<PrimaryContainerT>(value);
  }
  template <typename PrimaryContainerT = ExpressGatewayContainer>
  UpdateExpressGatewayServiceRequest& WithPrimaryContainer(PrimaryContainerT&& value) {
    SetPrimaryContainer(std::forward<PrimaryContainerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role for containers in this
   * task.</p>
   */
  inline const Aws::String& GetTaskRoleArn() const { return m_taskRoleArn; }
  inline bool TaskRoleArnHasBeenSet() const { return m_taskRoleArnHasBeenSet; }
  template <typename TaskRoleArnT = Aws::String>
  void SetTaskRoleArn(TaskRoleArnT&& value) {
    m_taskRoleArnHasBeenSet = true;
    m_taskRoleArn = std::forward<TaskRoleArnT>(value);
  }
  template <typename TaskRoleArnT = Aws::String>
  UpdateExpressGatewayServiceRequest& WithTaskRoleArn(TaskRoleArnT&& value) {
    SetTaskRoleArn(std::forward<TaskRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network configuration for the Express service tasks. By default, the
   * network configuration for an Express service uses the default VPC.</p>
   */
  inline const ExpressGatewayServiceNetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
  inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
  template <typename NetworkConfigurationT = ExpressGatewayServiceNetworkConfiguration>
  void SetNetworkConfiguration(NetworkConfigurationT&& value) {
    m_networkConfigurationHasBeenSet = true;
    m_networkConfiguration = std::forward<NetworkConfigurationT>(value);
  }
  template <typename NetworkConfigurationT = ExpressGatewayServiceNetworkConfiguration>
  UpdateExpressGatewayServiceRequest& WithNetworkConfiguration(NetworkConfigurationT&& value) {
    SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of CPU units used by the task.</p>
   */
  inline const Aws::String& GetCpu() const { return m_cpu; }
  inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
  template <typename CpuT = Aws::String>
  void SetCpu(CpuT&& value) {
    m_cpuHasBeenSet = true;
    m_cpu = std::forward<CpuT>(value);
  }
  template <typename CpuT = Aws::String>
  UpdateExpressGatewayServiceRequest& WithCpu(CpuT&& value) {
    SetCpu(std::forward<CpuT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of memory (in MiB) used by the task.</p>
   */
  inline const Aws::String& GetMemory() const { return m_memory; }
  inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
  template <typename MemoryT = Aws::String>
  void SetMemory(MemoryT&& value) {
    m_memoryHasBeenSet = true;
    m_memory = std::forward<MemoryT>(value);
  }
  template <typename MemoryT = Aws::String>
  UpdateExpressGatewayServiceRequest& WithMemory(MemoryT&& value) {
    SetMemory(std::forward<MemoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The auto-scaling configuration for the Express service.</p>
   */
  inline const ExpressGatewayScalingTarget& GetScalingTarget() const { return m_scalingTarget; }
  inline bool ScalingTargetHasBeenSet() const { return m_scalingTargetHasBeenSet; }
  template <typename ScalingTargetT = ExpressGatewayScalingTarget>
  void SetScalingTarget(ScalingTargetT&& value) {
    m_scalingTargetHasBeenSet = true;
    m_scalingTarget = std::forward<ScalingTargetT>(value);
  }
  template <typename ScalingTargetT = ExpressGatewayScalingTarget>
  UpdateExpressGatewayServiceRequest& WithScalingTarget(ScalingTargetT&& value) {
    SetScalingTarget(std::forward<ScalingTargetT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceArn;

  Aws::String m_executionRoleArn;

  Aws::String m_healthCheckPath;

  ExpressGatewayContainer m_primaryContainer;

  Aws::String m_taskRoleArn;

  ExpressGatewayServiceNetworkConfiguration m_networkConfiguration;

  Aws::String m_cpu;

  Aws::String m_memory;

  ExpressGatewayScalingTarget m_scalingTarget;
  bool m_serviceArnHasBeenSet = false;
  bool m_executionRoleArnHasBeenSet = false;
  bool m_healthCheckPathHasBeenSet = false;
  bool m_primaryContainerHasBeenSet = false;
  bool m_taskRoleArnHasBeenSet = false;
  bool m_networkConfigurationHasBeenSet = false;
  bool m_cpuHasBeenSet = false;
  bool m_memoryHasBeenSet = false;
  bool m_scalingTargetHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
