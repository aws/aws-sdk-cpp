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
   * <p>The maximum allowed cumulative resources for an application. No new resources
   * will be created once the limit is hit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/MaximumAllowedResources">AWS
   * API Reference</a></p>
   */
  class MaximumAllowedResources
  {
  public:
    AWS_EMRSERVERLESS_API MaximumAllowedResources() = default;
    AWS_EMRSERVERLESS_API MaximumAllowedResources(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API MaximumAllowedResources& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum allowed CPU for an application.</p>
     */
    inline const Aws::String& GetCpu() const { return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    template<typename CpuT = Aws::String>
    void SetCpu(CpuT&& value) { m_cpuHasBeenSet = true; m_cpu = std::forward<CpuT>(value); }
    template<typename CpuT = Aws::String>
    MaximumAllowedResources& WithCpu(CpuT&& value) { SetCpu(std::forward<CpuT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum allowed resources for an application.</p>
     */
    inline const Aws::String& GetMemory() const { return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    template<typename MemoryT = Aws::String>
    void SetMemory(MemoryT&& value) { m_memoryHasBeenSet = true; m_memory = std::forward<MemoryT>(value); }
    template<typename MemoryT = Aws::String>
    MaximumAllowedResources& WithMemory(MemoryT&& value) { SetMemory(std::forward<MemoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum allowed disk for an application.</p>
     */
    inline const Aws::String& GetDisk() const { return m_disk; }
    inline bool DiskHasBeenSet() const { return m_diskHasBeenSet; }
    template<typename DiskT = Aws::String>
    void SetDisk(DiskT&& value) { m_diskHasBeenSet = true; m_disk = std::forward<DiskT>(value); }
    template<typename DiskT = Aws::String>
    MaximumAllowedResources& WithDisk(DiskT&& value) { SetDisk(std::forward<DiskT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cpu;
    bool m_cpuHasBeenSet = false;

    Aws::String m_memory;
    bool m_memoryHasBeenSet = false;

    Aws::String m_disk;
    bool m_diskHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
