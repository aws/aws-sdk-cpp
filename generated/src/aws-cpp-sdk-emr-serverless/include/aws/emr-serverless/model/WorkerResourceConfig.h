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
    AWS_EMRSERVERLESS_API WorkerResourceConfig();
    AWS_EMRSERVERLESS_API WorkerResourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API WorkerResourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CPU requirements for every worker instance of the worker type.</p>
     */
    inline const Aws::String& GetCpu() const{ return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    inline void SetCpu(const Aws::String& value) { m_cpuHasBeenSet = true; m_cpu = value; }
    inline void SetCpu(Aws::String&& value) { m_cpuHasBeenSet = true; m_cpu = std::move(value); }
    inline void SetCpu(const char* value) { m_cpuHasBeenSet = true; m_cpu.assign(value); }
    inline WorkerResourceConfig& WithCpu(const Aws::String& value) { SetCpu(value); return *this;}
    inline WorkerResourceConfig& WithCpu(Aws::String&& value) { SetCpu(std::move(value)); return *this;}
    inline WorkerResourceConfig& WithCpu(const char* value) { SetCpu(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The memory requirements for every worker instance of the worker type.</p>
     */
    inline const Aws::String& GetMemory() const{ return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    inline void SetMemory(const Aws::String& value) { m_memoryHasBeenSet = true; m_memory = value; }
    inline void SetMemory(Aws::String&& value) { m_memoryHasBeenSet = true; m_memory = std::move(value); }
    inline void SetMemory(const char* value) { m_memoryHasBeenSet = true; m_memory.assign(value); }
    inline WorkerResourceConfig& WithMemory(const Aws::String& value) { SetMemory(value); return *this;}
    inline WorkerResourceConfig& WithMemory(Aws::String&& value) { SetMemory(std::move(value)); return *this;}
    inline WorkerResourceConfig& WithMemory(const char* value) { SetMemory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The disk requirements for every worker instance of the worker type.</p>
     */
    inline const Aws::String& GetDisk() const{ return m_disk; }
    inline bool DiskHasBeenSet() const { return m_diskHasBeenSet; }
    inline void SetDisk(const Aws::String& value) { m_diskHasBeenSet = true; m_disk = value; }
    inline void SetDisk(Aws::String&& value) { m_diskHasBeenSet = true; m_disk = std::move(value); }
    inline void SetDisk(const char* value) { m_diskHasBeenSet = true; m_disk.assign(value); }
    inline WorkerResourceConfig& WithDisk(const Aws::String& value) { SetDisk(value); return *this;}
    inline WorkerResourceConfig& WithDisk(Aws::String&& value) { SetDisk(std::move(value)); return *this;}
    inline WorkerResourceConfig& WithDisk(const char* value) { SetDisk(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The disk type for every worker instance of the work type. Shuffle optimized
     * disks have higher performance characteristics and are better for shuffle heavy
     * workloads. Default is <code>STANDARD</code>.</p>
     */
    inline const Aws::String& GetDiskType() const{ return m_diskType; }
    inline bool DiskTypeHasBeenSet() const { return m_diskTypeHasBeenSet; }
    inline void SetDiskType(const Aws::String& value) { m_diskTypeHasBeenSet = true; m_diskType = value; }
    inline void SetDiskType(Aws::String&& value) { m_diskTypeHasBeenSet = true; m_diskType = std::move(value); }
    inline void SetDiskType(const char* value) { m_diskTypeHasBeenSet = true; m_diskType.assign(value); }
    inline WorkerResourceConfig& WithDiskType(const Aws::String& value) { SetDiskType(value); return *this;}
    inline WorkerResourceConfig& WithDiskType(Aws::String&& value) { SetDiskType(std::move(value)); return *this;}
    inline WorkerResourceConfig& WithDiskType(const char* value) { SetDiskType(value); return *this;}
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
