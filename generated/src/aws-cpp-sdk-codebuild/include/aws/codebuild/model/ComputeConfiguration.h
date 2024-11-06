/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/MachineType.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Contains compute attributes. These attributes only need be specified when
   * your project's or fleet's <code>computeType</code> is set to
   * <code>ATTRIBUTE_BASED_COMPUTE</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ComputeConfiguration">AWS
   * API Reference</a></p>
   */
  class ComputeConfiguration
  {
  public:
    AWS_CODEBUILD_API ComputeConfiguration();
    AWS_CODEBUILD_API ComputeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API ComputeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of vCPUs of the instance type included in your fleet.</p>
     */
    inline long long GetVCpu() const{ return m_vCpu; }
    inline bool VCpuHasBeenSet() const { return m_vCpuHasBeenSet; }
    inline void SetVCpu(long long value) { m_vCpuHasBeenSet = true; m_vCpu = value; }
    inline ComputeConfiguration& WithVCpu(long long value) { SetVCpu(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of memory of the instance type included in your fleet.</p>
     */
    inline long long GetMemory() const{ return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    inline void SetMemory(long long value) { m_memoryHasBeenSet = true; m_memory = value; }
    inline ComputeConfiguration& WithMemory(long long value) { SetMemory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of disk space of the instance type included in your fleet.</p>
     */
    inline long long GetDisk() const{ return m_disk; }
    inline bool DiskHasBeenSet() const { return m_diskHasBeenSet; }
    inline void SetDisk(long long value) { m_diskHasBeenSet = true; m_disk = value; }
    inline ComputeConfiguration& WithDisk(long long value) { SetDisk(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The machine type of the instance type included in your fleet.</p>
     */
    inline const MachineType& GetMachineType() const{ return m_machineType; }
    inline bool MachineTypeHasBeenSet() const { return m_machineTypeHasBeenSet; }
    inline void SetMachineType(const MachineType& value) { m_machineTypeHasBeenSet = true; m_machineType = value; }
    inline void SetMachineType(MachineType&& value) { m_machineTypeHasBeenSet = true; m_machineType = std::move(value); }
    inline ComputeConfiguration& WithMachineType(const MachineType& value) { SetMachineType(value); return *this;}
    inline ComputeConfiguration& WithMachineType(MachineType&& value) { SetMachineType(std::move(value)); return *this;}
    ///@}
  private:

    long long m_vCpu;
    bool m_vCpuHasBeenSet = false;

    long long m_memory;
    bool m_memoryHasBeenSet = false;

    long long m_disk;
    bool m_diskHasBeenSet = false;

    MachineType m_machineType;
    bool m_machineTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
