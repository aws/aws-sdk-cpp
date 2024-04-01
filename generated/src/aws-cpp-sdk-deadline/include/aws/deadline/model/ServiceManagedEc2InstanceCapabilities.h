/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/CpuArchitectureType.h>
#include <aws/deadline/model/MemoryMiBRange.h>
#include <aws/deadline/model/ServiceManagedFleetOperatingSystemFamily.h>
#include <aws/deadline/model/Ec2EbsVolume.h>
#include <aws/deadline/model/VCpuCountRange.h>
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
    AWS_DEADLINE_API ServiceManagedEc2InstanceCapabilities();
    AWS_DEADLINE_API ServiceManagedEc2InstanceCapabilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API ServiceManagedEc2InstanceCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The allowable Amazon EC2 instance types.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedInstanceTypes() const{ return m_allowedInstanceTypes; }

    /**
     * <p>The allowable Amazon EC2 instance types.</p>
     */
    inline bool AllowedInstanceTypesHasBeenSet() const { return m_allowedInstanceTypesHasBeenSet; }

    /**
     * <p>The allowable Amazon EC2 instance types.</p>
     */
    inline void SetAllowedInstanceTypes(const Aws::Vector<Aws::String>& value) { m_allowedInstanceTypesHasBeenSet = true; m_allowedInstanceTypes = value; }

    /**
     * <p>The allowable Amazon EC2 instance types.</p>
     */
    inline void SetAllowedInstanceTypes(Aws::Vector<Aws::String>&& value) { m_allowedInstanceTypesHasBeenSet = true; m_allowedInstanceTypes = std::move(value); }

    /**
     * <p>The allowable Amazon EC2 instance types.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& WithAllowedInstanceTypes(const Aws::Vector<Aws::String>& value) { SetAllowedInstanceTypes(value); return *this;}

    /**
     * <p>The allowable Amazon EC2 instance types.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& WithAllowedInstanceTypes(Aws::Vector<Aws::String>&& value) { SetAllowedInstanceTypes(std::move(value)); return *this;}

    /**
     * <p>The allowable Amazon EC2 instance types.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& AddAllowedInstanceTypes(const Aws::String& value) { m_allowedInstanceTypesHasBeenSet = true; m_allowedInstanceTypes.push_back(value); return *this; }

    /**
     * <p>The allowable Amazon EC2 instance types.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& AddAllowedInstanceTypes(Aws::String&& value) { m_allowedInstanceTypesHasBeenSet = true; m_allowedInstanceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The allowable Amazon EC2 instance types.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& AddAllowedInstanceTypes(const char* value) { m_allowedInstanceTypesHasBeenSet = true; m_allowedInstanceTypes.push_back(value); return *this; }


    /**
     * <p>The CPU architecture type.</p>
     */
    inline const CpuArchitectureType& GetCpuArchitectureType() const{ return m_cpuArchitectureType; }

    /**
     * <p>The CPU architecture type.</p>
     */
    inline bool CpuArchitectureTypeHasBeenSet() const { return m_cpuArchitectureTypeHasBeenSet; }

    /**
     * <p>The CPU architecture type.</p>
     */
    inline void SetCpuArchitectureType(const CpuArchitectureType& value) { m_cpuArchitectureTypeHasBeenSet = true; m_cpuArchitectureType = value; }

    /**
     * <p>The CPU architecture type.</p>
     */
    inline void SetCpuArchitectureType(CpuArchitectureType&& value) { m_cpuArchitectureTypeHasBeenSet = true; m_cpuArchitectureType = std::move(value); }

    /**
     * <p>The CPU architecture type.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& WithCpuArchitectureType(const CpuArchitectureType& value) { SetCpuArchitectureType(value); return *this;}

    /**
     * <p>The CPU architecture type.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& WithCpuArchitectureType(CpuArchitectureType&& value) { SetCpuArchitectureType(std::move(value)); return *this;}


    /**
     * <p>The custom capability amounts to require for instances in this fleet.</p>
     */
    inline const Aws::Vector<FleetAmountCapability>& GetCustomAmounts() const{ return m_customAmounts; }

    /**
     * <p>The custom capability amounts to require for instances in this fleet.</p>
     */
    inline bool CustomAmountsHasBeenSet() const { return m_customAmountsHasBeenSet; }

    /**
     * <p>The custom capability amounts to require for instances in this fleet.</p>
     */
    inline void SetCustomAmounts(const Aws::Vector<FleetAmountCapability>& value) { m_customAmountsHasBeenSet = true; m_customAmounts = value; }

    /**
     * <p>The custom capability amounts to require for instances in this fleet.</p>
     */
    inline void SetCustomAmounts(Aws::Vector<FleetAmountCapability>&& value) { m_customAmountsHasBeenSet = true; m_customAmounts = std::move(value); }

    /**
     * <p>The custom capability amounts to require for instances in this fleet.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& WithCustomAmounts(const Aws::Vector<FleetAmountCapability>& value) { SetCustomAmounts(value); return *this;}

    /**
     * <p>The custom capability amounts to require for instances in this fleet.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& WithCustomAmounts(Aws::Vector<FleetAmountCapability>&& value) { SetCustomAmounts(std::move(value)); return *this;}

    /**
     * <p>The custom capability amounts to require for instances in this fleet.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& AddCustomAmounts(const FleetAmountCapability& value) { m_customAmountsHasBeenSet = true; m_customAmounts.push_back(value); return *this; }

    /**
     * <p>The custom capability amounts to require for instances in this fleet.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& AddCustomAmounts(FleetAmountCapability&& value) { m_customAmountsHasBeenSet = true; m_customAmounts.push_back(std::move(value)); return *this; }


    /**
     * <p>The custom capability attributes to require for instances in this fleet.</p>
     */
    inline const Aws::Vector<FleetAttributeCapability>& GetCustomAttributes() const{ return m_customAttributes; }

    /**
     * <p>The custom capability attributes to require for instances in this fleet.</p>
     */
    inline bool CustomAttributesHasBeenSet() const { return m_customAttributesHasBeenSet; }

    /**
     * <p>The custom capability attributes to require for instances in this fleet.</p>
     */
    inline void SetCustomAttributes(const Aws::Vector<FleetAttributeCapability>& value) { m_customAttributesHasBeenSet = true; m_customAttributes = value; }

    /**
     * <p>The custom capability attributes to require for instances in this fleet.</p>
     */
    inline void SetCustomAttributes(Aws::Vector<FleetAttributeCapability>&& value) { m_customAttributesHasBeenSet = true; m_customAttributes = std::move(value); }

    /**
     * <p>The custom capability attributes to require for instances in this fleet.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& WithCustomAttributes(const Aws::Vector<FleetAttributeCapability>& value) { SetCustomAttributes(value); return *this;}

    /**
     * <p>The custom capability attributes to require for instances in this fleet.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& WithCustomAttributes(Aws::Vector<FleetAttributeCapability>&& value) { SetCustomAttributes(std::move(value)); return *this;}

    /**
     * <p>The custom capability attributes to require for instances in this fleet.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& AddCustomAttributes(const FleetAttributeCapability& value) { m_customAttributesHasBeenSet = true; m_customAttributes.push_back(value); return *this; }

    /**
     * <p>The custom capability attributes to require for instances in this fleet.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& AddCustomAttributes(FleetAttributeCapability&& value) { m_customAttributesHasBeenSet = true; m_customAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The instance types to exclude from the fleet.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedInstanceTypes() const{ return m_excludedInstanceTypes; }

    /**
     * <p>The instance types to exclude from the fleet.</p>
     */
    inline bool ExcludedInstanceTypesHasBeenSet() const { return m_excludedInstanceTypesHasBeenSet; }

    /**
     * <p>The instance types to exclude from the fleet.</p>
     */
    inline void SetExcludedInstanceTypes(const Aws::Vector<Aws::String>& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes = value; }

    /**
     * <p>The instance types to exclude from the fleet.</p>
     */
    inline void SetExcludedInstanceTypes(Aws::Vector<Aws::String>&& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes = std::move(value); }

    /**
     * <p>The instance types to exclude from the fleet.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& WithExcludedInstanceTypes(const Aws::Vector<Aws::String>& value) { SetExcludedInstanceTypes(value); return *this;}

    /**
     * <p>The instance types to exclude from the fleet.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& WithExcludedInstanceTypes(Aws::Vector<Aws::String>&& value) { SetExcludedInstanceTypes(std::move(value)); return *this;}

    /**
     * <p>The instance types to exclude from the fleet.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& AddExcludedInstanceTypes(const Aws::String& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes.push_back(value); return *this; }

    /**
     * <p>The instance types to exclude from the fleet.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& AddExcludedInstanceTypes(Aws::String&& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The instance types to exclude from the fleet.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& AddExcludedInstanceTypes(const char* value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes.push_back(value); return *this; }


    /**
     * <p>The memory, as MiB, for the Amazon EC2 instance type.</p>
     */
    inline const MemoryMiBRange& GetMemoryMiB() const{ return m_memoryMiB; }

    /**
     * <p>The memory, as MiB, for the Amazon EC2 instance type.</p>
     */
    inline bool MemoryMiBHasBeenSet() const { return m_memoryMiBHasBeenSet; }

    /**
     * <p>The memory, as MiB, for the Amazon EC2 instance type.</p>
     */
    inline void SetMemoryMiB(const MemoryMiBRange& value) { m_memoryMiBHasBeenSet = true; m_memoryMiB = value; }

    /**
     * <p>The memory, as MiB, for the Amazon EC2 instance type.</p>
     */
    inline void SetMemoryMiB(MemoryMiBRange&& value) { m_memoryMiBHasBeenSet = true; m_memoryMiB = std::move(value); }

    /**
     * <p>The memory, as MiB, for the Amazon EC2 instance type.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& WithMemoryMiB(const MemoryMiBRange& value) { SetMemoryMiB(value); return *this;}

    /**
     * <p>The memory, as MiB, for the Amazon EC2 instance type.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& WithMemoryMiB(MemoryMiBRange&& value) { SetMemoryMiB(std::move(value)); return *this;}


    /**
     * <p>The operating system (OS) family.</p>
     */
    inline const ServiceManagedFleetOperatingSystemFamily& GetOsFamily() const{ return m_osFamily; }

    /**
     * <p>The operating system (OS) family.</p>
     */
    inline bool OsFamilyHasBeenSet() const { return m_osFamilyHasBeenSet; }

    /**
     * <p>The operating system (OS) family.</p>
     */
    inline void SetOsFamily(const ServiceManagedFleetOperatingSystemFamily& value) { m_osFamilyHasBeenSet = true; m_osFamily = value; }

    /**
     * <p>The operating system (OS) family.</p>
     */
    inline void SetOsFamily(ServiceManagedFleetOperatingSystemFamily&& value) { m_osFamilyHasBeenSet = true; m_osFamily = std::move(value); }

    /**
     * <p>The operating system (OS) family.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& WithOsFamily(const ServiceManagedFleetOperatingSystemFamily& value) { SetOsFamily(value); return *this;}

    /**
     * <p>The operating system (OS) family.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& WithOsFamily(ServiceManagedFleetOperatingSystemFamily&& value) { SetOsFamily(std::move(value)); return *this;}


    /**
     * <p>The root EBS volume.</p>
     */
    inline const Ec2EbsVolume& GetRootEbsVolume() const{ return m_rootEbsVolume; }

    /**
     * <p>The root EBS volume.</p>
     */
    inline bool RootEbsVolumeHasBeenSet() const { return m_rootEbsVolumeHasBeenSet; }

    /**
     * <p>The root EBS volume.</p>
     */
    inline void SetRootEbsVolume(const Ec2EbsVolume& value) { m_rootEbsVolumeHasBeenSet = true; m_rootEbsVolume = value; }

    /**
     * <p>The root EBS volume.</p>
     */
    inline void SetRootEbsVolume(Ec2EbsVolume&& value) { m_rootEbsVolumeHasBeenSet = true; m_rootEbsVolume = std::move(value); }

    /**
     * <p>The root EBS volume.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& WithRootEbsVolume(const Ec2EbsVolume& value) { SetRootEbsVolume(value); return *this;}

    /**
     * <p>The root EBS volume.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& WithRootEbsVolume(Ec2EbsVolume&& value) { SetRootEbsVolume(std::move(value)); return *this;}


    /**
     * <p>The amount of vCPU to require for instances in this fleet.</p>
     */
    inline const VCpuCountRange& GetVCpuCount() const{ return m_vCpuCount; }

    /**
     * <p>The amount of vCPU to require for instances in this fleet.</p>
     */
    inline bool VCpuCountHasBeenSet() const { return m_vCpuCountHasBeenSet; }

    /**
     * <p>The amount of vCPU to require for instances in this fleet.</p>
     */
    inline void SetVCpuCount(const VCpuCountRange& value) { m_vCpuCountHasBeenSet = true; m_vCpuCount = value; }

    /**
     * <p>The amount of vCPU to require for instances in this fleet.</p>
     */
    inline void SetVCpuCount(VCpuCountRange&& value) { m_vCpuCountHasBeenSet = true; m_vCpuCount = std::move(value); }

    /**
     * <p>The amount of vCPU to require for instances in this fleet.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& WithVCpuCount(const VCpuCountRange& value) { SetVCpuCount(value); return *this;}

    /**
     * <p>The amount of vCPU to require for instances in this fleet.</p>
     */
    inline ServiceManagedEc2InstanceCapabilities& WithVCpuCount(VCpuCountRange&& value) { SetVCpuCount(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_allowedInstanceTypes;
    bool m_allowedInstanceTypesHasBeenSet = false;

    CpuArchitectureType m_cpuArchitectureType;
    bool m_cpuArchitectureTypeHasBeenSet = false;

    Aws::Vector<FleetAmountCapability> m_customAmounts;
    bool m_customAmountsHasBeenSet = false;

    Aws::Vector<FleetAttributeCapability> m_customAttributes;
    bool m_customAttributesHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludedInstanceTypes;
    bool m_excludedInstanceTypesHasBeenSet = false;

    MemoryMiBRange m_memoryMiB;
    bool m_memoryMiBHasBeenSet = false;

    ServiceManagedFleetOperatingSystemFamily m_osFamily;
    bool m_osFamilyHasBeenSet = false;

    Ec2EbsVolume m_rootEbsVolume;
    bool m_rootEbsVolumeHasBeenSet = false;

    VCpuCountRange m_vCpuCount;
    bool m_vCpuCountHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
