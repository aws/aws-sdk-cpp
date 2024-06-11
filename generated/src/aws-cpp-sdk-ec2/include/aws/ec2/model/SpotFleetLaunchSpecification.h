﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/IamInstanceProfileSpecification.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/ec2/model/SpotFleetMonitoring.h>
#include <aws/ec2/model/SpotPlacement.h>
#include <aws/ec2/model/InstanceRequirements.h>
#include <aws/ec2/model/GroupIdentifier.h>
#include <aws/ec2/model/BlockDeviceMapping.h>
#include <aws/ec2/model/InstanceNetworkInterfaceSpecification.h>
#include <aws/ec2/model/SpotFleetTagSpecification.h>
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
   * <p>Describes the launch specification for one or more Spot Instances. If you
   * include On-Demand capacity in your fleet request or want to specify an EFA
   * network device, you can't use <code>SpotFleetLaunchSpecification</code>; you
   * must use <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_LaunchTemplateConfig.html">LaunchTemplateConfig</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SpotFleetLaunchSpecification">AWS
   * API Reference</a></p>
   */
  class SpotFleetLaunchSpecification
  {
  public:
    AWS_EC2_API SpotFleetLaunchSpecification();
    AWS_EC2_API SpotFleetLaunchSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SpotFleetLaunchSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The security groups.</p> <p>If you specify a network interface, you must
     * specify any security groups as part of the network interface instead of using
     * this parameter.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<GroupIdentifier>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<GroupIdentifier>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline SpotFleetLaunchSpecification& WithSecurityGroups(const Aws::Vector<GroupIdentifier>& value) { SetSecurityGroups(value); return *this;}
    inline SpotFleetLaunchSpecification& WithSecurityGroups(Aws::Vector<GroupIdentifier>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline SpotFleetLaunchSpecification& AddSecurityGroups(const GroupIdentifier& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline SpotFleetLaunchSpecification& AddSecurityGroups(GroupIdentifier&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Deprecated.</p>
     */
    inline const Aws::String& GetAddressingType() const{ return m_addressingType; }
    inline bool AddressingTypeHasBeenSet() const { return m_addressingTypeHasBeenSet; }
    inline void SetAddressingType(const Aws::String& value) { m_addressingTypeHasBeenSet = true; m_addressingType = value; }
    inline void SetAddressingType(Aws::String&& value) { m_addressingTypeHasBeenSet = true; m_addressingType = std::move(value); }
    inline void SetAddressingType(const char* value) { m_addressingTypeHasBeenSet = true; m_addressingType.assign(value); }
    inline SpotFleetLaunchSpecification& WithAddressingType(const Aws::String& value) { SetAddressingType(value); return *this;}
    inline SpotFleetLaunchSpecification& WithAddressingType(Aws::String&& value) { SetAddressingType(std::move(value)); return *this;}
    inline SpotFleetLaunchSpecification& WithAddressingType(const char* value) { SetAddressingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more block devices that are mapped to the Spot Instances. You can't
     * specify both a snapshot ID and an encryption value. This is because only blank
     * volumes can be encrypted on creation. If a snapshot is the basis for a volume,
     * it is not blank and its encryption status is used for the volume encryption
     * status.</p>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }
    inline void SetBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }
    inline void SetBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }
    inline SpotFleetLaunchSpecification& WithBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}
    inline SpotFleetLaunchSpecification& WithBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}
    inline SpotFleetLaunchSpecification& AddBlockDeviceMappings(const BlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }
    inline SpotFleetLaunchSpecification& AddBlockDeviceMappings(BlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instances are optimized for EBS I/O. This optimization
     * provides dedicated throughput to Amazon EBS and an optimized configuration stack
     * to provide optimal EBS I/O performance. This optimization isn't available with
     * all instance types. Additional usage charges apply when using an EBS Optimized
     * instance.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }
    inline SpotFleetLaunchSpecification& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM instance profile.</p>
     */
    inline const IamInstanceProfileSpecification& GetIamInstanceProfile() const{ return m_iamInstanceProfile; }
    inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }
    inline void SetIamInstanceProfile(const IamInstanceProfileSpecification& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = value; }
    inline void SetIamInstanceProfile(IamInstanceProfileSpecification&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::move(value); }
    inline SpotFleetLaunchSpecification& WithIamInstanceProfile(const IamInstanceProfileSpecification& value) { SetIamInstanceProfile(value); return *this;}
    inline SpotFleetLaunchSpecification& WithIamInstanceProfile(IamInstanceProfileSpecification&& value) { SetIamInstanceProfile(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the AMI.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }
    inline SpotFleetLaunchSpecification& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}
    inline SpotFleetLaunchSpecification& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}
    inline SpotFleetLaunchSpecification& WithImageId(const char* value) { SetImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline SpotFleetLaunchSpecification& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}
    inline SpotFleetLaunchSpecification& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the kernel.</p>
     */
    inline const Aws::String& GetKernelId() const{ return m_kernelId; }
    inline bool KernelIdHasBeenSet() const { return m_kernelIdHasBeenSet; }
    inline void SetKernelId(const Aws::String& value) { m_kernelIdHasBeenSet = true; m_kernelId = value; }
    inline void SetKernelId(Aws::String&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::move(value); }
    inline void SetKernelId(const char* value) { m_kernelIdHasBeenSet = true; m_kernelId.assign(value); }
    inline SpotFleetLaunchSpecification& WithKernelId(const Aws::String& value) { SetKernelId(value); return *this;}
    inline SpotFleetLaunchSpecification& WithKernelId(Aws::String&& value) { SetKernelId(std::move(value)); return *this;}
    inline SpotFleetLaunchSpecification& WithKernelId(const char* value) { SetKernelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the key pair.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }
    inline SpotFleetLaunchSpecification& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}
    inline SpotFleetLaunchSpecification& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}
    inline SpotFleetLaunchSpecification& WithKeyName(const char* value) { SetKeyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable or disable monitoring for the instances.</p>
     */
    inline const SpotFleetMonitoring& GetMonitoring() const{ return m_monitoring; }
    inline bool MonitoringHasBeenSet() const { return m_monitoringHasBeenSet; }
    inline void SetMonitoring(const SpotFleetMonitoring& value) { m_monitoringHasBeenSet = true; m_monitoring = value; }
    inline void SetMonitoring(SpotFleetMonitoring&& value) { m_monitoringHasBeenSet = true; m_monitoring = std::move(value); }
    inline SpotFleetLaunchSpecification& WithMonitoring(const SpotFleetMonitoring& value) { SetMonitoring(value); return *this;}
    inline SpotFleetLaunchSpecification& WithMonitoring(SpotFleetMonitoring&& value) { SetMonitoring(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interfaces.</p>  <p>
     * <code>SpotFleetLaunchSpecification</code> does not support Elastic Fabric
     * Adapter (EFA). You must use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_LaunchTemplateConfig.html">LaunchTemplateConfig</a>
     * instead.</p> 
     */
    inline const Aws::Vector<InstanceNetworkInterfaceSpecification>& GetNetworkInterfaces() const{ return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    inline void SetNetworkInterfaces(const Aws::Vector<InstanceNetworkInterfaceSpecification>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }
    inline void SetNetworkInterfaces(Aws::Vector<InstanceNetworkInterfaceSpecification>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }
    inline SpotFleetLaunchSpecification& WithNetworkInterfaces(const Aws::Vector<InstanceNetworkInterfaceSpecification>& value) { SetNetworkInterfaces(value); return *this;}
    inline SpotFleetLaunchSpecification& WithNetworkInterfaces(Aws::Vector<InstanceNetworkInterfaceSpecification>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}
    inline SpotFleetLaunchSpecification& AddNetworkInterfaces(const InstanceNetworkInterfaceSpecification& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }
    inline SpotFleetLaunchSpecification& AddNetworkInterfaces(InstanceNetworkInterfaceSpecification&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The placement information.</p>
     */
    inline const SpotPlacement& GetPlacement() const{ return m_placement; }
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }
    inline void SetPlacement(const SpotPlacement& value) { m_placementHasBeenSet = true; m_placement = value; }
    inline void SetPlacement(SpotPlacement&& value) { m_placementHasBeenSet = true; m_placement = std::move(value); }
    inline SpotFleetLaunchSpecification& WithPlacement(const SpotPlacement& value) { SetPlacement(value); return *this;}
    inline SpotFleetLaunchSpecification& WithPlacement(SpotPlacement&& value) { SetPlacement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the RAM disk. Some kernels require additional drivers at launch.
     * Check the kernel requirements for information about whether you need to specify
     * a RAM disk. To find kernel requirements, refer to the Amazon Web Services
     * Resource Center and search for the kernel ID.</p>
     */
    inline const Aws::String& GetRamdiskId() const{ return m_ramdiskId; }
    inline bool RamdiskIdHasBeenSet() const { return m_ramdiskIdHasBeenSet; }
    inline void SetRamdiskId(const Aws::String& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = value; }
    inline void SetRamdiskId(Aws::String&& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = std::move(value); }
    inline void SetRamdiskId(const char* value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId.assign(value); }
    inline SpotFleetLaunchSpecification& WithRamdiskId(const Aws::String& value) { SetRamdiskId(value); return *this;}
    inline SpotFleetLaunchSpecification& WithRamdiskId(Aws::String&& value) { SetRamdiskId(std::move(value)); return *this;}
    inline SpotFleetLaunchSpecification& WithRamdiskId(const char* value) { SetRamdiskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. We do not recommend using this parameter because it can lead to
     * increased interruptions. If you do not specify this parameter, you will pay the
     * current Spot price.</p>  <p>If you specify a maximum price, your
     * instances will be interrupted more frequently than if you do not specify this
     * parameter.</p> 
     */
    inline const Aws::String& GetSpotPrice() const{ return m_spotPrice; }
    inline bool SpotPriceHasBeenSet() const { return m_spotPriceHasBeenSet; }
    inline void SetSpotPrice(const Aws::String& value) { m_spotPriceHasBeenSet = true; m_spotPrice = value; }
    inline void SetSpotPrice(Aws::String&& value) { m_spotPriceHasBeenSet = true; m_spotPrice = std::move(value); }
    inline void SetSpotPrice(const char* value) { m_spotPriceHasBeenSet = true; m_spotPrice.assign(value); }
    inline SpotFleetLaunchSpecification& WithSpotPrice(const Aws::String& value) { SetSpotPrice(value); return *this;}
    inline SpotFleetLaunchSpecification& WithSpotPrice(Aws::String&& value) { SetSpotPrice(std::move(value)); return *this;}
    inline SpotFleetLaunchSpecification& WithSpotPrice(const char* value) { SetSpotPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the subnets in which to launch the instances. To specify multiple
     * subnets, separate them using commas; for example, "subnet-1234abcdeexample1,
     * subnet-0987cdef6example2".</p> <p>If you specify a network interface, you must
     * specify any subnets as part of the network interface instead of using this
     * parameter.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline SpotFleetLaunchSpecification& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline SpotFleetLaunchSpecification& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline SpotFleetLaunchSpecification& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base64-encoded user data that instances use when starting up. User data
     * is limited to 16 KB.</p>
     */
    inline const Aws::String& GetUserData() const{ return m_userData; }
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }
    inline void SetUserData(const Aws::String& value) { m_userDataHasBeenSet = true; m_userData = value; }
    inline void SetUserData(Aws::String&& value) { m_userDataHasBeenSet = true; m_userData = std::move(value); }
    inline void SetUserData(const char* value) { m_userDataHasBeenSet = true; m_userData.assign(value); }
    inline SpotFleetLaunchSpecification& WithUserData(const Aws::String& value) { SetUserData(value); return *this;}
    inline SpotFleetLaunchSpecification& WithUserData(Aws::String&& value) { SetUserData(std::move(value)); return *this;}
    inline SpotFleetLaunchSpecification& WithUserData(const char* value) { SetUserData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of units provided by the specified instance type. These are the
     * same units that you chose to set the target capacity in terms of instances, or a
     * performance characteristic such as vCPUs, memory, or I/O.</p> <p>If the target
     * capacity divided by this value is not a whole number, Amazon EC2 rounds the
     * number of instances to the next whole number. If this value is not specified,
     * the default is 1.</p>
     */
    inline double GetWeightedCapacity() const{ return m_weightedCapacity; }
    inline bool WeightedCapacityHasBeenSet() const { return m_weightedCapacityHasBeenSet; }
    inline void SetWeightedCapacity(double value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity = value; }
    inline SpotFleetLaunchSpecification& WithWeightedCapacity(double value) { SetWeightedCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply during creation.</p>
     */
    inline const Aws::Vector<SpotFleetTagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<SpotFleetTagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<SpotFleetTagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline SpotFleetLaunchSpecification& WithTagSpecifications(const Aws::Vector<SpotFleetTagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline SpotFleetLaunchSpecification& WithTagSpecifications(Aws::Vector<SpotFleetTagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline SpotFleetLaunchSpecification& AddTagSpecifications(const SpotFleetTagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline SpotFleetLaunchSpecification& AddTagSpecifications(SpotFleetTagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with those attributes.</p>  <p>If
     * you specify <code>InstanceRequirements</code>, you can't specify
     * <code>InstanceType</code>.</p> 
     */
    inline const InstanceRequirements& GetInstanceRequirements() const{ return m_instanceRequirements; }
    inline bool InstanceRequirementsHasBeenSet() const { return m_instanceRequirementsHasBeenSet; }
    inline void SetInstanceRequirements(const InstanceRequirements& value) { m_instanceRequirementsHasBeenSet = true; m_instanceRequirements = value; }
    inline void SetInstanceRequirements(InstanceRequirements&& value) { m_instanceRequirementsHasBeenSet = true; m_instanceRequirements = std::move(value); }
    inline SpotFleetLaunchSpecification& WithInstanceRequirements(const InstanceRequirements& value) { SetInstanceRequirements(value); return *this;}
    inline SpotFleetLaunchSpecification& WithInstanceRequirements(InstanceRequirements&& value) { SetInstanceRequirements(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GroupIdentifier> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::String m_addressingType;
    bool m_addressingTypeHasBeenSet = false;

    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet = false;

    IamInstanceProfileSpecification m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    SpotFleetMonitoring m_monitoring;
    bool m_monitoringHasBeenSet = false;

    Aws::Vector<InstanceNetworkInterfaceSpecification> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;

    SpotPlacement m_placement;
    bool m_placementHasBeenSet = false;

    Aws::String m_ramdiskId;
    bool m_ramdiskIdHasBeenSet = false;

    Aws::String m_spotPrice;
    bool m_spotPriceHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_userData;
    bool m_userDataHasBeenSet = false;

    double m_weightedCapacity;
    bool m_weightedCapacityHasBeenSet = false;

    Aws::Vector<SpotFleetTagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    InstanceRequirements m_instanceRequirements;
    bool m_instanceRequirementsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
