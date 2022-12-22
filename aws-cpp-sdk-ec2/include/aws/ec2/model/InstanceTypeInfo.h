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
    AWS_EC2_API InstanceTypeInfo();
    AWS_EC2_API InstanceTypeInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceTypeInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline InstanceTypeInfo& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline InstanceTypeInfo& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the instance type is current generation.</p>
     */
    inline bool GetCurrentGeneration() const{ return m_currentGeneration; }

    /**
     * <p>Indicates whether the instance type is current generation.</p>
     */
    inline bool CurrentGenerationHasBeenSet() const { return m_currentGenerationHasBeenSet; }

    /**
     * <p>Indicates whether the instance type is current generation.</p>
     */
    inline void SetCurrentGeneration(bool value) { m_currentGenerationHasBeenSet = true; m_currentGeneration = value; }

    /**
     * <p>Indicates whether the instance type is current generation.</p>
     */
    inline InstanceTypeInfo& WithCurrentGeneration(bool value) { SetCurrentGeneration(value); return *this;}


    /**
     * <p>Indicates whether the instance type is eligible for the free tier.</p>
     */
    inline bool GetFreeTierEligible() const{ return m_freeTierEligible; }

    /**
     * <p>Indicates whether the instance type is eligible for the free tier.</p>
     */
    inline bool FreeTierEligibleHasBeenSet() const { return m_freeTierEligibleHasBeenSet; }

    /**
     * <p>Indicates whether the instance type is eligible for the free tier.</p>
     */
    inline void SetFreeTierEligible(bool value) { m_freeTierEligibleHasBeenSet = true; m_freeTierEligible = value; }

    /**
     * <p>Indicates whether the instance type is eligible for the free tier.</p>
     */
    inline InstanceTypeInfo& WithFreeTierEligible(bool value) { SetFreeTierEligible(value); return *this;}


    /**
     * <p>Indicates whether the instance type is offered for spot or On-Demand.</p>
     */
    inline const Aws::Vector<UsageClassType>& GetSupportedUsageClasses() const{ return m_supportedUsageClasses; }

    /**
     * <p>Indicates whether the instance type is offered for spot or On-Demand.</p>
     */
    inline bool SupportedUsageClassesHasBeenSet() const { return m_supportedUsageClassesHasBeenSet; }

    /**
     * <p>Indicates whether the instance type is offered for spot or On-Demand.</p>
     */
    inline void SetSupportedUsageClasses(const Aws::Vector<UsageClassType>& value) { m_supportedUsageClassesHasBeenSet = true; m_supportedUsageClasses = value; }

    /**
     * <p>Indicates whether the instance type is offered for spot or On-Demand.</p>
     */
    inline void SetSupportedUsageClasses(Aws::Vector<UsageClassType>&& value) { m_supportedUsageClassesHasBeenSet = true; m_supportedUsageClasses = std::move(value); }

    /**
     * <p>Indicates whether the instance type is offered for spot or On-Demand.</p>
     */
    inline InstanceTypeInfo& WithSupportedUsageClasses(const Aws::Vector<UsageClassType>& value) { SetSupportedUsageClasses(value); return *this;}

    /**
     * <p>Indicates whether the instance type is offered for spot or On-Demand.</p>
     */
    inline InstanceTypeInfo& WithSupportedUsageClasses(Aws::Vector<UsageClassType>&& value) { SetSupportedUsageClasses(std::move(value)); return *this;}

    /**
     * <p>Indicates whether the instance type is offered for spot or On-Demand.</p>
     */
    inline InstanceTypeInfo& AddSupportedUsageClasses(const UsageClassType& value) { m_supportedUsageClassesHasBeenSet = true; m_supportedUsageClasses.push_back(value); return *this; }

    /**
     * <p>Indicates whether the instance type is offered for spot or On-Demand.</p>
     */
    inline InstanceTypeInfo& AddSupportedUsageClasses(UsageClassType&& value) { m_supportedUsageClassesHasBeenSet = true; m_supportedUsageClasses.push_back(std::move(value)); return *this; }


    /**
     * <p>The supported root device types.</p>
     */
    inline const Aws::Vector<RootDeviceType>& GetSupportedRootDeviceTypes() const{ return m_supportedRootDeviceTypes; }

    /**
     * <p>The supported root device types.</p>
     */
    inline bool SupportedRootDeviceTypesHasBeenSet() const { return m_supportedRootDeviceTypesHasBeenSet; }

    /**
     * <p>The supported root device types.</p>
     */
    inline void SetSupportedRootDeviceTypes(const Aws::Vector<RootDeviceType>& value) { m_supportedRootDeviceTypesHasBeenSet = true; m_supportedRootDeviceTypes = value; }

    /**
     * <p>The supported root device types.</p>
     */
    inline void SetSupportedRootDeviceTypes(Aws::Vector<RootDeviceType>&& value) { m_supportedRootDeviceTypesHasBeenSet = true; m_supportedRootDeviceTypes = std::move(value); }

    /**
     * <p>The supported root device types.</p>
     */
    inline InstanceTypeInfo& WithSupportedRootDeviceTypes(const Aws::Vector<RootDeviceType>& value) { SetSupportedRootDeviceTypes(value); return *this;}

    /**
     * <p>The supported root device types.</p>
     */
    inline InstanceTypeInfo& WithSupportedRootDeviceTypes(Aws::Vector<RootDeviceType>&& value) { SetSupportedRootDeviceTypes(std::move(value)); return *this;}

    /**
     * <p>The supported root device types.</p>
     */
    inline InstanceTypeInfo& AddSupportedRootDeviceTypes(const RootDeviceType& value) { m_supportedRootDeviceTypesHasBeenSet = true; m_supportedRootDeviceTypes.push_back(value); return *this; }

    /**
     * <p>The supported root device types.</p>
     */
    inline InstanceTypeInfo& AddSupportedRootDeviceTypes(RootDeviceType&& value) { m_supportedRootDeviceTypesHasBeenSet = true; m_supportedRootDeviceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The supported virtualization types.</p>
     */
    inline const Aws::Vector<VirtualizationType>& GetSupportedVirtualizationTypes() const{ return m_supportedVirtualizationTypes; }

    /**
     * <p>The supported virtualization types.</p>
     */
    inline bool SupportedVirtualizationTypesHasBeenSet() const { return m_supportedVirtualizationTypesHasBeenSet; }

    /**
     * <p>The supported virtualization types.</p>
     */
    inline void SetSupportedVirtualizationTypes(const Aws::Vector<VirtualizationType>& value) { m_supportedVirtualizationTypesHasBeenSet = true; m_supportedVirtualizationTypes = value; }

    /**
     * <p>The supported virtualization types.</p>
     */
    inline void SetSupportedVirtualizationTypes(Aws::Vector<VirtualizationType>&& value) { m_supportedVirtualizationTypesHasBeenSet = true; m_supportedVirtualizationTypes = std::move(value); }

    /**
     * <p>The supported virtualization types.</p>
     */
    inline InstanceTypeInfo& WithSupportedVirtualizationTypes(const Aws::Vector<VirtualizationType>& value) { SetSupportedVirtualizationTypes(value); return *this;}

    /**
     * <p>The supported virtualization types.</p>
     */
    inline InstanceTypeInfo& WithSupportedVirtualizationTypes(Aws::Vector<VirtualizationType>&& value) { SetSupportedVirtualizationTypes(std::move(value)); return *this;}

    /**
     * <p>The supported virtualization types.</p>
     */
    inline InstanceTypeInfo& AddSupportedVirtualizationTypes(const VirtualizationType& value) { m_supportedVirtualizationTypesHasBeenSet = true; m_supportedVirtualizationTypes.push_back(value); return *this; }

    /**
     * <p>The supported virtualization types.</p>
     */
    inline InstanceTypeInfo& AddSupportedVirtualizationTypes(VirtualizationType&& value) { m_supportedVirtualizationTypesHasBeenSet = true; m_supportedVirtualizationTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether the instance is a bare metal instance type.</p>
     */
    inline bool GetBareMetal() const{ return m_bareMetal; }

    /**
     * <p>Indicates whether the instance is a bare metal instance type.</p>
     */
    inline bool BareMetalHasBeenSet() const { return m_bareMetalHasBeenSet; }

    /**
     * <p>Indicates whether the instance is a bare metal instance type.</p>
     */
    inline void SetBareMetal(bool value) { m_bareMetalHasBeenSet = true; m_bareMetal = value; }

    /**
     * <p>Indicates whether the instance is a bare metal instance type.</p>
     */
    inline InstanceTypeInfo& WithBareMetal(bool value) { SetBareMetal(value); return *this;}


    /**
     * <p>The hypervisor for the instance type.</p>
     */
    inline const InstanceTypeHypervisor& GetHypervisor() const{ return m_hypervisor; }

    /**
     * <p>The hypervisor for the instance type.</p>
     */
    inline bool HypervisorHasBeenSet() const { return m_hypervisorHasBeenSet; }

    /**
     * <p>The hypervisor for the instance type.</p>
     */
    inline void SetHypervisor(const InstanceTypeHypervisor& value) { m_hypervisorHasBeenSet = true; m_hypervisor = value; }

    /**
     * <p>The hypervisor for the instance type.</p>
     */
    inline void SetHypervisor(InstanceTypeHypervisor&& value) { m_hypervisorHasBeenSet = true; m_hypervisor = std::move(value); }

    /**
     * <p>The hypervisor for the instance type.</p>
     */
    inline InstanceTypeInfo& WithHypervisor(const InstanceTypeHypervisor& value) { SetHypervisor(value); return *this;}

    /**
     * <p>The hypervisor for the instance type.</p>
     */
    inline InstanceTypeInfo& WithHypervisor(InstanceTypeHypervisor&& value) { SetHypervisor(std::move(value)); return *this;}


    /**
     * <p>Describes the processor.</p>
     */
    inline const ProcessorInfo& GetProcessorInfo() const{ return m_processorInfo; }

    /**
     * <p>Describes the processor.</p>
     */
    inline bool ProcessorInfoHasBeenSet() const { return m_processorInfoHasBeenSet; }

    /**
     * <p>Describes the processor.</p>
     */
    inline void SetProcessorInfo(const ProcessorInfo& value) { m_processorInfoHasBeenSet = true; m_processorInfo = value; }

    /**
     * <p>Describes the processor.</p>
     */
    inline void SetProcessorInfo(ProcessorInfo&& value) { m_processorInfoHasBeenSet = true; m_processorInfo = std::move(value); }

    /**
     * <p>Describes the processor.</p>
     */
    inline InstanceTypeInfo& WithProcessorInfo(const ProcessorInfo& value) { SetProcessorInfo(value); return *this;}

    /**
     * <p>Describes the processor.</p>
     */
    inline InstanceTypeInfo& WithProcessorInfo(ProcessorInfo&& value) { SetProcessorInfo(std::move(value)); return *this;}


    /**
     * <p>Describes the vCPU configurations for the instance type.</p>
     */
    inline const VCpuInfo& GetVCpuInfo() const{ return m_vCpuInfo; }

    /**
     * <p>Describes the vCPU configurations for the instance type.</p>
     */
    inline bool VCpuInfoHasBeenSet() const { return m_vCpuInfoHasBeenSet; }

    /**
     * <p>Describes the vCPU configurations for the instance type.</p>
     */
    inline void SetVCpuInfo(const VCpuInfo& value) { m_vCpuInfoHasBeenSet = true; m_vCpuInfo = value; }

    /**
     * <p>Describes the vCPU configurations for the instance type.</p>
     */
    inline void SetVCpuInfo(VCpuInfo&& value) { m_vCpuInfoHasBeenSet = true; m_vCpuInfo = std::move(value); }

    /**
     * <p>Describes the vCPU configurations for the instance type.</p>
     */
    inline InstanceTypeInfo& WithVCpuInfo(const VCpuInfo& value) { SetVCpuInfo(value); return *this;}

    /**
     * <p>Describes the vCPU configurations for the instance type.</p>
     */
    inline InstanceTypeInfo& WithVCpuInfo(VCpuInfo&& value) { SetVCpuInfo(std::move(value)); return *this;}


    /**
     * <p>Describes the memory for the instance type.</p>
     */
    inline const MemoryInfo& GetMemoryInfo() const{ return m_memoryInfo; }

    /**
     * <p>Describes the memory for the instance type.</p>
     */
    inline bool MemoryInfoHasBeenSet() const { return m_memoryInfoHasBeenSet; }

    /**
     * <p>Describes the memory for the instance type.</p>
     */
    inline void SetMemoryInfo(const MemoryInfo& value) { m_memoryInfoHasBeenSet = true; m_memoryInfo = value; }

    /**
     * <p>Describes the memory for the instance type.</p>
     */
    inline void SetMemoryInfo(MemoryInfo&& value) { m_memoryInfoHasBeenSet = true; m_memoryInfo = std::move(value); }

    /**
     * <p>Describes the memory for the instance type.</p>
     */
    inline InstanceTypeInfo& WithMemoryInfo(const MemoryInfo& value) { SetMemoryInfo(value); return *this;}

    /**
     * <p>Describes the memory for the instance type.</p>
     */
    inline InstanceTypeInfo& WithMemoryInfo(MemoryInfo&& value) { SetMemoryInfo(std::move(value)); return *this;}


    /**
     * <p>Indicates whether instance storage is supported.</p>
     */
    inline bool GetInstanceStorageSupported() const{ return m_instanceStorageSupported; }

    /**
     * <p>Indicates whether instance storage is supported.</p>
     */
    inline bool InstanceStorageSupportedHasBeenSet() const { return m_instanceStorageSupportedHasBeenSet; }

    /**
     * <p>Indicates whether instance storage is supported.</p>
     */
    inline void SetInstanceStorageSupported(bool value) { m_instanceStorageSupportedHasBeenSet = true; m_instanceStorageSupported = value; }

    /**
     * <p>Indicates whether instance storage is supported.</p>
     */
    inline InstanceTypeInfo& WithInstanceStorageSupported(bool value) { SetInstanceStorageSupported(value); return *this;}


    /**
     * <p>Describes the instance storage for the instance type.</p>
     */
    inline const InstanceStorageInfo& GetInstanceStorageInfo() const{ return m_instanceStorageInfo; }

    /**
     * <p>Describes the instance storage for the instance type.</p>
     */
    inline bool InstanceStorageInfoHasBeenSet() const { return m_instanceStorageInfoHasBeenSet; }

    /**
     * <p>Describes the instance storage for the instance type.</p>
     */
    inline void SetInstanceStorageInfo(const InstanceStorageInfo& value) { m_instanceStorageInfoHasBeenSet = true; m_instanceStorageInfo = value; }

    /**
     * <p>Describes the instance storage for the instance type.</p>
     */
    inline void SetInstanceStorageInfo(InstanceStorageInfo&& value) { m_instanceStorageInfoHasBeenSet = true; m_instanceStorageInfo = std::move(value); }

    /**
     * <p>Describes the instance storage for the instance type.</p>
     */
    inline InstanceTypeInfo& WithInstanceStorageInfo(const InstanceStorageInfo& value) { SetInstanceStorageInfo(value); return *this;}

    /**
     * <p>Describes the instance storage for the instance type.</p>
     */
    inline InstanceTypeInfo& WithInstanceStorageInfo(InstanceStorageInfo&& value) { SetInstanceStorageInfo(std::move(value)); return *this;}


    /**
     * <p>Describes the Amazon EBS settings for the instance type.</p>
     */
    inline const EbsInfo& GetEbsInfo() const{ return m_ebsInfo; }

    /**
     * <p>Describes the Amazon EBS settings for the instance type.</p>
     */
    inline bool EbsInfoHasBeenSet() const { return m_ebsInfoHasBeenSet; }

    /**
     * <p>Describes the Amazon EBS settings for the instance type.</p>
     */
    inline void SetEbsInfo(const EbsInfo& value) { m_ebsInfoHasBeenSet = true; m_ebsInfo = value; }

    /**
     * <p>Describes the Amazon EBS settings for the instance type.</p>
     */
    inline void SetEbsInfo(EbsInfo&& value) { m_ebsInfoHasBeenSet = true; m_ebsInfo = std::move(value); }

    /**
     * <p>Describes the Amazon EBS settings for the instance type.</p>
     */
    inline InstanceTypeInfo& WithEbsInfo(const EbsInfo& value) { SetEbsInfo(value); return *this;}

    /**
     * <p>Describes the Amazon EBS settings for the instance type.</p>
     */
    inline InstanceTypeInfo& WithEbsInfo(EbsInfo&& value) { SetEbsInfo(std::move(value)); return *this;}


    /**
     * <p>Describes the network settings for the instance type.</p>
     */
    inline const NetworkInfo& GetNetworkInfo() const{ return m_networkInfo; }

    /**
     * <p>Describes the network settings for the instance type.</p>
     */
    inline bool NetworkInfoHasBeenSet() const { return m_networkInfoHasBeenSet; }

    /**
     * <p>Describes the network settings for the instance type.</p>
     */
    inline void SetNetworkInfo(const NetworkInfo& value) { m_networkInfoHasBeenSet = true; m_networkInfo = value; }

    /**
     * <p>Describes the network settings for the instance type.</p>
     */
    inline void SetNetworkInfo(NetworkInfo&& value) { m_networkInfoHasBeenSet = true; m_networkInfo = std::move(value); }

    /**
     * <p>Describes the network settings for the instance type.</p>
     */
    inline InstanceTypeInfo& WithNetworkInfo(const NetworkInfo& value) { SetNetworkInfo(value); return *this;}

    /**
     * <p>Describes the network settings for the instance type.</p>
     */
    inline InstanceTypeInfo& WithNetworkInfo(NetworkInfo&& value) { SetNetworkInfo(std::move(value)); return *this;}


    /**
     * <p>Describes the GPU accelerator settings for the instance type.</p>
     */
    inline const GpuInfo& GetGpuInfo() const{ return m_gpuInfo; }

    /**
     * <p>Describes the GPU accelerator settings for the instance type.</p>
     */
    inline bool GpuInfoHasBeenSet() const { return m_gpuInfoHasBeenSet; }

    /**
     * <p>Describes the GPU accelerator settings for the instance type.</p>
     */
    inline void SetGpuInfo(const GpuInfo& value) { m_gpuInfoHasBeenSet = true; m_gpuInfo = value; }

    /**
     * <p>Describes the GPU accelerator settings for the instance type.</p>
     */
    inline void SetGpuInfo(GpuInfo&& value) { m_gpuInfoHasBeenSet = true; m_gpuInfo = std::move(value); }

    /**
     * <p>Describes the GPU accelerator settings for the instance type.</p>
     */
    inline InstanceTypeInfo& WithGpuInfo(const GpuInfo& value) { SetGpuInfo(value); return *this;}

    /**
     * <p>Describes the GPU accelerator settings for the instance type.</p>
     */
    inline InstanceTypeInfo& WithGpuInfo(GpuInfo&& value) { SetGpuInfo(std::move(value)); return *this;}


    /**
     * <p>Describes the FPGA accelerator settings for the instance type.</p>
     */
    inline const FpgaInfo& GetFpgaInfo() const{ return m_fpgaInfo; }

    /**
     * <p>Describes the FPGA accelerator settings for the instance type.</p>
     */
    inline bool FpgaInfoHasBeenSet() const { return m_fpgaInfoHasBeenSet; }

    /**
     * <p>Describes the FPGA accelerator settings for the instance type.</p>
     */
    inline void SetFpgaInfo(const FpgaInfo& value) { m_fpgaInfoHasBeenSet = true; m_fpgaInfo = value; }

    /**
     * <p>Describes the FPGA accelerator settings for the instance type.</p>
     */
    inline void SetFpgaInfo(FpgaInfo&& value) { m_fpgaInfoHasBeenSet = true; m_fpgaInfo = std::move(value); }

    /**
     * <p>Describes the FPGA accelerator settings for the instance type.</p>
     */
    inline InstanceTypeInfo& WithFpgaInfo(const FpgaInfo& value) { SetFpgaInfo(value); return *this;}

    /**
     * <p>Describes the FPGA accelerator settings for the instance type.</p>
     */
    inline InstanceTypeInfo& WithFpgaInfo(FpgaInfo&& value) { SetFpgaInfo(std::move(value)); return *this;}


    /**
     * <p>Describes the placement group settings for the instance type.</p>
     */
    inline const PlacementGroupInfo& GetPlacementGroupInfo() const{ return m_placementGroupInfo; }

    /**
     * <p>Describes the placement group settings for the instance type.</p>
     */
    inline bool PlacementGroupInfoHasBeenSet() const { return m_placementGroupInfoHasBeenSet; }

    /**
     * <p>Describes the placement group settings for the instance type.</p>
     */
    inline void SetPlacementGroupInfo(const PlacementGroupInfo& value) { m_placementGroupInfoHasBeenSet = true; m_placementGroupInfo = value; }

    /**
     * <p>Describes the placement group settings for the instance type.</p>
     */
    inline void SetPlacementGroupInfo(PlacementGroupInfo&& value) { m_placementGroupInfoHasBeenSet = true; m_placementGroupInfo = std::move(value); }

    /**
     * <p>Describes the placement group settings for the instance type.</p>
     */
    inline InstanceTypeInfo& WithPlacementGroupInfo(const PlacementGroupInfo& value) { SetPlacementGroupInfo(value); return *this;}

    /**
     * <p>Describes the placement group settings for the instance type.</p>
     */
    inline InstanceTypeInfo& WithPlacementGroupInfo(PlacementGroupInfo&& value) { SetPlacementGroupInfo(std::move(value)); return *this;}


    /**
     * <p>Describes the Inference accelerator settings for the instance type.</p>
     */
    inline const InferenceAcceleratorInfo& GetInferenceAcceleratorInfo() const{ return m_inferenceAcceleratorInfo; }

    /**
     * <p>Describes the Inference accelerator settings for the instance type.</p>
     */
    inline bool InferenceAcceleratorInfoHasBeenSet() const { return m_inferenceAcceleratorInfoHasBeenSet; }

    /**
     * <p>Describes the Inference accelerator settings for the instance type.</p>
     */
    inline void SetInferenceAcceleratorInfo(const InferenceAcceleratorInfo& value) { m_inferenceAcceleratorInfoHasBeenSet = true; m_inferenceAcceleratorInfo = value; }

    /**
     * <p>Describes the Inference accelerator settings for the instance type.</p>
     */
    inline void SetInferenceAcceleratorInfo(InferenceAcceleratorInfo&& value) { m_inferenceAcceleratorInfoHasBeenSet = true; m_inferenceAcceleratorInfo = std::move(value); }

    /**
     * <p>Describes the Inference accelerator settings for the instance type.</p>
     */
    inline InstanceTypeInfo& WithInferenceAcceleratorInfo(const InferenceAcceleratorInfo& value) { SetInferenceAcceleratorInfo(value); return *this;}

    /**
     * <p>Describes the Inference accelerator settings for the instance type.</p>
     */
    inline InstanceTypeInfo& WithInferenceAcceleratorInfo(InferenceAcceleratorInfo&& value) { SetInferenceAcceleratorInfo(std::move(value)); return *this;}


    /**
     * <p>Indicates whether On-Demand hibernation is supported.</p>
     */
    inline bool GetHibernationSupported() const{ return m_hibernationSupported; }

    /**
     * <p>Indicates whether On-Demand hibernation is supported.</p>
     */
    inline bool HibernationSupportedHasBeenSet() const { return m_hibernationSupportedHasBeenSet; }

    /**
     * <p>Indicates whether On-Demand hibernation is supported.</p>
     */
    inline void SetHibernationSupported(bool value) { m_hibernationSupportedHasBeenSet = true; m_hibernationSupported = value; }

    /**
     * <p>Indicates whether On-Demand hibernation is supported.</p>
     */
    inline InstanceTypeInfo& WithHibernationSupported(bool value) { SetHibernationSupported(value); return *this;}


    /**
     * <p>Indicates whether the instance type is a burstable performance instance
     * type.</p>
     */
    inline bool GetBurstablePerformanceSupported() const{ return m_burstablePerformanceSupported; }

    /**
     * <p>Indicates whether the instance type is a burstable performance instance
     * type.</p>
     */
    inline bool BurstablePerformanceSupportedHasBeenSet() const { return m_burstablePerformanceSupportedHasBeenSet; }

    /**
     * <p>Indicates whether the instance type is a burstable performance instance
     * type.</p>
     */
    inline void SetBurstablePerformanceSupported(bool value) { m_burstablePerformanceSupportedHasBeenSet = true; m_burstablePerformanceSupported = value; }

    /**
     * <p>Indicates whether the instance type is a burstable performance instance
     * type.</p>
     */
    inline InstanceTypeInfo& WithBurstablePerformanceSupported(bool value) { SetBurstablePerformanceSupported(value); return *this;}


    /**
     * <p>Indicates whether Dedicated Hosts are supported on the instance type.</p>
     */
    inline bool GetDedicatedHostsSupported() const{ return m_dedicatedHostsSupported; }

    /**
     * <p>Indicates whether Dedicated Hosts are supported on the instance type.</p>
     */
    inline bool DedicatedHostsSupportedHasBeenSet() const { return m_dedicatedHostsSupportedHasBeenSet; }

    /**
     * <p>Indicates whether Dedicated Hosts are supported on the instance type.</p>
     */
    inline void SetDedicatedHostsSupported(bool value) { m_dedicatedHostsSupportedHasBeenSet = true; m_dedicatedHostsSupported = value; }

    /**
     * <p>Indicates whether Dedicated Hosts are supported on the instance type.</p>
     */
    inline InstanceTypeInfo& WithDedicatedHostsSupported(bool value) { SetDedicatedHostsSupported(value); return *this;}


    /**
     * <p>Indicates whether auto recovery is supported.</p>
     */
    inline bool GetAutoRecoverySupported() const{ return m_autoRecoverySupported; }

    /**
     * <p>Indicates whether auto recovery is supported.</p>
     */
    inline bool AutoRecoverySupportedHasBeenSet() const { return m_autoRecoverySupportedHasBeenSet; }

    /**
     * <p>Indicates whether auto recovery is supported.</p>
     */
    inline void SetAutoRecoverySupported(bool value) { m_autoRecoverySupportedHasBeenSet = true; m_autoRecoverySupported = value; }

    /**
     * <p>Indicates whether auto recovery is supported.</p>
     */
    inline InstanceTypeInfo& WithAutoRecoverySupported(bool value) { SetAutoRecoverySupported(value); return *this;}


    /**
     * <p>The supported boot modes. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Boot
     * modes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const Aws::Vector<BootModeType>& GetSupportedBootModes() const{ return m_supportedBootModes; }

    /**
     * <p>The supported boot modes. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Boot
     * modes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline bool SupportedBootModesHasBeenSet() const { return m_supportedBootModesHasBeenSet; }

    /**
     * <p>The supported boot modes. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Boot
     * modes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetSupportedBootModes(const Aws::Vector<BootModeType>& value) { m_supportedBootModesHasBeenSet = true; m_supportedBootModes = value; }

    /**
     * <p>The supported boot modes. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Boot
     * modes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetSupportedBootModes(Aws::Vector<BootModeType>&& value) { m_supportedBootModesHasBeenSet = true; m_supportedBootModes = std::move(value); }

    /**
     * <p>The supported boot modes. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Boot
     * modes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline InstanceTypeInfo& WithSupportedBootModes(const Aws::Vector<BootModeType>& value) { SetSupportedBootModes(value); return *this;}

    /**
     * <p>The supported boot modes. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Boot
     * modes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline InstanceTypeInfo& WithSupportedBootModes(Aws::Vector<BootModeType>&& value) { SetSupportedBootModes(std::move(value)); return *this;}

    /**
     * <p>The supported boot modes. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Boot
     * modes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline InstanceTypeInfo& AddSupportedBootModes(const BootModeType& value) { m_supportedBootModesHasBeenSet = true; m_supportedBootModes.push_back(value); return *this; }

    /**
     * <p>The supported boot modes. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Boot
     * modes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline InstanceTypeInfo& AddSupportedBootModes(BootModeType&& value) { m_supportedBootModesHasBeenSet = true; m_supportedBootModes.push_back(std::move(value)); return *this; }

  private:

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    bool m_currentGeneration;
    bool m_currentGenerationHasBeenSet = false;

    bool m_freeTierEligible;
    bool m_freeTierEligibleHasBeenSet = false;

    Aws::Vector<UsageClassType> m_supportedUsageClasses;
    bool m_supportedUsageClassesHasBeenSet = false;

    Aws::Vector<RootDeviceType> m_supportedRootDeviceTypes;
    bool m_supportedRootDeviceTypesHasBeenSet = false;

    Aws::Vector<VirtualizationType> m_supportedVirtualizationTypes;
    bool m_supportedVirtualizationTypesHasBeenSet = false;

    bool m_bareMetal;
    bool m_bareMetalHasBeenSet = false;

    InstanceTypeHypervisor m_hypervisor;
    bool m_hypervisorHasBeenSet = false;

    ProcessorInfo m_processorInfo;
    bool m_processorInfoHasBeenSet = false;

    VCpuInfo m_vCpuInfo;
    bool m_vCpuInfoHasBeenSet = false;

    MemoryInfo m_memoryInfo;
    bool m_memoryInfoHasBeenSet = false;

    bool m_instanceStorageSupported;
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

    bool m_hibernationSupported;
    bool m_hibernationSupportedHasBeenSet = false;

    bool m_burstablePerformanceSupported;
    bool m_burstablePerformanceSupportedHasBeenSet = false;

    bool m_dedicatedHostsSupported;
    bool m_dedicatedHostsSupportedHasBeenSet = false;

    bool m_autoRecoverySupported;
    bool m_autoRecoverySupportedHasBeenSet = false;

    Aws::Vector<BootModeType> m_supportedBootModes;
    bool m_supportedBootModesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
