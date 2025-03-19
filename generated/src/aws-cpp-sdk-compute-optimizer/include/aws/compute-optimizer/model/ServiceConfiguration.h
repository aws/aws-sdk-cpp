/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/AutoScalingConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/ContainerConfiguration.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p> The Amazon ECS service configurations used for recommendations.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ServiceConfiguration">AWS
   * API Reference</a></p>
   */
  class ServiceConfiguration
  {
  public:
    AWS_COMPUTEOPTIMIZER_API ServiceConfiguration() = default;
    AWS_COMPUTEOPTIMIZER_API ServiceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API ServiceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The amount of memory used by the tasks in the Amazon ECS service. </p>
     */
    inline int GetMemory() const { return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    inline void SetMemory(int value) { m_memoryHasBeenSet = true; m_memory = value; }
    inline ServiceConfiguration& WithMemory(int value) { SetMemory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of CPU units used by the tasks in the Amazon ECS service. </p>
     */
    inline int GetCpu() const { return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    inline void SetCpu(int value) { m_cpuHasBeenSet = true; m_cpu = value; }
    inline ServiceConfiguration& WithCpu(int value) { SetCpu(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The container configurations within a task of an Amazon ECS service. </p>
     */
    inline const Aws::Vector<ContainerConfiguration>& GetContainerConfigurations() const { return m_containerConfigurations; }
    inline bool ContainerConfigurationsHasBeenSet() const { return m_containerConfigurationsHasBeenSet; }
    template<typename ContainerConfigurationsT = Aws::Vector<ContainerConfiguration>>
    void SetContainerConfigurations(ContainerConfigurationsT&& value) { m_containerConfigurationsHasBeenSet = true; m_containerConfigurations = std::forward<ContainerConfigurationsT>(value); }
    template<typename ContainerConfigurationsT = Aws::Vector<ContainerConfiguration>>
    ServiceConfiguration& WithContainerConfigurations(ContainerConfigurationsT&& value) { SetContainerConfigurations(std::forward<ContainerConfigurationsT>(value)); return *this;}
    template<typename ContainerConfigurationsT = ContainerConfiguration>
    ServiceConfiguration& AddContainerConfigurations(ContainerConfigurationsT&& value) { m_containerConfigurationsHasBeenSet = true; m_containerConfigurations.emplace_back(std::forward<ContainerConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Describes the Auto Scaling configuration methods for an Amazon ECS service.
     * This affects the generated recommendations. For example, if Auto Scaling is
     * configured on a service’s CPU, then Compute Optimizer doesn’t generate CPU size
     * recommendations. </p> <p>The Auto Scaling configuration methods include:</p>
     * <ul> <li> <p> <code>TARGET_TRACKING_SCALING_CPU</code> — If the Amazon ECS
     * service is configured to use target scaling on CPU, Compute Optimizer doesn't
     * generate CPU recommendations.</p> </li> <li> <p>
     * <code>TARGET_TRACKING_SCALING_MEMORY</code> — If the Amazon ECS service is
     * configured to use target scaling on memory, Compute Optimizer doesn't generate
     * memory recommendations.</p> </li> </ul> <p>For more information about step
     * scaling and target scaling, see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-step-scaling-policies.html">
     * Step scaling policies for Application Auto Scaling</a> and <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-target-tracking.html">
     * Target tracking scaling policies for Application Auto Scaling</a> in the
     * <i>Application Auto Scaling User Guide</i>.</p>
     */
    inline AutoScalingConfiguration GetAutoScalingConfiguration() const { return m_autoScalingConfiguration; }
    inline bool AutoScalingConfigurationHasBeenSet() const { return m_autoScalingConfigurationHasBeenSet; }
    inline void SetAutoScalingConfiguration(AutoScalingConfiguration value) { m_autoScalingConfigurationHasBeenSet = true; m_autoScalingConfiguration = value; }
    inline ServiceConfiguration& WithAutoScalingConfiguration(AutoScalingConfiguration value) { SetAutoScalingConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The task definition ARN used by the tasks in the Amazon ECS service. </p>
     */
    inline const Aws::String& GetTaskDefinitionArn() const { return m_taskDefinitionArn; }
    inline bool TaskDefinitionArnHasBeenSet() const { return m_taskDefinitionArnHasBeenSet; }
    template<typename TaskDefinitionArnT = Aws::String>
    void SetTaskDefinitionArn(TaskDefinitionArnT&& value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn = std::forward<TaskDefinitionArnT>(value); }
    template<typename TaskDefinitionArnT = Aws::String>
    ServiceConfiguration& WithTaskDefinitionArn(TaskDefinitionArnT&& value) { SetTaskDefinitionArn(std::forward<TaskDefinitionArnT>(value)); return *this;}
    ///@}
  private:

    int m_memory{0};
    bool m_memoryHasBeenSet = false;

    int m_cpu{0};
    bool m_cpuHasBeenSet = false;

    Aws::Vector<ContainerConfiguration> m_containerConfigurations;
    bool m_containerConfigurationsHasBeenSet = false;

    AutoScalingConfiguration m_autoScalingConfiguration{AutoScalingConfiguration::NOT_SET};
    bool m_autoScalingConfigurationHasBeenSet = false;

    Aws::String m_taskDefinitionArn;
    bool m_taskDefinitionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
