/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/InstanceMonitoring.h>
#include <aws/autoscaling/model/InstanceMetadataOptions.h>
#include <aws/autoscaling/model/BlockDeviceMapping.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   */
  class CreateLaunchConfigurationRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API CreateLaunchConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLaunchConfiguration"; }

    AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

  protected:
    AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the launch configuration. This name must be unique per Region per
     * account.</p>
     */
    inline const Aws::String& GetLaunchConfigurationName() const { return m_launchConfigurationName; }
    inline bool LaunchConfigurationNameHasBeenSet() const { return m_launchConfigurationNameHasBeenSet; }
    template<typename LaunchConfigurationNameT = Aws::String>
    void SetLaunchConfigurationName(LaunchConfigurationNameT&& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = std::forward<LaunchConfigurationNameT>(value); }
    template<typename LaunchConfigurationNameT = Aws::String>
    CreateLaunchConfigurationRequest& WithLaunchConfigurationName(LaunchConfigurationNameT&& value) { SetLaunchConfigurationName(std::forward<LaunchConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Machine Image (AMI) that was assigned during
     * registration. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Find
     * a Linux AMI</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>If you specify
     * <code>InstanceId</code>, an <code>ImageId</code> is not required.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    CreateLaunchConfigurationRequest& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the key pair. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 key pairs and Amazon EC2 instances</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetKeyName() const { return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    template<typename KeyNameT = Aws::String>
    void SetKeyName(KeyNameT&& value) { m_keyNameHasBeenSet = true; m_keyName = std::forward<KeyNameT>(value); }
    template<typename KeyNameT = Aws::String>
    CreateLaunchConfigurationRequest& WithKeyName(KeyNameT&& value) { SetKeyName(std::forward<KeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list that contains the security group IDs to assign to the instances in the
     * Auto Scaling group. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-security-groups.html">Control
     * traffic to your Amazon Web Services resources using security groups</a> in the
     * <i>Amazon Virtual Private Cloud User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    CreateLaunchConfigurationRequest& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    CreateLaunchConfigurationRequest& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Available for backward compatibility.</p>
     */
    inline const Aws::String& GetClassicLinkVPCId() const { return m_classicLinkVPCId; }
    inline bool ClassicLinkVPCIdHasBeenSet() const { return m_classicLinkVPCIdHasBeenSet; }
    template<typename ClassicLinkVPCIdT = Aws::String>
    void SetClassicLinkVPCId(ClassicLinkVPCIdT&& value) { m_classicLinkVPCIdHasBeenSet = true; m_classicLinkVPCId = std::forward<ClassicLinkVPCIdT>(value); }
    template<typename ClassicLinkVPCIdT = Aws::String>
    CreateLaunchConfigurationRequest& WithClassicLinkVPCId(ClassicLinkVPCIdT&& value) { SetClassicLinkVPCId(std::forward<ClassicLinkVPCIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Available for backward compatibility.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClassicLinkVPCSecurityGroups() const { return m_classicLinkVPCSecurityGroups; }
    inline bool ClassicLinkVPCSecurityGroupsHasBeenSet() const { return m_classicLinkVPCSecurityGroupsHasBeenSet; }
    template<typename ClassicLinkVPCSecurityGroupsT = Aws::Vector<Aws::String>>
    void SetClassicLinkVPCSecurityGroups(ClassicLinkVPCSecurityGroupsT&& value) { m_classicLinkVPCSecurityGroupsHasBeenSet = true; m_classicLinkVPCSecurityGroups = std::forward<ClassicLinkVPCSecurityGroupsT>(value); }
    template<typename ClassicLinkVPCSecurityGroupsT = Aws::Vector<Aws::String>>
    CreateLaunchConfigurationRequest& WithClassicLinkVPCSecurityGroups(ClassicLinkVPCSecurityGroupsT&& value) { SetClassicLinkVPCSecurityGroups(std::forward<ClassicLinkVPCSecurityGroupsT>(value)); return *this;}
    template<typename ClassicLinkVPCSecurityGroupsT = Aws::String>
    CreateLaunchConfigurationRequest& AddClassicLinkVPCSecurityGroups(ClassicLinkVPCSecurityGroupsT&& value) { m_classicLinkVPCSecurityGroupsHasBeenSet = true; m_classicLinkVPCSecurityGroups.emplace_back(std::forward<ClassicLinkVPCSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user data to make available to the launched EC2 instances. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> (Linux) and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> (Windows). If you are using a command line tool,
     * base64-encoding is performed for you, and you can load the text from a file.
     * Otherwise, you must provide base64-encoded text. User data is limited to 16
     * KB.</p>
     */
    inline const Aws::String& GetUserData() const { return m_userData; }
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }
    template<typename UserDataT = Aws::String>
    void SetUserData(UserDataT&& value) { m_userDataHasBeenSet = true; m_userData = std::forward<UserDataT>(value); }
    template<typename UserDataT = Aws::String>
    CreateLaunchConfigurationRequest& WithUserData(UserDataT&& value) { SetUserData(std::forward<UserDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance to use to create the launch configuration. The new
     * launch configuration derives attributes from the instance, except for the block
     * device mapping.</p> <p>To create a launch configuration with a block device
     * mapping or override any other instance attributes, specify them as part of the
     * same request.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-launch-config.html">Create
     * a launch configuration</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    CreateLaunchConfigurationRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the instance type of the EC2 instance. For information about
     * available instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available
     * instance types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>If you specify
     * <code>InstanceId</code>, an <code>InstanceType</code> is not required.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    CreateLaunchConfigurationRequest& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the kernel associated with the AMI.</p>  <p>We recommend that
     * you use PV-GRUB instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedKernels.html">User
     * provided kernels</a> in the <i>Amazon EC2 User Guide</i>.</p> 
     */
    inline const Aws::String& GetKernelId() const { return m_kernelId; }
    inline bool KernelIdHasBeenSet() const { return m_kernelIdHasBeenSet; }
    template<typename KernelIdT = Aws::String>
    void SetKernelId(KernelIdT&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::forward<KernelIdT>(value); }
    template<typename KernelIdT = Aws::String>
    CreateLaunchConfigurationRequest& WithKernelId(KernelIdT&& value) { SetKernelId(std::forward<KernelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the RAM disk to select.</p>  <p>We recommend that you use
     * PV-GRUB instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedKernels.html">User
     * provided kernels</a> in the <i>Amazon EC2 User Guide</i>.</p> 
     */
    inline const Aws::String& GetRamdiskId() const { return m_ramdiskId; }
    inline bool RamdiskIdHasBeenSet() const { return m_ramdiskIdHasBeenSet; }
    template<typename RamdiskIdT = Aws::String>
    void SetRamdiskId(RamdiskIdT&& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = std::forward<RamdiskIdT>(value); }
    template<typename RamdiskIdT = Aws::String>
    CreateLaunchConfigurationRequest& WithRamdiskId(RamdiskIdT&& value) { SetRamdiskId(std::forward<RamdiskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block device mapping entries that define the block devices to attach to
     * the instances at launch. By default, the block devices specified in the block
     * device mapping for the AMI are used. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * device mappings</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const { return m_blockDeviceMappings; }
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }
    template<typename BlockDeviceMappingsT = Aws::Vector<BlockDeviceMapping>>
    void SetBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::forward<BlockDeviceMappingsT>(value); }
    template<typename BlockDeviceMappingsT = Aws::Vector<BlockDeviceMapping>>
    CreateLaunchConfigurationRequest& WithBlockDeviceMappings(BlockDeviceMappingsT&& value) { SetBlockDeviceMappings(std::forward<BlockDeviceMappingsT>(value)); return *this;}
    template<typename BlockDeviceMappingsT = BlockDeviceMapping>
    CreateLaunchConfigurationRequest& AddBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.emplace_back(std::forward<BlockDeviceMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Controls whether instances in this group are launched with detailed
     * (<code>true</code>) or basic (<code>false</code>) monitoring.</p> <p>The default
     * value is <code>true</code> (enabled).</p>  <p>When detailed
     * monitoring is enabled, Amazon CloudWatch generates metrics every minute and your
     * account is charged a fee. When you disable detailed monitoring, CloudWatch
     * generates metrics every 5 minutes. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/latest/userguide/enable-as-instance-metrics.html">Configure
     * monitoring for Auto Scaling instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> 
     */
    inline const InstanceMonitoring& GetInstanceMonitoring() const { return m_instanceMonitoring; }
    inline bool InstanceMonitoringHasBeenSet() const { return m_instanceMonitoringHasBeenSet; }
    template<typename InstanceMonitoringT = InstanceMonitoring>
    void SetInstanceMonitoring(InstanceMonitoringT&& value) { m_instanceMonitoringHasBeenSet = true; m_instanceMonitoring = std::forward<InstanceMonitoringT>(value); }
    template<typename InstanceMonitoringT = InstanceMonitoring>
    CreateLaunchConfigurationRequest& WithInstanceMonitoring(InstanceMonitoringT&& value) { SetInstanceMonitoring(std::forward<InstanceMonitoringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum hourly price to be paid for any Spot Instance launched to fulfill
     * the request. Spot Instances are launched when the price you specify exceeds the
     * current Spot price. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/launch-template-spot-instances.html">Request
     * Spot Instances for fault-tolerant and flexible applications</a> in the <i>Amazon
     * EC2 Auto Scaling User Guide</i>.</p> <p>Valid Range: Minimum value of 0.001</p>
     *  <p>When you change your maximum price by creating a new launch
     * configuration, running instances will continue to run as long as the maximum
     * price for those running instances is higher than the current Spot price.</p>
     * 
     */
    inline const Aws::String& GetSpotPrice() const { return m_spotPrice; }
    inline bool SpotPriceHasBeenSet() const { return m_spotPriceHasBeenSet; }
    template<typename SpotPriceT = Aws::String>
    void SetSpotPrice(SpotPriceT&& value) { m_spotPriceHasBeenSet = true; m_spotPrice = std::forward<SpotPriceT>(value); }
    template<typename SpotPriceT = Aws::String>
    CreateLaunchConfigurationRequest& WithSpotPrice(SpotPriceT&& value) { SetSpotPrice(std::forward<SpotPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or the Amazon Resource Name (ARN) of the instance profile associated
     * with the IAM role for the instance. The instance profile contains the IAM role.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/us-iam-role.html">IAM
     * role for applications that run on Amazon EC2 instances</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline const Aws::String& GetIamInstanceProfile() const { return m_iamInstanceProfile; }
    inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }
    template<typename IamInstanceProfileT = Aws::String>
    void SetIamInstanceProfile(IamInstanceProfileT&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::forward<IamInstanceProfileT>(value); }
    template<typename IamInstanceProfileT = Aws::String>
    CreateLaunchConfigurationRequest& WithIamInstanceProfile(IamInstanceProfileT&& value) { SetIamInstanceProfile(std::forward<IamInstanceProfileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the launch configuration is optimized for EBS I/O
     * (<code>true</code>) or not (<code>false</code>). The optimization provides
     * dedicated throughput to Amazon EBS and an optimized configuration stack to
     * provide optimal I/O performance. This optimization is not available with all
     * instance types. Additional fees are incurred when you enable EBS optimization
     * for an instance type that is not EBS-optimized by default. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-optimized.html">Amazon
     * EBS-optimized instances</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>The
     * default value is <code>false</code>.</p>
     */
    inline bool GetEbsOptimized() const { return m_ebsOptimized; }
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }
    inline CreateLaunchConfigurationRequest& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to assign a public IPv4 address to the group's instances.
     * If the instance is launched into a default subnet, the default is to assign a
     * public IPv4 address, unless you disabled the option to assign a public IPv4
     * address on the subnet. If the instance is launched into a nondefault subnet, the
     * default is not to assign a public IPv4 address, unless you enabled the option to
     * assign a public IPv4 address on the subnet.</p> <p>If you specify
     * <code>true</code>, each instance in the Auto Scaling group receives a unique
     * public IPv4 address. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html">Provide
     * network connectivity for your Auto Scaling instances using Amazon VPC</a> in the
     * <i>Amazon EC2 Auto Scaling User Guide</i>.</p> <p>If you specify this property,
     * you must specify at least one subnet for <code>VPCZoneIdentifier</code> when you
     * create your group.</p>
     */
    inline bool GetAssociatePublicIpAddress() const { return m_associatePublicIpAddress; }
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }
    inline CreateLaunchConfigurationRequest& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tenancy of the instance, either <code>default</code> or
     * <code>dedicated</code>. An instance with <code>dedicated</code> tenancy runs on
     * isolated, single-tenant hardware and can only be launched into a VPC. To launch
     * dedicated instances into a shared tenancy VPC (a VPC with the instance placement
     * tenancy attribute set to <code>default</code>), you must set the value of this
     * property to <code>dedicated</code>.</p> <p>If you specify
     * <code>PlacementTenancy</code>, you must specify at least one subnet for
     * <code>VPCZoneIdentifier</code> when you create your group.</p> <p>Valid values:
     * <code>default</code> | <code>dedicated</code> </p>
     */
    inline const Aws::String& GetPlacementTenancy() const { return m_placementTenancy; }
    inline bool PlacementTenancyHasBeenSet() const { return m_placementTenancyHasBeenSet; }
    template<typename PlacementTenancyT = Aws::String>
    void SetPlacementTenancy(PlacementTenancyT&& value) { m_placementTenancyHasBeenSet = true; m_placementTenancy = std::forward<PlacementTenancyT>(value); }
    template<typename PlacementTenancyT = Aws::String>
    CreateLaunchConfigurationRequest& WithPlacementTenancy(PlacementTenancyT&& value) { SetPlacementTenancy(std::forward<PlacementTenancyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata options for the instances. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-launch-config.html#launch-configurations-imds">Configure
     * the instance metadata options</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline const InstanceMetadataOptions& GetMetadataOptions() const { return m_metadataOptions; }
    inline bool MetadataOptionsHasBeenSet() const { return m_metadataOptionsHasBeenSet; }
    template<typename MetadataOptionsT = InstanceMetadataOptions>
    void SetMetadataOptions(MetadataOptionsT&& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = std::forward<MetadataOptionsT>(value); }
    template<typename MetadataOptionsT = InstanceMetadataOptions>
    CreateLaunchConfigurationRequest& WithMetadataOptions(MetadataOptionsT&& value) { SetMetadataOptions(std::forward<MetadataOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_launchConfigurationName;
    bool m_launchConfigurationNameHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::String m_classicLinkVPCId;
    bool m_classicLinkVPCIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_classicLinkVPCSecurityGroups;
    bool m_classicLinkVPCSecurityGroupsHasBeenSet = false;

    Aws::String m_userData;
    bool m_userDataHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet = false;

    Aws::String m_ramdiskId;
    bool m_ramdiskIdHasBeenSet = false;

    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    InstanceMonitoring m_instanceMonitoring;
    bool m_instanceMonitoringHasBeenSet = false;

    Aws::String m_spotPrice;
    bool m_spotPriceHasBeenSet = false;

    Aws::String m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet = false;

    bool m_ebsOptimized{false};
    bool m_ebsOptimizedHasBeenSet = false;

    bool m_associatePublicIpAddress{false};
    bool m_associatePublicIpAddressHasBeenSet = false;

    Aws::String m_placementTenancy;
    bool m_placementTenancyHasBeenSet = false;

    InstanceMetadataOptions m_metadataOptions;
    bool m_metadataOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
