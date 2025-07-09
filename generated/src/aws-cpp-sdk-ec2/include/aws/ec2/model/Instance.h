/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/ArchitectureValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/HypervisorType.h>
#include <aws/ec2/model/IamInstanceProfile.h>
#include <aws/ec2/model/InstanceLifecycleType.h>
#include <aws/ec2/model/DeviceType.h>
#include <aws/ec2/model/StateReason.h>
#include <aws/ec2/model/VirtualizationType.h>
#include <aws/ec2/model/CpuOptions.h>
#include <aws/ec2/model/CapacityReservationSpecificationResponse.h>
#include <aws/ec2/model/HibernationOptions.h>
#include <aws/ec2/model/InstanceMetadataOptionsResponse.h>
#include <aws/ec2/model/EnclaveOptions.h>
#include <aws/ec2/model/BootModeValues.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/PrivateDnsNameOptionsResponse.h>
#include <aws/ec2/model/InstanceMaintenanceOptions.h>
#include <aws/ec2/model/InstanceBootModeValues.h>
#include <aws/ec2/model/InstanceNetworkPerformanceOptions.h>
#include <aws/ec2/model/OperatorResponse.h>
#include <aws/ec2/model/InstanceState.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/ec2/model/Placement.h>
#include <aws/ec2/model/PlatformValues.h>
#include <aws/ec2/model/Monitoring.h>
#include <aws/ec2/model/InstanceBlockDeviceMapping.h>
#include <aws/ec2/model/ElasticGpuAssociation.h>
#include <aws/ec2/model/ElasticInferenceAcceleratorAssociation.h>
#include <aws/ec2/model/InstanceNetworkInterface.h>
#include <aws/ec2/model/GroupIdentifier.h>
#include <aws/ec2/model/Tag.h>
#include <aws/ec2/model/LicenseConfiguration.h>
#include <aws/ec2/model/ProductCode.h>
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
   * <p>Describes an instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Instance">AWS API
   * Reference</a></p>
   */
  class Instance
  {
  public:
    AWS_EC2_API Instance() = default;
    AWS_EC2_API Instance(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Instance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The architecture of the image.</p>
     */
    inline ArchitectureValues GetArchitecture() const { return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(ArchitectureValues value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline Instance& WithArchitecture(ArchitectureValues value) { SetArchitecture(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any block device mapping entries for the instance.</p>
     */
    inline const Aws::Vector<InstanceBlockDeviceMapping>& GetBlockDeviceMappings() const { return m_blockDeviceMappings; }
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }
    template<typename BlockDeviceMappingsT = Aws::Vector<InstanceBlockDeviceMapping>>
    void SetBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::forward<BlockDeviceMappingsT>(value); }
    template<typename BlockDeviceMappingsT = Aws::Vector<InstanceBlockDeviceMapping>>
    Instance& WithBlockDeviceMappings(BlockDeviceMappingsT&& value) { SetBlockDeviceMappings(std::forward<BlockDeviceMappingsT>(value)); return *this;}
    template<typename BlockDeviceMappingsT = InstanceBlockDeviceMapping>
    Instance& AddBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.emplace_back(std::forward<BlockDeviceMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The idempotency token you provided when you launched the instance, if
     * applicable.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    Instance& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance is optimized for Amazon EBS I/O. This
     * optimization provides dedicated throughput to Amazon EBS and an optimized
     * configuration stack to provide optimal I/O performance. This optimization isn't
     * available with all instance types. Additional usage charges apply when using an
     * EBS Optimized instance.</p>
     */
    inline bool GetEbsOptimized() const { return m_ebsOptimized; }
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }
    inline Instance& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether enhanced networking with ENA is enabled.</p>
     */
    inline bool GetEnaSupport() const { return m_enaSupport; }
    inline bool EnaSupportHasBeenSet() const { return m_enaSupportHasBeenSet; }
    inline void SetEnaSupport(bool value) { m_enaSupportHasBeenSet = true; m_enaSupport = value; }
    inline Instance& WithEnaSupport(bool value) { SetEnaSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hypervisor type of the instance. The value <code>xen</code> is used for
     * both Xen and Nitro hypervisors.</p>
     */
    inline HypervisorType GetHypervisor() const { return m_hypervisor; }
    inline bool HypervisorHasBeenSet() const { return m_hypervisorHasBeenSet; }
    inline void SetHypervisor(HypervisorType value) { m_hypervisorHasBeenSet = true; m_hypervisor = value; }
    inline Instance& WithHypervisor(HypervisorType value) { SetHypervisor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM instance profile associated with the instance, if applicable.</p>
     */
    inline const IamInstanceProfile& GetIamInstanceProfile() const { return m_iamInstanceProfile; }
    inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }
    template<typename IamInstanceProfileT = IamInstanceProfile>
    void SetIamInstanceProfile(IamInstanceProfileT&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::forward<IamInstanceProfileT>(value); }
    template<typename IamInstanceProfileT = IamInstanceProfile>
    Instance& WithIamInstanceProfile(IamInstanceProfileT&& value) { SetIamInstanceProfile(std::forward<IamInstanceProfileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this is a Spot Instance or a Scheduled Instance.</p>
     */
    inline InstanceLifecycleType GetInstanceLifecycle() const { return m_instanceLifecycle; }
    inline bool InstanceLifecycleHasBeenSet() const { return m_instanceLifecycleHasBeenSet; }
    inline void SetInstanceLifecycle(InstanceLifecycleType value) { m_instanceLifecycleHasBeenSet = true; m_instanceLifecycle = value; }
    inline Instance& WithInstanceLifecycle(InstanceLifecycleType value) { SetInstanceLifecycle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deprecated.</p>  <p>Amazon Elastic Graphics reached end of life on
     * January 8, 2024.</p> 
     */
    inline const Aws::Vector<ElasticGpuAssociation>& GetElasticGpuAssociations() const { return m_elasticGpuAssociations; }
    inline bool ElasticGpuAssociationsHasBeenSet() const { return m_elasticGpuAssociationsHasBeenSet; }
    template<typename ElasticGpuAssociationsT = Aws::Vector<ElasticGpuAssociation>>
    void SetElasticGpuAssociations(ElasticGpuAssociationsT&& value) { m_elasticGpuAssociationsHasBeenSet = true; m_elasticGpuAssociations = std::forward<ElasticGpuAssociationsT>(value); }
    template<typename ElasticGpuAssociationsT = Aws::Vector<ElasticGpuAssociation>>
    Instance& WithElasticGpuAssociations(ElasticGpuAssociationsT&& value) { SetElasticGpuAssociations(std::forward<ElasticGpuAssociationsT>(value)); return *this;}
    template<typename ElasticGpuAssociationsT = ElasticGpuAssociation>
    Instance& AddElasticGpuAssociations(ElasticGpuAssociationsT&& value) { m_elasticGpuAssociationsHasBeenSet = true; m_elasticGpuAssociations.emplace_back(std::forward<ElasticGpuAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Deprecated</p>  <p>Amazon Elastic Inference is no longer available.</p>
     * 
     */
    inline const Aws::Vector<ElasticInferenceAcceleratorAssociation>& GetElasticInferenceAcceleratorAssociations() const { return m_elasticInferenceAcceleratorAssociations; }
    inline bool ElasticInferenceAcceleratorAssociationsHasBeenSet() const { return m_elasticInferenceAcceleratorAssociationsHasBeenSet; }
    template<typename ElasticInferenceAcceleratorAssociationsT = Aws::Vector<ElasticInferenceAcceleratorAssociation>>
    void SetElasticInferenceAcceleratorAssociations(ElasticInferenceAcceleratorAssociationsT&& value) { m_elasticInferenceAcceleratorAssociationsHasBeenSet = true; m_elasticInferenceAcceleratorAssociations = std::forward<ElasticInferenceAcceleratorAssociationsT>(value); }
    template<typename ElasticInferenceAcceleratorAssociationsT = Aws::Vector<ElasticInferenceAcceleratorAssociation>>
    Instance& WithElasticInferenceAcceleratorAssociations(ElasticInferenceAcceleratorAssociationsT&& value) { SetElasticInferenceAcceleratorAssociations(std::forward<ElasticInferenceAcceleratorAssociationsT>(value)); return *this;}
    template<typename ElasticInferenceAcceleratorAssociationsT = ElasticInferenceAcceleratorAssociation>
    Instance& AddElasticInferenceAcceleratorAssociations(ElasticInferenceAcceleratorAssociationsT&& value) { m_elasticInferenceAcceleratorAssociationsHasBeenSet = true; m_elasticInferenceAcceleratorAssociations.emplace_back(std::forward<ElasticInferenceAcceleratorAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The network interfaces for the instance.</p>
     */
    inline const Aws::Vector<InstanceNetworkInterface>& GetNetworkInterfaces() const { return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    template<typename NetworkInterfacesT = Aws::Vector<InstanceNetworkInterface>>
    void SetNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::forward<NetworkInterfacesT>(value); }
    template<typename NetworkInterfacesT = Aws::Vector<InstanceNetworkInterface>>
    Instance& WithNetworkInterfaces(NetworkInterfacesT&& value) { SetNetworkInterfaces(std::forward<NetworkInterfacesT>(value)); return *this;}
    template<typename NetworkInterfacesT = InstanceNetworkInterface>
    Instance& AddNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.emplace_back(std::forward<NetworkInterfacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline const Aws::String& GetOutpostArn() const { return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    template<typename OutpostArnT = Aws::String>
    void SetOutpostArn(OutpostArnT&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::forward<OutpostArnT>(value); }
    template<typename OutpostArnT = Aws::String>
    Instance& WithOutpostArn(OutpostArnT&& value) { SetOutpostArn(std::forward<OutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline const Aws::String& GetRootDeviceName() const { return m_rootDeviceName; }
    inline bool RootDeviceNameHasBeenSet() const { return m_rootDeviceNameHasBeenSet; }
    template<typename RootDeviceNameT = Aws::String>
    void SetRootDeviceName(RootDeviceNameT&& value) { m_rootDeviceNameHasBeenSet = true; m_rootDeviceName = std::forward<RootDeviceNameT>(value); }
    template<typename RootDeviceNameT = Aws::String>
    Instance& WithRootDeviceName(RootDeviceNameT&& value) { SetRootDeviceName(std::forward<RootDeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The root device type used by the AMI. The AMI can use an EBS volume or an
     * instance store volume.</p>
     */
    inline DeviceType GetRootDeviceType() const { return m_rootDeviceType; }
    inline bool RootDeviceTypeHasBeenSet() const { return m_rootDeviceTypeHasBeenSet; }
    inline void SetRootDeviceType(DeviceType value) { m_rootDeviceTypeHasBeenSet = true; m_rootDeviceType = value; }
    inline Instance& WithRootDeviceType(DeviceType value) { SetRootDeviceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups for the instance.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<GroupIdentifier>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<GroupIdentifier>>
    Instance& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = GroupIdentifier>
    Instance& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether source/destination checking is enabled.</p>
     */
    inline bool GetSourceDestCheck() const { return m_sourceDestCheck; }
    inline bool SourceDestCheckHasBeenSet() const { return m_sourceDestCheckHasBeenSet; }
    inline void SetSourceDestCheck(bool value) { m_sourceDestCheckHasBeenSet = true; m_sourceDestCheck = value; }
    inline Instance& WithSourceDestCheck(bool value) { SetSourceDestCheck(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the request is a Spot Instance request, the ID of the request.</p>
     */
    inline const Aws::String& GetSpotInstanceRequestId() const { return m_spotInstanceRequestId; }
    inline bool SpotInstanceRequestIdHasBeenSet() const { return m_spotInstanceRequestIdHasBeenSet; }
    template<typename SpotInstanceRequestIdT = Aws::String>
    void SetSpotInstanceRequestId(SpotInstanceRequestIdT&& value) { m_spotInstanceRequestIdHasBeenSet = true; m_spotInstanceRequestId = std::forward<SpotInstanceRequestIdT>(value); }
    template<typename SpotInstanceRequestIdT = Aws::String>
    Instance& WithSpotInstanceRequestId(SpotInstanceRequestIdT&& value) { SetSpotInstanceRequestId(std::forward<SpotInstanceRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline const Aws::String& GetSriovNetSupport() const { return m_sriovNetSupport; }
    inline bool SriovNetSupportHasBeenSet() const { return m_sriovNetSupportHasBeenSet; }
    template<typename SriovNetSupportT = Aws::String>
    void SetSriovNetSupport(SriovNetSupportT&& value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport = std::forward<SriovNetSupportT>(value); }
    template<typename SriovNetSupportT = Aws::String>
    Instance& WithSriovNetSupport(SriovNetSupportT&& value) { SetSriovNetSupport(std::forward<SriovNetSupportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the most recent state transition.</p>
     */
    inline const StateReason& GetStateReason() const { return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    template<typename StateReasonT = StateReason>
    void SetStateReason(StateReasonT&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::forward<StateReasonT>(value); }
    template<typename StateReasonT = StateReason>
    Instance& WithStateReason(StateReasonT&& value) { SetStateReason(std::forward<StateReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the instance.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Instance& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Instance& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The virtualization type of the instance.</p>
     */
    inline VirtualizationType GetVirtualizationType() const { return m_virtualizationType; }
    inline bool VirtualizationTypeHasBeenSet() const { return m_virtualizationTypeHasBeenSet; }
    inline void SetVirtualizationType(VirtualizationType value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = value; }
    inline Instance& WithVirtualizationType(VirtualizationType value) { SetVirtualizationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CPU options for the instance.</p>
     */
    inline const CpuOptions& GetCpuOptions() const { return m_cpuOptions; }
    inline bool CpuOptionsHasBeenSet() const { return m_cpuOptionsHasBeenSet; }
    template<typename CpuOptionsT = CpuOptions>
    void SetCpuOptions(CpuOptionsT&& value) { m_cpuOptionsHasBeenSet = true; m_cpuOptions = std::forward<CpuOptionsT>(value); }
    template<typename CpuOptionsT = CpuOptions>
    Instance& WithCpuOptions(CpuOptionsT&& value) { SetCpuOptions(std::forward<CpuOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Capacity Block.</p>  <p>For P5 instances, a Capacity
     * Block ID refers to a group of instances. For Trn2u instances, a capacity block
     * ID refers to an EC2 UltraServer.</p> 
     */
    inline const Aws::String& GetCapacityBlockId() const { return m_capacityBlockId; }
    inline bool CapacityBlockIdHasBeenSet() const { return m_capacityBlockIdHasBeenSet; }
    template<typename CapacityBlockIdT = Aws::String>
    void SetCapacityBlockId(CapacityBlockIdT&& value) { m_capacityBlockIdHasBeenSet = true; m_capacityBlockId = std::forward<CapacityBlockIdT>(value); }
    template<typename CapacityBlockIdT = Aws::String>
    Instance& WithCapacityBlockId(CapacityBlockIdT&& value) { SetCapacityBlockId(std::forward<CapacityBlockIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline const Aws::String& GetCapacityReservationId() const { return m_capacityReservationId; }
    inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }
    template<typename CapacityReservationIdT = Aws::String>
    void SetCapacityReservationId(CapacityReservationIdT&& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = std::forward<CapacityReservationIdT>(value); }
    template<typename CapacityReservationIdT = Aws::String>
    Instance& WithCapacityReservationId(CapacityReservationIdT&& value) { SetCapacityReservationId(std::forward<CapacityReservationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Capacity Reservation targeting option.</p>
     */
    inline const CapacityReservationSpecificationResponse& GetCapacityReservationSpecification() const { return m_capacityReservationSpecification; }
    inline bool CapacityReservationSpecificationHasBeenSet() const { return m_capacityReservationSpecificationHasBeenSet; }
    template<typename CapacityReservationSpecificationT = CapacityReservationSpecificationResponse>
    void SetCapacityReservationSpecification(CapacityReservationSpecificationT&& value) { m_capacityReservationSpecificationHasBeenSet = true; m_capacityReservationSpecification = std::forward<CapacityReservationSpecificationT>(value); }
    template<typename CapacityReservationSpecificationT = CapacityReservationSpecificationResponse>
    Instance& WithCapacityReservationSpecification(CapacityReservationSpecificationT&& value) { SetCapacityReservationSpecification(std::forward<CapacityReservationSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance is enabled for hibernation.</p>
     */
    inline const HibernationOptions& GetHibernationOptions() const { return m_hibernationOptions; }
    inline bool HibernationOptionsHasBeenSet() const { return m_hibernationOptionsHasBeenSet; }
    template<typename HibernationOptionsT = HibernationOptions>
    void SetHibernationOptions(HibernationOptionsT&& value) { m_hibernationOptionsHasBeenSet = true; m_hibernationOptions = std::forward<HibernationOptionsT>(value); }
    template<typename HibernationOptionsT = HibernationOptions>
    Instance& WithHibernationOptions(HibernationOptionsT&& value) { SetHibernationOptions(std::forward<HibernationOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license configurations for the instance.</p>
     */
    inline const Aws::Vector<LicenseConfiguration>& GetLicenses() const { return m_licenses; }
    inline bool LicensesHasBeenSet() const { return m_licensesHasBeenSet; }
    template<typename LicensesT = Aws::Vector<LicenseConfiguration>>
    void SetLicenses(LicensesT&& value) { m_licensesHasBeenSet = true; m_licenses = std::forward<LicensesT>(value); }
    template<typename LicensesT = Aws::Vector<LicenseConfiguration>>
    Instance& WithLicenses(LicensesT&& value) { SetLicenses(std::forward<LicensesT>(value)); return *this;}
    template<typename LicensesT = LicenseConfiguration>
    Instance& AddLicenses(LicensesT&& value) { m_licensesHasBeenSet = true; m_licenses.emplace_back(std::forward<LicensesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The metadata options for the instance.</p>
     */
    inline const InstanceMetadataOptionsResponse& GetMetadataOptions() const { return m_metadataOptions; }
    inline bool MetadataOptionsHasBeenSet() const { return m_metadataOptionsHasBeenSet; }
    template<typename MetadataOptionsT = InstanceMetadataOptionsResponse>
    void SetMetadataOptions(MetadataOptionsT&& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = std::forward<MetadataOptionsT>(value); }
    template<typename MetadataOptionsT = InstanceMetadataOptionsResponse>
    Instance& WithMetadataOptions(MetadataOptionsT&& value) { SetMetadataOptions(std::forward<MetadataOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance is enabled for Amazon Web Services Nitro
     * Enclaves.</p>
     */
    inline const EnclaveOptions& GetEnclaveOptions() const { return m_enclaveOptions; }
    inline bool EnclaveOptionsHasBeenSet() const { return m_enclaveOptionsHasBeenSet; }
    template<typename EnclaveOptionsT = EnclaveOptions>
    void SetEnclaveOptions(EnclaveOptionsT&& value) { m_enclaveOptionsHasBeenSet = true; m_enclaveOptions = std::forward<EnclaveOptionsT>(value); }
    template<typename EnclaveOptionsT = EnclaveOptions>
    Instance& WithEnclaveOptions(EnclaveOptionsT&& value) { SetEnclaveOptions(std::forward<EnclaveOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The boot mode that was specified by the AMI. If the value is
     * <code>uefi-preferred</code>, the AMI supports both UEFI and Legacy BIOS. The
     * <code>currentInstanceBootMode</code> parameter is the boot mode that is used to
     * boot the instance at launch or start.</p>  <p>The operating system
     * contained in the AMI must be configured to support the specified boot mode.</p>
     *  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Boot
     * modes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline BootModeValues GetBootMode() const { return m_bootMode; }
    inline bool BootModeHasBeenSet() const { return m_bootModeHasBeenSet; }
    inline void SetBootMode(BootModeValues value) { m_bootModeHasBeenSet = true; m_bootMode = value; }
    inline Instance& WithBootMode(BootModeValues value) { SetBootMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform details value for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html">AMI
     * billing information fields</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const Aws::String& GetPlatformDetails() const { return m_platformDetails; }
    inline bool PlatformDetailsHasBeenSet() const { return m_platformDetailsHasBeenSet; }
    template<typename PlatformDetailsT = Aws::String>
    void SetPlatformDetails(PlatformDetailsT&& value) { m_platformDetailsHasBeenSet = true; m_platformDetails = std::forward<PlatformDetailsT>(value); }
    template<typename PlatformDetailsT = Aws::String>
    Instance& WithPlatformDetails(PlatformDetailsT&& value) { SetPlatformDetails(std::forward<PlatformDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The usage operation value for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html">AMI
     * billing information fields</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const Aws::String& GetUsageOperation() const { return m_usageOperation; }
    inline bool UsageOperationHasBeenSet() const { return m_usageOperationHasBeenSet; }
    template<typename UsageOperationT = Aws::String>
    void SetUsageOperation(UsageOperationT&& value) { m_usageOperationHasBeenSet = true; m_usageOperation = std::forward<UsageOperationT>(value); }
    template<typename UsageOperationT = Aws::String>
    Instance& WithUsageOperation(UsageOperationT&& value) { SetUsageOperation(std::forward<UsageOperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the usage operation was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUsageOperationUpdateTime() const { return m_usageOperationUpdateTime; }
    inline bool UsageOperationUpdateTimeHasBeenSet() const { return m_usageOperationUpdateTimeHasBeenSet; }
    template<typename UsageOperationUpdateTimeT = Aws::Utils::DateTime>
    void SetUsageOperationUpdateTime(UsageOperationUpdateTimeT&& value) { m_usageOperationUpdateTimeHasBeenSet = true; m_usageOperationUpdateTime = std::forward<UsageOperationUpdateTimeT>(value); }
    template<typename UsageOperationUpdateTimeT = Aws::Utils::DateTime>
    Instance& WithUsageOperationUpdateTime(UsageOperationUpdateTimeT&& value) { SetUsageOperationUpdateTime(std::forward<UsageOperationUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for the instance hostname.</p>
     */
    inline const PrivateDnsNameOptionsResponse& GetPrivateDnsNameOptions() const { return m_privateDnsNameOptions; }
    inline bool PrivateDnsNameOptionsHasBeenSet() const { return m_privateDnsNameOptionsHasBeenSet; }
    template<typename PrivateDnsNameOptionsT = PrivateDnsNameOptionsResponse>
    void SetPrivateDnsNameOptions(PrivateDnsNameOptionsT&& value) { m_privateDnsNameOptionsHasBeenSet = true; m_privateDnsNameOptions = std::forward<PrivateDnsNameOptionsT>(value); }
    template<typename PrivateDnsNameOptionsT = PrivateDnsNameOptionsResponse>
    Instance& WithPrivateDnsNameOptions(PrivateDnsNameOptionsT&& value) { SetPrivateDnsNameOptions(std::forward<PrivateDnsNameOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 address assigned to the instance.</p>
     */
    inline const Aws::String& GetIpv6Address() const { return m_ipv6Address; }
    inline bool Ipv6AddressHasBeenSet() const { return m_ipv6AddressHasBeenSet; }
    template<typename Ipv6AddressT = Aws::String>
    void SetIpv6Address(Ipv6AddressT&& value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address = std::forward<Ipv6AddressT>(value); }
    template<typename Ipv6AddressT = Aws::String>
    Instance& WithIpv6Address(Ipv6AddressT&& value) { SetIpv6Address(std::forward<Ipv6AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the instance is configured for NitroTPM support, the value is
     * <code>v2.0</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitrotpm.html">NitroTPM</a>
     * in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const Aws::String& GetTpmSupport() const { return m_tpmSupport; }
    inline bool TpmSupportHasBeenSet() const { return m_tpmSupportHasBeenSet; }
    template<typename TpmSupportT = Aws::String>
    void SetTpmSupport(TpmSupportT&& value) { m_tpmSupportHasBeenSet = true; m_tpmSupport = std::forward<TpmSupportT>(value); }
    template<typename TpmSupportT = Aws::String>
    Instance& WithTpmSupport(TpmSupportT&& value) { SetTpmSupport(std::forward<TpmSupportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information on the recovery and maintenance options of your
     * instance.</p>
     */
    inline const InstanceMaintenanceOptions& GetMaintenanceOptions() const { return m_maintenanceOptions; }
    inline bool MaintenanceOptionsHasBeenSet() const { return m_maintenanceOptionsHasBeenSet; }
    template<typename MaintenanceOptionsT = InstanceMaintenanceOptions>
    void SetMaintenanceOptions(MaintenanceOptionsT&& value) { m_maintenanceOptionsHasBeenSet = true; m_maintenanceOptions = std::forward<MaintenanceOptionsT>(value); }
    template<typename MaintenanceOptionsT = InstanceMaintenanceOptions>
    Instance& WithMaintenanceOptions(MaintenanceOptionsT&& value) { SetMaintenanceOptions(std::forward<MaintenanceOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The boot mode that is used to boot the instance at launch or start. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Boot
     * modes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline InstanceBootModeValues GetCurrentInstanceBootMode() const { return m_currentInstanceBootMode; }
    inline bool CurrentInstanceBootModeHasBeenSet() const { return m_currentInstanceBootModeHasBeenSet; }
    inline void SetCurrentInstanceBootMode(InstanceBootModeValues value) { m_currentInstanceBootModeHasBeenSet = true; m_currentInstanceBootMode = value; }
    inline Instance& WithCurrentInstanceBootMode(InstanceBootModeValues value) { SetCurrentInstanceBootMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains settings for the network performance options for your instance.</p>
     */
    inline const InstanceNetworkPerformanceOptions& GetNetworkPerformanceOptions() const { return m_networkPerformanceOptions; }
    inline bool NetworkPerformanceOptionsHasBeenSet() const { return m_networkPerformanceOptionsHasBeenSet; }
    template<typename NetworkPerformanceOptionsT = InstanceNetworkPerformanceOptions>
    void SetNetworkPerformanceOptions(NetworkPerformanceOptionsT&& value) { m_networkPerformanceOptionsHasBeenSet = true; m_networkPerformanceOptions = std::forward<NetworkPerformanceOptionsT>(value); }
    template<typename NetworkPerformanceOptionsT = InstanceNetworkPerformanceOptions>
    Instance& WithNetworkPerformanceOptions(NetworkPerformanceOptionsT&& value) { SetNetworkPerformanceOptions(std::forward<NetworkPerformanceOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service provider that manages the instance.</p>
     */
    inline const OperatorResponse& GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    template<typename OperatorT = OperatorResponse>
    void SetOperator(OperatorT&& value) { m_operatorHasBeenSet = true; m_operator = std::forward<OperatorT>(value); }
    template<typename OperatorT = OperatorResponse>
    Instance& WithOperator(OperatorT&& value) { SetOperator(std::forward<OperatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    Instance& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the AMI used to launch the instance.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    Instance& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the instance.</p>
     */
    inline const InstanceState& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = InstanceState>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = InstanceState>
    Instance& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[IPv4 only] The private DNS hostname name assigned to the instance. This DNS
     * hostname can only be used inside the Amazon EC2 network. This name is not
     * available until the instance enters the <code>running</code> state. </p> <p>The
     * Amazon-provided DNS server resolves Amazon-provided private DNS hostnames if
     * you've enabled DNS resolution and DNS hostnames in your VPC. If you are not
     * using the Amazon-provided DNS server in your VPC, your custom domain name
     * servers must resolve the hostname as appropriate.</p>
     */
    inline const Aws::String& GetPrivateDnsName() const { return m_privateDnsName; }
    inline bool PrivateDnsNameHasBeenSet() const { return m_privateDnsNameHasBeenSet; }
    template<typename PrivateDnsNameT = Aws::String>
    void SetPrivateDnsName(PrivateDnsNameT&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = std::forward<PrivateDnsNameT>(value); }
    template<typename PrivateDnsNameT = Aws::String>
    Instance& WithPrivateDnsName(PrivateDnsNameT&& value) { SetPrivateDnsName(std::forward<PrivateDnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public DNS name assigned to the instance. This name is not available
     * until the instance enters the <code>running</code> state. This name is only
     * available if you've enabled DNS hostnames for your VPC. The format of this name
     * depends on the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/hostname-types.html#public-hostnames">public
     * hostname type</a>.</p>
     */
    inline const Aws::String& GetPublicDnsName() const { return m_publicDnsName; }
    inline bool PublicDnsNameHasBeenSet() const { return m_publicDnsNameHasBeenSet; }
    template<typename PublicDnsNameT = Aws::String>
    void SetPublicDnsName(PublicDnsNameT&& value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName = std::forward<PublicDnsNameT>(value); }
    template<typename PublicDnsNameT = Aws::String>
    Instance& WithPublicDnsName(PublicDnsNameT&& value) { SetPublicDnsName(std::forward<PublicDnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the most recent state transition. This might be an empty
     * string.</p>
     */
    inline const Aws::String& GetStateTransitionReason() const { return m_stateTransitionReason; }
    inline bool StateTransitionReasonHasBeenSet() const { return m_stateTransitionReasonHasBeenSet; }
    template<typename StateTransitionReasonT = Aws::String>
    void SetStateTransitionReason(StateTransitionReasonT&& value) { m_stateTransitionReasonHasBeenSet = true; m_stateTransitionReason = std::forward<StateTransitionReasonT>(value); }
    template<typename StateTransitionReasonT = Aws::String>
    Instance& WithStateTransitionReason(StateTransitionReasonT&& value) { SetStateTransitionReason(std::forward<StateTransitionReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the key pair, if this instance was launched with an associated
     * key pair.</p>
     */
    inline const Aws::String& GetKeyName() const { return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    template<typename KeyNameT = Aws::String>
    void SetKeyName(KeyNameT&& value) { m_keyNameHasBeenSet = true; m_keyName = std::forward<KeyNameT>(value); }
    template<typename KeyNameT = Aws::String>
    Instance& WithKeyName(KeyNameT&& value) { SetKeyName(std::forward<KeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AMI launch index, which can be used to find this instance in the launch
     * group.</p>
     */
    inline int GetAmiLaunchIndex() const { return m_amiLaunchIndex; }
    inline bool AmiLaunchIndexHasBeenSet() const { return m_amiLaunchIndexHasBeenSet; }
    inline void SetAmiLaunchIndex(int value) { m_amiLaunchIndexHasBeenSet = true; m_amiLaunchIndex = value; }
    inline Instance& WithAmiLaunchIndex(int value) { SetAmiLaunchIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product codes attached to this instance, if applicable.</p>
     */
    inline const Aws::Vector<ProductCode>& GetProductCodes() const { return m_productCodes; }
    inline bool ProductCodesHasBeenSet() const { return m_productCodesHasBeenSet; }
    template<typename ProductCodesT = Aws::Vector<ProductCode>>
    void SetProductCodes(ProductCodesT&& value) { m_productCodesHasBeenSet = true; m_productCodes = std::forward<ProductCodesT>(value); }
    template<typename ProductCodesT = Aws::Vector<ProductCode>>
    Instance& WithProductCodes(ProductCodesT&& value) { SetProductCodes(std::forward<ProductCodesT>(value)); return *this;}
    template<typename ProductCodesT = ProductCode>
    Instance& AddProductCodes(ProductCodesT&& value) { m_productCodesHasBeenSet = true; m_productCodes.emplace_back(std::forward<ProductCodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instance type.</p>
     */
    inline InstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(InstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline Instance& WithInstanceType(InstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the instance was last launched. To determine the time that
     * instance was first launched, see the attachment time for the primary network
     * interface.</p>
     */
    inline const Aws::Utils::DateTime& GetLaunchTime() const { return m_launchTime; }
    inline bool LaunchTimeHasBeenSet() const { return m_launchTimeHasBeenSet; }
    template<typename LaunchTimeT = Aws::Utils::DateTime>
    void SetLaunchTime(LaunchTimeT&& value) { m_launchTimeHasBeenSet = true; m_launchTime = std::forward<LaunchTimeT>(value); }
    template<typename LaunchTimeT = Aws::Utils::DateTime>
    Instance& WithLaunchTime(LaunchTimeT&& value) { SetLaunchTime(std::forward<LaunchTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location where the instance launched, if applicable.</p>
     */
    inline const Placement& GetPlacement() const { return m_placement; }
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }
    template<typename PlacementT = Placement>
    void SetPlacement(PlacementT&& value) { m_placementHasBeenSet = true; m_placement = std::forward<PlacementT>(value); }
    template<typename PlacementT = Placement>
    Instance& WithPlacement(PlacementT&& value) { SetPlacement(std::forward<PlacementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The kernel associated with this instance, if applicable.</p>
     */
    inline const Aws::String& GetKernelId() const { return m_kernelId; }
    inline bool KernelIdHasBeenSet() const { return m_kernelIdHasBeenSet; }
    template<typename KernelIdT = Aws::String>
    void SetKernelId(KernelIdT&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::forward<KernelIdT>(value); }
    template<typename KernelIdT = Aws::String>
    Instance& WithKernelId(KernelIdT&& value) { SetKernelId(std::forward<KernelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RAM disk associated with this instance, if applicable.</p>
     */
    inline const Aws::String& GetRamdiskId() const { return m_ramdiskId; }
    inline bool RamdiskIdHasBeenSet() const { return m_ramdiskIdHasBeenSet; }
    template<typename RamdiskIdT = Aws::String>
    void SetRamdiskId(RamdiskIdT&& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = std::forward<RamdiskIdT>(value); }
    template<typename RamdiskIdT = Aws::String>
    Instance& WithRamdiskId(RamdiskIdT&& value) { SetRamdiskId(std::forward<RamdiskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform. This value is <code>windows</code> for Windows instances;
     * otherwise, it is empty.</p>
     */
    inline PlatformValues GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(PlatformValues value) { m_platformHasBeenSet = true; m_platform = value; }
    inline Instance& WithPlatform(PlatformValues value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The monitoring for the instance.</p>
     */
    inline const Monitoring& GetMonitoring() const { return m_monitoring; }
    inline bool MonitoringHasBeenSet() const { return m_monitoringHasBeenSet; }
    template<typename MonitoringT = Monitoring>
    void SetMonitoring(MonitoringT&& value) { m_monitoringHasBeenSet = true; m_monitoring = std::forward<MonitoringT>(value); }
    template<typename MonitoringT = Monitoring>
    Instance& WithMonitoring(MonitoringT&& value) { SetMonitoring(std::forward<MonitoringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet in which the instance is running.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    Instance& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC in which the instance is running.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    Instance& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private IPv4 address assigned to the instance.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const { return m_privateIpAddress; }
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
    template<typename PrivateIpAddressT = Aws::String>
    void SetPrivateIpAddress(PrivateIpAddressT&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::forward<PrivateIpAddressT>(value); }
    template<typename PrivateIpAddressT = Aws::String>
    Instance& WithPrivateIpAddress(PrivateIpAddressT&& value) { SetPrivateIpAddress(std::forward<PrivateIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public IPv4 address, or the Carrier IP address assigned to the instance,
     * if applicable.</p> <p>A Carrier IP address only applies to an instance launched
     * in a subnet associated with a Wavelength Zone.</p>
     */
    inline const Aws::String& GetPublicIpAddress() const { return m_publicIpAddress; }
    inline bool PublicIpAddressHasBeenSet() const { return m_publicIpAddressHasBeenSet; }
    template<typename PublicIpAddressT = Aws::String>
    void SetPublicIpAddress(PublicIpAddressT&& value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress = std::forward<PublicIpAddressT>(value); }
    template<typename PublicIpAddressT = Aws::String>
    Instance& WithPublicIpAddress(PublicIpAddressT&& value) { SetPublicIpAddress(std::forward<PublicIpAddressT>(value)); return *this;}
    ///@}
  private:

    ArchitectureValues m_architecture{ArchitectureValues::NOT_SET};
    bool m_architectureHasBeenSet = false;

    Aws::Vector<InstanceBlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    bool m_ebsOptimized{false};
    bool m_ebsOptimizedHasBeenSet = false;

    bool m_enaSupport{false};
    bool m_enaSupportHasBeenSet = false;

    HypervisorType m_hypervisor{HypervisorType::NOT_SET};
    bool m_hypervisorHasBeenSet = false;

    IamInstanceProfile m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet = false;

    InstanceLifecycleType m_instanceLifecycle{InstanceLifecycleType::NOT_SET};
    bool m_instanceLifecycleHasBeenSet = false;

    Aws::Vector<ElasticGpuAssociation> m_elasticGpuAssociations;
    bool m_elasticGpuAssociationsHasBeenSet = false;

    Aws::Vector<ElasticInferenceAcceleratorAssociation> m_elasticInferenceAcceleratorAssociations;
    bool m_elasticInferenceAcceleratorAssociationsHasBeenSet = false;

    Aws::Vector<InstanceNetworkInterface> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::String m_rootDeviceName;
    bool m_rootDeviceNameHasBeenSet = false;

    DeviceType m_rootDeviceType{DeviceType::NOT_SET};
    bool m_rootDeviceTypeHasBeenSet = false;

    Aws::Vector<GroupIdentifier> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    bool m_sourceDestCheck{false};
    bool m_sourceDestCheckHasBeenSet = false;

    Aws::String m_spotInstanceRequestId;
    bool m_spotInstanceRequestIdHasBeenSet = false;

    Aws::String m_sriovNetSupport;
    bool m_sriovNetSupportHasBeenSet = false;

    StateReason m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    VirtualizationType m_virtualizationType{VirtualizationType::NOT_SET};
    bool m_virtualizationTypeHasBeenSet = false;

    CpuOptions m_cpuOptions;
    bool m_cpuOptionsHasBeenSet = false;

    Aws::String m_capacityBlockId;
    bool m_capacityBlockIdHasBeenSet = false;

    Aws::String m_capacityReservationId;
    bool m_capacityReservationIdHasBeenSet = false;

    CapacityReservationSpecificationResponse m_capacityReservationSpecification;
    bool m_capacityReservationSpecificationHasBeenSet = false;

    HibernationOptions m_hibernationOptions;
    bool m_hibernationOptionsHasBeenSet = false;

    Aws::Vector<LicenseConfiguration> m_licenses;
    bool m_licensesHasBeenSet = false;

    InstanceMetadataOptionsResponse m_metadataOptions;
    bool m_metadataOptionsHasBeenSet = false;

    EnclaveOptions m_enclaveOptions;
    bool m_enclaveOptionsHasBeenSet = false;

    BootModeValues m_bootMode{BootModeValues::NOT_SET};
    bool m_bootModeHasBeenSet = false;

    Aws::String m_platformDetails;
    bool m_platformDetailsHasBeenSet = false;

    Aws::String m_usageOperation;
    bool m_usageOperationHasBeenSet = false;

    Aws::Utils::DateTime m_usageOperationUpdateTime{};
    bool m_usageOperationUpdateTimeHasBeenSet = false;

    PrivateDnsNameOptionsResponse m_privateDnsNameOptions;
    bool m_privateDnsNameOptionsHasBeenSet = false;

    Aws::String m_ipv6Address;
    bool m_ipv6AddressHasBeenSet = false;

    Aws::String m_tpmSupport;
    bool m_tpmSupportHasBeenSet = false;

    InstanceMaintenanceOptions m_maintenanceOptions;
    bool m_maintenanceOptionsHasBeenSet = false;

    InstanceBootModeValues m_currentInstanceBootMode{InstanceBootModeValues::NOT_SET};
    bool m_currentInstanceBootModeHasBeenSet = false;

    InstanceNetworkPerformanceOptions m_networkPerformanceOptions;
    bool m_networkPerformanceOptionsHasBeenSet = false;

    OperatorResponse m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    InstanceState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_privateDnsName;
    bool m_privateDnsNameHasBeenSet = false;

    Aws::String m_publicDnsName;
    bool m_publicDnsNameHasBeenSet = false;

    Aws::String m_stateTransitionReason;
    bool m_stateTransitionReasonHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    int m_amiLaunchIndex{0};
    bool m_amiLaunchIndexHasBeenSet = false;

    Aws::Vector<ProductCode> m_productCodes;
    bool m_productCodesHasBeenSet = false;

    InstanceType m_instanceType{InstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_launchTime{};
    bool m_launchTimeHasBeenSet = false;

    Placement m_placement;
    bool m_placementHasBeenSet = false;

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet = false;

    Aws::String m_ramdiskId;
    bool m_ramdiskIdHasBeenSet = false;

    PlatformValues m_platform{PlatformValues::NOT_SET};
    bool m_platformHasBeenSet = false;

    Monitoring m_monitoring;
    bool m_monitoringHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;

    Aws::String m_publicIpAddress;
    bool m_publicIpAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
