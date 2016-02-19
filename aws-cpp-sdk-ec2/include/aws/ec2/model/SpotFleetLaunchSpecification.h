/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/ec2/model/SpotPlacement.h>
#include <aws/ec2/model/SpotFleetMonitoring.h>
#include <aws/ec2/model/IamInstanceProfileSpecification.h>
#include <aws/ec2/model/GroupIdentifier.h>
#include <aws/ec2/model/BlockDeviceMapping.h>
#include <aws/ec2/model/InstanceNetworkInterfaceSpecification.h>

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
   * <p>Describes the launch specification for an instance.</p>
   */
  class AWS_EC2_API SpotFleetLaunchSpecification
  {
  public:
    SpotFleetLaunchSpecification();
    SpotFleetLaunchSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    SpotFleetLaunchSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The ID of the AMI.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline SpotFleetLaunchSpecification& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the AMI.</p>
     */
    inline SpotFleetLaunchSpecification& WithImageId(Aws::String&& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the AMI.</p>
     */
    inline SpotFleetLaunchSpecification& WithImageId(const char* value) { SetImageId(value); return *this;}

    /**
     * <p>The name of the key pair.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>The name of the key pair.</p>
     */
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }

    /**
     * <p>The name of the key pair.</p>
     */
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = value; }

    /**
     * <p>The name of the key pair.</p>
     */
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }

    /**
     * <p>The name of the key pair.</p>
     */
    inline SpotFleetLaunchSpecification& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>The name of the key pair.</p>
     */
    inline SpotFleetLaunchSpecification& WithKeyName(Aws::String&& value) { SetKeyName(value); return *this;}

    /**
     * <p>The name of the key pair.</p>
     */
    inline SpotFleetLaunchSpecification& WithKeyName(const char* value) { SetKeyName(value); return *this;}

    /**
     * <p>One or more security groups. To request an instance in a nondefault VPC, you
     * must specify the ID of the security group. To request an instance in EC2-Classic
     * or a default VPC, you can specify the name or the ID of the security group.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>One or more security groups. To request an instance in a nondefault VPC, you
     * must specify the ID of the security group. To request an instance in EC2-Classic
     * or a default VPC, you can specify the name or the ID of the security group.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<GroupIdentifier>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>One or more security groups. To request an instance in a nondefault VPC, you
     * must specify the ID of the security group. To request an instance in EC2-Classic
     * or a default VPC, you can specify the name or the ID of the security group.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<GroupIdentifier>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>One or more security groups. To request an instance in a nondefault VPC, you
     * must specify the ID of the security group. To request an instance in EC2-Classic
     * or a default VPC, you can specify the name or the ID of the security group.</p>
     */
    inline SpotFleetLaunchSpecification& WithSecurityGroups(const Aws::Vector<GroupIdentifier>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>One or more security groups. To request an instance in a nondefault VPC, you
     * must specify the ID of the security group. To request an instance in EC2-Classic
     * or a default VPC, you can specify the name or the ID of the security group.</p>
     */
    inline SpotFleetLaunchSpecification& WithSecurityGroups(Aws::Vector<GroupIdentifier>&& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>One or more security groups. To request an instance in a nondefault VPC, you
     * must specify the ID of the security group. To request an instance in EC2-Classic
     * or a default VPC, you can specify the name or the ID of the security group.</p>
     */
    inline SpotFleetLaunchSpecification& AddSecurityGroups(const GroupIdentifier& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>One or more security groups. To request an instance in a nondefault VPC, you
     * must specify the ID of the security group. To request an instance in EC2-Classic
     * or a default VPC, you can specify the name or the ID of the security group.</p>
     */
    inline SpotFleetLaunchSpecification& AddSecurityGroups(GroupIdentifier&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>The Base64-encoded MIME user data to make available to the instances.</p>
     */
    inline const Aws::String& GetUserData() const{ return m_userData; }

    /**
     * <p>The Base64-encoded MIME user data to make available to the instances.</p>
     */
    inline void SetUserData(const Aws::String& value) { m_userDataHasBeenSet = true; m_userData = value; }

    /**
     * <p>The Base64-encoded MIME user data to make available to the instances.</p>
     */
    inline void SetUserData(Aws::String&& value) { m_userDataHasBeenSet = true; m_userData = value; }

    /**
     * <p>The Base64-encoded MIME user data to make available to the instances.</p>
     */
    inline void SetUserData(const char* value) { m_userDataHasBeenSet = true; m_userData.assign(value); }

    /**
     * <p>The Base64-encoded MIME user data to make available to the instances.</p>
     */
    inline SpotFleetLaunchSpecification& WithUserData(const Aws::String& value) { SetUserData(value); return *this;}

    /**
     * <p>The Base64-encoded MIME user data to make available to the instances.</p>
     */
    inline SpotFleetLaunchSpecification& WithUserData(Aws::String&& value) { SetUserData(value); return *this;}

    /**
     * <p>The Base64-encoded MIME user data to make available to the instances.</p>
     */
    inline SpotFleetLaunchSpecification& WithUserData(const char* value) { SetUserData(value); return *this;}

    /**
     * <p>Deprecated.</p>
     */
    inline const Aws::String& GetAddressingType() const{ return m_addressingType; }

    /**
     * <p>Deprecated.</p>
     */
    inline void SetAddressingType(const Aws::String& value) { m_addressingTypeHasBeenSet = true; m_addressingType = value; }

    /**
     * <p>Deprecated.</p>
     */
    inline void SetAddressingType(Aws::String&& value) { m_addressingTypeHasBeenSet = true; m_addressingType = value; }

    /**
     * <p>Deprecated.</p>
     */
    inline void SetAddressingType(const char* value) { m_addressingTypeHasBeenSet = true; m_addressingType.assign(value); }

    /**
     * <p>Deprecated.</p>
     */
    inline SpotFleetLaunchSpecification& WithAddressingType(const Aws::String& value) { SetAddressingType(value); return *this;}

    /**
     * <p>Deprecated.</p>
     */
    inline SpotFleetLaunchSpecification& WithAddressingType(Aws::String&& value) { SetAddressingType(value); return *this;}

    /**
     * <p>Deprecated.</p>
     */
    inline SpotFleetLaunchSpecification& WithAddressingType(const char* value) { SetAddressingType(value); return *this;}

    /**
     * <p>The instance type.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type.</p>
     */
    inline SpotFleetLaunchSpecification& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type.</p>
     */
    inline SpotFleetLaunchSpecification& WithInstanceType(InstanceType&& value) { SetInstanceType(value); return *this;}

    
    inline const SpotPlacement& GetPlacement() const{ return m_placement; }

    
    inline void SetPlacement(const SpotPlacement& value) { m_placementHasBeenSet = true; m_placement = value; }

    
    inline void SetPlacement(SpotPlacement&& value) { m_placementHasBeenSet = true; m_placement = value; }

    
    inline SpotFleetLaunchSpecification& WithPlacement(const SpotPlacement& value) { SetPlacement(value); return *this;}

    
    inline SpotFleetLaunchSpecification& WithPlacement(SpotPlacement&& value) { SetPlacement(value); return *this;}

    /**
     * <p>The ID of the kernel.</p>
     */
    inline const Aws::String& GetKernelId() const{ return m_kernelId; }

    /**
     * <p>The ID of the kernel.</p>
     */
    inline void SetKernelId(const Aws::String& value) { m_kernelIdHasBeenSet = true; m_kernelId = value; }

    /**
     * <p>The ID of the kernel.</p>
     */
    inline void SetKernelId(Aws::String&& value) { m_kernelIdHasBeenSet = true; m_kernelId = value; }

    /**
     * <p>The ID of the kernel.</p>
     */
    inline void SetKernelId(const char* value) { m_kernelIdHasBeenSet = true; m_kernelId.assign(value); }

    /**
     * <p>The ID of the kernel.</p>
     */
    inline SpotFleetLaunchSpecification& WithKernelId(const Aws::String& value) { SetKernelId(value); return *this;}

    /**
     * <p>The ID of the kernel.</p>
     */
    inline SpotFleetLaunchSpecification& WithKernelId(Aws::String&& value) { SetKernelId(value); return *this;}

    /**
     * <p>The ID of the kernel.</p>
     */
    inline SpotFleetLaunchSpecification& WithKernelId(const char* value) { SetKernelId(value); return *this;}

    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline const Aws::String& GetRamdiskId() const{ return m_ramdiskId; }

    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline void SetRamdiskId(const Aws::String& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = value; }

    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline void SetRamdiskId(Aws::String&& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = value; }

    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline void SetRamdiskId(const char* value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId.assign(value); }

    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline SpotFleetLaunchSpecification& WithRamdiskId(const Aws::String& value) { SetRamdiskId(value); return *this;}

    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline SpotFleetLaunchSpecification& WithRamdiskId(Aws::String&& value) { SetRamdiskId(value); return *this;}

    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline SpotFleetLaunchSpecification& WithRamdiskId(const char* value) { SetRamdiskId(value); return *this;}

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline void SetBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline void SetBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline SpotFleetLaunchSpecification& WithBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline SpotFleetLaunchSpecification& WithBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline SpotFleetLaunchSpecification& AddBlockDeviceMappings(const BlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline SpotFleetLaunchSpecification& AddBlockDeviceMappings(BlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>Enable or disable monitoring for the instance.</p>
     */
    inline const SpotFleetMonitoring& GetMonitoring() const{ return m_monitoring; }

    /**
     * <p>Enable or disable monitoring for the instance.</p>
     */
    inline void SetMonitoring(const SpotFleetMonitoring& value) { m_monitoringHasBeenSet = true; m_monitoring = value; }

    /**
     * <p>Enable or disable monitoring for the instance.</p>
     */
    inline void SetMonitoring(SpotFleetMonitoring&& value) { m_monitoringHasBeenSet = true; m_monitoring = value; }

    /**
     * <p>Enable or disable monitoring for the instance.</p>
     */
    inline SpotFleetLaunchSpecification& WithMonitoring(const SpotFleetMonitoring& value) { SetMonitoring(value); return *this;}

    /**
     * <p>Enable or disable monitoring for the instance.</p>
     */
    inline SpotFleetLaunchSpecification& WithMonitoring(SpotFleetMonitoring&& value) { SetMonitoring(value); return *this;}

    /**
     * <p>The ID of the subnet in which to launch the instance.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet in which to launch the instance.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet in which to launch the instance.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet in which to launch the instance.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet in which to launch the instance.</p>
     */
    inline SpotFleetLaunchSpecification& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet in which to launch the instance.</p>
     */
    inline SpotFleetLaunchSpecification& WithSubnetId(Aws::String&& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet in which to launch the instance.</p>
     */
    inline SpotFleetLaunchSpecification& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}

    /**
     * <p>One or more network interfaces.</p>
     */
    inline const Aws::Vector<InstanceNetworkInterfaceSpecification>& GetNetworkInterfaces() const{ return m_networkInterfaces; }

    /**
     * <p>One or more network interfaces.</p>
     */
    inline void SetNetworkInterfaces(const Aws::Vector<InstanceNetworkInterfaceSpecification>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }

    /**
     * <p>One or more network interfaces.</p>
     */
    inline void SetNetworkInterfaces(Aws::Vector<InstanceNetworkInterfaceSpecification>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }

    /**
     * <p>One or more network interfaces.</p>
     */
    inline SpotFleetLaunchSpecification& WithNetworkInterfaces(const Aws::Vector<InstanceNetworkInterfaceSpecification>& value) { SetNetworkInterfaces(value); return *this;}

    /**
     * <p>One or more network interfaces.</p>
     */
    inline SpotFleetLaunchSpecification& WithNetworkInterfaces(Aws::Vector<InstanceNetworkInterfaceSpecification>&& value) { SetNetworkInterfaces(value); return *this;}

    /**
     * <p>One or more network interfaces.</p>
     */
    inline SpotFleetLaunchSpecification& AddNetworkInterfaces(const InstanceNetworkInterfaceSpecification& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }

    /**
     * <p>One or more network interfaces.</p>
     */
    inline SpotFleetLaunchSpecification& AddNetworkInterfaces(InstanceNetworkInterfaceSpecification&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }

    
    inline const IamInstanceProfileSpecification& GetIamInstanceProfile() const{ return m_iamInstanceProfile; }

    
    inline void SetIamInstanceProfile(const IamInstanceProfileSpecification& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = value; }

    
    inline void SetIamInstanceProfile(IamInstanceProfileSpecification&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = value; }

    
    inline SpotFleetLaunchSpecification& WithIamInstanceProfile(const IamInstanceProfileSpecification& value) { SetIamInstanceProfile(value); return *this;}

    
    inline SpotFleetLaunchSpecification& WithIamInstanceProfile(IamInstanceProfileSpecification&& value) { SetIamInstanceProfile(value); return *this;}

    /**
     * <p>Indicates whether the instance is optimized for EBS I/O. This optimization
     * provides dedicated throughput to Amazon EBS and an optimized configuration stack
     * to provide optimal EBS I/O performance. This optimization isn't available with
     * all instance types. Additional usage charges apply when using an EBS Optimized
     * instance.</p> <p>Default: <code>false</code></p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }

    /**
     * <p>Indicates whether the instance is optimized for EBS I/O. This optimization
     * provides dedicated throughput to Amazon EBS and an optimized configuration stack
     * to provide optimal EBS I/O performance. This optimization isn't available with
     * all instance types. Additional usage charges apply when using an EBS Optimized
     * instance.</p> <p>Default: <code>false</code></p>
     */
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }

    /**
     * <p>Indicates whether the instance is optimized for EBS I/O. This optimization
     * provides dedicated throughput to Amazon EBS and an optimized configuration stack
     * to provide optimal EBS I/O performance. This optimization isn't available with
     * all instance types. Additional usage charges apply when using an EBS Optimized
     * instance.</p> <p>Default: <code>false</code></p>
     */
    inline SpotFleetLaunchSpecification& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}

  private:
    Aws::String m_imageId;
    bool m_imageIdHasBeenSet;
    Aws::String m_keyName;
    bool m_keyNameHasBeenSet;
    Aws::Vector<GroupIdentifier> m_securityGroups;
    bool m_securityGroupsHasBeenSet;
    Aws::String m_userData;
    bool m_userDataHasBeenSet;
    Aws::String m_addressingType;
    bool m_addressingTypeHasBeenSet;
    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;
    SpotPlacement m_placement;
    bool m_placementHasBeenSet;
    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet;
    Aws::String m_ramdiskId;
    bool m_ramdiskIdHasBeenSet;
    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet;
    SpotFleetMonitoring m_monitoring;
    bool m_monitoringHasBeenSet;
    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;
    Aws::Vector<InstanceNetworkInterfaceSpecification> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet;
    IamInstanceProfileSpecification m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet;
    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
