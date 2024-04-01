/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/AcceleratorCountRange.h>
#include <aws/deadline/model/AcceleratorTotalMemoryMiBRange.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/CpuArchitectureType.h>
#include <aws/deadline/model/MemoryMiBRange.h>
#include <aws/deadline/model/CustomerManagedFleetOperatingSystemFamily.h>
#include <aws/deadline/model/VCpuCountRange.h>
#include <aws/deadline/model/AcceleratorType.h>
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
   * <p>The worker capabilities for a customer managed workflow.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/CustomerManagedWorkerCapabilities">AWS
   * API Reference</a></p>
   */
  class CustomerManagedWorkerCapabilities
  {
  public:
    AWS_DEADLINE_API CustomerManagedWorkerCapabilities();
    AWS_DEADLINE_API CustomerManagedWorkerCapabilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API CustomerManagedWorkerCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The range of the accelerator.</p>
     */
    inline const AcceleratorCountRange& GetAcceleratorCount() const{ return m_acceleratorCount; }

    /**
     * <p>The range of the accelerator.</p>
     */
    inline bool AcceleratorCountHasBeenSet() const { return m_acceleratorCountHasBeenSet; }

    /**
     * <p>The range of the accelerator.</p>
     */
    inline void SetAcceleratorCount(const AcceleratorCountRange& value) { m_acceleratorCountHasBeenSet = true; m_acceleratorCount = value; }

    /**
     * <p>The range of the accelerator.</p>
     */
    inline void SetAcceleratorCount(AcceleratorCountRange&& value) { m_acceleratorCountHasBeenSet = true; m_acceleratorCount = std::move(value); }

    /**
     * <p>The range of the accelerator.</p>
     */
    inline CustomerManagedWorkerCapabilities& WithAcceleratorCount(const AcceleratorCountRange& value) { SetAcceleratorCount(value); return *this;}

    /**
     * <p>The range of the accelerator.</p>
     */
    inline CustomerManagedWorkerCapabilities& WithAcceleratorCount(AcceleratorCountRange&& value) { SetAcceleratorCount(std::move(value)); return *this;}


    /**
     * <p>The total memory (MiB) for the customer managed worker capabilities.</p>
     */
    inline const AcceleratorTotalMemoryMiBRange& GetAcceleratorTotalMemoryMiB() const{ return m_acceleratorTotalMemoryMiB; }

    /**
     * <p>The total memory (MiB) for the customer managed worker capabilities.</p>
     */
    inline bool AcceleratorTotalMemoryMiBHasBeenSet() const { return m_acceleratorTotalMemoryMiBHasBeenSet; }

    /**
     * <p>The total memory (MiB) for the customer managed worker capabilities.</p>
     */
    inline void SetAcceleratorTotalMemoryMiB(const AcceleratorTotalMemoryMiBRange& value) { m_acceleratorTotalMemoryMiBHasBeenSet = true; m_acceleratorTotalMemoryMiB = value; }

    /**
     * <p>The total memory (MiB) for the customer managed worker capabilities.</p>
     */
    inline void SetAcceleratorTotalMemoryMiB(AcceleratorTotalMemoryMiBRange&& value) { m_acceleratorTotalMemoryMiBHasBeenSet = true; m_acceleratorTotalMemoryMiB = std::move(value); }

    /**
     * <p>The total memory (MiB) for the customer managed worker capabilities.</p>
     */
    inline CustomerManagedWorkerCapabilities& WithAcceleratorTotalMemoryMiB(const AcceleratorTotalMemoryMiBRange& value) { SetAcceleratorTotalMemoryMiB(value); return *this;}

    /**
     * <p>The total memory (MiB) for the customer managed worker capabilities.</p>
     */
    inline CustomerManagedWorkerCapabilities& WithAcceleratorTotalMemoryMiB(AcceleratorTotalMemoryMiBRange&& value) { SetAcceleratorTotalMemoryMiB(std::move(value)); return *this;}


    /**
     * <p>The accelerator types for the customer managed worker capabilities.</p>
     */
    inline const Aws::Vector<AcceleratorType>& GetAcceleratorTypes() const{ return m_acceleratorTypes; }

    /**
     * <p>The accelerator types for the customer managed worker capabilities.</p>
     */
    inline bool AcceleratorTypesHasBeenSet() const { return m_acceleratorTypesHasBeenSet; }

    /**
     * <p>The accelerator types for the customer managed worker capabilities.</p>
     */
    inline void SetAcceleratorTypes(const Aws::Vector<AcceleratorType>& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = value; }

    /**
     * <p>The accelerator types for the customer managed worker capabilities.</p>
     */
    inline void SetAcceleratorTypes(Aws::Vector<AcceleratorType>&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = std::move(value); }

    /**
     * <p>The accelerator types for the customer managed worker capabilities.</p>
     */
    inline CustomerManagedWorkerCapabilities& WithAcceleratorTypes(const Aws::Vector<AcceleratorType>& value) { SetAcceleratorTypes(value); return *this;}

    /**
     * <p>The accelerator types for the customer managed worker capabilities.</p>
     */
    inline CustomerManagedWorkerCapabilities& WithAcceleratorTypes(Aws::Vector<AcceleratorType>&& value) { SetAcceleratorTypes(std::move(value)); return *this;}

    /**
     * <p>The accelerator types for the customer managed worker capabilities.</p>
     */
    inline CustomerManagedWorkerCapabilities& AddAcceleratorTypes(const AcceleratorType& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(value); return *this; }

    /**
     * <p>The accelerator types for the customer managed worker capabilities.</p>
     */
    inline CustomerManagedWorkerCapabilities& AddAcceleratorTypes(AcceleratorType&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The CPU architecture type for the customer managed worker capabilities.</p>
     */
    inline const CpuArchitectureType& GetCpuArchitectureType() const{ return m_cpuArchitectureType; }

    /**
     * <p>The CPU architecture type for the customer managed worker capabilities.</p>
     */
    inline bool CpuArchitectureTypeHasBeenSet() const { return m_cpuArchitectureTypeHasBeenSet; }

    /**
     * <p>The CPU architecture type for the customer managed worker capabilities.</p>
     */
    inline void SetCpuArchitectureType(const CpuArchitectureType& value) { m_cpuArchitectureTypeHasBeenSet = true; m_cpuArchitectureType = value; }

    /**
     * <p>The CPU architecture type for the customer managed worker capabilities.</p>
     */
    inline void SetCpuArchitectureType(CpuArchitectureType&& value) { m_cpuArchitectureTypeHasBeenSet = true; m_cpuArchitectureType = std::move(value); }

    /**
     * <p>The CPU architecture type for the customer managed worker capabilities.</p>
     */
    inline CustomerManagedWorkerCapabilities& WithCpuArchitectureType(const CpuArchitectureType& value) { SetCpuArchitectureType(value); return *this;}

    /**
     * <p>The CPU architecture type for the customer managed worker capabilities.</p>
     */
    inline CustomerManagedWorkerCapabilities& WithCpuArchitectureType(CpuArchitectureType&& value) { SetCpuArchitectureType(std::move(value)); return *this;}


    /**
     * <p>Custom requirement ranges for customer managed worker capabilities.</p>
     */
    inline const Aws::Vector<FleetAmountCapability>& GetCustomAmounts() const{ return m_customAmounts; }

    /**
     * <p>Custom requirement ranges for customer managed worker capabilities.</p>
     */
    inline bool CustomAmountsHasBeenSet() const { return m_customAmountsHasBeenSet; }

    /**
     * <p>Custom requirement ranges for customer managed worker capabilities.</p>
     */
    inline void SetCustomAmounts(const Aws::Vector<FleetAmountCapability>& value) { m_customAmountsHasBeenSet = true; m_customAmounts = value; }

    /**
     * <p>Custom requirement ranges for customer managed worker capabilities.</p>
     */
    inline void SetCustomAmounts(Aws::Vector<FleetAmountCapability>&& value) { m_customAmountsHasBeenSet = true; m_customAmounts = std::move(value); }

    /**
     * <p>Custom requirement ranges for customer managed worker capabilities.</p>
     */
    inline CustomerManagedWorkerCapabilities& WithCustomAmounts(const Aws::Vector<FleetAmountCapability>& value) { SetCustomAmounts(value); return *this;}

    /**
     * <p>Custom requirement ranges for customer managed worker capabilities.</p>
     */
    inline CustomerManagedWorkerCapabilities& WithCustomAmounts(Aws::Vector<FleetAmountCapability>&& value) { SetCustomAmounts(std::move(value)); return *this;}

    /**
     * <p>Custom requirement ranges for customer managed worker capabilities.</p>
     */
    inline CustomerManagedWorkerCapabilities& AddCustomAmounts(const FleetAmountCapability& value) { m_customAmountsHasBeenSet = true; m_customAmounts.push_back(value); return *this; }

    /**
     * <p>Custom requirement ranges for customer managed worker capabilities.</p>
     */
    inline CustomerManagedWorkerCapabilities& AddCustomAmounts(FleetAmountCapability&& value) { m_customAmountsHasBeenSet = true; m_customAmounts.push_back(std::move(value)); return *this; }


    /**
     * <p>Custom attributes for the customer manged worker capabilities.</p>
     */
    inline const Aws::Vector<FleetAttributeCapability>& GetCustomAttributes() const{ return m_customAttributes; }

    /**
     * <p>Custom attributes for the customer manged worker capabilities.</p>
     */
    inline bool CustomAttributesHasBeenSet() const { return m_customAttributesHasBeenSet; }

    /**
     * <p>Custom attributes for the customer manged worker capabilities.</p>
     */
    inline void SetCustomAttributes(const Aws::Vector<FleetAttributeCapability>& value) { m_customAttributesHasBeenSet = true; m_customAttributes = value; }

    /**
     * <p>Custom attributes for the customer manged worker capabilities.</p>
     */
    inline void SetCustomAttributes(Aws::Vector<FleetAttributeCapability>&& value) { m_customAttributesHasBeenSet = true; m_customAttributes = std::move(value); }

    /**
     * <p>Custom attributes for the customer manged worker capabilities.</p>
     */
    inline CustomerManagedWorkerCapabilities& WithCustomAttributes(const Aws::Vector<FleetAttributeCapability>& value) { SetCustomAttributes(value); return *this;}

    /**
     * <p>Custom attributes for the customer manged worker capabilities.</p>
     */
    inline CustomerManagedWorkerCapabilities& WithCustomAttributes(Aws::Vector<FleetAttributeCapability>&& value) { SetCustomAttributes(std::move(value)); return *this;}

    /**
     * <p>Custom attributes for the customer manged worker capabilities.</p>
     */
    inline CustomerManagedWorkerCapabilities& AddCustomAttributes(const FleetAttributeCapability& value) { m_customAttributesHasBeenSet = true; m_customAttributes.push_back(value); return *this; }

    /**
     * <p>Custom attributes for the customer manged worker capabilities.</p>
     */
    inline CustomerManagedWorkerCapabilities& AddCustomAttributes(FleetAttributeCapability&& value) { m_customAttributesHasBeenSet = true; m_customAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The memory (MiB).</p>
     */
    inline const MemoryMiBRange& GetMemoryMiB() const{ return m_memoryMiB; }

    /**
     * <p>The memory (MiB).</p>
     */
    inline bool MemoryMiBHasBeenSet() const { return m_memoryMiBHasBeenSet; }

    /**
     * <p>The memory (MiB).</p>
     */
    inline void SetMemoryMiB(const MemoryMiBRange& value) { m_memoryMiBHasBeenSet = true; m_memoryMiB = value; }

    /**
     * <p>The memory (MiB).</p>
     */
    inline void SetMemoryMiB(MemoryMiBRange&& value) { m_memoryMiBHasBeenSet = true; m_memoryMiB = std::move(value); }

    /**
     * <p>The memory (MiB).</p>
     */
    inline CustomerManagedWorkerCapabilities& WithMemoryMiB(const MemoryMiBRange& value) { SetMemoryMiB(value); return *this;}

    /**
     * <p>The memory (MiB).</p>
     */
    inline CustomerManagedWorkerCapabilities& WithMemoryMiB(MemoryMiBRange&& value) { SetMemoryMiB(std::move(value)); return *this;}


    /**
     * <p>The operating system (OS) family.</p>
     */
    inline const CustomerManagedFleetOperatingSystemFamily& GetOsFamily() const{ return m_osFamily; }

    /**
     * <p>The operating system (OS) family.</p>
     */
    inline bool OsFamilyHasBeenSet() const { return m_osFamilyHasBeenSet; }

    /**
     * <p>The operating system (OS) family.</p>
     */
    inline void SetOsFamily(const CustomerManagedFleetOperatingSystemFamily& value) { m_osFamilyHasBeenSet = true; m_osFamily = value; }

    /**
     * <p>The operating system (OS) family.</p>
     */
    inline void SetOsFamily(CustomerManagedFleetOperatingSystemFamily&& value) { m_osFamilyHasBeenSet = true; m_osFamily = std::move(value); }

    /**
     * <p>The operating system (OS) family.</p>
     */
    inline CustomerManagedWorkerCapabilities& WithOsFamily(const CustomerManagedFleetOperatingSystemFamily& value) { SetOsFamily(value); return *this;}

    /**
     * <p>The operating system (OS) family.</p>
     */
    inline CustomerManagedWorkerCapabilities& WithOsFamily(CustomerManagedFleetOperatingSystemFamily&& value) { SetOsFamily(std::move(value)); return *this;}


    /**
     * <p>The vCPU count for the customer manged worker capabilities.</p>
     */
    inline const VCpuCountRange& GetVCpuCount() const{ return m_vCpuCount; }

    /**
     * <p>The vCPU count for the customer manged worker capabilities.</p>
     */
    inline bool VCpuCountHasBeenSet() const { return m_vCpuCountHasBeenSet; }

    /**
     * <p>The vCPU count for the customer manged worker capabilities.</p>
     */
    inline void SetVCpuCount(const VCpuCountRange& value) { m_vCpuCountHasBeenSet = true; m_vCpuCount = value; }

    /**
     * <p>The vCPU count for the customer manged worker capabilities.</p>
     */
    inline void SetVCpuCount(VCpuCountRange&& value) { m_vCpuCountHasBeenSet = true; m_vCpuCount = std::move(value); }

    /**
     * <p>The vCPU count for the customer manged worker capabilities.</p>
     */
    inline CustomerManagedWorkerCapabilities& WithVCpuCount(const VCpuCountRange& value) { SetVCpuCount(value); return *this;}

    /**
     * <p>The vCPU count for the customer manged worker capabilities.</p>
     */
    inline CustomerManagedWorkerCapabilities& WithVCpuCount(VCpuCountRange&& value) { SetVCpuCount(std::move(value)); return *this;}

  private:

    AcceleratorCountRange m_acceleratorCount;
    bool m_acceleratorCountHasBeenSet = false;

    AcceleratorTotalMemoryMiBRange m_acceleratorTotalMemoryMiB;
    bool m_acceleratorTotalMemoryMiBHasBeenSet = false;

    Aws::Vector<AcceleratorType> m_acceleratorTypes;
    bool m_acceleratorTypesHasBeenSet = false;

    CpuArchitectureType m_cpuArchitectureType;
    bool m_cpuArchitectureTypeHasBeenSet = false;

    Aws::Vector<FleetAmountCapability> m_customAmounts;
    bool m_customAmountsHasBeenSet = false;

    Aws::Vector<FleetAttributeCapability> m_customAttributes;
    bool m_customAttributesHasBeenSet = false;

    MemoryMiBRange m_memoryMiB;
    bool m_memoryMiBHasBeenSet = false;

    CustomerManagedFleetOperatingSystemFamily m_osFamily;
    bool m_osFamilyHasBeenSet = false;

    VCpuCountRange m_vCpuCount;
    bool m_vCpuCountHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
