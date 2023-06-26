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
    AWS_EMRSERVERLESS_API MaximumAllowedResources();
    AWS_EMRSERVERLESS_API MaximumAllowedResources(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API MaximumAllowedResources& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum allowed CPU for an application.</p>
     */
    inline const Aws::String& GetCpu() const{ return m_cpu; }

    /**
     * <p>The maximum allowed CPU for an application.</p>
     */
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }

    /**
     * <p>The maximum allowed CPU for an application.</p>
     */
    inline void SetCpu(const Aws::String& value) { m_cpuHasBeenSet = true; m_cpu = value; }

    /**
     * <p>The maximum allowed CPU for an application.</p>
     */
    inline void SetCpu(Aws::String&& value) { m_cpuHasBeenSet = true; m_cpu = std::move(value); }

    /**
     * <p>The maximum allowed CPU for an application.</p>
     */
    inline void SetCpu(const char* value) { m_cpuHasBeenSet = true; m_cpu.assign(value); }

    /**
     * <p>The maximum allowed CPU for an application.</p>
     */
    inline MaximumAllowedResources& WithCpu(const Aws::String& value) { SetCpu(value); return *this;}

    /**
     * <p>The maximum allowed CPU for an application.</p>
     */
    inline MaximumAllowedResources& WithCpu(Aws::String&& value) { SetCpu(std::move(value)); return *this;}

    /**
     * <p>The maximum allowed CPU for an application.</p>
     */
    inline MaximumAllowedResources& WithCpu(const char* value) { SetCpu(value); return *this;}


    /**
     * <p>The maximum allowed resources for an application.</p>
     */
    inline const Aws::String& GetMemory() const{ return m_memory; }

    /**
     * <p>The maximum allowed resources for an application.</p>
     */
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }

    /**
     * <p>The maximum allowed resources for an application.</p>
     */
    inline void SetMemory(const Aws::String& value) { m_memoryHasBeenSet = true; m_memory = value; }

    /**
     * <p>The maximum allowed resources for an application.</p>
     */
    inline void SetMemory(Aws::String&& value) { m_memoryHasBeenSet = true; m_memory = std::move(value); }

    /**
     * <p>The maximum allowed resources for an application.</p>
     */
    inline void SetMemory(const char* value) { m_memoryHasBeenSet = true; m_memory.assign(value); }

    /**
     * <p>The maximum allowed resources for an application.</p>
     */
    inline MaximumAllowedResources& WithMemory(const Aws::String& value) { SetMemory(value); return *this;}

    /**
     * <p>The maximum allowed resources for an application.</p>
     */
    inline MaximumAllowedResources& WithMemory(Aws::String&& value) { SetMemory(std::move(value)); return *this;}

    /**
     * <p>The maximum allowed resources for an application.</p>
     */
    inline MaximumAllowedResources& WithMemory(const char* value) { SetMemory(value); return *this;}


    /**
     * <p>The maximum allowed disk for an application.</p>
     */
    inline const Aws::String& GetDisk() const{ return m_disk; }

    /**
     * <p>The maximum allowed disk for an application.</p>
     */
    inline bool DiskHasBeenSet() const { return m_diskHasBeenSet; }

    /**
     * <p>The maximum allowed disk for an application.</p>
     */
    inline void SetDisk(const Aws::String& value) { m_diskHasBeenSet = true; m_disk = value; }

    /**
     * <p>The maximum allowed disk for an application.</p>
     */
    inline void SetDisk(Aws::String&& value) { m_diskHasBeenSet = true; m_disk = std::move(value); }

    /**
     * <p>The maximum allowed disk for an application.</p>
     */
    inline void SetDisk(const char* value) { m_diskHasBeenSet = true; m_disk.assign(value); }

    /**
     * <p>The maximum allowed disk for an application.</p>
     */
    inline MaximumAllowedResources& WithDisk(const Aws::String& value) { SetDisk(value); return *this;}

    /**
     * <p>The maximum allowed disk for an application.</p>
     */
    inline MaximumAllowedResources& WithDisk(Aws::String&& value) { SetDisk(std::move(value)); return *this;}

    /**
     * <p>The maximum allowed disk for an application.</p>
     */
    inline MaximumAllowedResources& WithDisk(const char* value) { SetDisk(value); return *this;}

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
