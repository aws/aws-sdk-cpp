/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>

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
namespace SnowDeviceManagement
{
namespace Model
{

  /**
   * <p>The options for how a device's CPU is configured.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/CpuOptions">AWS
   * API Reference</a></p>
   */
  class CpuOptions
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API CpuOptions();
    AWS_SNOWDEVICEMANAGEMENT_API CpuOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API CpuOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of cores that the CPU can use.</p>
     */
    inline int GetCoreCount() const{ return m_coreCount; }

    /**
     * <p>The number of cores that the CPU can use.</p>
     */
    inline bool CoreCountHasBeenSet() const { return m_coreCountHasBeenSet; }

    /**
     * <p>The number of cores that the CPU can use.</p>
     */
    inline void SetCoreCount(int value) { m_coreCountHasBeenSet = true; m_coreCount = value; }

    /**
     * <p>The number of cores that the CPU can use.</p>
     */
    inline CpuOptions& WithCoreCount(int value) { SetCoreCount(value); return *this;}


    /**
     * <p>The number of threads per core in the CPU.</p>
     */
    inline int GetThreadsPerCore() const{ return m_threadsPerCore; }

    /**
     * <p>The number of threads per core in the CPU.</p>
     */
    inline bool ThreadsPerCoreHasBeenSet() const { return m_threadsPerCoreHasBeenSet; }

    /**
     * <p>The number of threads per core in the CPU.</p>
     */
    inline void SetThreadsPerCore(int value) { m_threadsPerCoreHasBeenSet = true; m_threadsPerCore = value; }

    /**
     * <p>The number of threads per core in the CPU.</p>
     */
    inline CpuOptions& WithThreadsPerCore(int value) { SetThreadsPerCore(value); return *this;}

  private:

    int m_coreCount;
    bool m_coreCountHasBeenSet = false;

    int m_threadsPerCore;
    bool m_threadsPerCoreHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
