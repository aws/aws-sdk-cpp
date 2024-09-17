/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/MemorySizeConfiguration.h>
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
   * <p> Describes the container configurations within the tasks of your Amazon ECS
   * service. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ContainerConfiguration">AWS
   * API Reference</a></p>
   */
  class ContainerConfiguration
  {
  public:
    AWS_COMPUTEOPTIMIZER_API ContainerConfiguration();
    AWS_COMPUTEOPTIMIZER_API ContainerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API ContainerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the container. </p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }
    inline ContainerConfiguration& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}
    inline ContainerConfiguration& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}
    inline ContainerConfiguration& WithContainerName(const char* value) { SetContainerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The memory size configurations for the container. </p>
     */
    inline const MemorySizeConfiguration& GetMemorySizeConfiguration() const{ return m_memorySizeConfiguration; }
    inline bool MemorySizeConfigurationHasBeenSet() const { return m_memorySizeConfigurationHasBeenSet; }
    inline void SetMemorySizeConfiguration(const MemorySizeConfiguration& value) { m_memorySizeConfigurationHasBeenSet = true; m_memorySizeConfiguration = value; }
    inline void SetMemorySizeConfiguration(MemorySizeConfiguration&& value) { m_memorySizeConfigurationHasBeenSet = true; m_memorySizeConfiguration = std::move(value); }
    inline ContainerConfiguration& WithMemorySizeConfiguration(const MemorySizeConfiguration& value) { SetMemorySizeConfiguration(value); return *this;}
    inline ContainerConfiguration& WithMemorySizeConfiguration(MemorySizeConfiguration&& value) { SetMemorySizeConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of CPU units reserved for the container. </p>
     */
    inline int GetCpu() const{ return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    inline void SetCpu(int value) { m_cpuHasBeenSet = true; m_cpu = value; }
    inline ContainerConfiguration& WithCpu(int value) { SetCpu(value); return *this;}
    ///@}
  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    MemorySizeConfiguration m_memorySizeConfiguration;
    bool m_memorySizeConfigurationHasBeenSet = false;

    int m_cpu;
    bool m_cpuHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
