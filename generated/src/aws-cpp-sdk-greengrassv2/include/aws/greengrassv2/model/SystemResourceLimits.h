/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>

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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains information about system resource limits that the IoT Greengrass
   * Core software applies to a component's processes. For more information, see <a
   * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/configure-greengrass-core-v2.html#configure-component-system-resource-limits">Configure
   * system resource limits for components</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/SystemResourceLimits">AWS
   * API Reference</a></p>
   */
  class SystemResourceLimits
  {
  public:
    AWS_GREENGRASSV2_API SystemResourceLimits();
    AWS_GREENGRASSV2_API SystemResourceLimits(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API SystemResourceLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum amount of RAM, expressed in kilobytes, that a component's
     * processes can use on the core device.</p>
     */
    inline long long GetMemory() const{ return m_memory; }

    /**
     * <p>The maximum amount of RAM, expressed in kilobytes, that a component's
     * processes can use on the core device.</p>
     */
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }

    /**
     * <p>The maximum amount of RAM, expressed in kilobytes, that a component's
     * processes can use on the core device.</p>
     */
    inline void SetMemory(long long value) { m_memoryHasBeenSet = true; m_memory = value; }

    /**
     * <p>The maximum amount of RAM, expressed in kilobytes, that a component's
     * processes can use on the core device.</p>
     */
    inline SystemResourceLimits& WithMemory(long long value) { SetMemory(value); return *this;}


    /**
     * <p>The maximum amount of CPU time that a component's processes can use on the
     * core device. A core device's total CPU time is equivalent to the device's number
     * of CPU cores. For example, on a core device with 4 CPU cores, you can set this
     * value to <code>2</code> to limit the component's processes to 50 percent usage
     * of each CPU core. On a device with 1 CPU core, you can set this value to
     * <code>0.25</code> to limit the component's processes to 25 percent usage of the
     * CPU. If you set this value to a number greater than the number of CPU cores, the
     * IoT Greengrass Core software doesn't limit the component's CPU usage.</p>
     */
    inline double GetCpus() const{ return m_cpus; }

    /**
     * <p>The maximum amount of CPU time that a component's processes can use on the
     * core device. A core device's total CPU time is equivalent to the device's number
     * of CPU cores. For example, on a core device with 4 CPU cores, you can set this
     * value to <code>2</code> to limit the component's processes to 50 percent usage
     * of each CPU core. On a device with 1 CPU core, you can set this value to
     * <code>0.25</code> to limit the component's processes to 25 percent usage of the
     * CPU. If you set this value to a number greater than the number of CPU cores, the
     * IoT Greengrass Core software doesn't limit the component's CPU usage.</p>
     */
    inline bool CpusHasBeenSet() const { return m_cpusHasBeenSet; }

    /**
     * <p>The maximum amount of CPU time that a component's processes can use on the
     * core device. A core device's total CPU time is equivalent to the device's number
     * of CPU cores. For example, on a core device with 4 CPU cores, you can set this
     * value to <code>2</code> to limit the component's processes to 50 percent usage
     * of each CPU core. On a device with 1 CPU core, you can set this value to
     * <code>0.25</code> to limit the component's processes to 25 percent usage of the
     * CPU. If you set this value to a number greater than the number of CPU cores, the
     * IoT Greengrass Core software doesn't limit the component's CPU usage.</p>
     */
    inline void SetCpus(double value) { m_cpusHasBeenSet = true; m_cpus = value; }

    /**
     * <p>The maximum amount of CPU time that a component's processes can use on the
     * core device. A core device's total CPU time is equivalent to the device's number
     * of CPU cores. For example, on a core device with 4 CPU cores, you can set this
     * value to <code>2</code> to limit the component's processes to 50 percent usage
     * of each CPU core. On a device with 1 CPU core, you can set this value to
     * <code>0.25</code> to limit the component's processes to 25 percent usage of the
     * CPU. If you set this value to a number greater than the number of CPU cores, the
     * IoT Greengrass Core software doesn't limit the component's CPU usage.</p>
     */
    inline SystemResourceLimits& WithCpus(double value) { SetCpus(value); return *this;}

  private:

    long long m_memory;
    bool m_memoryHasBeenSet = false;

    double m_cpus;
    bool m_cpusHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
