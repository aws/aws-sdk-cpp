/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/LaunchTemplateIamInstanceProfileSpecificationRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/ec2/model/LaunchTemplatesMonitoringRequest.h>
#include <aws/ec2/model/LaunchTemplatePlacementRequest.h>
#include <aws/ec2/model/ShutdownBehavior.h>
#include <aws/ec2/model/LaunchTemplateInstanceMarketOptionsRequest.h>
#include <aws/ec2/model/CreditSpecificationRequest.h>
#include <aws/ec2/model/LaunchTemplateCpuOptionsRequest.h>
#include <aws/ec2/model/LaunchTemplateCapacityReservationSpecificationRequest.h>
#include <aws/ec2/model/LaunchTemplateHibernationOptionsRequest.h>
#include <aws/ec2/model/LaunchTemplateInstanceMetadataOptionsRequest.h>
#include <aws/ec2/model/LaunchTemplateEnclaveOptionsRequest.h>
#include <aws/ec2/model/InstanceRequirementsRequest.h>
#include <aws/ec2/model/LaunchTemplatePrivateDnsNameOptionsRequest.h>
#include <aws/ec2/model/LaunchTemplateInstanceMaintenanceOptionsRequest.h>
#include <aws/ec2/model/OperatorRequest.h>
#include <aws/ec2/model/LaunchTemplateNetworkPerformanceOptionsRequest.h>
#include <aws/ec2/model/LaunchTemplateBlockDeviceMappingRequest.h>
#include <aws/ec2/model/LaunchTemplateInstanceNetworkInterfaceSpecificationRequest.h>
#include <aws/ec2/model/LaunchTemplateTagSpecificationRequest.h>
#include <aws/ec2/model/LaunchTemplateLicenseConfigurationRequest.h>
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
   * <p>The information to include in the launch template.</p>  <p>You must
   * specify at least one parameter for the launch template data.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RequestLaunchTemplateData">AWS
   * API Reference</a></p>
   */
  class RequestLaunchTemplateData
  {
  public:
    AWS_EC2_API RequestLaunchTemplateData() = default;
    AWS_EC2_API RequestLaunchTemplateData(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RequestLaunchTemplateData& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the kernel.</p>  <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/linux/al2/ug/UserProvidedKernels.html">User
     * provided kernels</a> in the <i>Amazon Linux 2 User Guide</i>.</p> 
     */
    inline const Aws::String& GetKernelId() const { return m_kernelId; }
    inline bool KernelIdHasBeenSet() const { return m_kernelIdHasBeenSet; }
    template<typename KernelIdT = Aws::String>
    void SetKernelId(KernelIdT&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::forward<KernelIdT>(value); }
    template<typename KernelIdT = Aws::String>
    RequestLaunchTemplateData& WithKernelId(KernelIdT&& value) { SetKernelId(std::forward<KernelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance is optimized for Amazon EBS I/O. This
     * optimization provides dedicated throughput to Amazon EBS and an optimized
     * configuration stack to provide optimal Amazon EBS I/O performance. This
     * optimization isn't available with all instance types. Additional usage charges
     * apply when using an EBS-optimized instance.</p>
     */
    inline bool GetEbsOptimized() const { return m_ebsOptimized; }
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }
    inline RequestLaunchTemplateData& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of an IAM instance profile.</p>
     */
    inline const LaunchTemplateIamInstanceProfileSpecificationRequest& GetIamInstanceProfile() const { return m_iamInstanceProfile; }
    inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }
    template<typename IamInstanceProfileT = LaunchTemplateIamInstanceProfileSpecificationRequest>
    void SetIamInstanceProfile(IamInstanceProfileT&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::forward<IamInstanceProfileT>(value); }
    template<typename IamInstanceProfileT = LaunchTemplateIamInstanceProfileSpecificationRequest>
    RequestLaunchTemplateData& WithIamInstanceProfile(IamInstanceProfileT&& value) { SetIamInstanceProfile(std::forward<IamInstanceProfileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block device mapping.</p>
     */
    inline const Aws::Vector<LaunchTemplateBlockDeviceMappingRequest>& GetBlockDeviceMappings() const { return m_blockDeviceMappings; }
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }
    template<typename BlockDeviceMappingsT = Aws::Vector<LaunchTemplateBlockDeviceMappingRequest>>
    void SetBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::forward<BlockDeviceMappingsT>(value); }
    template<typename BlockDeviceMappingsT = Aws::Vector<LaunchTemplateBlockDeviceMappingRequest>>
    RequestLaunchTemplateData& WithBlockDeviceMappings(BlockDeviceMappingsT&& value) { SetBlockDeviceMappings(std::forward<BlockDeviceMappingsT>(value)); return *this;}
    template<typename BlockDeviceMappingsT = LaunchTemplateBlockDeviceMappingRequest>
    RequestLaunchTemplateData& AddBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.emplace_back(std::forward<BlockDeviceMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The network interfaces for the instance.</p>
     */
    inline const Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecificationRequest>& GetNetworkInterfaces() const { return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    template<typename NetworkInterfacesT = Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecificationRequest>>
    void SetNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::forward<NetworkInterfacesT>(value); }
    template<typename NetworkInterfacesT = Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecificationRequest>>
    RequestLaunchTemplateData& WithNetworkInterfaces(NetworkInterfacesT&& value) { SetNetworkInterfaces(std::forward<NetworkInterfacesT>(value)); return *this;}
    template<typename NetworkInterfacesT = LaunchTemplateInstanceNetworkInterfaceSpecificationRequest>
    RequestLaunchTemplateData& AddNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.emplace_back(std::forward<NetworkInterfacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the AMI in the format <code>ami-0ac394d6a3example</code>.</p>
     * <p>Alternatively, you can specify a Systems Manager parameter, using one of the
     * following formats. The Systems Manager parameter will resolve to an AMI ID on
     * launch.</p> <p>To reference a public parameter:</p> <ul> <li> <p>
     * <code>resolve:ssm:<i>public-parameter</i> </code> </p> </li> </ul> <p>To
     * reference a parameter stored in the same account:</p> <ul> <li> <p>
     * <code>resolve:ssm:<i>parameter-name</i> </code> </p> </li> <li> <p>
     * <code>resolve:ssm:<i>parameter-name:version-number</i> </code> </p> </li> <li>
     * <p> <code>resolve:ssm:<i>parameter-name:label</i> </code> </p> </li> </ul> <p>To
     * reference a parameter shared from another Amazon Web Services account:</p> <ul>
     * <li> <p> <code>resolve:ssm:<i>parameter-ARN</i> </code> </p> </li> <li> <p>
     * <code>resolve:ssm:<i>parameter-ARN:version-number</i> </code> </p> </li> <li>
     * <p> <code>resolve:ssm:<i>parameter-ARN:label</i> </code> </p> </li> </ul> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/create-launch-template.html#use-an-ssm-parameter-instead-of-an-ami-id">Use
     * a Systems Manager parameter instead of an AMI ID</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>  <p>If the launch template will be used for an EC2 Fleet or
     * Spot Fleet, note the following:</p> <ul> <li> <p>Only EC2 Fleets of type
     * <code>instant</code> support specifying a Systems Manager parameter.</p> </li>
     * <li> <p>For EC2 Fleets of type <code>maintain</code> or <code>request</code>, or
     * for Spot Fleets, you must specify the AMI ID.</p> </li> </ul> 
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    RequestLaunchTemplateData& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Amazon
     * EC2 instance types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>If you
     * specify <code>InstanceType</code>, you can't specify
     * <code>InstanceRequirements</code>.</p>
     */
    inline InstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(InstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline RequestLaunchTemplateData& WithInstanceType(InstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the key pair. You can create a key pair using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateKeyPair.html">CreateKeyPair</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportKeyPair.html">ImportKeyPair</a>.</p>
     *  <p>If you do not specify a key pair, you can't connect to the
     * instance unless you choose an AMI that is configured to allow users another way
     * to log in.</p> 
     */
    inline const Aws::String& GetKeyName() const { return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    template<typename KeyNameT = Aws::String>
    void SetKeyName(KeyNameT&& value) { m_keyNameHasBeenSet = true; m_keyName = std::forward<KeyNameT>(value); }
    template<typename KeyNameT = Aws::String>
    RequestLaunchTemplateData& WithKeyName(KeyNameT&& value) { SetKeyName(std::forward<KeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The monitoring for the instance.</p>
     */
    inline const LaunchTemplatesMonitoringRequest& GetMonitoring() const { return m_monitoring; }
    inline bool MonitoringHasBeenSet() const { return m_monitoringHasBeenSet; }
    template<typename MonitoringT = LaunchTemplatesMonitoringRequest>
    void SetMonitoring(MonitoringT&& value) { m_monitoringHasBeenSet = true; m_monitoring = std::forward<MonitoringT>(value); }
    template<typename MonitoringT = LaunchTemplatesMonitoringRequest>
    RequestLaunchTemplateData& WithMonitoring(MonitoringT&& value) { SetMonitoring(std::forward<MonitoringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The placement for the instance.</p>
     */
    inline const LaunchTemplatePlacementRequest& GetPlacement() const { return m_placement; }
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }
    template<typename PlacementT = LaunchTemplatePlacementRequest>
    void SetPlacement(PlacementT&& value) { m_placementHasBeenSet = true; m_placement = std::forward<PlacementT>(value); }
    template<typename PlacementT = LaunchTemplatePlacementRequest>
    RequestLaunchTemplateData& WithPlacement(PlacementT&& value) { SetPlacement(std::forward<PlacementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the RAM disk.</p>  <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * provided kernels</a> in the <i>Amazon EC2 User Guide</i>.</p> 
     */
    inline const Aws::String& GetRamDiskId() const { return m_ramDiskId; }
    inline bool RamDiskIdHasBeenSet() const { return m_ramDiskIdHasBeenSet; }
    template<typename RamDiskIdT = Aws::String>
    void SetRamDiskId(RamDiskIdT&& value) { m_ramDiskIdHasBeenSet = true; m_ramDiskId = std::forward<RamDiskIdT>(value); }
    template<typename RamDiskIdT = Aws::String>
    RequestLaunchTemplateData& WithRamDiskId(RamDiskIdT&& value) { SetRamDiskId(std::forward<RamDiskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether termination protection is enabled for the instance. The
     * default is <code>false</code>, which means that you can terminate the instance
     * using the Amazon EC2 console, command line tools, or API. You can enable
     * termination protection when you launch an instance, while the instance is
     * running, or while the instance is stopped.</p>
     */
    inline bool GetDisableApiTermination() const { return m_disableApiTermination; }
    inline bool DisableApiTerminationHasBeenSet() const { return m_disableApiTerminationHasBeenSet; }
    inline void SetDisableApiTermination(bool value) { m_disableApiTerminationHasBeenSet = true; m_disableApiTermination = value; }
    inline RequestLaunchTemplateData& WithDisableApiTermination(bool value) { SetDisableApiTermination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     * <p>Default: <code>stop</code> </p>
     */
    inline ShutdownBehavior GetInstanceInitiatedShutdownBehavior() const { return m_instanceInitiatedShutdownBehavior; }
    inline bool InstanceInitiatedShutdownBehaviorHasBeenSet() const { return m_instanceInitiatedShutdownBehaviorHasBeenSet; }
    inline void SetInstanceInitiatedShutdownBehavior(ShutdownBehavior value) { m_instanceInitiatedShutdownBehaviorHasBeenSet = true; m_instanceInitiatedShutdownBehavior = value; }
    inline RequestLaunchTemplateData& WithInstanceInitiatedShutdownBehavior(ShutdownBehavior value) { SetInstanceInitiatedShutdownBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user data to make available to the instance. You must provide
     * base64-encoded text. User data is limited to 16 KB. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Run
     * commands when you launch an EC2 instance with user data input</a> in the
     * <i>Amazon EC2 User Guide</i>.</p> <p>If you are creating the launch template for
     * use with Batch, the user data must be provided in the <a
     * href="https://cloudinit.readthedocs.io/en/latest/topics/format.html#mime-multi-part-archive">MIME
     * multi-part archive format</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/launch-templates.html#lt-user-data">Amazon
     * EC2 user data in launch templates</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const Aws::String& GetUserData() const { return m_userData; }
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }
    template<typename UserDataT = Aws::String>
    void SetUserData(UserDataT&& value) { m_userDataHasBeenSet = true; m_userData = std::forward<UserDataT>(value); }
    template<typename UserDataT = Aws::String>
    RequestLaunchTemplateData& WithUserData(UserDataT&& value) { SetUserData(std::forward<UserDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the resources that are created during instance launch.
     * These tags are not applied to the launch template.</p>
     */
    inline const Aws::Vector<LaunchTemplateTagSpecificationRequest>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<LaunchTemplateTagSpecificationRequest>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<LaunchTemplateTagSpecificationRequest>>
    RequestLaunchTemplateData& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = LaunchTemplateTagSpecificationRequest>
    RequestLaunchTemplateData& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the security groups.</p> <p>If you specify a network interface,
     * you must specify any security groups as part of the network interface instead of
     * using this parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    RequestLaunchTemplateData& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    RequestLaunchTemplateData& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of the security groups. For a nondefault VPC, you must use security
     * group IDs instead.</p> <p>If you specify a network interface, you must specify
     * any security groups as part of the network interface instead of using this
     * parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    RequestLaunchTemplateData& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    RequestLaunchTemplateData& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The market (purchasing) option for the instances.</p>
     */
    inline const LaunchTemplateInstanceMarketOptionsRequest& GetInstanceMarketOptions() const { return m_instanceMarketOptions; }
    inline bool InstanceMarketOptionsHasBeenSet() const { return m_instanceMarketOptionsHasBeenSet; }
    template<typename InstanceMarketOptionsT = LaunchTemplateInstanceMarketOptionsRequest>
    void SetInstanceMarketOptions(InstanceMarketOptionsT&& value) { m_instanceMarketOptionsHasBeenSet = true; m_instanceMarketOptions = std::forward<InstanceMarketOptionsT>(value); }
    template<typename InstanceMarketOptionsT = LaunchTemplateInstanceMarketOptionsRequest>
    RequestLaunchTemplateData& WithInstanceMarketOptions(InstanceMarketOptionsT&& value) { SetInstanceMarketOptions(std::forward<InstanceMarketOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credit option for CPU usage of the instance. Valid only for T
     * instances.</p>
     */
    inline const CreditSpecificationRequest& GetCreditSpecification() const { return m_creditSpecification; }
    inline bool CreditSpecificationHasBeenSet() const { return m_creditSpecificationHasBeenSet; }
    template<typename CreditSpecificationT = CreditSpecificationRequest>
    void SetCreditSpecification(CreditSpecificationT&& value) { m_creditSpecificationHasBeenSet = true; m_creditSpecification = std::forward<CreditSpecificationT>(value); }
    template<typename CreditSpecificationT = CreditSpecificationRequest>
    RequestLaunchTemplateData& WithCreditSpecification(CreditSpecificationT&& value) { SetCreditSpecification(std::forward<CreditSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CPU options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">CPU
     * options for Amazon EC2 instances</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const LaunchTemplateCpuOptionsRequest& GetCpuOptions() const { return m_cpuOptions; }
    inline bool CpuOptionsHasBeenSet() const { return m_cpuOptionsHasBeenSet; }
    template<typename CpuOptionsT = LaunchTemplateCpuOptionsRequest>
    void SetCpuOptions(CpuOptionsT&& value) { m_cpuOptionsHasBeenSet = true; m_cpuOptions = std::forward<CpuOptionsT>(value); }
    template<typename CpuOptionsT = LaunchTemplateCpuOptionsRequest>
    RequestLaunchTemplateData& WithCpuOptions(CpuOptionsT&& value) { SetCpuOptions(std::forward<CpuOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Capacity Reservation targeting option. If you do not specify this
     * parameter, the instance's Capacity Reservation preference defaults to
     * <code>open</code>, which enables it to run in any open Capacity Reservation that
     * has matching attributes (instance type, platform, Availability Zone).</p>
     */
    inline const LaunchTemplateCapacityReservationSpecificationRequest& GetCapacityReservationSpecification() const { return m_capacityReservationSpecification; }
    inline bool CapacityReservationSpecificationHasBeenSet() const { return m_capacityReservationSpecificationHasBeenSet; }
    template<typename CapacityReservationSpecificationT = LaunchTemplateCapacityReservationSpecificationRequest>
    void SetCapacityReservationSpecification(CapacityReservationSpecificationT&& value) { m_capacityReservationSpecificationHasBeenSet = true; m_capacityReservationSpecification = std::forward<CapacityReservationSpecificationT>(value); }
    template<typename CapacityReservationSpecificationT = LaunchTemplateCapacityReservationSpecificationRequest>
    RequestLaunchTemplateData& WithCapacityReservationSpecification(CapacityReservationSpecificationT&& value) { SetCapacityReservationSpecification(std::forward<CapacityReservationSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license configurations.</p>
     */
    inline const Aws::Vector<LaunchTemplateLicenseConfigurationRequest>& GetLicenseSpecifications() const { return m_licenseSpecifications; }
    inline bool LicenseSpecificationsHasBeenSet() const { return m_licenseSpecificationsHasBeenSet; }
    template<typename LicenseSpecificationsT = Aws::Vector<LaunchTemplateLicenseConfigurationRequest>>
    void SetLicenseSpecifications(LicenseSpecificationsT&& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications = std::forward<LicenseSpecificationsT>(value); }
    template<typename LicenseSpecificationsT = Aws::Vector<LaunchTemplateLicenseConfigurationRequest>>
    RequestLaunchTemplateData& WithLicenseSpecifications(LicenseSpecificationsT&& value) { SetLicenseSpecifications(std::forward<LicenseSpecificationsT>(value)); return *this;}
    template<typename LicenseSpecificationsT = LaunchTemplateLicenseConfigurationRequest>
    RequestLaunchTemplateData& AddLicenseSpecifications(LicenseSpecificationsT&& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications.emplace_back(std::forward<LicenseSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether an instance is enabled for hibernation. This parameter is
     * valid only if the instance meets the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/hibernating-prerequisites.html">hibernation
     * prerequisites</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html">Hibernate
     * your Amazon EC2 instance</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const LaunchTemplateHibernationOptionsRequest& GetHibernationOptions() const { return m_hibernationOptions; }
    inline bool HibernationOptionsHasBeenSet() const { return m_hibernationOptionsHasBeenSet; }
    template<typename HibernationOptionsT = LaunchTemplateHibernationOptionsRequest>
    void SetHibernationOptions(HibernationOptionsT&& value) { m_hibernationOptionsHasBeenSet = true; m_hibernationOptions = std::forward<HibernationOptionsT>(value); }
    template<typename HibernationOptionsT = LaunchTemplateHibernationOptionsRequest>
    RequestLaunchTemplateData& WithHibernationOptions(HibernationOptionsT&& value) { SetHibernationOptions(std::forward<HibernationOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/configuring-instance-metadata-options.html">Configure
     * the Instance Metadata Service options</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline const LaunchTemplateInstanceMetadataOptionsRequest& GetMetadataOptions() const { return m_metadataOptions; }
    inline bool MetadataOptionsHasBeenSet() const { return m_metadataOptionsHasBeenSet; }
    template<typename MetadataOptionsT = LaunchTemplateInstanceMetadataOptionsRequest>
    void SetMetadataOptions(MetadataOptionsT&& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = std::forward<MetadataOptionsT>(value); }
    template<typename MetadataOptionsT = LaunchTemplateInstanceMetadataOptionsRequest>
    RequestLaunchTemplateData& WithMetadataOptions(MetadataOptionsT&& value) { SetMetadataOptions(std::forward<MetadataOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance is enabled for Amazon Web Services Nitro
     * Enclaves. For more information, see <a
     * href="https://docs.aws.amazon.com/enclaves/latest/user/nitro-enclave.html">What
     * is Nitro Enclaves?</a> in the <i>Amazon Web Services Nitro Enclaves User
     * Guide</i>.</p> <p>You can't enable Amazon Web Services Nitro Enclaves and
     * hibernation on the same instance.</p>
     */
    inline const LaunchTemplateEnclaveOptionsRequest& GetEnclaveOptions() const { return m_enclaveOptions; }
    inline bool EnclaveOptionsHasBeenSet() const { return m_enclaveOptionsHasBeenSet; }
    template<typename EnclaveOptionsT = LaunchTemplateEnclaveOptionsRequest>
    void SetEnclaveOptions(EnclaveOptionsT&& value) { m_enclaveOptionsHasBeenSet = true; m_enclaveOptions = std::forward<EnclaveOptionsT>(value); }
    template<typename EnclaveOptionsT = LaunchTemplateEnclaveOptionsRequest>
    RequestLaunchTemplateData& WithEnclaveOptions(EnclaveOptionsT&& value) { SetEnclaveOptions(std::forward<EnclaveOptionsT>(value)); return *this;}
    ///@}

    ///@{
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
     * placement score</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const InstanceRequirementsRequest& GetInstanceRequirements() const { return m_instanceRequirements; }
    inline bool InstanceRequirementsHasBeenSet() const { return m_instanceRequirementsHasBeenSet; }
    template<typename InstanceRequirementsT = InstanceRequirementsRequest>
    void SetInstanceRequirements(InstanceRequirementsT&& value) { m_instanceRequirementsHasBeenSet = true; m_instanceRequirements = std::forward<InstanceRequirementsT>(value); }
    template<typename InstanceRequirementsT = InstanceRequirementsRequest>
    RequestLaunchTemplateData& WithInstanceRequirements(InstanceRequirementsT&& value) { SetInstanceRequirements(std::forward<InstanceRequirementsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for the instance hostname. The default values are inherited from
     * the subnet.</p>
     */
    inline const LaunchTemplatePrivateDnsNameOptionsRequest& GetPrivateDnsNameOptions() const { return m_privateDnsNameOptions; }
    inline bool PrivateDnsNameOptionsHasBeenSet() const { return m_privateDnsNameOptionsHasBeenSet; }
    template<typename PrivateDnsNameOptionsT = LaunchTemplatePrivateDnsNameOptionsRequest>
    void SetPrivateDnsNameOptions(PrivateDnsNameOptionsT&& value) { m_privateDnsNameOptionsHasBeenSet = true; m_privateDnsNameOptions = std::forward<PrivateDnsNameOptionsT>(value); }
    template<typename PrivateDnsNameOptionsT = LaunchTemplatePrivateDnsNameOptionsRequest>
    RequestLaunchTemplateData& WithPrivateDnsNameOptions(PrivateDnsNameOptionsT&& value) { SetPrivateDnsNameOptions(std::forward<PrivateDnsNameOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maintenance options for the instance.</p>
     */
    inline const LaunchTemplateInstanceMaintenanceOptionsRequest& GetMaintenanceOptions() const { return m_maintenanceOptions; }
    inline bool MaintenanceOptionsHasBeenSet() const { return m_maintenanceOptionsHasBeenSet; }
    template<typename MaintenanceOptionsT = LaunchTemplateInstanceMaintenanceOptionsRequest>
    void SetMaintenanceOptions(MaintenanceOptionsT&& value) { m_maintenanceOptionsHasBeenSet = true; m_maintenanceOptions = std::forward<MaintenanceOptionsT>(value); }
    template<typename MaintenanceOptionsT = LaunchTemplateInstanceMaintenanceOptionsRequest>
    RequestLaunchTemplateData& WithMaintenanceOptions(MaintenanceOptionsT&& value) { SetMaintenanceOptions(std::forward<MaintenanceOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to enable the instance for stop protection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-stop-protection.html">Enable
     * stop protection for your EC2 instances</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline bool GetDisableApiStop() const { return m_disableApiStop; }
    inline bool DisableApiStopHasBeenSet() const { return m_disableApiStopHasBeenSet; }
    inline void SetDisableApiStop(bool value) { m_disableApiStopHasBeenSet = true; m_disableApiStop = value; }
    inline RequestLaunchTemplateData& WithDisableApiStop(bool value) { SetDisableApiStop(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity that manages the launch template.</p>
     */
    inline const OperatorRequest& GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    template<typename OperatorT = OperatorRequest>
    void SetOperator(OperatorT&& value) { m_operatorHasBeenSet = true; m_operator = std::forward<OperatorT>(value); }
    template<typename OperatorT = OperatorRequest>
    RequestLaunchTemplateData& WithOperator(OperatorT&& value) { SetOperator(std::forward<OperatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains launch template settings to boost network performance for the type
     * of workload that runs on your instance.</p>
     */
    inline const LaunchTemplateNetworkPerformanceOptionsRequest& GetNetworkPerformanceOptions() const { return m_networkPerformanceOptions; }
    inline bool NetworkPerformanceOptionsHasBeenSet() const { return m_networkPerformanceOptionsHasBeenSet; }
    template<typename NetworkPerformanceOptionsT = LaunchTemplateNetworkPerformanceOptionsRequest>
    void SetNetworkPerformanceOptions(NetworkPerformanceOptionsT&& value) { m_networkPerformanceOptionsHasBeenSet = true; m_networkPerformanceOptions = std::forward<NetworkPerformanceOptionsT>(value); }
    template<typename NetworkPerformanceOptionsT = LaunchTemplateNetworkPerformanceOptionsRequest>
    RequestLaunchTemplateData& WithNetworkPerformanceOptions(NetworkPerformanceOptionsT&& value) { SetNetworkPerformanceOptions(std::forward<NetworkPerformanceOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet = false;

    bool m_ebsOptimized{false};
    bool m_ebsOptimizedHasBeenSet = false;

    LaunchTemplateIamInstanceProfileSpecificationRequest m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet = false;

    Aws::Vector<LaunchTemplateBlockDeviceMappingRequest> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecificationRequest> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    InstanceType m_instanceType{InstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    LaunchTemplatesMonitoringRequest m_monitoring;
    bool m_monitoringHasBeenSet = false;

    LaunchTemplatePlacementRequest m_placement;
    bool m_placementHasBeenSet = false;

    Aws::String m_ramDiskId;
    bool m_ramDiskIdHasBeenSet = false;

    bool m_disableApiTermination{false};
    bool m_disableApiTerminationHasBeenSet = false;

    ShutdownBehavior m_instanceInitiatedShutdownBehavior{ShutdownBehavior::NOT_SET};
    bool m_instanceInitiatedShutdownBehaviorHasBeenSet = false;

    Aws::String m_userData;
    bool m_userDataHasBeenSet = false;

    Aws::Vector<LaunchTemplateTagSpecificationRequest> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    LaunchTemplateInstanceMarketOptionsRequest m_instanceMarketOptions;
    bool m_instanceMarketOptionsHasBeenSet = false;

    CreditSpecificationRequest m_creditSpecification;
    bool m_creditSpecificationHasBeenSet = false;

    LaunchTemplateCpuOptionsRequest m_cpuOptions;
    bool m_cpuOptionsHasBeenSet = false;

    LaunchTemplateCapacityReservationSpecificationRequest m_capacityReservationSpecification;
    bool m_capacityReservationSpecificationHasBeenSet = false;

    Aws::Vector<LaunchTemplateLicenseConfigurationRequest> m_licenseSpecifications;
    bool m_licenseSpecificationsHasBeenSet = false;

    LaunchTemplateHibernationOptionsRequest m_hibernationOptions;
    bool m_hibernationOptionsHasBeenSet = false;

    LaunchTemplateInstanceMetadataOptionsRequest m_metadataOptions;
    bool m_metadataOptionsHasBeenSet = false;

    LaunchTemplateEnclaveOptionsRequest m_enclaveOptions;
    bool m_enclaveOptionsHasBeenSet = false;

    InstanceRequirementsRequest m_instanceRequirements;
    bool m_instanceRequirementsHasBeenSet = false;

    LaunchTemplatePrivateDnsNameOptionsRequest m_privateDnsNameOptions;
    bool m_privateDnsNameOptionsHasBeenSet = false;

    LaunchTemplateInstanceMaintenanceOptionsRequest m_maintenanceOptions;
    bool m_maintenanceOptionsHasBeenSet = false;

    bool m_disableApiStop{false};
    bool m_disableApiStopHasBeenSet = false;

    OperatorRequest m_operator;
    bool m_operatorHasBeenSet = false;

    LaunchTemplateNetworkPerformanceOptionsRequest m_networkPerformanceOptions;
    bool m_networkPerformanceOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
