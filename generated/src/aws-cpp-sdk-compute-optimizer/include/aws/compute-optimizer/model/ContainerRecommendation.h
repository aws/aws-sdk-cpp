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
   * <p> The CPU and memory recommendations for a container within the tasks of your
   * Amazon ECS service. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ContainerRecommendation">AWS
   * API Reference</a></p>
   */
  class ContainerRecommendation
  {
  public:
    AWS_COMPUTEOPTIMIZER_API ContainerRecommendation();
    AWS_COMPUTEOPTIMIZER_API ContainerRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API ContainerRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the container. </p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }

    /**
     * <p> The name of the container. </p>
     */
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }

    /**
     * <p> The name of the container. </p>
     */
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }

    /**
     * <p> The name of the container. </p>
     */
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }

    /**
     * <p> The name of the container. </p>
     */
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }

    /**
     * <p> The name of the container. </p>
     */
    inline ContainerRecommendation& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}

    /**
     * <p> The name of the container. </p>
     */
    inline ContainerRecommendation& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}

    /**
     * <p> The name of the container. </p>
     */
    inline ContainerRecommendation& WithContainerName(const char* value) { SetContainerName(value); return *this;}


    /**
     * <p> The recommended memory size configurations for the container. </p>
     */
    inline const MemorySizeConfiguration& GetMemorySizeConfiguration() const{ return m_memorySizeConfiguration; }

    /**
     * <p> The recommended memory size configurations for the container. </p>
     */
    inline bool MemorySizeConfigurationHasBeenSet() const { return m_memorySizeConfigurationHasBeenSet; }

    /**
     * <p> The recommended memory size configurations for the container. </p>
     */
    inline void SetMemorySizeConfiguration(const MemorySizeConfiguration& value) { m_memorySizeConfigurationHasBeenSet = true; m_memorySizeConfiguration = value; }

    /**
     * <p> The recommended memory size configurations for the container. </p>
     */
    inline void SetMemorySizeConfiguration(MemorySizeConfiguration&& value) { m_memorySizeConfigurationHasBeenSet = true; m_memorySizeConfiguration = std::move(value); }

    /**
     * <p> The recommended memory size configurations for the container. </p>
     */
    inline ContainerRecommendation& WithMemorySizeConfiguration(const MemorySizeConfiguration& value) { SetMemorySizeConfiguration(value); return *this;}

    /**
     * <p> The recommended memory size configurations for the container. </p>
     */
    inline ContainerRecommendation& WithMemorySizeConfiguration(MemorySizeConfiguration&& value) { SetMemorySizeConfiguration(std::move(value)); return *this;}


    /**
     * <p> The recommended number of CPU units reserved for the container. </p>
     */
    inline int GetCpu() const{ return m_cpu; }

    /**
     * <p> The recommended number of CPU units reserved for the container. </p>
     */
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }

    /**
     * <p> The recommended number of CPU units reserved for the container. </p>
     */
    inline void SetCpu(int value) { m_cpuHasBeenSet = true; m_cpu = value; }

    /**
     * <p> The recommended number of CPU units reserved for the container. </p>
     */
    inline ContainerRecommendation& WithCpu(int value) { SetCpu(value); return *this;}

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
