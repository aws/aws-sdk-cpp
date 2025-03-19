/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/LaunchTemplateIamInstanceProfileSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/ec2/model/LaunchTemplatesMonitoring.h>
#include <aws/ec2/model/LaunchTemplatePlacement.h>
#include <aws/ec2/model/ShutdownBehavior.h>
#include <aws/ec2/model/LaunchTemplateInstanceMarketOptions.h>
#include <aws/ec2/model/CreditSpecification.h>
#include <aws/ec2/model/LaunchTemplateCpuOptions.h>
#include <aws/ec2/model/LaunchTemplateCapacityReservationSpecificationResponse.h>
#include <aws/ec2/model/LaunchTemplateHibernationOptions.h>
#include <aws/ec2/model/LaunchTemplateInstanceMetadataOptions.h>
#include <aws/ec2/model/LaunchTemplateEnclaveOptions.h>
#include <aws/ec2/model/InstanceRequirements.h>
#include <aws/ec2/model/LaunchTemplatePrivateDnsNameOptions.h>
#include <aws/ec2/model/LaunchTemplateInstanceMaintenanceOptions.h>
#include <aws/ec2/model/OperatorResponse.h>
#include <aws/ec2/model/LaunchTemplateNetworkPerformanceOptions.h>
#include <aws/ec2/model/LaunchTemplateBlockDeviceMapping.h>
#include <aws/ec2/model/LaunchTemplateInstanceNetworkInterfaceSpecification.h>
#include <aws/ec2/model/LaunchTemplateTagSpecification.h>
#include <aws/ec2/model/ElasticGpuSpecificationResponse.h>
#include <aws/ec2/model/LaunchTemplateElasticInferenceAcceleratorResponse.h>
#include <aws/ec2/model/LaunchTemplateLicenseConfiguration.h>
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
   * <p>The information for a launch template. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResponseLaunchTemplateData">AWS
   * API Reference</a></p>
   */
  class ResponseLaunchTemplateData
  {
  public:
    AWS_EC2_API ResponseLaunchTemplateData() = default;
    AWS_EC2_API ResponseLaunchTemplateData(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ResponseLaunchTemplateData& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the kernel, if applicable.</p>
     */
    inline const Aws::String& GetKernelId() const { return m_kernelId; }
    inline bool KernelIdHasBeenSet() const { return m_kernelIdHasBeenSet; }
    template<typename KernelIdT = Aws::String>
    void SetKernelId(KernelIdT&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::forward<KernelIdT>(value); }
    template<typename KernelIdT = Aws::String>
    ResponseLaunchTemplateData& WithKernelId(KernelIdT&& value) { SetKernelId(std::forward<KernelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance is optimized for Amazon EBS I/O. </p>
     */
    inline bool GetEbsOptimized() const { return m_ebsOptimized; }
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }
    inline ResponseLaunchTemplateData& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM instance profile.</p>
     */
    inline const LaunchTemplateIamInstanceProfileSpecification& GetIamInstanceProfile() const { return m_iamInstanceProfile; }
    inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }
    template<typename IamInstanceProfileT = LaunchTemplateIamInstanceProfileSpecification>
    void SetIamInstanceProfile(IamInstanceProfileT&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::forward<IamInstanceProfileT>(value); }
    template<typename IamInstanceProfileT = LaunchTemplateIamInstanceProfileSpecification>
    ResponseLaunchTemplateData& WithIamInstanceProfile(IamInstanceProfileT&& value) { SetIamInstanceProfile(std::forward<IamInstanceProfileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block device mappings.</p>
     */
    inline const Aws::Vector<LaunchTemplateBlockDeviceMapping>& GetBlockDeviceMappings() const { return m_blockDeviceMappings; }
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }
    template<typename BlockDeviceMappingsT = Aws::Vector<LaunchTemplateBlockDeviceMapping>>
    void SetBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::forward<BlockDeviceMappingsT>(value); }
    template<typename BlockDeviceMappingsT = Aws::Vector<LaunchTemplateBlockDeviceMapping>>
    ResponseLaunchTemplateData& WithBlockDeviceMappings(BlockDeviceMappingsT&& value) { SetBlockDeviceMappings(std::forward<BlockDeviceMappingsT>(value)); return *this;}
    template<typename BlockDeviceMappingsT = LaunchTemplateBlockDeviceMapping>
    ResponseLaunchTemplateData& AddBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.emplace_back(std::forward<BlockDeviceMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The network interfaces.</p>
     */
    inline const Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecification>& GetNetworkInterfaces() const { return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    template<typename NetworkInterfacesT = Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecification>>
    void SetNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::forward<NetworkInterfacesT>(value); }
    template<typename NetworkInterfacesT = Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecification>>
    ResponseLaunchTemplateData& WithNetworkInterfaces(NetworkInterfacesT&& value) { SetNetworkInterfaces(std::forward<NetworkInterfacesT>(value)); return *this;}
    template<typename NetworkInterfacesT = LaunchTemplateInstanceNetworkInterfaceSpecification>
    ResponseLaunchTemplateData& AddNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.emplace_back(std::forward<NetworkInterfacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the AMI or a Systems Manager parameter. The Systems Manager
     * parameter will resolve to the ID of the AMI at instance launch.</p> <p>The value
     * depends on what you specified in the request. The possible values are:</p> <ul>
     * <li> <p>If an AMI ID was specified in the request, then this is the AMI ID.</p>
     * </li> <li> <p>If a Systems Manager parameter was specified in the request, and
     * <code>ResolveAlias</code> was configured as <code>true</code>, then this is the
     * AMI ID that the parameter is mapped to in the Parameter Store.</p> </li> <li>
     * <p>If a Systems Manager parameter was specified in the request, and
     * <code>ResolveAlias</code> was configured as <code>false</code>, then this is the
     * parameter value.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/create-launch-template.html#use-an-ssm-parameter-instead-of-an-ami-id">Use
     * a Systems Manager parameter instead of an AMI ID</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    ResponseLaunchTemplateData& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type.</p>
     */
    inline InstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(InstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline ResponseLaunchTemplateData& WithInstanceType(InstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the key pair.</p>
     */
    inline const Aws::String& GetKeyName() const { return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    template<typename KeyNameT = Aws::String>
    void SetKeyName(KeyNameT&& value) { m_keyNameHasBeenSet = true; m_keyName = std::forward<KeyNameT>(value); }
    template<typename KeyNameT = Aws::String>
    ResponseLaunchTemplateData& WithKeyName(KeyNameT&& value) { SetKeyName(std::forward<KeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The monitoring for the instance.</p>
     */
    inline const LaunchTemplatesMonitoring& GetMonitoring() const { return m_monitoring; }
    inline bool MonitoringHasBeenSet() const { return m_monitoringHasBeenSet; }
    template<typename MonitoringT = LaunchTemplatesMonitoring>
    void SetMonitoring(MonitoringT&& value) { m_monitoringHasBeenSet = true; m_monitoring = std::forward<MonitoringT>(value); }
    template<typename MonitoringT = LaunchTemplatesMonitoring>
    ResponseLaunchTemplateData& WithMonitoring(MonitoringT&& value) { SetMonitoring(std::forward<MonitoringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The placement of the instance.</p>
     */
    inline const LaunchTemplatePlacement& GetPlacement() const { return m_placement; }
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }
    template<typename PlacementT = LaunchTemplatePlacement>
    void SetPlacement(PlacementT&& value) { m_placementHasBeenSet = true; m_placement = std::forward<PlacementT>(value); }
    template<typename PlacementT = LaunchTemplatePlacement>
    ResponseLaunchTemplateData& WithPlacement(PlacementT&& value) { SetPlacement(std::forward<PlacementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the RAM disk, if applicable.</p>
     */
    inline const Aws::String& GetRamDiskId() const { return m_ramDiskId; }
    inline bool RamDiskIdHasBeenSet() const { return m_ramDiskIdHasBeenSet; }
    template<typename RamDiskIdT = Aws::String>
    void SetRamDiskId(RamDiskIdT&& value) { m_ramDiskIdHasBeenSet = true; m_ramDiskId = std::forward<RamDiskIdT>(value); }
    template<typename RamDiskIdT = Aws::String>
    ResponseLaunchTemplateData& WithRamDiskId(RamDiskIdT&& value) { SetRamDiskId(std::forward<RamDiskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to <code>true</code>, indicates that the instance cannot be terminated
     * using the Amazon EC2 console, command line tool, or API.</p>
     */
    inline bool GetDisableApiTermination() const { return m_disableApiTermination; }
    inline bool DisableApiTerminationHasBeenSet() const { return m_disableApiTerminationHasBeenSet; }
    inline void SetDisableApiTermination(bool value) { m_disableApiTerminationHasBeenSet = true; m_disableApiTermination = value; }
    inline ResponseLaunchTemplateData& WithDisableApiTermination(bool value) { SetDisableApiTermination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline ShutdownBehavior GetInstanceInitiatedShutdownBehavior() const { return m_instanceInitiatedShutdownBehavior; }
    inline bool InstanceInitiatedShutdownBehaviorHasBeenSet() const { return m_instanceInitiatedShutdownBehaviorHasBeenSet; }
    inline void SetInstanceInitiatedShutdownBehavior(ShutdownBehavior value) { m_instanceInitiatedShutdownBehaviorHasBeenSet = true; m_instanceInitiatedShutdownBehavior = value; }
    inline ResponseLaunchTemplateData& WithInstanceInitiatedShutdownBehavior(ShutdownBehavior value) { SetInstanceInitiatedShutdownBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user data for the instance. </p>
     */
    inline const Aws::String& GetUserData() const { return m_userData; }
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }
    template<typename UserDataT = Aws::String>
    void SetUserData(UserDataT&& value) { m_userDataHasBeenSet = true; m_userData = std::forward<UserDataT>(value); }
    template<typename UserDataT = Aws::String>
    ResponseLaunchTemplateData& WithUserData(UserDataT&& value) { SetUserData(std::forward<UserDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that are applied to the resources that are created during instance
     * launch.</p>
     */
    inline const Aws::Vector<LaunchTemplateTagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<LaunchTemplateTagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<LaunchTemplateTagSpecification>>
    ResponseLaunchTemplateData& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = LaunchTemplateTagSpecification>
    ResponseLaunchTemplateData& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Deprecated.</p>  <p>Amazon Elastic Graphics reached end of life on
     * January 8, 2024.</p> 
     */
    inline const Aws::Vector<ElasticGpuSpecificationResponse>& GetElasticGpuSpecifications() const { return m_elasticGpuSpecifications; }
    inline bool ElasticGpuSpecificationsHasBeenSet() const { return m_elasticGpuSpecificationsHasBeenSet; }
    template<typename ElasticGpuSpecificationsT = Aws::Vector<ElasticGpuSpecificationResponse>>
    void SetElasticGpuSpecifications(ElasticGpuSpecificationsT&& value) { m_elasticGpuSpecificationsHasBeenSet = true; m_elasticGpuSpecifications = std::forward<ElasticGpuSpecificationsT>(value); }
    template<typename ElasticGpuSpecificationsT = Aws::Vector<ElasticGpuSpecificationResponse>>
    ResponseLaunchTemplateData& WithElasticGpuSpecifications(ElasticGpuSpecificationsT&& value) { SetElasticGpuSpecifications(std::forward<ElasticGpuSpecificationsT>(value)); return *this;}
    template<typename ElasticGpuSpecificationsT = ElasticGpuSpecificationResponse>
    ResponseLaunchTemplateData& AddElasticGpuSpecifications(ElasticGpuSpecificationsT&& value) { m_elasticGpuSpecificationsHasBeenSet = true; m_elasticGpuSpecifications.emplace_back(std::forward<ElasticGpuSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     *  <p>Amazon Elastic Inference is no longer available.</p>  <p>An
     * elastic inference accelerator to associate with the instance. Elastic inference
     * accelerators are a resource you can attach to your Amazon EC2 instances to
     * accelerate your Deep Learning (DL) inference workloads.</p> <p>You cannot
     * specify accelerators from different generations in the same request.</p>
     */
    inline const Aws::Vector<LaunchTemplateElasticInferenceAcceleratorResponse>& GetElasticInferenceAccelerators() const { return m_elasticInferenceAccelerators; }
    inline bool ElasticInferenceAcceleratorsHasBeenSet() const { return m_elasticInferenceAcceleratorsHasBeenSet; }
    template<typename ElasticInferenceAcceleratorsT = Aws::Vector<LaunchTemplateElasticInferenceAcceleratorResponse>>
    void SetElasticInferenceAccelerators(ElasticInferenceAcceleratorsT&& value) { m_elasticInferenceAcceleratorsHasBeenSet = true; m_elasticInferenceAccelerators = std::forward<ElasticInferenceAcceleratorsT>(value); }
    template<typename ElasticInferenceAcceleratorsT = Aws::Vector<LaunchTemplateElasticInferenceAcceleratorResponse>>
    ResponseLaunchTemplateData& WithElasticInferenceAccelerators(ElasticInferenceAcceleratorsT&& value) { SetElasticInferenceAccelerators(std::forward<ElasticInferenceAcceleratorsT>(value)); return *this;}
    template<typename ElasticInferenceAcceleratorsT = LaunchTemplateElasticInferenceAcceleratorResponse>
    ResponseLaunchTemplateData& AddElasticInferenceAccelerators(ElasticInferenceAcceleratorsT&& value) { m_elasticInferenceAcceleratorsHasBeenSet = true; m_elasticInferenceAccelerators.emplace_back(std::forward<ElasticInferenceAcceleratorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The security group IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    ResponseLaunchTemplateData& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    ResponseLaunchTemplateData& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The security group names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    ResponseLaunchTemplateData& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    ResponseLaunchTemplateData& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The market (purchasing) option for the instances.</p>
     */
    inline const LaunchTemplateInstanceMarketOptions& GetInstanceMarketOptions() const { return m_instanceMarketOptions; }
    inline bool InstanceMarketOptionsHasBeenSet() const { return m_instanceMarketOptionsHasBeenSet; }
    template<typename InstanceMarketOptionsT = LaunchTemplateInstanceMarketOptions>
    void SetInstanceMarketOptions(InstanceMarketOptionsT&& value) { m_instanceMarketOptionsHasBeenSet = true; m_instanceMarketOptions = std::forward<InstanceMarketOptionsT>(value); }
    template<typename InstanceMarketOptionsT = LaunchTemplateInstanceMarketOptions>
    ResponseLaunchTemplateData& WithInstanceMarketOptions(InstanceMarketOptionsT&& value) { SetInstanceMarketOptions(std::forward<InstanceMarketOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credit option for CPU usage of the instance.</p>
     */
    inline const CreditSpecification& GetCreditSpecification() const { return m_creditSpecification; }
    inline bool CreditSpecificationHasBeenSet() const { return m_creditSpecificationHasBeenSet; }
    template<typename CreditSpecificationT = CreditSpecification>
    void SetCreditSpecification(CreditSpecificationT&& value) { m_creditSpecificationHasBeenSet = true; m_creditSpecification = std::forward<CreditSpecificationT>(value); }
    template<typename CreditSpecificationT = CreditSpecification>
    ResponseLaunchTemplateData& WithCreditSpecification(CreditSpecificationT&& value) { SetCreditSpecification(std::forward<CreditSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CPU options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">CPU
     * options for Amazon EC2 instances</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const LaunchTemplateCpuOptions& GetCpuOptions() const { return m_cpuOptions; }
    inline bool CpuOptionsHasBeenSet() const { return m_cpuOptionsHasBeenSet; }
    template<typename CpuOptionsT = LaunchTemplateCpuOptions>
    void SetCpuOptions(CpuOptionsT&& value) { m_cpuOptionsHasBeenSet = true; m_cpuOptions = std::forward<CpuOptionsT>(value); }
    template<typename CpuOptionsT = LaunchTemplateCpuOptions>
    ResponseLaunchTemplateData& WithCpuOptions(CpuOptionsT&& value) { SetCpuOptions(std::forward<CpuOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Capacity Reservation targeting option.</p>
     */
    inline const LaunchTemplateCapacityReservationSpecificationResponse& GetCapacityReservationSpecification() const { return m_capacityReservationSpecification; }
    inline bool CapacityReservationSpecificationHasBeenSet() const { return m_capacityReservationSpecificationHasBeenSet; }
    template<typename CapacityReservationSpecificationT = LaunchTemplateCapacityReservationSpecificationResponse>
    void SetCapacityReservationSpecification(CapacityReservationSpecificationT&& value) { m_capacityReservationSpecificationHasBeenSet = true; m_capacityReservationSpecification = std::forward<CapacityReservationSpecificationT>(value); }
    template<typename CapacityReservationSpecificationT = LaunchTemplateCapacityReservationSpecificationResponse>
    ResponseLaunchTemplateData& WithCapacityReservationSpecification(CapacityReservationSpecificationT&& value) { SetCapacityReservationSpecification(std::forward<CapacityReservationSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license configurations.</p>
     */
    inline const Aws::Vector<LaunchTemplateLicenseConfiguration>& GetLicenseSpecifications() const { return m_licenseSpecifications; }
    inline bool LicenseSpecificationsHasBeenSet() const { return m_licenseSpecificationsHasBeenSet; }
    template<typename LicenseSpecificationsT = Aws::Vector<LaunchTemplateLicenseConfiguration>>
    void SetLicenseSpecifications(LicenseSpecificationsT&& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications = std::forward<LicenseSpecificationsT>(value); }
    template<typename LicenseSpecificationsT = Aws::Vector<LaunchTemplateLicenseConfiguration>>
    ResponseLaunchTemplateData& WithLicenseSpecifications(LicenseSpecificationsT&& value) { SetLicenseSpecifications(std::forward<LicenseSpecificationsT>(value)); return *this;}
    template<typename LicenseSpecificationsT = LaunchTemplateLicenseConfiguration>
    ResponseLaunchTemplateData& AddLicenseSpecifications(LicenseSpecificationsT&& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications.emplace_back(std::forward<LicenseSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether an instance is configured for hibernation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html">Hibernate
     * your Amazon EC2 instance</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const LaunchTemplateHibernationOptions& GetHibernationOptions() const { return m_hibernationOptions; }
    inline bool HibernationOptionsHasBeenSet() const { return m_hibernationOptionsHasBeenSet; }
    template<typename HibernationOptionsT = LaunchTemplateHibernationOptions>
    void SetHibernationOptions(HibernationOptionsT&& value) { m_hibernationOptionsHasBeenSet = true; m_hibernationOptions = std::forward<HibernationOptionsT>(value); }
    template<typename HibernationOptionsT = LaunchTemplateHibernationOptions>
    ResponseLaunchTemplateData& WithHibernationOptions(HibernationOptionsT&& value) { SetHibernationOptions(std::forward<HibernationOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/configuring-instance-metadata-options.html">Configure
     * the Instance Metadata Service options</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline const LaunchTemplateInstanceMetadataOptions& GetMetadataOptions() const { return m_metadataOptions; }
    inline bool MetadataOptionsHasBeenSet() const { return m_metadataOptionsHasBeenSet; }
    template<typename MetadataOptionsT = LaunchTemplateInstanceMetadataOptions>
    void SetMetadataOptions(MetadataOptionsT&& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = std::forward<MetadataOptionsT>(value); }
    template<typename MetadataOptionsT = LaunchTemplateInstanceMetadataOptions>
    ResponseLaunchTemplateData& WithMetadataOptions(MetadataOptionsT&& value) { SetMetadataOptions(std::forward<MetadataOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance is enabled for Amazon Web Services Nitro
     * Enclaves.</p>
     */
    inline const LaunchTemplateEnclaveOptions& GetEnclaveOptions() const { return m_enclaveOptions; }
    inline bool EnclaveOptionsHasBeenSet() const { return m_enclaveOptionsHasBeenSet; }
    template<typename EnclaveOptionsT = LaunchTemplateEnclaveOptions>
    void SetEnclaveOptions(EnclaveOptionsT&& value) { m_enclaveOptionsHasBeenSet = true; m_enclaveOptions = std::forward<EnclaveOptionsT>(value); }
    template<typename EnclaveOptionsT = LaunchTemplateEnclaveOptions>
    ResponseLaunchTemplateData& WithEnclaveOptions(EnclaveOptionsT&& value) { SetEnclaveOptions(std::forward<EnclaveOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with these attributes.</p> <p>If you
     * specify <code>InstanceRequirements</code>, you can't specify
     * <code>InstanceTypes</code>.</p>
     */
    inline const InstanceRequirements& GetInstanceRequirements() const { return m_instanceRequirements; }
    inline bool InstanceRequirementsHasBeenSet() const { return m_instanceRequirementsHasBeenSet; }
    template<typename InstanceRequirementsT = InstanceRequirements>
    void SetInstanceRequirements(InstanceRequirementsT&& value) { m_instanceRequirementsHasBeenSet = true; m_instanceRequirements = std::forward<InstanceRequirementsT>(value); }
    template<typename InstanceRequirementsT = InstanceRequirements>
    ResponseLaunchTemplateData& WithInstanceRequirements(InstanceRequirementsT&& value) { SetInstanceRequirements(std::forward<InstanceRequirementsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for the instance hostname.</p>
     */
    inline const LaunchTemplatePrivateDnsNameOptions& GetPrivateDnsNameOptions() const { return m_privateDnsNameOptions; }
    inline bool PrivateDnsNameOptionsHasBeenSet() const { return m_privateDnsNameOptionsHasBeenSet; }
    template<typename PrivateDnsNameOptionsT = LaunchTemplatePrivateDnsNameOptions>
    void SetPrivateDnsNameOptions(PrivateDnsNameOptionsT&& value) { m_privateDnsNameOptionsHasBeenSet = true; m_privateDnsNameOptions = std::forward<PrivateDnsNameOptionsT>(value); }
    template<typename PrivateDnsNameOptionsT = LaunchTemplatePrivateDnsNameOptions>
    ResponseLaunchTemplateData& WithPrivateDnsNameOptions(PrivateDnsNameOptionsT&& value) { SetPrivateDnsNameOptions(std::forward<PrivateDnsNameOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maintenance options for your instance.</p>
     */
    inline const LaunchTemplateInstanceMaintenanceOptions& GetMaintenanceOptions() const { return m_maintenanceOptions; }
    inline bool MaintenanceOptionsHasBeenSet() const { return m_maintenanceOptionsHasBeenSet; }
    template<typename MaintenanceOptionsT = LaunchTemplateInstanceMaintenanceOptions>
    void SetMaintenanceOptions(MaintenanceOptionsT&& value) { m_maintenanceOptionsHasBeenSet = true; m_maintenanceOptions = std::forward<MaintenanceOptionsT>(value); }
    template<typename MaintenanceOptionsT = LaunchTemplateInstanceMaintenanceOptions>
    ResponseLaunchTemplateData& WithMaintenanceOptions(MaintenanceOptionsT&& value) { SetMaintenanceOptions(std::forward<MaintenanceOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance is enabled for stop protection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-stop-protection.html">Enable
     * stop protection for your EC2 instances</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline bool GetDisableApiStop() const { return m_disableApiStop; }
    inline bool DisableApiStopHasBeenSet() const { return m_disableApiStopHasBeenSet; }
    inline void SetDisableApiStop(bool value) { m_disableApiStopHasBeenSet = true; m_disableApiStop = value; }
    inline ResponseLaunchTemplateData& WithDisableApiStop(bool value) { SetDisableApiStop(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity that manages the launch template.</p>
     */
    inline const OperatorResponse& GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    template<typename OperatorT = OperatorResponse>
    void SetOperator(OperatorT&& value) { m_operatorHasBeenSet = true; m_operator = std::forward<OperatorT>(value); }
    template<typename OperatorT = OperatorResponse>
    ResponseLaunchTemplateData& WithOperator(OperatorT&& value) { SetOperator(std::forward<OperatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the launch template settings for network performance options for
     * your instance.</p>
     */
    inline const LaunchTemplateNetworkPerformanceOptions& GetNetworkPerformanceOptions() const { return m_networkPerformanceOptions; }
    inline bool NetworkPerformanceOptionsHasBeenSet() const { return m_networkPerformanceOptionsHasBeenSet; }
    template<typename NetworkPerformanceOptionsT = LaunchTemplateNetworkPerformanceOptions>
    void SetNetworkPerformanceOptions(NetworkPerformanceOptionsT&& value) { m_networkPerformanceOptionsHasBeenSet = true; m_networkPerformanceOptions = std::forward<NetworkPerformanceOptionsT>(value); }
    template<typename NetworkPerformanceOptionsT = LaunchTemplateNetworkPerformanceOptions>
    ResponseLaunchTemplateData& WithNetworkPerformanceOptions(NetworkPerformanceOptionsT&& value) { SetNetworkPerformanceOptions(std::forward<NetworkPerformanceOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet = false;

    bool m_ebsOptimized{false};
    bool m_ebsOptimizedHasBeenSet = false;

    LaunchTemplateIamInstanceProfileSpecification m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet = false;

    Aws::Vector<LaunchTemplateBlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecification> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    InstanceType m_instanceType{InstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    LaunchTemplatesMonitoring m_monitoring;
    bool m_monitoringHasBeenSet = false;

    LaunchTemplatePlacement m_placement;
    bool m_placementHasBeenSet = false;

    Aws::String m_ramDiskId;
    bool m_ramDiskIdHasBeenSet = false;

    bool m_disableApiTermination{false};
    bool m_disableApiTerminationHasBeenSet = false;

    ShutdownBehavior m_instanceInitiatedShutdownBehavior{ShutdownBehavior::NOT_SET};
    bool m_instanceInitiatedShutdownBehaviorHasBeenSet = false;

    Aws::String m_userData;
    bool m_userDataHasBeenSet = false;

    Aws::Vector<LaunchTemplateTagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::Vector<ElasticGpuSpecificationResponse> m_elasticGpuSpecifications;
    bool m_elasticGpuSpecificationsHasBeenSet = false;

    Aws::Vector<LaunchTemplateElasticInferenceAcceleratorResponse> m_elasticInferenceAccelerators;
    bool m_elasticInferenceAcceleratorsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    LaunchTemplateInstanceMarketOptions m_instanceMarketOptions;
    bool m_instanceMarketOptionsHasBeenSet = false;

    CreditSpecification m_creditSpecification;
    bool m_creditSpecificationHasBeenSet = false;

    LaunchTemplateCpuOptions m_cpuOptions;
    bool m_cpuOptionsHasBeenSet = false;

    LaunchTemplateCapacityReservationSpecificationResponse m_capacityReservationSpecification;
    bool m_capacityReservationSpecificationHasBeenSet = false;

    Aws::Vector<LaunchTemplateLicenseConfiguration> m_licenseSpecifications;
    bool m_licenseSpecificationsHasBeenSet = false;

    LaunchTemplateHibernationOptions m_hibernationOptions;
    bool m_hibernationOptionsHasBeenSet = false;

    LaunchTemplateInstanceMetadataOptions m_metadataOptions;
    bool m_metadataOptionsHasBeenSet = false;

    LaunchTemplateEnclaveOptions m_enclaveOptions;
    bool m_enclaveOptionsHasBeenSet = false;

    InstanceRequirements m_instanceRequirements;
    bool m_instanceRequirementsHasBeenSet = false;

    LaunchTemplatePrivateDnsNameOptions m_privateDnsNameOptions;
    bool m_privateDnsNameOptionsHasBeenSet = false;

    LaunchTemplateInstanceMaintenanceOptions m_maintenanceOptions;
    bool m_maintenanceOptionsHasBeenSet = false;

    bool m_disableApiStop{false};
    bool m_disableApiStopHasBeenSet = false;

    OperatorResponse m_operator;
    bool m_operatorHasBeenSet = false;

    LaunchTemplateNetworkPerformanceOptions m_networkPerformanceOptions;
    bool m_networkPerformanceOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
