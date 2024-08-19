/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/VCpuCountRange.h>
#include <aws/deadline/model/MemoryMiBRange.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/AcceleratorCountRange.h>
#include <aws/deadline/model/AcceleratorTotalMemoryMiBRange.h>
#include <aws/deadline/model/CustomerManagedFleetOperatingSystemFamily.h>
#include <aws/deadline/model/CpuArchitectureType.h>
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


    ///@{
    /**
     * <p>The vCPU count for the customer manged worker capabilities.</p>
     */
    inline const VCpuCountRange& GetVCpuCount() const{ return m_vCpuCount; }
    inline bool VCpuCountHasBeenSet() const { return m_vCpuCountHasBeenSet; }
    inline void SetVCpuCount(const VCpuCountRange& value) { m_vCpuCountHasBeenSet = true; m_vCpuCount = value; }
    inline void SetVCpuCount(VCpuCountRange&& value) { m_vCpuCountHasBeenSet = true; m_vCpuCount = std::move(value); }
    inline CustomerManagedWorkerCapabilities& WithVCpuCount(const VCpuCountRange& value) { SetVCpuCount(value); return *this;}
    inline CustomerManagedWorkerCapabilities& WithVCpuCount(VCpuCountRange&& value) { SetVCpuCount(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The memory (MiB).</p>
     */
    inline const MemoryMiBRange& GetMemoryMiB() const{ return m_memoryMiB; }
    inline bool MemoryMiBHasBeenSet() const { return m_memoryMiBHasBeenSet; }
    inline void SetMemoryMiB(const MemoryMiBRange& value) { m_memoryMiBHasBeenSet = true; m_memoryMiB = value; }
    inline void SetMemoryMiB(MemoryMiBRange&& value) { m_memoryMiBHasBeenSet = true; m_memoryMiB = std::move(value); }
    inline CustomerManagedWorkerCapabilities& WithMemoryMiB(const MemoryMiBRange& value) { SetMemoryMiB(value); return *this;}
    inline CustomerManagedWorkerCapabilities& WithMemoryMiB(MemoryMiBRange&& value) { SetMemoryMiB(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The accelerator types for the customer managed worker capabilities.</p>
     */
    inline const Aws::Vector<AcceleratorType>& GetAcceleratorTypes() const{ return m_acceleratorTypes; }
    inline bool AcceleratorTypesHasBeenSet() const { return m_acceleratorTypesHasBeenSet; }
    inline void SetAcceleratorTypes(const Aws::Vector<AcceleratorType>& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = value; }
    inline void SetAcceleratorTypes(Aws::Vector<AcceleratorType>&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = std::move(value); }
    inline CustomerManagedWorkerCapabilities& WithAcceleratorTypes(const Aws::Vector<AcceleratorType>& value) { SetAcceleratorTypes(value); return *this;}
    inline CustomerManagedWorkerCapabilities& WithAcceleratorTypes(Aws::Vector<AcceleratorType>&& value) { SetAcceleratorTypes(std::move(value)); return *this;}
    inline CustomerManagedWorkerCapabilities& AddAcceleratorTypes(const AcceleratorType& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(value); return *this; }
    inline CustomerManagedWorkerCapabilities& AddAcceleratorTypes(AcceleratorType&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The range of the accelerator.</p>
     */
    inline const AcceleratorCountRange& GetAcceleratorCount() const{ return m_acceleratorCount; }
    inline bool AcceleratorCountHasBeenSet() const { return m_acceleratorCountHasBeenSet; }
    inline void SetAcceleratorCount(const AcceleratorCountRange& value) { m_acceleratorCountHasBeenSet = true; m_acceleratorCount = value; }
    inline void SetAcceleratorCount(AcceleratorCountRange&& value) { m_acceleratorCountHasBeenSet = true; m_acceleratorCount = std::move(value); }
    inline CustomerManagedWorkerCapabilities& WithAcceleratorCount(const AcceleratorCountRange& value) { SetAcceleratorCount(value); return *this;}
    inline CustomerManagedWorkerCapabilities& WithAcceleratorCount(AcceleratorCountRange&& value) { SetAcceleratorCount(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total memory (MiB) for the customer managed worker capabilities.</p>
     */
    inline const AcceleratorTotalMemoryMiBRange& GetAcceleratorTotalMemoryMiB() const{ return m_acceleratorTotalMemoryMiB; }
    inline bool AcceleratorTotalMemoryMiBHasBeenSet() const { return m_acceleratorTotalMemoryMiBHasBeenSet; }
    inline void SetAcceleratorTotalMemoryMiB(const AcceleratorTotalMemoryMiBRange& value) { m_acceleratorTotalMemoryMiBHasBeenSet = true; m_acceleratorTotalMemoryMiB = value; }
    inline void SetAcceleratorTotalMemoryMiB(AcceleratorTotalMemoryMiBRange&& value) { m_acceleratorTotalMemoryMiBHasBeenSet = true; m_acceleratorTotalMemoryMiB = std::move(value); }
    inline CustomerManagedWorkerCapabilities& WithAcceleratorTotalMemoryMiB(const AcceleratorTotalMemoryMiBRange& value) { SetAcceleratorTotalMemoryMiB(value); return *this;}
    inline CustomerManagedWorkerCapabilities& WithAcceleratorTotalMemoryMiB(AcceleratorTotalMemoryMiBRange&& value) { SetAcceleratorTotalMemoryMiB(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system (OS) family.</p>
     */
    inline const CustomerManagedFleetOperatingSystemFamily& GetOsFamily() const{ return m_osFamily; }
    inline bool OsFamilyHasBeenSet() const { return m_osFamilyHasBeenSet; }
    inline void SetOsFamily(const CustomerManagedFleetOperatingSystemFamily& value) { m_osFamilyHasBeenSet = true; m_osFamily = value; }
    inline void SetOsFamily(CustomerManagedFleetOperatingSystemFamily&& value) { m_osFamilyHasBeenSet = true; m_osFamily = std::move(value); }
    inline CustomerManagedWorkerCapabilities& WithOsFamily(const CustomerManagedFleetOperatingSystemFamily& value) { SetOsFamily(value); return *this;}
    inline CustomerManagedWorkerCapabilities& WithOsFamily(CustomerManagedFleetOperatingSystemFamily&& value) { SetOsFamily(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CPU architecture type for the customer managed worker capabilities.</p>
     */
    inline const CpuArchitectureType& GetCpuArchitectureType() const{ return m_cpuArchitectureType; }
    inline bool CpuArchitectureTypeHasBeenSet() const { return m_cpuArchitectureTypeHasBeenSet; }
    inline void SetCpuArchitectureType(const CpuArchitectureType& value) { m_cpuArchitectureTypeHasBeenSet = true; m_cpuArchitectureType = value; }
    inline void SetCpuArchitectureType(CpuArchitectureType&& value) { m_cpuArchitectureTypeHasBeenSet = true; m_cpuArchitectureType = std::move(value); }
    inline CustomerManagedWorkerCapabilities& WithCpuArchitectureType(const CpuArchitectureType& value) { SetCpuArchitectureType(value); return *this;}
    inline CustomerManagedWorkerCapabilities& WithCpuArchitectureType(CpuArchitectureType&& value) { SetCpuArchitectureType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom requirement ranges for customer managed worker capabilities.</p>
     */
    inline const Aws::Vector<FleetAmountCapability>& GetCustomAmounts() const{ return m_customAmounts; }
    inline bool CustomAmountsHasBeenSet() const { return m_customAmountsHasBeenSet; }
    inline void SetCustomAmounts(const Aws::Vector<FleetAmountCapability>& value) { m_customAmountsHasBeenSet = true; m_customAmounts = value; }
    inline void SetCustomAmounts(Aws::Vector<FleetAmountCapability>&& value) { m_customAmountsHasBeenSet = true; m_customAmounts = std::move(value); }
    inline CustomerManagedWorkerCapabilities& WithCustomAmounts(const Aws::Vector<FleetAmountCapability>& value) { SetCustomAmounts(value); return *this;}
    inline CustomerManagedWorkerCapabilities& WithCustomAmounts(Aws::Vector<FleetAmountCapability>&& value) { SetCustomAmounts(std::move(value)); return *this;}
    inline CustomerManagedWorkerCapabilities& AddCustomAmounts(const FleetAmountCapability& value) { m_customAmountsHasBeenSet = true; m_customAmounts.push_back(value); return *this; }
    inline CustomerManagedWorkerCapabilities& AddCustomAmounts(FleetAmountCapability&& value) { m_customAmountsHasBeenSet = true; m_customAmounts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Custom attributes for the customer manged worker capabilities.</p>
     */
    inline const Aws::Vector<FleetAttributeCapability>& GetCustomAttributes() const{ return m_customAttributes; }
    inline bool CustomAttributesHasBeenSet() const { return m_customAttributesHasBeenSet; }
    inline void SetCustomAttributes(const Aws::Vector<FleetAttributeCapability>& value) { m_customAttributesHasBeenSet = true; m_customAttributes = value; }
    inline void SetCustomAttributes(Aws::Vector<FleetAttributeCapability>&& value) { m_customAttributesHasBeenSet = true; m_customAttributes = std::move(value); }
    inline CustomerManagedWorkerCapabilities& WithCustomAttributes(const Aws::Vector<FleetAttributeCapability>& value) { SetCustomAttributes(value); return *this;}
    inline CustomerManagedWorkerCapabilities& WithCustomAttributes(Aws::Vector<FleetAttributeCapability>&& value) { SetCustomAttributes(std::move(value)); return *this;}
    inline CustomerManagedWorkerCapabilities& AddCustomAttributes(const FleetAttributeCapability& value) { m_customAttributesHasBeenSet = true; m_customAttributes.push_back(value); return *this; }
    inline CustomerManagedWorkerCapabilities& AddCustomAttributes(FleetAttributeCapability&& value) { m_customAttributesHasBeenSet = true; m_customAttributes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    VCpuCountRange m_vCpuCount;
    bool m_vCpuCountHasBeenSet = false;

    MemoryMiBRange m_memoryMiB;
    bool m_memoryMiBHasBeenSet = false;

    Aws::Vector<AcceleratorType> m_acceleratorTypes;
    bool m_acceleratorTypesHasBeenSet = false;

    AcceleratorCountRange m_acceleratorCount;
    bool m_acceleratorCountHasBeenSet = false;

    AcceleratorTotalMemoryMiBRange m_acceleratorTotalMemoryMiB;
    bool m_acceleratorTotalMemoryMiBHasBeenSet = false;

    CustomerManagedFleetOperatingSystemFamily m_osFamily;
    bool m_osFamilyHasBeenSet = false;

    CpuArchitectureType m_cpuArchitectureType;
    bool m_cpuArchitectureTypeHasBeenSet = false;

    Aws::Vector<FleetAmountCapability> m_customAmounts;
    bool m_customAmountsHasBeenSet = false;

    Aws::Vector<FleetAttributeCapability> m_customAttributes;
    bool m_customAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
