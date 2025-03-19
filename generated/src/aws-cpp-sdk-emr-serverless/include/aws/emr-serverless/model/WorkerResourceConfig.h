/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
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
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>The cumulative configuration requirements for every worker instance of the
   * worker type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/WorkerResourceConfig">AWS
   * API Reference</a></p>
   */
  class WorkerResourceConfig
  {
  public:
    AWS_EMRSERVERLESS_API WorkerResourceConfig() = default;
    AWS_EMRSERVERLESS_API WorkerResourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API WorkerResourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CPU requirements for every worker instance of the worker type.</p>
     */
    inline const Aws::String& GetCpu() const { return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    template<typename CpuT = Aws::String>
    void SetCpu(CpuT&& value) { m_cpuHasBeenSet = true; m_cpu = std::forward<CpuT>(value); }
    template<typename CpuT = Aws::String>
    WorkerResourceConfig& WithCpu(CpuT&& value) { SetCpu(std::forward<CpuT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The memory requirements for every worker instance of the worker type.</p>
     */
    inline const Aws::String& GetMemory() const { return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    template<typename MemoryT = Aws::String>
    void SetMemory(MemoryT&& value) { m_memoryHasBeenSet = true; m_memory = std::forward<MemoryT>(value); }
    template<typename MemoryT = Aws::String>
    WorkerResourceConfig& WithMemory(MemoryT&& value) { SetMemory(std::forward<MemoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The disk requirements for every worker instance of the worker type.</p>
     */
    inline const Aws::String& GetDisk() const { return m_disk; }
    inline bool DiskHasBeenSet() const { return m_diskHasBeenSet; }
    template<typename DiskT = Aws::String>
    void SetDisk(DiskT&& value) { m_diskHasBeenSet = true; m_disk = std::forward<DiskT>(value); }
    template<typename DiskT = Aws::String>
    WorkerResourceConfig& WithDisk(DiskT&& value) { SetDisk(std::forward<DiskT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The disk type for every worker instance of the work type. Shuffle optimized
     * disks have higher performance characteristics and are better for shuffle heavy
     * workloads. Default is <code>STANDARD</code>.</p>
     */
    inline const Aws::String& GetDiskType() const { return m_diskType; }
    inline bool DiskTypeHasBeenSet() const { return m_diskTypeHasBeenSet; }
    template<typename DiskTypeT = Aws::String>
    void SetDiskType(DiskTypeT&& value) { m_diskTypeHasBeenSet = true; m_diskType = std::forward<DiskTypeT>(value); }
    template<typename DiskTypeT = Aws::String>
    WorkerResourceConfig& WithDiskType(DiskTypeT&& value) { SetDiskType(std::forward<DiskTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cpu;
    bool m_cpuHasBeenSet = false;

    Aws::String m_memory;
    bool m_memoryHasBeenSet = false;

    Aws::String m_disk;
    bool m_diskHasBeenSet = false;

    Aws::String m_diskType;
    bool m_diskTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
