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
    AWS_COSTEXPLORER_API EC2ResourceDetails() = default;
    AWS_COSTEXPLORER_API EC2ResourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API EC2ResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The hourly public On-Demand rate for the instance type.</p>
     */
    inline const Aws::String& GetHourlyOnDemandRate() const { return m_hourlyOnDemandRate; }
    inline bool HourlyOnDemandRateHasBeenSet() const { return m_hourlyOnDemandRateHasBeenSet; }
    template<typename HourlyOnDemandRateT = Aws::String>
    void SetHourlyOnDemandRate(HourlyOnDemandRateT&& value) { m_hourlyOnDemandRateHasBeenSet = true; m_hourlyOnDemandRate = std::forward<HourlyOnDemandRateT>(value); }
    template<typename HourlyOnDemandRateT = Aws::String>
    EC2ResourceDetails& WithHourlyOnDemandRate(HourlyOnDemandRateT&& value) { SetHourlyOnDemandRate(std::forward<HourlyOnDemandRateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services instance.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    EC2ResourceDetails& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform of the Amazon Web Services instance. The platform is the
     * specific combination of operating system, license model, and software on an
     * instance.</p>
     */
    inline const Aws::String& GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    template<typename PlatformT = Aws::String>
    void SetPlatform(PlatformT&& value) { m_platformHasBeenSet = true; m_platform = std::forward<PlatformT>(value); }
    template<typename PlatformT = Aws::String>
    EC2ResourceDetails& WithPlatform(PlatformT&& value) { SetPlatform(std::forward<PlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the instance.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    EC2ResourceDetails& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SKU of the product.</p>
     */
    inline const Aws::String& GetSku() const { return m_sku; }
    inline bool SkuHasBeenSet() const { return m_skuHasBeenSet; }
    template<typename SkuT = Aws::String>
    void SetSku(SkuT&& value) { m_skuHasBeenSet = true; m_sku = std::forward<SkuT>(value); }
    template<typename SkuT = Aws::String>
    EC2ResourceDetails& WithSku(SkuT&& value) { SetSku(std::forward<SkuT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The memory capacity of the Amazon Web Services instance.</p>
     */
    inline const Aws::String& GetMemory() const { return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    template<typename MemoryT = Aws::String>
    void SetMemory(MemoryT&& value) { m_memoryHasBeenSet = true; m_memory = std::forward<MemoryT>(value); }
    template<typename MemoryT = Aws::String>
    EC2ResourceDetails& WithMemory(MemoryT&& value) { SetMemory(std::forward<MemoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network performance capacity of the Amazon Web Services instance.</p>
     */
    inline const Aws::String& GetNetworkPerformance() const { return m_networkPerformance; }
    inline bool NetworkPerformanceHasBeenSet() const { return m_networkPerformanceHasBeenSet; }
    template<typename NetworkPerformanceT = Aws::String>
    void SetNetworkPerformance(NetworkPerformanceT&& value) { m_networkPerformanceHasBeenSet = true; m_networkPerformance = std::forward<NetworkPerformanceT>(value); }
    template<typename NetworkPerformanceT = Aws::String>
    EC2ResourceDetails& WithNetworkPerformance(NetworkPerformanceT&& value) { SetNetworkPerformance(std::forward<NetworkPerformanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The disk storage of the Amazon Web Services instance. This doesn't include
     * EBS storage.</p>
     */
    inline const Aws::String& GetStorage() const { return m_storage; }
    inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }
    template<typename StorageT = Aws::String>
    void SetStorage(StorageT&& value) { m_storageHasBeenSet = true; m_storage = std::forward<StorageT>(value); }
    template<typename StorageT = Aws::String>
    EC2ResourceDetails& WithStorage(StorageT&& value) { SetStorage(std::forward<StorageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of VCPU cores in the Amazon Web Services instance type.</p>
     */
    inline const Aws::String& GetVcpu() const { return m_vcpu; }
    inline bool VcpuHasBeenSet() const { return m_vcpuHasBeenSet; }
    template<typename VcpuT = Aws::String>
    void SetVcpu(VcpuT&& value) { m_vcpuHasBeenSet = true; m_vcpu = std::forward<VcpuT>(value); }
    template<typename VcpuT = Aws::String>
    EC2ResourceDetails& WithVcpu(VcpuT&& value) { SetVcpu(std::forward<VcpuT>(value)); return *this;}
    ///@}
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
