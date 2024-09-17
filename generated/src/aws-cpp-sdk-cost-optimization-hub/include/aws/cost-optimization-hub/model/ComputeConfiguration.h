/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>Describes the performance configuration for compute services such as Amazon
   * EC2, Lambda, and ECS.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/ComputeConfiguration">AWS
   * API Reference</a></p>
   */
  class ComputeConfiguration
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API ComputeConfiguration();
    AWS_COSTOPTIMIZATIONHUB_API ComputeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API ComputeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of vCPU cores in the resource.</p>
     */
    inline double GetVCpu() const{ return m_vCpu; }
    inline bool VCpuHasBeenSet() const { return m_vCpuHasBeenSet; }
    inline void SetVCpu(double value) { m_vCpuHasBeenSet = true; m_vCpu = value; }
    inline ComputeConfiguration& WithVCpu(double value) { SetVCpu(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The memory size of the resource.</p>
     */
    inline int GetMemorySizeInMB() const{ return m_memorySizeInMB; }
    inline bool MemorySizeInMBHasBeenSet() const { return m_memorySizeInMBHasBeenSet; }
    inline void SetMemorySizeInMB(int value) { m_memorySizeInMBHasBeenSet = true; m_memorySizeInMB = value; }
    inline ComputeConfiguration& WithMemorySizeInMB(int value) { SetMemorySizeInMB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The architecture of the resource.</p>
     */
    inline const Aws::String& GetArchitecture() const{ return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(const Aws::String& value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline void SetArchitecture(Aws::String&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }
    inline void SetArchitecture(const char* value) { m_architectureHasBeenSet = true; m_architecture.assign(value); }
    inline ComputeConfiguration& WithArchitecture(const Aws::String& value) { SetArchitecture(value); return *this;}
    inline ComputeConfiguration& WithArchitecture(Aws::String&& value) { SetArchitecture(std::move(value)); return *this;}
    inline ComputeConfiguration& WithArchitecture(const char* value) { SetArchitecture(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform of the resource. The platform is the specific combination of
     * operating system, license model, and software on an instance.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }
    inline ComputeConfiguration& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}
    inline ComputeConfiguration& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}
    inline ComputeConfiguration& WithPlatform(const char* value) { SetPlatform(value); return *this;}
    ///@}
  private:

    double m_vCpu;
    bool m_vCpuHasBeenSet = false;

    int m_memorySizeInMB;
    bool m_memorySizeInMBHasBeenSet = false;

    Aws::String m_architecture;
    bool m_architectureHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
