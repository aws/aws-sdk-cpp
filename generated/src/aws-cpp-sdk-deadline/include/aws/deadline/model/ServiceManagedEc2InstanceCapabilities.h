/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/VCpuCountRange.h>
#include <aws/deadline/model/MemoryMiBRange.h>
#include <aws/deadline/model/ServiceManagedFleetOperatingSystemFamily.h>
#include <aws/deadline/model/CpuArchitectureType.h>
#include <aws/deadline/model/Ec2EbsVolume.h>
#include <aws/deadline/model/AcceleratorCapabilities.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/FleetAmountCapability.h>
#include <aws/deadline/model/FleetAttributeCapability.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The Amazon EC2 instance capabilities.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ServiceManagedEc2InstanceCapabilities">AWS
   * API Reference</a></p>
   */
  class ServiceManagedEc2InstanceCapabilities
  {
  public:
    AWS_DEADLINE_API ServiceManagedEc2InstanceCapabilities() = default;
    AWS_DEADLINE_API ServiceManagedEc2InstanceCapabilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API ServiceManagedEc2InstanceCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The amount of vCPU to require for instances in this fleet.</p>
     */
    inline const VCpuCountRange& GetVCpuCount() const { return m_vCpuCount; }
    inline bool VCpuCountHasBeenSet() const { return m_vCpuCountHasBeenSet; }
    template<typename VCpuCountT = VCpuCountRange>
    void SetVCpuCount(VCpuCountT&& value) { m_vCpuCountHasBeenSet = true; m_vCpuCount = std::forward<VCpuCountT>(value); }
    template<typename VCpuCountT = VCpuCountRange>
    ServiceManagedEc2InstanceCapabilities& WithVCpuCount(VCpuCountT&& value) { SetVCpuCount(std::forward<VCpuCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The memory, as MiB, for the Amazon EC2 instance type.</p>
     */
    inline const MemoryMiBRange& GetMemoryMiB() const { return m_memoryMiB; }
    inline bool MemoryMiBHasBeenSet() const { return m_memoryMiBHasBeenSet; }
    template<typename MemoryMiBT = MemoryMiBRange>
    void SetMemoryMiB(MemoryMiBT&& value) { m_memoryMiBHasBeenSet = true; m_memoryMiB = std::forward<MemoryMiBT>(value); }
    template<typename MemoryMiBT = MemoryMiBRange>
    ServiceManagedEc2InstanceCapabilities& WithMemoryMiB(MemoryMiBT&& value) { SetMemoryMiB(std::forward<MemoryMiBT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system (OS) family.</p>
     */
    inline ServiceManagedFleetOperatingSystemFamily GetOsFamily() const { return m_osFamily; }
    inline bool OsFamilyHasBeenSet() const { return m_osFamilyHasBeenSet; }
    inline void SetOsFamily(ServiceManagedFleetOperatingSystemFamily value) { m_osFamilyHasBeenSet = true; m_osFamily = value; }
    inline ServiceManagedEc2InstanceCapabilities& WithOsFamily(ServiceManagedFleetOperatingSystemFamily value) { SetOsFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CPU architecture type.</p>
     */
    inline CpuArchitectureType GetCpuArchitectureType() const { return m_cpuArchitectureType; }
    inline bool CpuArchitectureTypeHasBeenSet() const { return m_cpuArchitectureTypeHasBeenSet; }
    inline void SetCpuArchitectureType(CpuArchitectureType value) { m_cpuArchitectureTypeHasBeenSet = true; m_cpuArchitectureType = value; }
    inline ServiceManagedEc2InstanceCapabilities& WithCpuArchitectureType(CpuArchitectureType value) { SetCpuArchitectureType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The root EBS volume.</p>
     */
    inline const Ec2EbsVolume& GetRootEbsVolume() const { return m_rootEbsVolume; }
    inline bool RootEbsVolumeHasBeenSet() const { return m_rootEbsVolumeHasBeenSet; }
    template<typename RootEbsVolumeT = Ec2EbsVolume>
    void SetRootEbsVolume(RootEbsVolumeT&& value) { m_rootEbsVolumeHasBeenSet = true; m_rootEbsVolume = std::forward<RootEbsVolumeT>(value); }
    template<typename RootEbsVolumeT = Ec2EbsVolume>
    ServiceManagedEc2InstanceCapabilities& WithRootEbsVolume(RootEbsVolumeT&& value) { SetRootEbsVolume(std::forward<RootEbsVolumeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the GPU accelerator capabilities required for worker host instances
     * in this fleet.</p>
     */
    inline const AcceleratorCapabilities& GetAcceleratorCapabilities() const { return m_acceleratorCapabilities; }
    inline bool AcceleratorCapabilitiesHasBeenSet() const { return m_acceleratorCapabilitiesHasBeenSet; }
    template<typename AcceleratorCapabilitiesT = AcceleratorCapabilities>
    void SetAcceleratorCapabilities(AcceleratorCapabilitiesT&& value) { m_acceleratorCapabilitiesHasBeenSet = true; m_acceleratorCapabilities = std::forward<AcceleratorCapabilitiesT>(value); }
    template<typename AcceleratorCapabilitiesT = AcceleratorCapabilities>
    ServiceManagedEc2InstanceCapabilities& WithAcceleratorCapabilities(AcceleratorCapabilitiesT&& value) { SetAcceleratorCapabilities(std::forward<AcceleratorCapabilitiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allowable Amazon EC2 instance types.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedInstanceTypes() const { return m_allowedInstanceTypes; }
    inline bool AllowedInstanceTypesHasBeenSet() const { return m_allowedInstanceTypesHasBeenSet; }
    template<typename AllowedInstanceTypesT = Aws::Vector<Aws::String>>
    void SetAllowedInstanceTypes(AllowedInstanceTypesT&& value) { m_allowedInstanceTypesHasBeenSet = true; m_allowedInstanceTypes = std::forward<AllowedInstanceTypesT>(value); }
    template<typename AllowedInstanceTypesT = Aws::Vector<Aws::String>>
    ServiceManagedEc2InstanceCapabilities& WithAllowedInstanceTypes(AllowedInstanceTypesT&& value) { SetAllowedInstanceTypes(std::forward<AllowedInstanceTypesT>(value)); return *this;}
    template<typename AllowedInstanceTypesT = Aws::String>
    ServiceManagedEc2InstanceCapabilities& AddAllowedInstanceTypes(AllowedInstanceTypesT&& value) { m_allowedInstanceTypesHasBeenSet = true; m_allowedInstanceTypes.emplace_back(std::forward<AllowedInstanceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instance types to exclude from the fleet.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedInstanceTypes() const { return m_excludedInstanceTypes; }
    inline bool ExcludedInstanceTypesHasBeenSet() const { return m_excludedInstanceTypesHasBeenSet; }
    template<typename ExcludedInstanceTypesT = Aws::Vector<Aws::String>>
    void SetExcludedInstanceTypes(ExcludedInstanceTypesT&& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes = std::forward<ExcludedInstanceTypesT>(value); }
    template<typename ExcludedInstanceTypesT = Aws::Vector<Aws::String>>
    ServiceManagedEc2InstanceCapabilities& WithExcludedInstanceTypes(ExcludedInstanceTypesT&& value) { SetExcludedInstanceTypes(std::forward<ExcludedInstanceTypesT>(value)); return *this;}
    template<typename ExcludedInstanceTypesT = Aws::String>
    ServiceManagedEc2InstanceCapabilities& AddExcludedInstanceTypes(ExcludedInstanceTypesT&& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes.emplace_back(std::forward<ExcludedInstanceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The custom capability amounts to require for instances in this fleet.</p>
     */
    inline const Aws::Vector<FleetAmountCapability>& GetCustomAmounts() const { return m_customAmounts; }
    inline bool CustomAmountsHasBeenSet() const { return m_customAmountsHasBeenSet; }
    template<typename CustomAmountsT = Aws::Vector<FleetAmountCapability>>
    void SetCustomAmounts(CustomAmountsT&& value) { m_customAmountsHasBeenSet = true; m_customAmounts = std::forward<CustomAmountsT>(value); }
    template<typename CustomAmountsT = Aws::Vector<FleetAmountCapability>>
    ServiceManagedEc2InstanceCapabilities& WithCustomAmounts(CustomAmountsT&& value) { SetCustomAmounts(std::forward<CustomAmountsT>(value)); return *this;}
    template<typename CustomAmountsT = FleetAmountCapability>
    ServiceManagedEc2InstanceCapabilities& AddCustomAmounts(CustomAmountsT&& value) { m_customAmountsHasBeenSet = true; m_customAmounts.emplace_back(std::forward<CustomAmountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The custom capability attributes to require for instances in this fleet.</p>
     */
    inline const Aws::Vector<FleetAttributeCapability>& GetCustomAttributes() const { return m_customAttributes; }
    inline bool CustomAttributesHasBeenSet() const { return m_customAttributesHasBeenSet; }
    template<typename CustomAttributesT = Aws::Vector<FleetAttributeCapability>>
    void SetCustomAttributes(CustomAttributesT&& value) { m_customAttributesHasBeenSet = true; m_customAttributes = std::forward<CustomAttributesT>(value); }
    template<typename CustomAttributesT = Aws::Vector<FleetAttributeCapability>>
    ServiceManagedEc2InstanceCapabilities& WithCustomAttributes(CustomAttributesT&& value) { SetCustomAttributes(std::forward<CustomAttributesT>(value)); return *this;}
    template<typename CustomAttributesT = FleetAttributeCapability>
    ServiceManagedEc2InstanceCapabilities& AddCustomAttributes(CustomAttributesT&& value) { m_customAttributesHasBeenSet = true; m_customAttributes.emplace_back(std::forward<CustomAttributesT>(value)); return *this; }
    ///@}
  private:

    VCpuCountRange m_vCpuCount;
    bool m_vCpuCountHasBeenSet = false;

    MemoryMiBRange m_memoryMiB;
    bool m_memoryMiBHasBeenSet = false;

    ServiceManagedFleetOperatingSystemFamily m_osFamily{ServiceManagedFleetOperatingSystemFamily::NOT_SET};
    bool m_osFamilyHasBeenSet = false;

    CpuArchitectureType m_cpuArchitectureType{CpuArchitectureType::NOT_SET};
    bool m_cpuArchitectureTypeHasBeenSet = false;

    Ec2EbsVolume m_rootEbsVolume;
    bool m_rootEbsVolumeHasBeenSet = false;

    AcceleratorCapabilities m_acceleratorCapabilities;
    bool m_acceleratorCapabilitiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedInstanceTypes;
    bool m_allowedInstanceTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludedInstanceTypes;
    bool m_excludedInstanceTypesHasBeenSet = false;

    Aws::Vector<FleetAmountCapability> m_customAmounts;
    bool m_customAmountsHasBeenSet = false;

    Aws::Vector<FleetAttributeCapability> m_customAttributes;
    bool m_customAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
