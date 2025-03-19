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
    AWS_DEADLINE_API CustomerManagedWorkerCapabilities() = default;
    AWS_DEADLINE_API CustomerManagedWorkerCapabilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API CustomerManagedWorkerCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The vCPU count for the customer manged worker capabilities.</p>
     */
    inline const VCpuCountRange& GetVCpuCount() const { return m_vCpuCount; }
    inline bool VCpuCountHasBeenSet() const { return m_vCpuCountHasBeenSet; }
    template<typename VCpuCountT = VCpuCountRange>
    void SetVCpuCount(VCpuCountT&& value) { m_vCpuCountHasBeenSet = true; m_vCpuCount = std::forward<VCpuCountT>(value); }
    template<typename VCpuCountT = VCpuCountRange>
    CustomerManagedWorkerCapabilities& WithVCpuCount(VCpuCountT&& value) { SetVCpuCount(std::forward<VCpuCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The memory (MiB).</p>
     */
    inline const MemoryMiBRange& GetMemoryMiB() const { return m_memoryMiB; }
    inline bool MemoryMiBHasBeenSet() const { return m_memoryMiBHasBeenSet; }
    template<typename MemoryMiBT = MemoryMiBRange>
    void SetMemoryMiB(MemoryMiBT&& value) { m_memoryMiBHasBeenSet = true; m_memoryMiB = std::forward<MemoryMiBT>(value); }
    template<typename MemoryMiBT = MemoryMiBRange>
    CustomerManagedWorkerCapabilities& WithMemoryMiB(MemoryMiBT&& value) { SetMemoryMiB(std::forward<MemoryMiBT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The accelerator types for the customer managed worker capabilities.</p>
     */
    inline const Aws::Vector<AcceleratorType>& GetAcceleratorTypes() const { return m_acceleratorTypes; }
    inline bool AcceleratorTypesHasBeenSet() const { return m_acceleratorTypesHasBeenSet; }
    template<typename AcceleratorTypesT = Aws::Vector<AcceleratorType>>
    void SetAcceleratorTypes(AcceleratorTypesT&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = std::forward<AcceleratorTypesT>(value); }
    template<typename AcceleratorTypesT = Aws::Vector<AcceleratorType>>
    CustomerManagedWorkerCapabilities& WithAcceleratorTypes(AcceleratorTypesT&& value) { SetAcceleratorTypes(std::forward<AcceleratorTypesT>(value)); return *this;}
    inline CustomerManagedWorkerCapabilities& AddAcceleratorTypes(AcceleratorType value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The range of the accelerator.</p>
     */
    inline const AcceleratorCountRange& GetAcceleratorCount() const { return m_acceleratorCount; }
    inline bool AcceleratorCountHasBeenSet() const { return m_acceleratorCountHasBeenSet; }
    template<typename AcceleratorCountT = AcceleratorCountRange>
    void SetAcceleratorCount(AcceleratorCountT&& value) { m_acceleratorCountHasBeenSet = true; m_acceleratorCount = std::forward<AcceleratorCountT>(value); }
    template<typename AcceleratorCountT = AcceleratorCountRange>
    CustomerManagedWorkerCapabilities& WithAcceleratorCount(AcceleratorCountT&& value) { SetAcceleratorCount(std::forward<AcceleratorCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total memory (MiB) for the customer managed worker capabilities.</p>
     */
    inline const AcceleratorTotalMemoryMiBRange& GetAcceleratorTotalMemoryMiB() const { return m_acceleratorTotalMemoryMiB; }
    inline bool AcceleratorTotalMemoryMiBHasBeenSet() const { return m_acceleratorTotalMemoryMiBHasBeenSet; }
    template<typename AcceleratorTotalMemoryMiBT = AcceleratorTotalMemoryMiBRange>
    void SetAcceleratorTotalMemoryMiB(AcceleratorTotalMemoryMiBT&& value) { m_acceleratorTotalMemoryMiBHasBeenSet = true; m_acceleratorTotalMemoryMiB = std::forward<AcceleratorTotalMemoryMiBT>(value); }
    template<typename AcceleratorTotalMemoryMiBT = AcceleratorTotalMemoryMiBRange>
    CustomerManagedWorkerCapabilities& WithAcceleratorTotalMemoryMiB(AcceleratorTotalMemoryMiBT&& value) { SetAcceleratorTotalMemoryMiB(std::forward<AcceleratorTotalMemoryMiBT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system (OS) family.</p>
     */
    inline CustomerManagedFleetOperatingSystemFamily GetOsFamily() const { return m_osFamily; }
    inline bool OsFamilyHasBeenSet() const { return m_osFamilyHasBeenSet; }
    inline void SetOsFamily(CustomerManagedFleetOperatingSystemFamily value) { m_osFamilyHasBeenSet = true; m_osFamily = value; }
    inline CustomerManagedWorkerCapabilities& WithOsFamily(CustomerManagedFleetOperatingSystemFamily value) { SetOsFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CPU architecture type for the customer managed worker capabilities.</p>
     */
    inline CpuArchitectureType GetCpuArchitectureType() const { return m_cpuArchitectureType; }
    inline bool CpuArchitectureTypeHasBeenSet() const { return m_cpuArchitectureTypeHasBeenSet; }
    inline void SetCpuArchitectureType(CpuArchitectureType value) { m_cpuArchitectureTypeHasBeenSet = true; m_cpuArchitectureType = value; }
    inline CustomerManagedWorkerCapabilities& WithCpuArchitectureType(CpuArchitectureType value) { SetCpuArchitectureType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom requirement ranges for customer managed worker capabilities.</p>
     */
    inline const Aws::Vector<FleetAmountCapability>& GetCustomAmounts() const { return m_customAmounts; }
    inline bool CustomAmountsHasBeenSet() const { return m_customAmountsHasBeenSet; }
    template<typename CustomAmountsT = Aws::Vector<FleetAmountCapability>>
    void SetCustomAmounts(CustomAmountsT&& value) { m_customAmountsHasBeenSet = true; m_customAmounts = std::forward<CustomAmountsT>(value); }
    template<typename CustomAmountsT = Aws::Vector<FleetAmountCapability>>
    CustomerManagedWorkerCapabilities& WithCustomAmounts(CustomAmountsT&& value) { SetCustomAmounts(std::forward<CustomAmountsT>(value)); return *this;}
    template<typename CustomAmountsT = FleetAmountCapability>
    CustomerManagedWorkerCapabilities& AddCustomAmounts(CustomAmountsT&& value) { m_customAmountsHasBeenSet = true; m_customAmounts.emplace_back(std::forward<CustomAmountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Custom attributes for the customer manged worker capabilities.</p>
     */
    inline const Aws::Vector<FleetAttributeCapability>& GetCustomAttributes() const { return m_customAttributes; }
    inline bool CustomAttributesHasBeenSet() const { return m_customAttributesHasBeenSet; }
    template<typename CustomAttributesT = Aws::Vector<FleetAttributeCapability>>
    void SetCustomAttributes(CustomAttributesT&& value) { m_customAttributesHasBeenSet = true; m_customAttributes = std::forward<CustomAttributesT>(value); }
    template<typename CustomAttributesT = Aws::Vector<FleetAttributeCapability>>
    CustomerManagedWorkerCapabilities& WithCustomAttributes(CustomAttributesT&& value) { SetCustomAttributes(std::forward<CustomAttributesT>(value)); return *this;}
    template<typename CustomAttributesT = FleetAttributeCapability>
    CustomerManagedWorkerCapabilities& AddCustomAttributes(CustomAttributesT&& value) { m_customAttributesHasBeenSet = true; m_customAttributes.emplace_back(std::forward<CustomAttributesT>(value)); return *this; }
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

    CustomerManagedFleetOperatingSystemFamily m_osFamily{CustomerManagedFleetOperatingSystemFamily::NOT_SET};
    bool m_osFamilyHasBeenSet = false;

    CpuArchitectureType m_cpuArchitectureType{CpuArchitectureType::NOT_SET};
    bool m_cpuArchitectureTypeHasBeenSet = false;

    Aws::Vector<FleetAmountCapability> m_customAmounts;
    bool m_customAmountsHasBeenSet = false;

    Aws::Vector<FleetAttributeCapability> m_customAttributes;
    bool m_customAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
