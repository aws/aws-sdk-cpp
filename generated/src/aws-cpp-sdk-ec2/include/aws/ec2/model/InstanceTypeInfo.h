/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/InstanceTypeHypervisor.h>
#include <aws/ec2/model/ProcessorInfo.h>
#include <aws/ec2/model/VCpuInfo.h>
#include <aws/ec2/model/MemoryInfo.h>
#include <aws/ec2/model/InstanceStorageInfo.h>
#include <aws/ec2/model/EbsInfo.h>
#include <aws/ec2/model/NetworkInfo.h>
#include <aws/ec2/model/GpuInfo.h>
#include <aws/ec2/model/FpgaInfo.h>
#include <aws/ec2/model/PlacementGroupInfo.h>
#include <aws/ec2/model/InferenceAcceleratorInfo.h>
#include <aws/ec2/model/NitroEnclavesSupport.h>
#include <aws/ec2/model/NitroTpmSupport.h>
#include <aws/ec2/model/NitroTpmInfo.h>
#include <aws/ec2/model/MediaAcceleratorInfo.h>
#include <aws/ec2/model/NeuronInfo.h>
#include <aws/ec2/model/PhcSupport.h>
#include <aws/ec2/model/RebootMigrationSupport.h>
#include <aws/ec2/model/UsageClassType.h>
#include <aws/ec2/model/RootDeviceType.h>
#include <aws/ec2/model/VirtualizationType.h>
#include <aws/ec2/model/BootModeType.h>
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
   * <p>Describes the instance type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceTypeInfo">AWS
   * API Reference</a></p>
   */
  class InstanceTypeInfo
  {
  public:
    AWS_EC2_API InstanceTypeInfo() = default;
    AWS_EC2_API InstanceTypeInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceTypeInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline InstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(InstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline InstanceTypeInfo& WithInstanceType(InstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance type is current generation.</p>
     */
    inline bool GetCurrentGeneration() const { return m_currentGeneration; }
    inline bool CurrentGenerationHasBeenSet() const { return m_currentGenerationHasBeenSet; }
    inline void SetCurrentGeneration(bool value) { m_currentGenerationHasBeenSet = true; m_currentGeneration = value; }
    inline InstanceTypeInfo& WithCurrentGeneration(bool value) { SetCurrentGeneration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance type is eligible for the free tier.</p>
     */
    inline bool GetFreeTierEligible() const { return m_freeTierEligible; }
    inline bool FreeTierEligibleHasBeenSet() const { return m_freeTierEligibleHasBeenSet; }
    inline void SetFreeTierEligible(bool value) { m_freeTierEligibleHasBeenSet = true; m_freeTierEligible = value; }
    inline InstanceTypeInfo& WithFreeTierEligible(bool value) { SetFreeTierEligible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance type is offered for spot, On-Demand, or
     * Capacity Blocks.</p>
     */
    inline const Aws::Vector<UsageClassType>& GetSupportedUsageClasses() const { return m_supportedUsageClasses; }
    inline bool SupportedUsageClassesHasBeenSet() const { return m_supportedUsageClassesHasBeenSet; }
    template<typename SupportedUsageClassesT = Aws::Vector<UsageClassType>>
    void SetSupportedUsageClasses(SupportedUsageClassesT&& value) { m_supportedUsageClassesHasBeenSet = true; m_supportedUsageClasses = std::forward<SupportedUsageClassesT>(value); }
    template<typename SupportedUsageClassesT = Aws::Vector<UsageClassType>>
    InstanceTypeInfo& WithSupportedUsageClasses(SupportedUsageClassesT&& value) { SetSupportedUsageClasses(std::forward<SupportedUsageClassesT>(value)); return *this;}
    inline InstanceTypeInfo& AddSupportedUsageClasses(UsageClassType value) { m_supportedUsageClassesHasBeenSet = true; m_supportedUsageClasses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The supported root device types.</p>
     */
    inline const Aws::Vector<RootDeviceType>& GetSupportedRootDeviceTypes() const { return m_supportedRootDeviceTypes; }
    inline bool SupportedRootDeviceTypesHasBeenSet() const { return m_supportedRootDeviceTypesHasBeenSet; }
    template<typename SupportedRootDeviceTypesT = Aws::Vector<RootDeviceType>>
    void SetSupportedRootDeviceTypes(SupportedRootDeviceTypesT&& value) { m_supportedRootDeviceTypesHasBeenSet = true; m_supportedRootDeviceTypes = std::forward<SupportedRootDeviceTypesT>(value); }
    template<typename SupportedRootDeviceTypesT = Aws::Vector<RootDeviceType>>
    InstanceTypeInfo& WithSupportedRootDeviceTypes(SupportedRootDeviceTypesT&& value) { SetSupportedRootDeviceTypes(std::forward<SupportedRootDeviceTypesT>(value)); return *this;}
    inline InstanceTypeInfo& AddSupportedRootDeviceTypes(RootDeviceType value) { m_supportedRootDeviceTypesHasBeenSet = true; m_supportedRootDeviceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The supported virtualization types.</p>
     */
    inline const Aws::Vector<VirtualizationType>& GetSupportedVirtualizationTypes() const { return m_supportedVirtualizationTypes; }
    inline bool SupportedVirtualizationTypesHasBeenSet() const { return m_supportedVirtualizationTypesHasBeenSet; }
    template<typename SupportedVirtualizationTypesT = Aws::Vector<VirtualizationType>>
    void SetSupportedVirtualizationTypes(SupportedVirtualizationTypesT&& value) { m_supportedVirtualizationTypesHasBeenSet = true; m_supportedVirtualizationTypes = std::forward<SupportedVirtualizationTypesT>(value); }
    template<typename SupportedVirtualizationTypesT = Aws::Vector<VirtualizationType>>
    InstanceTypeInfo& WithSupportedVirtualizationTypes(SupportedVirtualizationTypesT&& value) { SetSupportedVirtualizationTypes(std::forward<SupportedVirtualizationTypesT>(value)); return *this;}
    inline InstanceTypeInfo& AddSupportedVirtualizationTypes(VirtualizationType value) { m_supportedVirtualizationTypesHasBeenSet = true; m_supportedVirtualizationTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance is a bare metal instance type.</p>
     */
    inline bool GetBareMetal() const { return m_bareMetal; }
    inline bool BareMetalHasBeenSet() const { return m_bareMetalHasBeenSet; }
    inline void SetBareMetal(bool value) { m_bareMetalHasBeenSet = true; m_bareMetal = value; }
    inline InstanceTypeInfo& WithBareMetal(bool value) { SetBareMetal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hypervisor for the instance type.</p>
     */
    inline InstanceTypeHypervisor GetHypervisor() const { return m_hypervisor; }
    inline bool HypervisorHasBeenSet() const { return m_hypervisorHasBeenSet; }
    inline void SetHypervisor(InstanceTypeHypervisor value) { m_hypervisorHasBeenSet = true; m_hypervisor = value; }
    inline InstanceTypeInfo& WithHypervisor(InstanceTypeHypervisor value) { SetHypervisor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the processor.</p>
     */
    inline const ProcessorInfo& GetProcessorInfo() const { return m_processorInfo; }
    inline bool ProcessorInfoHasBeenSet() const { return m_processorInfoHasBeenSet; }
    template<typename ProcessorInfoT = ProcessorInfo>
    void SetProcessorInfo(ProcessorInfoT&& value) { m_processorInfoHasBeenSet = true; m_processorInfo = std::forward<ProcessorInfoT>(value); }
    template<typename ProcessorInfoT = ProcessorInfo>
    InstanceTypeInfo& WithProcessorInfo(ProcessorInfoT&& value) { SetProcessorInfo(std::forward<ProcessorInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the vCPU configurations for the instance type.</p>
     */
    inline const VCpuInfo& GetVCpuInfo() const { return m_vCpuInfo; }
    inline bool VCpuInfoHasBeenSet() const { return m_vCpuInfoHasBeenSet; }
    template<typename VCpuInfoT = VCpuInfo>
    void SetVCpuInfo(VCpuInfoT&& value) { m_vCpuInfoHasBeenSet = true; m_vCpuInfo = std::forward<VCpuInfoT>(value); }
    template<typename VCpuInfoT = VCpuInfo>
    InstanceTypeInfo& WithVCpuInfo(VCpuInfoT&& value) { SetVCpuInfo(std::forward<VCpuInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the memory for the instance type.</p>
     */
    inline const MemoryInfo& GetMemoryInfo() const { return m_memoryInfo; }
    inline bool MemoryInfoHasBeenSet() const { return m_memoryInfoHasBeenSet; }
    template<typename MemoryInfoT = MemoryInfo>
    void SetMemoryInfo(MemoryInfoT&& value) { m_memoryInfoHasBeenSet = true; m_memoryInfo = std::forward<MemoryInfoT>(value); }
    template<typename MemoryInfoT = MemoryInfo>
    InstanceTypeInfo& WithMemoryInfo(MemoryInfoT&& value) { SetMemoryInfo(std::forward<MemoryInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether instance storage is supported.</p>
     */
    inline bool GetInstanceStorageSupported() const { return m_instanceStorageSupported; }
    inline bool InstanceStorageSupportedHasBeenSet() const { return m_instanceStorageSupportedHasBeenSet; }
    inline void SetInstanceStorageSupported(bool value) { m_instanceStorageSupportedHasBeenSet = true; m_instanceStorageSupported = value; }
    inline InstanceTypeInfo& WithInstanceStorageSupported(bool value) { SetInstanceStorageSupported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the instance storage for the instance type.</p>
     */
    inline const InstanceStorageInfo& GetInstanceStorageInfo() const { return m_instanceStorageInfo; }
    inline bool InstanceStorageInfoHasBeenSet() const { return m_instanceStorageInfoHasBeenSet; }
    template<typename InstanceStorageInfoT = InstanceStorageInfo>
    void SetInstanceStorageInfo(InstanceStorageInfoT&& value) { m_instanceStorageInfoHasBeenSet = true; m_instanceStorageInfo = std::forward<InstanceStorageInfoT>(value); }
    template<typename InstanceStorageInfoT = InstanceStorageInfo>
    InstanceTypeInfo& WithInstanceStorageInfo(InstanceStorageInfoT&& value) { SetInstanceStorageInfo(std::forward<InstanceStorageInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the Amazon EBS settings for the instance type.</p>
     */
    inline const EbsInfo& GetEbsInfo() const { return m_ebsInfo; }
    inline bool EbsInfoHasBeenSet() const { return m_ebsInfoHasBeenSet; }
    template<typename EbsInfoT = EbsInfo>
    void SetEbsInfo(EbsInfoT&& value) { m_ebsInfoHasBeenSet = true; m_ebsInfo = std::forward<EbsInfoT>(value); }
    template<typename EbsInfoT = EbsInfo>
    InstanceTypeInfo& WithEbsInfo(EbsInfoT&& value) { SetEbsInfo(std::forward<EbsInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the network settings for the instance type.</p>
     */
    inline const NetworkInfo& GetNetworkInfo() const { return m_networkInfo; }
    inline bool NetworkInfoHasBeenSet() const { return m_networkInfoHasBeenSet; }
    template<typename NetworkInfoT = NetworkInfo>
    void SetNetworkInfo(NetworkInfoT&& value) { m_networkInfoHasBeenSet = true; m_networkInfo = std::forward<NetworkInfoT>(value); }
    template<typename NetworkInfoT = NetworkInfo>
    InstanceTypeInfo& WithNetworkInfo(NetworkInfoT&& value) { SetNetworkInfo(std::forward<NetworkInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the GPU accelerator settings for the instance type.</p>
     */
    inline const GpuInfo& GetGpuInfo() const { return m_gpuInfo; }
    inline bool GpuInfoHasBeenSet() const { return m_gpuInfoHasBeenSet; }
    template<typename GpuInfoT = GpuInfo>
    void SetGpuInfo(GpuInfoT&& value) { m_gpuInfoHasBeenSet = true; m_gpuInfo = std::forward<GpuInfoT>(value); }
    template<typename GpuInfoT = GpuInfo>
    InstanceTypeInfo& WithGpuInfo(GpuInfoT&& value) { SetGpuInfo(std::forward<GpuInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the FPGA accelerator settings for the instance type.</p>
     */
    inline const FpgaInfo& GetFpgaInfo() const { return m_fpgaInfo; }
    inline bool FpgaInfoHasBeenSet() const { return m_fpgaInfoHasBeenSet; }
    template<typename FpgaInfoT = FpgaInfo>
    void SetFpgaInfo(FpgaInfoT&& value) { m_fpgaInfoHasBeenSet = true; m_fpgaInfo = std::forward<FpgaInfoT>(value); }
    template<typename FpgaInfoT = FpgaInfo>
    InstanceTypeInfo& WithFpgaInfo(FpgaInfoT&& value) { SetFpgaInfo(std::forward<FpgaInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the placement group settings for the instance type.</p>
     */
    inline const PlacementGroupInfo& GetPlacementGroupInfo() const { return m_placementGroupInfo; }
    inline bool PlacementGroupInfoHasBeenSet() const { return m_placementGroupInfoHasBeenSet; }
    template<typename PlacementGroupInfoT = PlacementGroupInfo>
    void SetPlacementGroupInfo(PlacementGroupInfoT&& value) { m_placementGroupInfoHasBeenSet = true; m_placementGroupInfo = std::forward<PlacementGroupInfoT>(value); }
    template<typename PlacementGroupInfoT = PlacementGroupInfo>
    InstanceTypeInfo& WithPlacementGroupInfo(PlacementGroupInfoT&& value) { SetPlacementGroupInfo(std::forward<PlacementGroupInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the Inference accelerator settings for the instance type.</p>
     */
    inline const InferenceAcceleratorInfo& GetInferenceAcceleratorInfo() const { return m_inferenceAcceleratorInfo; }
    inline bool InferenceAcceleratorInfoHasBeenSet() const { return m_inferenceAcceleratorInfoHasBeenSet; }
    template<typename InferenceAcceleratorInfoT = InferenceAcceleratorInfo>
    void SetInferenceAcceleratorInfo(InferenceAcceleratorInfoT&& value) { m_inferenceAcceleratorInfoHasBeenSet = true; m_inferenceAcceleratorInfo = std::forward<InferenceAcceleratorInfoT>(value); }
    template<typename InferenceAcceleratorInfoT = InferenceAcceleratorInfo>
    InstanceTypeInfo& WithInferenceAcceleratorInfo(InferenceAcceleratorInfoT&& value) { SetInferenceAcceleratorInfo(std::forward<InferenceAcceleratorInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether On-Demand hibernation is supported.</p>
     */
    inline bool GetHibernationSupported() const { return m_hibernationSupported; }
    inline bool HibernationSupportedHasBeenSet() const { return m_hibernationSupportedHasBeenSet; }
    inline void SetHibernationSupported(bool value) { m_hibernationSupportedHasBeenSet = true; m_hibernationSupported = value; }
    inline InstanceTypeInfo& WithHibernationSupported(bool value) { SetHibernationSupported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance type is a burstable performance T instance
     * type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
     * performance instances</a>.</p>
     */
    inline bool GetBurstablePerformanceSupported() const { return m_burstablePerformanceSupported; }
    inline bool BurstablePerformanceSupportedHasBeenSet() const { return m_burstablePerformanceSupportedHasBeenSet; }
    inline void SetBurstablePerformanceSupported(bool value) { m_burstablePerformanceSupportedHasBeenSet = true; m_burstablePerformanceSupported = value; }
    inline InstanceTypeInfo& WithBurstablePerformanceSupported(bool value) { SetBurstablePerformanceSupported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Dedicated Hosts are supported on the instance type.</p>
     */
    inline bool GetDedicatedHostsSupported() const { return m_dedicatedHostsSupported; }
    inline bool DedicatedHostsSupportedHasBeenSet() const { return m_dedicatedHostsSupportedHasBeenSet; }
    inline void SetDedicatedHostsSupported(bool value) { m_dedicatedHostsSupportedHasBeenSet = true; m_dedicatedHostsSupported = value; }
    inline InstanceTypeInfo& WithDedicatedHostsSupported(bool value) { SetDedicatedHostsSupported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Amazon CloudWatch action based recovery is supported.</p>
     */
    inline bool GetAutoRecoverySupported() const { return m_autoRecoverySupported; }
    inline bool AutoRecoverySupportedHasBeenSet() const { return m_autoRecoverySupportedHasBeenSet; }
    inline void SetAutoRecoverySupported(bool value) { m_autoRecoverySupportedHasBeenSet = true; m_autoRecoverySupported = value; }
    inline InstanceTypeInfo& WithAutoRecoverySupported(bool value) { SetAutoRecoverySupported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported boot modes. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Boot
     * modes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const Aws::Vector<BootModeType>& GetSupportedBootModes() const { return m_supportedBootModes; }
    inline bool SupportedBootModesHasBeenSet() const { return m_supportedBootModesHasBeenSet; }
    template<typename SupportedBootModesT = Aws::Vector<BootModeType>>
    void SetSupportedBootModes(SupportedBootModesT&& value) { m_supportedBootModesHasBeenSet = true; m_supportedBootModes = std::forward<SupportedBootModesT>(value); }
    template<typename SupportedBootModesT = Aws::Vector<BootModeType>>
    InstanceTypeInfo& WithSupportedBootModes(SupportedBootModesT&& value) { SetSupportedBootModes(std::forward<SupportedBootModesT>(value)); return *this;}
    inline InstanceTypeInfo& AddSupportedBootModes(BootModeType value) { m_supportedBootModesHasBeenSet = true; m_supportedBootModes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether Nitro Enclaves is supported.</p>
     */
    inline NitroEnclavesSupport GetNitroEnclavesSupport() const { return m_nitroEnclavesSupport; }
    inline bool NitroEnclavesSupportHasBeenSet() const { return m_nitroEnclavesSupportHasBeenSet; }
    inline void SetNitroEnclavesSupport(NitroEnclavesSupport value) { m_nitroEnclavesSupportHasBeenSet = true; m_nitroEnclavesSupport = value; }
    inline InstanceTypeInfo& WithNitroEnclavesSupport(NitroEnclavesSupport value) { SetNitroEnclavesSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether NitroTPM is supported.</p>
     */
    inline NitroTpmSupport GetNitroTpmSupport() const { return m_nitroTpmSupport; }
    inline bool NitroTpmSupportHasBeenSet() const { return m_nitroTpmSupportHasBeenSet; }
    inline void SetNitroTpmSupport(NitroTpmSupport value) { m_nitroTpmSupportHasBeenSet = true; m_nitroTpmSupport = value; }
    inline InstanceTypeInfo& WithNitroTpmSupport(NitroTpmSupport value) { SetNitroTpmSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the supported NitroTPM versions for the instance type.</p>
     */
    inline const NitroTpmInfo& GetNitroTpmInfo() const { return m_nitroTpmInfo; }
    inline bool NitroTpmInfoHasBeenSet() const { return m_nitroTpmInfoHasBeenSet; }
    template<typename NitroTpmInfoT = NitroTpmInfo>
    void SetNitroTpmInfo(NitroTpmInfoT&& value) { m_nitroTpmInfoHasBeenSet = true; m_nitroTpmInfo = std::forward<NitroTpmInfoT>(value); }
    template<typename NitroTpmInfoT = NitroTpmInfo>
    InstanceTypeInfo& WithNitroTpmInfo(NitroTpmInfoT&& value) { SetNitroTpmInfo(std::forward<NitroTpmInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the media accelerator settings for the instance type.</p>
     */
    inline const MediaAcceleratorInfo& GetMediaAcceleratorInfo() const { return m_mediaAcceleratorInfo; }
    inline bool MediaAcceleratorInfoHasBeenSet() const { return m_mediaAcceleratorInfoHasBeenSet; }
    template<typename MediaAcceleratorInfoT = MediaAcceleratorInfo>
    void SetMediaAcceleratorInfo(MediaAcceleratorInfoT&& value) { m_mediaAcceleratorInfoHasBeenSet = true; m_mediaAcceleratorInfo = std::forward<MediaAcceleratorInfoT>(value); }
    template<typename MediaAcceleratorInfoT = MediaAcceleratorInfo>
    InstanceTypeInfo& WithMediaAcceleratorInfo(MediaAcceleratorInfoT&& value) { SetMediaAcceleratorInfo(std::forward<MediaAcceleratorInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the Neuron accelerator settings for the instance type.</p>
     */
    inline const NeuronInfo& GetNeuronInfo() const { return m_neuronInfo; }
    inline bool NeuronInfoHasBeenSet() const { return m_neuronInfoHasBeenSet; }
    template<typename NeuronInfoT = NeuronInfo>
    void SetNeuronInfo(NeuronInfoT&& value) { m_neuronInfoHasBeenSet = true; m_neuronInfo = std::forward<NeuronInfoT>(value); }
    template<typename NeuronInfoT = NeuronInfo>
    InstanceTypeInfo& WithNeuronInfo(NeuronInfoT&& value) { SetNeuronInfo(std::forward<NeuronInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a local Precision Time Protocol (PTP) hardware clock (PHC)
     * is supported.</p>
     */
    inline PhcSupport GetPhcSupport() const { return m_phcSupport; }
    inline bool PhcSupportHasBeenSet() const { return m_phcSupportHasBeenSet; }
    inline void SetPhcSupport(PhcSupport value) { m_phcSupportHasBeenSet = true; m_phcSupport = value; }
    inline InstanceTypeInfo& WithPhcSupport(PhcSupport value) { SetPhcSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether reboot migration during a user-initiated reboot is
     * supported for instances that have a scheduled <code>system-reboot</code> event.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/schedevents_actions_reboot.html#reboot-migration">Enable
     * or disable reboot migration</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline RebootMigrationSupport GetRebootMigrationSupport() const { return m_rebootMigrationSupport; }
    inline bool RebootMigrationSupportHasBeenSet() const { return m_rebootMigrationSupportHasBeenSet; }
    inline void SetRebootMigrationSupport(RebootMigrationSupport value) { m_rebootMigrationSupportHasBeenSet = true; m_rebootMigrationSupport = value; }
    inline InstanceTypeInfo& WithRebootMigrationSupport(RebootMigrationSupport value) { SetRebootMigrationSupport(value); return *this;}
    ///@}
  private:

    InstanceType m_instanceType{InstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    bool m_currentGeneration{false};
    bool m_currentGenerationHasBeenSet = false;

    bool m_freeTierEligible{false};
    bool m_freeTierEligibleHasBeenSet = false;

    Aws::Vector<UsageClassType> m_supportedUsageClasses;
    bool m_supportedUsageClassesHasBeenSet = false;

    Aws::Vector<RootDeviceType> m_supportedRootDeviceTypes;
    bool m_supportedRootDeviceTypesHasBeenSet = false;

    Aws::Vector<VirtualizationType> m_supportedVirtualizationTypes;
    bool m_supportedVirtualizationTypesHasBeenSet = false;

    bool m_bareMetal{false};
    bool m_bareMetalHasBeenSet = false;

    InstanceTypeHypervisor m_hypervisor{InstanceTypeHypervisor::NOT_SET};
    bool m_hypervisorHasBeenSet = false;

    ProcessorInfo m_processorInfo;
    bool m_processorInfoHasBeenSet = false;

    VCpuInfo m_vCpuInfo;
    bool m_vCpuInfoHasBeenSet = false;

    MemoryInfo m_memoryInfo;
    bool m_memoryInfoHasBeenSet = false;

    bool m_instanceStorageSupported{false};
    bool m_instanceStorageSupportedHasBeenSet = false;

    InstanceStorageInfo m_instanceStorageInfo;
    bool m_instanceStorageInfoHasBeenSet = false;

    EbsInfo m_ebsInfo;
    bool m_ebsInfoHasBeenSet = false;

    NetworkInfo m_networkInfo;
    bool m_networkInfoHasBeenSet = false;

    GpuInfo m_gpuInfo;
    bool m_gpuInfoHasBeenSet = false;

    FpgaInfo m_fpgaInfo;
    bool m_fpgaInfoHasBeenSet = false;

    PlacementGroupInfo m_placementGroupInfo;
    bool m_placementGroupInfoHasBeenSet = false;

    InferenceAcceleratorInfo m_inferenceAcceleratorInfo;
    bool m_inferenceAcceleratorInfoHasBeenSet = false;

    bool m_hibernationSupported{false};
    bool m_hibernationSupportedHasBeenSet = false;

    bool m_burstablePerformanceSupported{false};
    bool m_burstablePerformanceSupportedHasBeenSet = false;

    bool m_dedicatedHostsSupported{false};
    bool m_dedicatedHostsSupportedHasBeenSet = false;

    bool m_autoRecoverySupported{false};
    bool m_autoRecoverySupportedHasBeenSet = false;

    Aws::Vector<BootModeType> m_supportedBootModes;
    bool m_supportedBootModesHasBeenSet = false;

    NitroEnclavesSupport m_nitroEnclavesSupport{NitroEnclavesSupport::NOT_SET};
    bool m_nitroEnclavesSupportHasBeenSet = false;

    NitroTpmSupport m_nitroTpmSupport{NitroTpmSupport::NOT_SET};
    bool m_nitroTpmSupportHasBeenSet = false;

    NitroTpmInfo m_nitroTpmInfo;
    bool m_nitroTpmInfoHasBeenSet = false;

    MediaAcceleratorInfo m_mediaAcceleratorInfo;
    bool m_mediaAcceleratorInfoHasBeenSet = false;

    NeuronInfo m_neuronInfo;
    bool m_neuronInfoHasBeenSet = false;

    PhcSupport m_phcSupport{PhcSupport::NOT_SET};
    bool m_phcSupportHasBeenSet = false;

    RebootMigrationSupport m_rebootMigrationSupport{RebootMigrationSupport::NOT_SET};
    bool m_rebootMigrationSupportHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
