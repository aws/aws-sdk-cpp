/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/VCpuCountRangeRequest.h>
#include <aws/ecs/model/MemoryMiBRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/MemoryGiBPerVCpuRequest.h>
#include <aws/ecs/model/BareMetal.h>
#include <aws/ecs/model/BurstablePerformance.h>
#include <aws/ecs/model/NetworkInterfaceCountRequest.h>
#include <aws/ecs/model/LocalStorage.h>
#include <aws/ecs/model/TotalLocalStorageGBRequest.h>
#include <aws/ecs/model/BaselineEbsBandwidthMbpsRequest.h>
#include <aws/ecs/model/AcceleratorCountRequest.h>
#include <aws/ecs/model/AcceleratorTotalMemoryMiBRequest.h>
#include <aws/ecs/model/NetworkBandwidthGbpsRequest.h>
#include <aws/ecs/model/CpuManufacturer.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/InstanceGeneration.h>
#include <aws/ecs/model/LocalStorageType.h>
#include <aws/ecs/model/AcceleratorType.h>
#include <aws/ecs/model/AcceleratorManufacturer.h>
#include <aws/ecs/model/AcceleratorName.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The instance requirements for attribute-based instance type selection.
   * Instead of specifying exact instance types, you define requirements such as vCPU
   * count, memory size, network performance, and accelerator specifications. Amazon
   * ECS automatically selects Amazon EC2 instance types that match these
   * requirements, providing flexibility and helping to mitigate capacity
   * constraints.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/InstanceRequirementsRequest">AWS
   * API Reference</a></p>
   */
  class InstanceRequirementsRequest
  {
  public:
    AWS_ECS_API InstanceRequirementsRequest() = default;
    AWS_ECS_API InstanceRequirementsRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API InstanceRequirementsRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum and maximum number of vCPUs for the instance types. Amazon ECS
     * selects instance types that have vCPU counts within this range.</p>
     */
    inline const VCpuCountRangeRequest& GetVCpuCount() const { return m_vCpuCount; }
    inline bool VCpuCountHasBeenSet() const { return m_vCpuCountHasBeenSet; }
    template<typename VCpuCountT = VCpuCountRangeRequest>
    void SetVCpuCount(VCpuCountT&& value) { m_vCpuCountHasBeenSet = true; m_vCpuCount = std::forward<VCpuCountT>(value); }
    template<typename VCpuCountT = VCpuCountRangeRequest>
    InstanceRequirementsRequest& WithVCpuCount(VCpuCountT&& value) { SetVCpuCount(std::forward<VCpuCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum and maximum amount of memory in mebibytes (MiB) for the instance
     * types. Amazon ECS selects instance types that have memory within this range.</p>
     */
    inline const MemoryMiBRequest& GetMemoryMiB() const { return m_memoryMiB; }
    inline bool MemoryMiBHasBeenSet() const { return m_memoryMiBHasBeenSet; }
    template<typename MemoryMiBT = MemoryMiBRequest>
    void SetMemoryMiB(MemoryMiBT&& value) { m_memoryMiBHasBeenSet = true; m_memoryMiB = std::forward<MemoryMiBT>(value); }
    template<typename MemoryMiBT = MemoryMiBRequest>
    InstanceRequirementsRequest& WithMemoryMiB(MemoryMiBT&& value) { SetMemoryMiB(std::forward<MemoryMiBT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CPU manufacturers to include or exclude. You can specify
     * <code>intel</code>, <code>amd</code>, or <code>amazon-web-services</code> to
     * control which CPU types are used for your workloads.</p>
     */
    inline const Aws::Vector<CpuManufacturer>& GetCpuManufacturers() const { return m_cpuManufacturers; }
    inline bool CpuManufacturersHasBeenSet() const { return m_cpuManufacturersHasBeenSet; }
    template<typename CpuManufacturersT = Aws::Vector<CpuManufacturer>>
    void SetCpuManufacturers(CpuManufacturersT&& value) { m_cpuManufacturersHasBeenSet = true; m_cpuManufacturers = std::forward<CpuManufacturersT>(value); }
    template<typename CpuManufacturersT = Aws::Vector<CpuManufacturer>>
    InstanceRequirementsRequest& WithCpuManufacturers(CpuManufacturersT&& value) { SetCpuManufacturers(std::forward<CpuManufacturersT>(value)); return *this;}
    inline InstanceRequirementsRequest& AddCpuManufacturers(CpuManufacturer value) { m_cpuManufacturersHasBeenSet = true; m_cpuManufacturers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The minimum and maximum amount of memory per vCPU in gibibytes (GiB). This
     * helps ensure that instance types have the appropriate memory-to-CPU ratio for
     * your workloads.</p>
     */
    inline const MemoryGiBPerVCpuRequest& GetMemoryGiBPerVCpu() const { return m_memoryGiBPerVCpu; }
    inline bool MemoryGiBPerVCpuHasBeenSet() const { return m_memoryGiBPerVCpuHasBeenSet; }
    template<typename MemoryGiBPerVCpuT = MemoryGiBPerVCpuRequest>
    void SetMemoryGiBPerVCpu(MemoryGiBPerVCpuT&& value) { m_memoryGiBPerVCpuHasBeenSet = true; m_memoryGiBPerVCpu = std::forward<MemoryGiBPerVCpuT>(value); }
    template<typename MemoryGiBPerVCpuT = MemoryGiBPerVCpuRequest>
    InstanceRequirementsRequest& WithMemoryGiBPerVCpu(MemoryGiBPerVCpuT&& value) { SetMemoryGiBPerVCpu(std::forward<MemoryGiBPerVCpuT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance types to exclude from selection. Use this to prevent Amazon ECS
     * from selecting specific instance types that may not be suitable for your
     * workloads.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedInstanceTypes() const { return m_excludedInstanceTypes; }
    inline bool ExcludedInstanceTypesHasBeenSet() const { return m_excludedInstanceTypesHasBeenSet; }
    template<typename ExcludedInstanceTypesT = Aws::Vector<Aws::String>>
    void SetExcludedInstanceTypes(ExcludedInstanceTypesT&& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes = std::forward<ExcludedInstanceTypesT>(value); }
    template<typename ExcludedInstanceTypesT = Aws::Vector<Aws::String>>
    InstanceRequirementsRequest& WithExcludedInstanceTypes(ExcludedInstanceTypesT&& value) { SetExcludedInstanceTypes(std::forward<ExcludedInstanceTypesT>(value)); return *this;}
    template<typename ExcludedInstanceTypesT = Aws::String>
    InstanceRequirementsRequest& AddExcludedInstanceTypes(ExcludedInstanceTypesT&& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes.emplace_back(std::forward<ExcludedInstanceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instance generations to include. You can specify <code>current</code> to
     * use the latest generation instances, or <code>previous</code> to include
     * previous generation instances for cost optimization.</p>
     */
    inline const Aws::Vector<InstanceGeneration>& GetInstanceGenerations() const { return m_instanceGenerations; }
    inline bool InstanceGenerationsHasBeenSet() const { return m_instanceGenerationsHasBeenSet; }
    template<typename InstanceGenerationsT = Aws::Vector<InstanceGeneration>>
    void SetInstanceGenerations(InstanceGenerationsT&& value) { m_instanceGenerationsHasBeenSet = true; m_instanceGenerations = std::forward<InstanceGenerationsT>(value); }
    template<typename InstanceGenerationsT = Aws::Vector<InstanceGeneration>>
    InstanceRequirementsRequest& WithInstanceGenerations(InstanceGenerationsT&& value) { SetInstanceGenerations(std::forward<InstanceGenerationsT>(value)); return *this;}
    inline InstanceRequirementsRequest& AddInstanceGenerations(InstanceGeneration value) { m_instanceGenerationsHasBeenSet = true; m_instanceGenerations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum price for Spot instances as a percentage over the lowest priced
     * On-Demand instance. This helps control Spot instance costs while maintaining
     * access to capacity.</p>
     */
    inline int GetSpotMaxPricePercentageOverLowestPrice() const { return m_spotMaxPricePercentageOverLowestPrice; }
    inline bool SpotMaxPricePercentageOverLowestPriceHasBeenSet() const { return m_spotMaxPricePercentageOverLowestPriceHasBeenSet; }
    inline void SetSpotMaxPricePercentageOverLowestPrice(int value) { m_spotMaxPricePercentageOverLowestPriceHasBeenSet = true; m_spotMaxPricePercentageOverLowestPrice = value; }
    inline InstanceRequirementsRequest& WithSpotMaxPricePercentageOverLowestPrice(int value) { SetSpotMaxPricePercentageOverLowestPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The price protection threshold for On-Demand Instances, as a percentage
     * higher than an identified On-Demand price. The identified On-Demand price is the
     * price of the lowest priced current generation C, M, or R instance type with your
     * specified attributes. If no current generation C, M, or R instance type matches
     * your attributes, then the identified price is from either the lowest priced
     * current generation instance types or, failing that, the lowest priced previous
     * generation instance types that match your attributes. When Amazon ECS selects
     * instance types with your attributes, we will exclude instance types whose price
     * exceeds your specified threshold.</p>
     */
    inline int GetOnDemandMaxPricePercentageOverLowestPrice() const { return m_onDemandMaxPricePercentageOverLowestPrice; }
    inline bool OnDemandMaxPricePercentageOverLowestPriceHasBeenSet() const { return m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet; }
    inline void SetOnDemandMaxPricePercentageOverLowestPrice(int value) { m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet = true; m_onDemandMaxPricePercentageOverLowestPrice = value; }
    inline InstanceRequirementsRequest& WithOnDemandMaxPricePercentageOverLowestPrice(int value) { SetOnDemandMaxPricePercentageOverLowestPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to include bare metal instance types. Set to
     * <code>included</code> to allow bare metal instances, <code>excluded</code> to
     * exclude them, or <code>required</code> to use only bare metal instances.</p>
     */
    inline BareMetal GetBareMetal() const { return m_bareMetal; }
    inline bool BareMetalHasBeenSet() const { return m_bareMetalHasBeenSet; }
    inline void SetBareMetal(BareMetal value) { m_bareMetalHasBeenSet = true; m_bareMetal = value; }
    inline InstanceRequirementsRequest& WithBareMetal(BareMetal value) { SetBareMetal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to include burstable performance instance types (T2, T3,
     * T3a, T4g). Set to <code>included</code> to allow burstable instances,
     * <code>excluded</code> to exclude them, or <code>required</code> to use only
     * burstable instances.</p>
     */
    inline BurstablePerformance GetBurstablePerformance() const { return m_burstablePerformance; }
    inline bool BurstablePerformanceHasBeenSet() const { return m_burstablePerformanceHasBeenSet; }
    inline void SetBurstablePerformance(BurstablePerformance value) { m_burstablePerformanceHasBeenSet = true; m_burstablePerformance = value; }
    inline InstanceRequirementsRequest& WithBurstablePerformance(BurstablePerformance value) { SetBurstablePerformance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance types must support hibernation. When set to
     * <code>true</code>, only instance types that support hibernation are
     * selected.</p>
     */
    inline bool GetRequireHibernateSupport() const { return m_requireHibernateSupport; }
    inline bool RequireHibernateSupportHasBeenSet() const { return m_requireHibernateSupportHasBeenSet; }
    inline void SetRequireHibernateSupport(bool value) { m_requireHibernateSupportHasBeenSet = true; m_requireHibernateSupport = value; }
    inline InstanceRequirementsRequest& WithRequireHibernateSupport(bool value) { SetRequireHibernateSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum and maximum number of network interfaces for the instance types.
     * This is useful for workloads that require multiple network interfaces.</p>
     */
    inline const NetworkInterfaceCountRequest& GetNetworkInterfaceCount() const { return m_networkInterfaceCount; }
    inline bool NetworkInterfaceCountHasBeenSet() const { return m_networkInterfaceCountHasBeenSet; }
    template<typename NetworkInterfaceCountT = NetworkInterfaceCountRequest>
    void SetNetworkInterfaceCount(NetworkInterfaceCountT&& value) { m_networkInterfaceCountHasBeenSet = true; m_networkInterfaceCount = std::forward<NetworkInterfaceCountT>(value); }
    template<typename NetworkInterfaceCountT = NetworkInterfaceCountRequest>
    InstanceRequirementsRequest& WithNetworkInterfaceCount(NetworkInterfaceCountT&& value) { SetNetworkInterfaceCount(std::forward<NetworkInterfaceCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to include instance types with local storage. Set to
     * <code>included</code> to allow local storage, <code>excluded</code> to exclude
     * it, or <code>required</code> to use only instances with local storage.</p>
     */
    inline LocalStorage GetLocalStorage() const { return m_localStorage; }
    inline bool LocalStorageHasBeenSet() const { return m_localStorageHasBeenSet; }
    inline void SetLocalStorage(LocalStorage value) { m_localStorageHasBeenSet = true; m_localStorage = value; }
    inline InstanceRequirementsRequest& WithLocalStorage(LocalStorage value) { SetLocalStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The local storage types to include. You can specify <code>hdd</code> for hard
     * disk drives, <code>ssd</code> for solid state drives, or both.</p>
     */
    inline const Aws::Vector<LocalStorageType>& GetLocalStorageTypes() const { return m_localStorageTypes; }
    inline bool LocalStorageTypesHasBeenSet() const { return m_localStorageTypesHasBeenSet; }
    template<typename LocalStorageTypesT = Aws::Vector<LocalStorageType>>
    void SetLocalStorageTypes(LocalStorageTypesT&& value) { m_localStorageTypesHasBeenSet = true; m_localStorageTypes = std::forward<LocalStorageTypesT>(value); }
    template<typename LocalStorageTypesT = Aws::Vector<LocalStorageType>>
    InstanceRequirementsRequest& WithLocalStorageTypes(LocalStorageTypesT&& value) { SetLocalStorageTypes(std::forward<LocalStorageTypesT>(value)); return *this;}
    inline InstanceRequirementsRequest& AddLocalStorageTypes(LocalStorageType value) { m_localStorageTypesHasBeenSet = true; m_localStorageTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The minimum and maximum total local storage in gigabytes (GB) for instance
     * types with local storage.</p>
     */
    inline const TotalLocalStorageGBRequest& GetTotalLocalStorageGB() const { return m_totalLocalStorageGB; }
    inline bool TotalLocalStorageGBHasBeenSet() const { return m_totalLocalStorageGBHasBeenSet; }
    template<typename TotalLocalStorageGBT = TotalLocalStorageGBRequest>
    void SetTotalLocalStorageGB(TotalLocalStorageGBT&& value) { m_totalLocalStorageGBHasBeenSet = true; m_totalLocalStorageGB = std::forward<TotalLocalStorageGBT>(value); }
    template<typename TotalLocalStorageGBT = TotalLocalStorageGBRequest>
    InstanceRequirementsRequest& WithTotalLocalStorageGB(TotalLocalStorageGBT&& value) { SetTotalLocalStorageGB(std::forward<TotalLocalStorageGBT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum and maximum baseline Amazon EBS bandwidth in megabits per second
     * (Mbps). This is important for workloads with high storage I/O requirements.</p>
     */
    inline const BaselineEbsBandwidthMbpsRequest& GetBaselineEbsBandwidthMbps() const { return m_baselineEbsBandwidthMbps; }
    inline bool BaselineEbsBandwidthMbpsHasBeenSet() const { return m_baselineEbsBandwidthMbpsHasBeenSet; }
    template<typename BaselineEbsBandwidthMbpsT = BaselineEbsBandwidthMbpsRequest>
    void SetBaselineEbsBandwidthMbps(BaselineEbsBandwidthMbpsT&& value) { m_baselineEbsBandwidthMbpsHasBeenSet = true; m_baselineEbsBandwidthMbps = std::forward<BaselineEbsBandwidthMbpsT>(value); }
    template<typename BaselineEbsBandwidthMbpsT = BaselineEbsBandwidthMbpsRequest>
    InstanceRequirementsRequest& WithBaselineEbsBandwidthMbps(BaselineEbsBandwidthMbpsT&& value) { SetBaselineEbsBandwidthMbps(std::forward<BaselineEbsBandwidthMbpsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The accelerator types to include. You can specify <code>gpu</code> for
     * graphics processing units, <code>fpga</code> for field programmable gate arrays,
     * or <code>inference</code> for machine learning inference accelerators.</p>
     */
    inline const Aws::Vector<AcceleratorType>& GetAcceleratorTypes() const { return m_acceleratorTypes; }
    inline bool AcceleratorTypesHasBeenSet() const { return m_acceleratorTypesHasBeenSet; }
    template<typename AcceleratorTypesT = Aws::Vector<AcceleratorType>>
    void SetAcceleratorTypes(AcceleratorTypesT&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = std::forward<AcceleratorTypesT>(value); }
    template<typename AcceleratorTypesT = Aws::Vector<AcceleratorType>>
    InstanceRequirementsRequest& WithAcceleratorTypes(AcceleratorTypesT&& value) { SetAcceleratorTypes(std::forward<AcceleratorTypesT>(value)); return *this;}
    inline InstanceRequirementsRequest& AddAcceleratorTypes(AcceleratorType value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The minimum and maximum number of accelerators for the instance types. This
     * is used when you need instances with specific numbers of GPUs or other
     * accelerators.</p>
     */
    inline const AcceleratorCountRequest& GetAcceleratorCount() const { return m_acceleratorCount; }
    inline bool AcceleratorCountHasBeenSet() const { return m_acceleratorCountHasBeenSet; }
    template<typename AcceleratorCountT = AcceleratorCountRequest>
    void SetAcceleratorCount(AcceleratorCountT&& value) { m_acceleratorCountHasBeenSet = true; m_acceleratorCount = std::forward<AcceleratorCountT>(value); }
    template<typename AcceleratorCountT = AcceleratorCountRequest>
    InstanceRequirementsRequest& WithAcceleratorCount(AcceleratorCountT&& value) { SetAcceleratorCount(std::forward<AcceleratorCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The accelerator manufacturers to include. You can specify
     * <code>nvidia</code>, <code>amd</code>, <code>amazon-web-services</code>, or
     * <code>xilinx</code> depending on your accelerator requirements.</p>
     */
    inline const Aws::Vector<AcceleratorManufacturer>& GetAcceleratorManufacturers() const { return m_acceleratorManufacturers; }
    inline bool AcceleratorManufacturersHasBeenSet() const { return m_acceleratorManufacturersHasBeenSet; }
    template<typename AcceleratorManufacturersT = Aws::Vector<AcceleratorManufacturer>>
    void SetAcceleratorManufacturers(AcceleratorManufacturersT&& value) { m_acceleratorManufacturersHasBeenSet = true; m_acceleratorManufacturers = std::forward<AcceleratorManufacturersT>(value); }
    template<typename AcceleratorManufacturersT = Aws::Vector<AcceleratorManufacturer>>
    InstanceRequirementsRequest& WithAcceleratorManufacturers(AcceleratorManufacturersT&& value) { SetAcceleratorManufacturers(std::forward<AcceleratorManufacturersT>(value)); return *this;}
    inline InstanceRequirementsRequest& AddAcceleratorManufacturers(AcceleratorManufacturer value) { m_acceleratorManufacturersHasBeenSet = true; m_acceleratorManufacturers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The specific accelerator names to include. For example, you can specify
     * <code>a100</code>, <code>v100</code>, <code>k80</code>, or other specific
     * accelerator models.</p>
     */
    inline const Aws::Vector<AcceleratorName>& GetAcceleratorNames() const { return m_acceleratorNames; }
    inline bool AcceleratorNamesHasBeenSet() const { return m_acceleratorNamesHasBeenSet; }
    template<typename AcceleratorNamesT = Aws::Vector<AcceleratorName>>
    void SetAcceleratorNames(AcceleratorNamesT&& value) { m_acceleratorNamesHasBeenSet = true; m_acceleratorNames = std::forward<AcceleratorNamesT>(value); }
    template<typename AcceleratorNamesT = Aws::Vector<AcceleratorName>>
    InstanceRequirementsRequest& WithAcceleratorNames(AcceleratorNamesT&& value) { SetAcceleratorNames(std::forward<AcceleratorNamesT>(value)); return *this;}
    inline InstanceRequirementsRequest& AddAcceleratorNames(AcceleratorName value) { m_acceleratorNamesHasBeenSet = true; m_acceleratorNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The minimum and maximum total accelerator memory in mebibytes (MiB). This is
     * important for GPU workloads that require specific amounts of video memory.</p>
     */
    inline const AcceleratorTotalMemoryMiBRequest& GetAcceleratorTotalMemoryMiB() const { return m_acceleratorTotalMemoryMiB; }
    inline bool AcceleratorTotalMemoryMiBHasBeenSet() const { return m_acceleratorTotalMemoryMiBHasBeenSet; }
    template<typename AcceleratorTotalMemoryMiBT = AcceleratorTotalMemoryMiBRequest>
    void SetAcceleratorTotalMemoryMiB(AcceleratorTotalMemoryMiBT&& value) { m_acceleratorTotalMemoryMiBHasBeenSet = true; m_acceleratorTotalMemoryMiB = std::forward<AcceleratorTotalMemoryMiBT>(value); }
    template<typename AcceleratorTotalMemoryMiBT = AcceleratorTotalMemoryMiBRequest>
    InstanceRequirementsRequest& WithAcceleratorTotalMemoryMiB(AcceleratorTotalMemoryMiBT&& value) { SetAcceleratorTotalMemoryMiB(std::forward<AcceleratorTotalMemoryMiBT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum and maximum network bandwidth in gigabits per second (Gbps). This
     * is crucial for network-intensive workloads that require high throughput.</p>
     */
    inline const NetworkBandwidthGbpsRequest& GetNetworkBandwidthGbps() const { return m_networkBandwidthGbps; }
    inline bool NetworkBandwidthGbpsHasBeenSet() const { return m_networkBandwidthGbpsHasBeenSet; }
    template<typename NetworkBandwidthGbpsT = NetworkBandwidthGbpsRequest>
    void SetNetworkBandwidthGbps(NetworkBandwidthGbpsT&& value) { m_networkBandwidthGbpsHasBeenSet = true; m_networkBandwidthGbps = std::forward<NetworkBandwidthGbpsT>(value); }
    template<typename NetworkBandwidthGbpsT = NetworkBandwidthGbpsRequest>
    InstanceRequirementsRequest& WithNetworkBandwidthGbps(NetworkBandwidthGbpsT&& value) { SetNetworkBandwidthGbps(std::forward<NetworkBandwidthGbpsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance types to include in the selection. When specified, Amazon ECS
     * only considers these instance types, subject to the other requirements
     * specified.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedInstanceTypes() const { return m_allowedInstanceTypes; }
    inline bool AllowedInstanceTypesHasBeenSet() const { return m_allowedInstanceTypesHasBeenSet; }
    template<typename AllowedInstanceTypesT = Aws::Vector<Aws::String>>
    void SetAllowedInstanceTypes(AllowedInstanceTypesT&& value) { m_allowedInstanceTypesHasBeenSet = true; m_allowedInstanceTypes = std::forward<AllowedInstanceTypesT>(value); }
    template<typename AllowedInstanceTypesT = Aws::Vector<Aws::String>>
    InstanceRequirementsRequest& WithAllowedInstanceTypes(AllowedInstanceTypesT&& value) { SetAllowedInstanceTypes(std::forward<AllowedInstanceTypesT>(value)); return *this;}
    template<typename AllowedInstanceTypesT = Aws::String>
    InstanceRequirementsRequest& AddAllowedInstanceTypes(AllowedInstanceTypesT&& value) { m_allowedInstanceTypesHasBeenSet = true; m_allowedInstanceTypes.emplace_back(std::forward<AllowedInstanceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum price for Spot instances as a percentage of the optimal On-Demand
     * price. This provides more precise cost control for Spot instance selection.</p>
     */
    inline int GetMaxSpotPriceAsPercentageOfOptimalOnDemandPrice() const { return m_maxSpotPriceAsPercentageOfOptimalOnDemandPrice; }
    inline bool MaxSpotPriceAsPercentageOfOptimalOnDemandPriceHasBeenSet() const { return m_maxSpotPriceAsPercentageOfOptimalOnDemandPriceHasBeenSet; }
    inline void SetMaxSpotPriceAsPercentageOfOptimalOnDemandPrice(int value) { m_maxSpotPriceAsPercentageOfOptimalOnDemandPriceHasBeenSet = true; m_maxSpotPriceAsPercentageOfOptimalOnDemandPrice = value; }
    inline InstanceRequirementsRequest& WithMaxSpotPriceAsPercentageOfOptimalOnDemandPrice(int value) { SetMaxSpotPriceAsPercentageOfOptimalOnDemandPrice(value); return *this;}
    ///@}
  private:

    VCpuCountRangeRequest m_vCpuCount;
    bool m_vCpuCountHasBeenSet = false;

    MemoryMiBRequest m_memoryMiB;
    bool m_memoryMiBHasBeenSet = false;

    Aws::Vector<CpuManufacturer> m_cpuManufacturers;
    bool m_cpuManufacturersHasBeenSet = false;

    MemoryGiBPerVCpuRequest m_memoryGiBPerVCpu;
    bool m_memoryGiBPerVCpuHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludedInstanceTypes;
    bool m_excludedInstanceTypesHasBeenSet = false;

    Aws::Vector<InstanceGeneration> m_instanceGenerations;
    bool m_instanceGenerationsHasBeenSet = false;

    int m_spotMaxPricePercentageOverLowestPrice{0};
    bool m_spotMaxPricePercentageOverLowestPriceHasBeenSet = false;

    int m_onDemandMaxPricePercentageOverLowestPrice{0};
    bool m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet = false;

    BareMetal m_bareMetal{BareMetal::NOT_SET};
    bool m_bareMetalHasBeenSet = false;

    BurstablePerformance m_burstablePerformance{BurstablePerformance::NOT_SET};
    bool m_burstablePerformanceHasBeenSet = false;

    bool m_requireHibernateSupport{false};
    bool m_requireHibernateSupportHasBeenSet = false;

    NetworkInterfaceCountRequest m_networkInterfaceCount;
    bool m_networkInterfaceCountHasBeenSet = false;

    LocalStorage m_localStorage{LocalStorage::NOT_SET};
    bool m_localStorageHasBeenSet = false;

    Aws::Vector<LocalStorageType> m_localStorageTypes;
    bool m_localStorageTypesHasBeenSet = false;

    TotalLocalStorageGBRequest m_totalLocalStorageGB;
    bool m_totalLocalStorageGBHasBeenSet = false;

    BaselineEbsBandwidthMbpsRequest m_baselineEbsBandwidthMbps;
    bool m_baselineEbsBandwidthMbpsHasBeenSet = false;

    Aws::Vector<AcceleratorType> m_acceleratorTypes;
    bool m_acceleratorTypesHasBeenSet = false;

    AcceleratorCountRequest m_acceleratorCount;
    bool m_acceleratorCountHasBeenSet = false;

    Aws::Vector<AcceleratorManufacturer> m_acceleratorManufacturers;
    bool m_acceleratorManufacturersHasBeenSet = false;

    Aws::Vector<AcceleratorName> m_acceleratorNames;
    bool m_acceleratorNamesHasBeenSet = false;

    AcceleratorTotalMemoryMiBRequest m_acceleratorTotalMemoryMiB;
    bool m_acceleratorTotalMemoryMiBHasBeenSet = false;

    NetworkBandwidthGbpsRequest m_networkBandwidthGbps;
    bool m_networkBandwidthGbpsHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedInstanceTypes;
    bool m_allowedInstanceTypesHasBeenSet = false;

    int m_maxSpotPriceAsPercentageOfOptimalOnDemandPrice{0};
    bool m_maxSpotPriceAsPercentageOfOptimalOnDemandPriceHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
