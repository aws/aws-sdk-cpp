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
    AWS_COMPUTEOPTIMIZER_API ServiceConfiguration();
    AWS_COMPUTEOPTIMIZER_API ServiceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API ServiceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The amount of memory used by the tasks in the ECS service. </p>
     */
    inline int GetMemory() const{ return m_memory; }

    /**
     * <p> The amount of memory used by the tasks in the ECS service. </p>
     */
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }

    /**
     * <p> The amount of memory used by the tasks in the ECS service. </p>
     */
    inline void SetMemory(int value) { m_memoryHasBeenSet = true; m_memory = value; }

    /**
     * <p> The amount of memory used by the tasks in the ECS service. </p>
     */
    inline ServiceConfiguration& WithMemory(int value) { SetMemory(value); return *this;}


    /**
     * <p> The number of CPU units used by the tasks in the ECS service. </p>
     */
    inline int GetCpu() const{ return m_cpu; }

    /**
     * <p> The number of CPU units used by the tasks in the ECS service. </p>
     */
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }

    /**
     * <p> The number of CPU units used by the tasks in the ECS service. </p>
     */
    inline void SetCpu(int value) { m_cpuHasBeenSet = true; m_cpu = value; }

    /**
     * <p> The number of CPU units used by the tasks in the ECS service. </p>
     */
    inline ServiceConfiguration& WithCpu(int value) { SetCpu(value); return *this;}


    /**
     * <p> The container configurations within a task of an ECS service. </p>
     */
    inline const Aws::Vector<ContainerConfiguration>& GetContainerConfigurations() const{ return m_containerConfigurations; }

    /**
     * <p> The container configurations within a task of an ECS service. </p>
     */
    inline bool ContainerConfigurationsHasBeenSet() const { return m_containerConfigurationsHasBeenSet; }

    /**
     * <p> The container configurations within a task of an ECS service. </p>
     */
    inline void SetContainerConfigurations(const Aws::Vector<ContainerConfiguration>& value) { m_containerConfigurationsHasBeenSet = true; m_containerConfigurations = value; }

    /**
     * <p> The container configurations within a task of an ECS service. </p>
     */
    inline void SetContainerConfigurations(Aws::Vector<ContainerConfiguration>&& value) { m_containerConfigurationsHasBeenSet = true; m_containerConfigurations = std::move(value); }

    /**
     * <p> The container configurations within a task of an ECS service. </p>
     */
    inline ServiceConfiguration& WithContainerConfigurations(const Aws::Vector<ContainerConfiguration>& value) { SetContainerConfigurations(value); return *this;}

    /**
     * <p> The container configurations within a task of an ECS service. </p>
     */
    inline ServiceConfiguration& WithContainerConfigurations(Aws::Vector<ContainerConfiguration>&& value) { SetContainerConfigurations(std::move(value)); return *this;}

    /**
     * <p> The container configurations within a task of an ECS service. </p>
     */
    inline ServiceConfiguration& AddContainerConfigurations(const ContainerConfiguration& value) { m_containerConfigurationsHasBeenSet = true; m_containerConfigurations.push_back(value); return *this; }

    /**
     * <p> The container configurations within a task of an ECS service. </p>
     */
    inline ServiceConfiguration& AddContainerConfigurations(ContainerConfiguration&& value) { m_containerConfigurationsHasBeenSet = true; m_containerConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p> Describes the Auto Scaling configuration methods for an Amazon ECS service.
     * This affects the generated recommendations. For example, if Auto Scaling is
     * configured on a ECS service’s CPU, then Compute Optimizer doesn’t generate CPU
     * size recommendations. </p> <p>The Auto Scaling configuration methods
     * include:</p> <ul> <li> <p> <code>TARGET_TRACKING_SCALING_CPU</code> — If the ECS
     * service is configured to use target scaling on CPU, Compute Optimizer doesn't
     * generate CPU recommendations.</p> </li> <li> <p>
     * <code>TARGET_TRACKING_SCALING_MEMORY</code> — If the ECS service is configured
     * to use target scaling on memory, Compute Optimizer doesn't generate memory
     * recommendations.</p> </li> </ul> <p>For more information about step scaling and
     * target scaling, see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-step-scaling-policies.html">
     * Step scaling policies for Application Auto Scaling</a> and <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-target-tracking.html">
     * Target tracking scaling policies for Application Auto Scaling</a> in the
     * <i>Application Auto Scaling User Guide</i>.</p>
     */
    inline const AutoScalingConfiguration& GetAutoScalingConfiguration() const{ return m_autoScalingConfiguration; }

    /**
     * <p> Describes the Auto Scaling configuration methods for an Amazon ECS service.
     * This affects the generated recommendations. For example, if Auto Scaling is
     * configured on a ECS service’s CPU, then Compute Optimizer doesn’t generate CPU
     * size recommendations. </p> <p>The Auto Scaling configuration methods
     * include:</p> <ul> <li> <p> <code>TARGET_TRACKING_SCALING_CPU</code> — If the ECS
     * service is configured to use target scaling on CPU, Compute Optimizer doesn't
     * generate CPU recommendations.</p> </li> <li> <p>
     * <code>TARGET_TRACKING_SCALING_MEMORY</code> — If the ECS service is configured
     * to use target scaling on memory, Compute Optimizer doesn't generate memory
     * recommendations.</p> </li> </ul> <p>For more information about step scaling and
     * target scaling, see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-step-scaling-policies.html">
     * Step scaling policies for Application Auto Scaling</a> and <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-target-tracking.html">
     * Target tracking scaling policies for Application Auto Scaling</a> in the
     * <i>Application Auto Scaling User Guide</i>.</p>
     */
    inline bool AutoScalingConfigurationHasBeenSet() const { return m_autoScalingConfigurationHasBeenSet; }

    /**
     * <p> Describes the Auto Scaling configuration methods for an Amazon ECS service.
     * This affects the generated recommendations. For example, if Auto Scaling is
     * configured on a ECS service’s CPU, then Compute Optimizer doesn’t generate CPU
     * size recommendations. </p> <p>The Auto Scaling configuration methods
     * include:</p> <ul> <li> <p> <code>TARGET_TRACKING_SCALING_CPU</code> — If the ECS
     * service is configured to use target scaling on CPU, Compute Optimizer doesn't
     * generate CPU recommendations.</p> </li> <li> <p>
     * <code>TARGET_TRACKING_SCALING_MEMORY</code> — If the ECS service is configured
     * to use target scaling on memory, Compute Optimizer doesn't generate memory
     * recommendations.</p> </li> </ul> <p>For more information about step scaling and
     * target scaling, see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-step-scaling-policies.html">
     * Step scaling policies for Application Auto Scaling</a> and <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-target-tracking.html">
     * Target tracking scaling policies for Application Auto Scaling</a> in the
     * <i>Application Auto Scaling User Guide</i>.</p>
     */
    inline void SetAutoScalingConfiguration(const AutoScalingConfiguration& value) { m_autoScalingConfigurationHasBeenSet = true; m_autoScalingConfiguration = value; }

    /**
     * <p> Describes the Auto Scaling configuration methods for an Amazon ECS service.
     * This affects the generated recommendations. For example, if Auto Scaling is
     * configured on a ECS service’s CPU, then Compute Optimizer doesn’t generate CPU
     * size recommendations. </p> <p>The Auto Scaling configuration methods
     * include:</p> <ul> <li> <p> <code>TARGET_TRACKING_SCALING_CPU</code> — If the ECS
     * service is configured to use target scaling on CPU, Compute Optimizer doesn't
     * generate CPU recommendations.</p> </li> <li> <p>
     * <code>TARGET_TRACKING_SCALING_MEMORY</code> — If the ECS service is configured
     * to use target scaling on memory, Compute Optimizer doesn't generate memory
     * recommendations.</p> </li> </ul> <p>For more information about step scaling and
     * target scaling, see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-step-scaling-policies.html">
     * Step scaling policies for Application Auto Scaling</a> and <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-target-tracking.html">
     * Target tracking scaling policies for Application Auto Scaling</a> in the
     * <i>Application Auto Scaling User Guide</i>.</p>
     */
    inline void SetAutoScalingConfiguration(AutoScalingConfiguration&& value) { m_autoScalingConfigurationHasBeenSet = true; m_autoScalingConfiguration = std::move(value); }

    /**
     * <p> Describes the Auto Scaling configuration methods for an Amazon ECS service.
     * This affects the generated recommendations. For example, if Auto Scaling is
     * configured on a ECS service’s CPU, then Compute Optimizer doesn’t generate CPU
     * size recommendations. </p> <p>The Auto Scaling configuration methods
     * include:</p> <ul> <li> <p> <code>TARGET_TRACKING_SCALING_CPU</code> — If the ECS
     * service is configured to use target scaling on CPU, Compute Optimizer doesn't
     * generate CPU recommendations.</p> </li> <li> <p>
     * <code>TARGET_TRACKING_SCALING_MEMORY</code> — If the ECS service is configured
     * to use target scaling on memory, Compute Optimizer doesn't generate memory
     * recommendations.</p> </li> </ul> <p>For more information about step scaling and
     * target scaling, see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-step-scaling-policies.html">
     * Step scaling policies for Application Auto Scaling</a> and <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-target-tracking.html">
     * Target tracking scaling policies for Application Auto Scaling</a> in the
     * <i>Application Auto Scaling User Guide</i>.</p>
     */
    inline ServiceConfiguration& WithAutoScalingConfiguration(const AutoScalingConfiguration& value) { SetAutoScalingConfiguration(value); return *this;}

    /**
     * <p> Describes the Auto Scaling configuration methods for an Amazon ECS service.
     * This affects the generated recommendations. For example, if Auto Scaling is
     * configured on a ECS service’s CPU, then Compute Optimizer doesn’t generate CPU
     * size recommendations. </p> <p>The Auto Scaling configuration methods
     * include:</p> <ul> <li> <p> <code>TARGET_TRACKING_SCALING_CPU</code> — If the ECS
     * service is configured to use target scaling on CPU, Compute Optimizer doesn't
     * generate CPU recommendations.</p> </li> <li> <p>
     * <code>TARGET_TRACKING_SCALING_MEMORY</code> — If the ECS service is configured
     * to use target scaling on memory, Compute Optimizer doesn't generate memory
     * recommendations.</p> </li> </ul> <p>For more information about step scaling and
     * target scaling, see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-step-scaling-policies.html">
     * Step scaling policies for Application Auto Scaling</a> and <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-target-tracking.html">
     * Target tracking scaling policies for Application Auto Scaling</a> in the
     * <i>Application Auto Scaling User Guide</i>.</p>
     */
    inline ServiceConfiguration& WithAutoScalingConfiguration(AutoScalingConfiguration&& value) { SetAutoScalingConfiguration(std::move(value)); return *this;}


    /**
     * <p> The task definition ARN used by the tasks in the ECS service. </p>
     */
    inline const Aws::String& GetTaskDefinitionArn() const{ return m_taskDefinitionArn; }

    /**
     * <p> The task definition ARN used by the tasks in the ECS service. </p>
     */
    inline bool TaskDefinitionArnHasBeenSet() const { return m_taskDefinitionArnHasBeenSet; }

    /**
     * <p> The task definition ARN used by the tasks in the ECS service. </p>
     */
    inline void SetTaskDefinitionArn(const Aws::String& value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn = value; }

    /**
     * <p> The task definition ARN used by the tasks in the ECS service. </p>
     */
    inline void SetTaskDefinitionArn(Aws::String&& value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn = std::move(value); }

    /**
     * <p> The task definition ARN used by the tasks in the ECS service. </p>
     */
    inline void SetTaskDefinitionArn(const char* value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn.assign(value); }

    /**
     * <p> The task definition ARN used by the tasks in the ECS service. </p>
     */
    inline ServiceConfiguration& WithTaskDefinitionArn(const Aws::String& value) { SetTaskDefinitionArn(value); return *this;}

    /**
     * <p> The task definition ARN used by the tasks in the ECS service. </p>
     */
    inline ServiceConfiguration& WithTaskDefinitionArn(Aws::String&& value) { SetTaskDefinitionArn(std::move(value)); return *this;}

    /**
     * <p> The task definition ARN used by the tasks in the ECS service. </p>
     */
    inline ServiceConfiguration& WithTaskDefinitionArn(const char* value) { SetTaskDefinitionArn(value); return *this;}

  private:

    int m_memory;
    bool m_memoryHasBeenSet = false;

    int m_cpu;
    bool m_cpuHasBeenSet = false;

    Aws::Vector<ContainerConfiguration> m_containerConfigurations;
    bool m_containerConfigurationsHasBeenSet = false;

    AutoScalingConfiguration m_autoScalingConfiguration;
    bool m_autoScalingConfigurationHasBeenSet = false;

    Aws::String m_taskDefinitionArn;
    bool m_taskDefinitionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
