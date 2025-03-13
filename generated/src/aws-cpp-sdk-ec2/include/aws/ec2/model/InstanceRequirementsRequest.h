/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/VCpuCountRangeRequest.h>
#include <aws/ec2/model/MemoryMiBRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/MemoryGiBPerVCpuRequest.h>
#include <aws/ec2/model/BareMetal.h>
#include <aws/ec2/model/BurstablePerformance.h>
#include <aws/ec2/model/NetworkInterfaceCountRequest.h>
#include <aws/ec2/model/LocalStorage.h>
#include <aws/ec2/model/TotalLocalStorageGBRequest.h>
#include <aws/ec2/model/BaselineEbsBandwidthMbpsRequest.h>
#include <aws/ec2/model/AcceleratorCountRequest.h>
#include <aws/ec2/model/AcceleratorTotalMemoryMiBRequest.h>
#include <aws/ec2/model/NetworkBandwidthGbpsRequest.h>
#include <aws/ec2/model/BaselinePerformanceFactorsRequest.h>
#include <aws/ec2/model/CpuManufacturer.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceGeneration.h>
#include <aws/ec2/model/LocalStorageType.h>
#include <aws/ec2/model/AcceleratorType.h>
#include <aws/ec2/model/AcceleratorManufacturer.h>
#include <aws/ec2/model/AcceleratorName.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>The attributes for the instance types. When you specify instance attributes,
   * Amazon EC2 will identify instance types with these attributes.</p> <p>You must
   * specify <code>VCpuCount</code> and <code>MemoryMiB</code>. All other attributes
   * are optional. Any unspecified optional attribute is set to its default.</p>
   * <p>When you specify multiple attributes, you get instance types that satisfy all
   * of the specified attributes. If you specify multiple values for an attribute,
   * you get instance types that satisfy any of the specified values.</p> <p>To limit
   * the list of instance types from which Amazon EC2 can identify matching instance
   * types, you can use one of the following parameters, but not both in the same
   * request:</p> <ul> <li> <p> <code>AllowedInstanceTypes</code> - The instance
   * types to include in the list. All other instance types are ignored, even if they
   * match your specified attributes.</p> </li> <li> <p>
   * <code>ExcludedInstanceTypes</code> - The instance types to exclude from the
   * list, even if they match your specified attributes.</p> </li> </ul>  <p>If
   * you specify <code>InstanceRequirements</code>, you can't specify
   * <code>InstanceType</code>.</p> <p>Attribute-based instance type selection is
   * only supported when using Auto Scaling groups, EC2 Fleet, and Spot Fleet to
   * launch instances. If you plan to use the launch template in the <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-instance-wizard.html">launch
   * instance wizard</a>, or with the <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>
   * API or <a
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-ec2-instance.html">AWS::EC2::Instance</a>
   * Amazon Web Services CloudFormation resource, you can't specify
   * <code>InstanceRequirements</code>.</p>  <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-fleet-attribute-based-instance-type-selection.html">Specify
   * attributes for instance type selection for EC2 Fleet or Spot Fleet</a> and <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-placement-score.html">Spot
   * placement score</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceRequirementsRequest">AWS
   * API Reference</a></p>
   */
  class InstanceRequirementsRequest
  {
  public:
    AWS_EC2_API InstanceRequirementsRequest() = default;
    AWS_EC2_API InstanceRequirementsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceRequirementsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The minimum and maximum number of vCPUs.</p>
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
     * <p>The minimum and maximum amount of memory, in MiB.</p>
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
     * <p>The CPU manufacturers to include.</p> <ul> <li> <p>For instance types with
     * Intel CPUs, specify <code>intel</code>.</p> </li> <li> <p>For instance types
     * with AMD CPUs, specify <code>amd</code>.</p> </li> <li> <p>For instance types
     * with Amazon Web Services CPUs, specify <code>amazon-web-services</code>.</p>
     * </li> <li> <p>For instance types with Apple CPUs, specify
     * <code>apple</code>.</p> </li> </ul>  <p>Don't confuse the CPU manufacturer
     * with the CPU architecture. Instances will be launched with a compatible CPU
     * architecture based on the Amazon Machine Image (AMI) that you specify in your
     * launch template.</p>  <p>Default: Any manufacturer</p>
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
     * <p>The minimum and maximum amount of memory per vCPU, in GiB.</p> <p>Default: No
     * minimum or maximum limits</p>
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
     * <p>The instance types to exclude.</p> <p>You can use strings with one or more
     * wild cards, represented by an asterisk (<code>*</code>), to exclude an instance
     * family, type, size, or generation. The following are examples:
     * <code>m5.8xlarge</code>, <code>c5*.*</code>, <code>m5a.*</code>,
     * <code>r*</code>, <code>*3*</code>.</p> <p>For example, if you specify
     * <code>c5*</code>,Amazon EC2 will exclude the entire C5 instance family, which
     * includes all C5a and C5n instance types. If you specify <code>m5a.*</code>,
     * Amazon EC2 will exclude all the M5a instance types, but not the M5n instance
     * types.</p>  <p>If you specify <code>ExcludedInstanceTypes</code>, you
     * can't specify <code>AllowedInstanceTypes</code>.</p>  <p>Default: No
     * excluded instance types</p>
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
     * <p>Indicates whether current or previous generation instance types are included.
     * The current generation instance types are recommended for use. Current
     * generation instance types are typically the latest two to three generations in
     * each instance family. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>For current generation
     * instance types, specify <code>current</code>.</p> <p>For previous generation
     * instance types, specify <code>previous</code>.</p> <p>Default: Current and
     * previous generation instance types</p>
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
     * <p>[Price protection] The price protection threshold for Spot Instances, as a
     * percentage higher than an identified Spot price. The identified Spot price is
     * the Spot price of the lowest priced current generation C, M, or R instance type
     * with your specified attributes. If no current generation C, M, or R instance
     * type matches your attributes, then the identified Spot price is from the lowest
     * priced current generation instance types, and failing that, from the lowest
     * priced previous generation instance types that match your attributes. When
     * Amazon EC2 selects instance types with your attributes, it will exclude instance
     * types whose Spot price exceeds your specified threshold.</p> <p>The parameter
     * accepts an integer, which Amazon EC2 interprets as a percentage.</p> <p>If you
     * set <code>TargetCapacityUnitType</code> to <code>vcpu</code> or
     * <code>memory-mib</code>, the price protection threshold is applied based on the
     * per-vCPU or per-memory price instead of the per-instance price.</p> <p>This
     * parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetSpotPlacementScores.html">GetSpotPlacementScores</a>
     * and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetInstanceTypesFromInstanceRequirements.html">GetInstanceTypesFromInstanceRequirements</a>.</p>
     *  <p>Only one of <code>SpotMaxPricePercentageOverLowestPrice</code> or
     * <code>MaxSpotPriceAsPercentageOfOptimalOnDemandPrice</code> can be specified. If
     * you don't specify either, Amazon EC2 will automatically apply optimal price
     * protection to consistently select from a wide range of instance types. To
     * indicate no price protection threshold for Spot Instances, meaning you want to
     * consider all instance types that match your attributes, include one of these
     * parameters and specify a high value, such as <code>999999</code>.</p> 
     * <p>Default: <code>100</code> </p>
     */
    inline int GetSpotMaxPricePercentageOverLowestPrice() const { return m_spotMaxPricePercentageOverLowestPrice; }
    inline bool SpotMaxPricePercentageOverLowestPriceHasBeenSet() const { return m_spotMaxPricePercentageOverLowestPriceHasBeenSet; }
    inline void SetSpotMaxPricePercentageOverLowestPrice(int value) { m_spotMaxPricePercentageOverLowestPriceHasBeenSet = true; m_spotMaxPricePercentageOverLowestPrice = value; }
    inline InstanceRequirementsRequest& WithSpotMaxPricePercentageOverLowestPrice(int value) { SetSpotMaxPricePercentageOverLowestPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Price protection] The price protection threshold for On-Demand Instances, as
     * a percentage higher than an identified On-Demand price. The identified On-Demand
     * price is the price of the lowest priced current generation C, M, or R instance
     * type with your specified attributes. When Amazon EC2 selects instance types with
     * your attributes, it will exclude instance types whose price exceeds your
     * specified threshold.</p> <p>The parameter accepts an integer, which Amazon EC2
     * interprets as a percentage.</p> <p>To indicate no price protection threshold,
     * specify a high value, such as <code>999999</code>.</p> <p>This parameter is not
     * supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetSpotPlacementScores.html">GetSpotPlacementScores</a>
     * and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetInstanceTypesFromInstanceRequirements.html">GetInstanceTypesFromInstanceRequirements</a>.</p>
     *  <p>If you set <code>TargetCapacityUnitType</code> to <code>vcpu</code> or
     * <code>memory-mib</code>, the price protection threshold is applied based on the
     * per-vCPU or per-memory price instead of the per-instance price.</p> 
     * <p>Default: <code>20</code> </p>
     */
    inline int GetOnDemandMaxPricePercentageOverLowestPrice() const { return m_onDemandMaxPricePercentageOverLowestPrice; }
    inline bool OnDemandMaxPricePercentageOverLowestPriceHasBeenSet() const { return m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet; }
    inline void SetOnDemandMaxPricePercentageOverLowestPrice(int value) { m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet = true; m_onDemandMaxPricePercentageOverLowestPrice = value; }
    inline InstanceRequirementsRequest& WithOnDemandMaxPricePercentageOverLowestPrice(int value) { SetOnDemandMaxPricePercentageOverLowestPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether bare metal instance types must be included, excluded, or
     * required.</p> <ul> <li> <p>To include bare metal instance types, specify
     * <code>included</code>.</p> </li> <li> <p>To require only bare metal instance
     * types, specify <code>required</code>.</p> </li> <li> <p>To exclude bare metal
     * instance types, specify <code>excluded</code>.</p> </li> </ul> <p>Default:
     * <code>excluded</code> </p>
     */
    inline BareMetal GetBareMetal() const { return m_bareMetal; }
    inline bool BareMetalHasBeenSet() const { return m_bareMetalHasBeenSet; }
    inline void SetBareMetal(BareMetal value) { m_bareMetalHasBeenSet = true; m_bareMetal = value; }
    inline InstanceRequirementsRequest& WithBareMetal(BareMetal value) { SetBareMetal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether burstable performance T instance types are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
     * performance instances</a>.</p> <ul> <li> <p>To include burstable performance
     * instance types, specify <code>included</code>.</p> </li> <li> <p>To require only
     * burstable performance instance types, specify <code>required</code>.</p> </li>
     * <li> <p>To exclude burstable performance instance types, specify
     * <code>excluded</code>.</p> </li> </ul> <p>Default: <code>excluded</code> </p>
     */
    inline BurstablePerformance GetBurstablePerformance() const { return m_burstablePerformance; }
    inline bool BurstablePerformanceHasBeenSet() const { return m_burstablePerformanceHasBeenSet; }
    inline void SetBurstablePerformance(BurstablePerformance value) { m_burstablePerformanceHasBeenSet = true; m_burstablePerformance = value; }
    inline InstanceRequirementsRequest& WithBurstablePerformance(BurstablePerformance value) { SetBurstablePerformance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether instance types must support hibernation for On-Demand
     * Instances.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetSpotPlacementScores.html">GetSpotPlacementScores</a>.</p>
     * <p>Default: <code>false</code> </p>
     */
    inline bool GetRequireHibernateSupport() const { return m_requireHibernateSupport; }
    inline bool RequireHibernateSupportHasBeenSet() const { return m_requireHibernateSupportHasBeenSet; }
    inline void SetRequireHibernateSupport(bool value) { m_requireHibernateSupportHasBeenSet = true; m_requireHibernateSupport = value; }
    inline InstanceRequirementsRequest& WithRequireHibernateSupport(bool value) { SetRequireHibernateSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum and maximum number of network interfaces.</p> <p>Default: No
     * minimum or maximum limits</p>
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
     * <p>Indicates whether instance types with instance store volumes are included,
     * excluded, or required. For more information, <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide</i>.</p> <ul> <li> <p>To
     * include instance types with instance store volumes, specify
     * <code>included</code>.</p> </li> <li> <p>To require only instance types with
     * instance store volumes, specify <code>required</code>.</p> </li> <li> <p>To
     * exclude instance types with instance store volumes, specify
     * <code>excluded</code>.</p> </li> </ul> <p>Default: <code>included</code> </p>
     */
    inline LocalStorage GetLocalStorage() const { return m_localStorage; }
    inline bool LocalStorageHasBeenSet() const { return m_localStorageHasBeenSet; }
    inline void SetLocalStorage(LocalStorage value) { m_localStorageHasBeenSet = true; m_localStorage = value; }
    inline InstanceRequirementsRequest& WithLocalStorage(LocalStorage value) { SetLocalStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of local storage that is required.</p> <ul> <li> <p>For instance
     * types with hard disk drive (HDD) storage, specify <code>hdd</code>.</p> </li>
     * <li> <p>For instance types with solid state drive (SSD) storage, specify
     * <code>ssd</code>.</p> </li> </ul> <p>Default: <code>hdd</code> and
     * <code>ssd</code> </p>
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
     * <p>The minimum and maximum amount of total local storage, in GB.</p> <p>Default:
     * No minimum or maximum limits</p>
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
     * <p>The minimum and maximum baseline bandwidth to Amazon EBS, in Mbps. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-optimized.html">Amazon
     * EBS–optimized instances</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>Default:
     * No minimum or maximum limits</p>
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
     * <p>The accelerator types that must be on the instance type.</p> <ul> <li> <p>For
     * instance types with FPGA accelerators, specify <code>fpga</code>.</p> </li> <li>
     * <p>For instance types with GPU accelerators, specify <code>gpu</code>.</p> </li>
     * <li> <p>For instance types with Inference accelerators, specify
     * <code>inference</code>.</p> </li> </ul> <p>Default: Any accelerator type</p>
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
     * <p>The minimum and maximum number of accelerators (GPUs, FPGAs, or Amazon Web
     * Services Inferentia chips) on an instance.</p> <p>To exclude accelerator-enabled
     * instance types, set <code>Max</code> to <code>0</code>.</p> <p>Default: No
     * minimum or maximum limits</p>
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
     * <p>Indicates whether instance types must have accelerators by specific
     * manufacturers.</p> <ul> <li> <p>For instance types with Amazon Web Services
     * devices, specify <code>amazon-web-services</code>.</p> </li> <li> <p>For
     * instance types with AMD devices, specify <code>amd</code>.</p> </li> <li> <p>For
     * instance types with Habana devices, specify <code>habana</code>.</p> </li> <li>
     * <p>For instance types with NVIDIA devices, specify <code>nvidia</code>.</p>
     * </li> <li> <p>For instance types with Xilinx devices, specify
     * <code>xilinx</code>.</p> </li> </ul> <p>Default: Any manufacturer</p>
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
     * <p>The accelerators that must be on the instance type.</p> <ul> <li> <p>For
     * instance types with NVIDIA A10G GPUs, specify <code>a10g</code>.</p> </li> <li>
     * <p>For instance types with NVIDIA A100 GPUs, specify <code>a100</code>.</p>
     * </li> <li> <p>For instance types with NVIDIA H100 GPUs, specify
     * <code>h100</code>.</p> </li> <li> <p>For instance types with Amazon Web Services
     * Inferentia chips, specify <code>inferentia</code>.</p> </li> <li> <p>For
     * instance types with NVIDIA GRID K520 GPUs, specify <code>k520</code>.</p> </li>
     * <li> <p>For instance types with NVIDIA K80 GPUs, specify <code>k80</code>.</p>
     * </li> <li> <p>For instance types with NVIDIA M60 GPUs, specify
     * <code>m60</code>.</p> </li> <li> <p>For instance types with AMD Radeon Pro V520
     * GPUs, specify <code>radeon-pro-v520</code>.</p> </li> <li> <p>For instance types
     * with NVIDIA T4 GPUs, specify <code>t4</code>.</p> </li> <li> <p>For instance
     * types with NVIDIA T4G GPUs, specify <code>t4g</code>.</p> </li> <li> <p>For
     * instance types with Xilinx VU9P FPGAs, specify <code>vu9p</code>.</p> </li> <li>
     * <p>For instance types with NVIDIA V100 GPUs, specify <code>v100</code>.</p>
     * </li> </ul> <p>Default: Any accelerator</p>
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
     * <p>The minimum and maximum amount of total accelerator memory, in MiB.</p>
     * <p>Default: No minimum or maximum limits</p>
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
     * <p>The minimum and maximum amount of baseline network bandwidth, in gigabits per
     * second (Gbps). For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-network-bandwidth.html">Amazon
     * EC2 instance network bandwidth</a> in the <i>Amazon EC2 User Guide</i>.</p>
     * <p>Default: No minimum or maximum limits</p>
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
     * <p>The instance types to apply your specified attributes against. All other
     * instance types are ignored, even if they match your specified attributes.</p>
     * <p>You can use strings with one or more wild cards, represented by an asterisk
     * (<code>*</code>), to allow an instance type, size, or generation. The following
     * are examples: <code>m5.8xlarge</code>, <code>c5*.*</code>, <code>m5a.*</code>,
     * <code>r*</code>, <code>*3*</code>.</p> <p>For example, if you specify
     * <code>c5*</code>,Amazon EC2 will allow the entire C5 instance family, which
     * includes all C5a and C5n instance types. If you specify <code>m5a.*</code>,
     * Amazon EC2 will allow all the M5a instance types, but not the M5n instance
     * types.</p>  <p>If you specify <code>AllowedInstanceTypes</code>, you can't
     * specify <code>ExcludedInstanceTypes</code>.</p>  <p>Default: All instance
     * types</p>
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
     * <p>[Price protection] The price protection threshold for Spot Instances, as a
     * percentage of an identified On-Demand price. The identified On-Demand price is
     * the price of the lowest priced current generation C, M, or R instance type with
     * your specified attributes. If no current generation C, M, or R instance type
     * matches your attributes, then the identified price is from the lowest priced
     * current generation instance types, and failing that, from the lowest priced
     * previous generation instance types that match your attributes. When Amazon EC2
     * selects instance types with your attributes, it will exclude instance types
     * whose price exceeds your specified threshold.</p> <p>The parameter accepts an
     * integer, which Amazon EC2 interprets as a percentage.</p> <p>If you set
     * <code>TargetCapacityUnitType</code> to <code>vcpu</code> or
     * <code>memory-mib</code>, the price protection threshold is based on the per vCPU
     * or per memory price instead of the per instance price.</p>  <p>Only one of
     * <code>SpotMaxPricePercentageOverLowestPrice</code> or
     * <code>MaxSpotPriceAsPercentageOfOptimalOnDemandPrice</code> can be specified. If
     * you don't specify either, Amazon EC2 will automatically apply optimal price
     * protection to consistently select from a wide range of instance types. To
     * indicate no price protection threshold for Spot Instances, meaning you want to
     * consider all instance types that match your attributes, include one of these
     * parameters and specify a high value, such as <code>999999</code>.</p> 
     */
    inline int GetMaxSpotPriceAsPercentageOfOptimalOnDemandPrice() const { return m_maxSpotPriceAsPercentageOfOptimalOnDemandPrice; }
    inline bool MaxSpotPriceAsPercentageOfOptimalOnDemandPriceHasBeenSet() const { return m_maxSpotPriceAsPercentageOfOptimalOnDemandPriceHasBeenSet; }
    inline void SetMaxSpotPriceAsPercentageOfOptimalOnDemandPrice(int value) { m_maxSpotPriceAsPercentageOfOptimalOnDemandPriceHasBeenSet = true; m_maxSpotPriceAsPercentageOfOptimalOnDemandPrice = value; }
    inline InstanceRequirementsRequest& WithMaxSpotPriceAsPercentageOfOptimalOnDemandPrice(int value) { SetMaxSpotPriceAsPercentageOfOptimalOnDemandPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The baseline performance to consider, using an instance family as a baseline
     * reference. The instance family establishes the lowest acceptable level of
     * performance. Amazon EC2 uses this baseline to guide instance type selection, but
     * there is no guarantee that the selected instance types will always exceed the
     * baseline for every application. Currently, this parameter only supports CPU
     * performance as a baseline performance factor. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-fleet-attribute-based-instance-type-selection.html#ec2fleet-abis-performance-protection">Performance
     * protection</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const BaselinePerformanceFactorsRequest& GetBaselinePerformanceFactors() const { return m_baselinePerformanceFactors; }
    inline bool BaselinePerformanceFactorsHasBeenSet() const { return m_baselinePerformanceFactorsHasBeenSet; }
    template<typename BaselinePerformanceFactorsT = BaselinePerformanceFactorsRequest>
    void SetBaselinePerformanceFactors(BaselinePerformanceFactorsT&& value) { m_baselinePerformanceFactorsHasBeenSet = true; m_baselinePerformanceFactors = std::forward<BaselinePerformanceFactorsT>(value); }
    template<typename BaselinePerformanceFactorsT = BaselinePerformanceFactorsRequest>
    InstanceRequirementsRequest& WithBaselinePerformanceFactors(BaselinePerformanceFactorsT&& value) { SetBaselinePerformanceFactors(std::forward<BaselinePerformanceFactorsT>(value)); return *this;}
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

    BaselinePerformanceFactorsRequest m_baselinePerformanceFactors;
    bool m_baselinePerformanceFactorsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
