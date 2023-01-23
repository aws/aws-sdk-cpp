/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>Details on the Amazon EC2 Resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/EC2ResourceDetails">AWS
   * API Reference</a></p>
   */
  class EC2ResourceDetails
  {
  public:
    AWS_COSTEXPLORER_API EC2ResourceDetails();
    AWS_COSTEXPLORER_API EC2ResourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API EC2ResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The hourly public On-Demand rate for the instance type.</p>
     */
    inline const Aws::String& GetHourlyOnDemandRate() const{ return m_hourlyOnDemandRate; }

    /**
     * <p>The hourly public On-Demand rate for the instance type.</p>
     */
    inline bool HourlyOnDemandRateHasBeenSet() const { return m_hourlyOnDemandRateHasBeenSet; }

    /**
     * <p>The hourly public On-Demand rate for the instance type.</p>
     */
    inline void SetHourlyOnDemandRate(const Aws::String& value) { m_hourlyOnDemandRateHasBeenSet = true; m_hourlyOnDemandRate = value; }

    /**
     * <p>The hourly public On-Demand rate for the instance type.</p>
     */
    inline void SetHourlyOnDemandRate(Aws::String&& value) { m_hourlyOnDemandRateHasBeenSet = true; m_hourlyOnDemandRate = std::move(value); }

    /**
     * <p>The hourly public On-Demand rate for the instance type.</p>
     */
    inline void SetHourlyOnDemandRate(const char* value) { m_hourlyOnDemandRateHasBeenSet = true; m_hourlyOnDemandRate.assign(value); }

    /**
     * <p>The hourly public On-Demand rate for the instance type.</p>
     */
    inline EC2ResourceDetails& WithHourlyOnDemandRate(const Aws::String& value) { SetHourlyOnDemandRate(value); return *this;}

    /**
     * <p>The hourly public On-Demand rate for the instance type.</p>
     */
    inline EC2ResourceDetails& WithHourlyOnDemandRate(Aws::String&& value) { SetHourlyOnDemandRate(std::move(value)); return *this;}

    /**
     * <p>The hourly public On-Demand rate for the instance type.</p>
     */
    inline EC2ResourceDetails& WithHourlyOnDemandRate(const char* value) { SetHourlyOnDemandRate(value); return *this;}


    /**
     * <p>The type of Amazon Web Services instance.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The type of Amazon Web Services instance.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The type of Amazon Web Services instance.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The type of Amazon Web Services instance.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The type of Amazon Web Services instance.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The type of Amazon Web Services instance.</p>
     */
    inline EC2ResourceDetails& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The type of Amazon Web Services instance.</p>
     */
    inline EC2ResourceDetails& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The type of Amazon Web Services instance.</p>
     */
    inline EC2ResourceDetails& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The platform of the Amazon Web Services instance. The platform is the
     * specific combination of operating system, license model, and software on an
     * instance.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * <p>The platform of the Amazon Web Services instance. The platform is the
     * specific combination of operating system, license model, and software on an
     * instance.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The platform of the Amazon Web Services instance. The platform is the
     * specific combination of operating system, license model, and software on an
     * instance.</p>
     */
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The platform of the Amazon Web Services instance. The platform is the
     * specific combination of operating system, license model, and software on an
     * instance.</p>
     */
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The platform of the Amazon Web Services instance. The platform is the
     * specific combination of operating system, license model, and software on an
     * instance.</p>
     */
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }

    /**
     * <p>The platform of the Amazon Web Services instance. The platform is the
     * specific combination of operating system, license model, and software on an
     * instance.</p>
     */
    inline EC2ResourceDetails& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * <p>The platform of the Amazon Web Services instance. The platform is the
     * specific combination of operating system, license model, and software on an
     * instance.</p>
     */
    inline EC2ResourceDetails& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * <p>The platform of the Amazon Web Services instance. The platform is the
     * specific combination of operating system, license model, and software on an
     * instance.</p>
     */
    inline EC2ResourceDetails& WithPlatform(const char* value) { SetPlatform(value); return *this;}


    /**
     * <p>The Amazon Web Services Region of the instance.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Amazon Web Services Region of the instance.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region of the instance.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Amazon Web Services Region of the instance.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Amazon Web Services Region of the instance.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Amazon Web Services Region of the instance.</p>
     */
    inline EC2ResourceDetails& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region of the instance.</p>
     */
    inline EC2ResourceDetails& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region of the instance.</p>
     */
    inline EC2ResourceDetails& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The SKU of the product.</p>
     */
    inline const Aws::String& GetSku() const{ return m_sku; }

    /**
     * <p>The SKU of the product.</p>
     */
    inline bool SkuHasBeenSet() const { return m_skuHasBeenSet; }

    /**
     * <p>The SKU of the product.</p>
     */
    inline void SetSku(const Aws::String& value) { m_skuHasBeenSet = true; m_sku = value; }

    /**
     * <p>The SKU of the product.</p>
     */
    inline void SetSku(Aws::String&& value) { m_skuHasBeenSet = true; m_sku = std::move(value); }

    /**
     * <p>The SKU of the product.</p>
     */
    inline void SetSku(const char* value) { m_skuHasBeenSet = true; m_sku.assign(value); }

    /**
     * <p>The SKU of the product.</p>
     */
    inline EC2ResourceDetails& WithSku(const Aws::String& value) { SetSku(value); return *this;}

    /**
     * <p>The SKU of the product.</p>
     */
    inline EC2ResourceDetails& WithSku(Aws::String&& value) { SetSku(std::move(value)); return *this;}

    /**
     * <p>The SKU of the product.</p>
     */
    inline EC2ResourceDetails& WithSku(const char* value) { SetSku(value); return *this;}


    /**
     * <p>The memory capacity of the Amazon Web Services instance.</p>
     */
    inline const Aws::String& GetMemory() const{ return m_memory; }

    /**
     * <p>The memory capacity of the Amazon Web Services instance.</p>
     */
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }

    /**
     * <p>The memory capacity of the Amazon Web Services instance.</p>
     */
    inline void SetMemory(const Aws::String& value) { m_memoryHasBeenSet = true; m_memory = value; }

    /**
     * <p>The memory capacity of the Amazon Web Services instance.</p>
     */
    inline void SetMemory(Aws::String&& value) { m_memoryHasBeenSet = true; m_memory = std::move(value); }

    /**
     * <p>The memory capacity of the Amazon Web Services instance.</p>
     */
    inline void SetMemory(const char* value) { m_memoryHasBeenSet = true; m_memory.assign(value); }

    /**
     * <p>The memory capacity of the Amazon Web Services instance.</p>
     */
    inline EC2ResourceDetails& WithMemory(const Aws::String& value) { SetMemory(value); return *this;}

    /**
     * <p>The memory capacity of the Amazon Web Services instance.</p>
     */
    inline EC2ResourceDetails& WithMemory(Aws::String&& value) { SetMemory(std::move(value)); return *this;}

    /**
     * <p>The memory capacity of the Amazon Web Services instance.</p>
     */
    inline EC2ResourceDetails& WithMemory(const char* value) { SetMemory(value); return *this;}


    /**
     * <p>The network performance capacity of the Amazon Web Services instance.</p>
     */
    inline const Aws::String& GetNetworkPerformance() const{ return m_networkPerformance; }

    /**
     * <p>The network performance capacity of the Amazon Web Services instance.</p>
     */
    inline bool NetworkPerformanceHasBeenSet() const { return m_networkPerformanceHasBeenSet; }

    /**
     * <p>The network performance capacity of the Amazon Web Services instance.</p>
     */
    inline void SetNetworkPerformance(const Aws::String& value) { m_networkPerformanceHasBeenSet = true; m_networkPerformance = value; }

    /**
     * <p>The network performance capacity of the Amazon Web Services instance.</p>
     */
    inline void SetNetworkPerformance(Aws::String&& value) { m_networkPerformanceHasBeenSet = true; m_networkPerformance = std::move(value); }

    /**
     * <p>The network performance capacity of the Amazon Web Services instance.</p>
     */
    inline void SetNetworkPerformance(const char* value) { m_networkPerformanceHasBeenSet = true; m_networkPerformance.assign(value); }

    /**
     * <p>The network performance capacity of the Amazon Web Services instance.</p>
     */
    inline EC2ResourceDetails& WithNetworkPerformance(const Aws::String& value) { SetNetworkPerformance(value); return *this;}

    /**
     * <p>The network performance capacity of the Amazon Web Services instance.</p>
     */
    inline EC2ResourceDetails& WithNetworkPerformance(Aws::String&& value) { SetNetworkPerformance(std::move(value)); return *this;}

    /**
     * <p>The network performance capacity of the Amazon Web Services instance.</p>
     */
    inline EC2ResourceDetails& WithNetworkPerformance(const char* value) { SetNetworkPerformance(value); return *this;}


    /**
     * <p>The disk storage of the Amazon Web Services instance. This doesn't include
     * EBS storage.</p>
     */
    inline const Aws::String& GetStorage() const{ return m_storage; }

    /**
     * <p>The disk storage of the Amazon Web Services instance. This doesn't include
     * EBS storage.</p>
     */
    inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }

    /**
     * <p>The disk storage of the Amazon Web Services instance. This doesn't include
     * EBS storage.</p>
     */
    inline void SetStorage(const Aws::String& value) { m_storageHasBeenSet = true; m_storage = value; }

    /**
     * <p>The disk storage of the Amazon Web Services instance. This doesn't include
     * EBS storage.</p>
     */
    inline void SetStorage(Aws::String&& value) { m_storageHasBeenSet = true; m_storage = std::move(value); }

    /**
     * <p>The disk storage of the Amazon Web Services instance. This doesn't include
     * EBS storage.</p>
     */
    inline void SetStorage(const char* value) { m_storageHasBeenSet = true; m_storage.assign(value); }

    /**
     * <p>The disk storage of the Amazon Web Services instance. This doesn't include
     * EBS storage.</p>
     */
    inline EC2ResourceDetails& WithStorage(const Aws::String& value) { SetStorage(value); return *this;}

    /**
     * <p>The disk storage of the Amazon Web Services instance. This doesn't include
     * EBS storage.</p>
     */
    inline EC2ResourceDetails& WithStorage(Aws::String&& value) { SetStorage(std::move(value)); return *this;}

    /**
     * <p>The disk storage of the Amazon Web Services instance. This doesn't include
     * EBS storage.</p>
     */
    inline EC2ResourceDetails& WithStorage(const char* value) { SetStorage(value); return *this;}


    /**
     * <p>The number of VCPU cores in the Amazon Web Services instance type.</p>
     */
    inline const Aws::String& GetVcpu() const{ return m_vcpu; }

    /**
     * <p>The number of VCPU cores in the Amazon Web Services instance type.</p>
     */
    inline bool VcpuHasBeenSet() const { return m_vcpuHasBeenSet; }

    /**
     * <p>The number of VCPU cores in the Amazon Web Services instance type.</p>
     */
    inline void SetVcpu(const Aws::String& value) { m_vcpuHasBeenSet = true; m_vcpu = value; }

    /**
     * <p>The number of VCPU cores in the Amazon Web Services instance type.</p>
     */
    inline void SetVcpu(Aws::String&& value) { m_vcpuHasBeenSet = true; m_vcpu = std::move(value); }

    /**
     * <p>The number of VCPU cores in the Amazon Web Services instance type.</p>
     */
    inline void SetVcpu(const char* value) { m_vcpuHasBeenSet = true; m_vcpu.assign(value); }

    /**
     * <p>The number of VCPU cores in the Amazon Web Services instance type.</p>
     */
    inline EC2ResourceDetails& WithVcpu(const Aws::String& value) { SetVcpu(value); return *this;}

    /**
     * <p>The number of VCPU cores in the Amazon Web Services instance type.</p>
     */
    inline EC2ResourceDetails& WithVcpu(Aws::String&& value) { SetVcpu(std::move(value)); return *this;}

    /**
     * <p>The number of VCPU cores in the Amazon Web Services instance type.</p>
     */
    inline EC2ResourceDetails& WithVcpu(const char* value) { SetVcpu(value); return *this;}

  private:

    Aws::String m_hourlyOnDemandRate;
    bool m_hourlyOnDemandRateHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_sku;
    bool m_skuHasBeenSet = false;

    Aws::String m_memory;
    bool m_memoryHasBeenSet = false;

    Aws::String m_networkPerformance;
    bool m_networkPerformanceHasBeenSet = false;

    Aws::String m_storage;
    bool m_storageHasBeenSet = false;

    Aws::String m_vcpu;
    bool m_vcpuHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
