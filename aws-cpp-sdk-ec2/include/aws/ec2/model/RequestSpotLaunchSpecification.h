/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/IamInstanceProfileSpecification.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/ec2/model/RunInstancesMonitoringEnabled.h>
#include <aws/ec2/model/SpotPlacement.h>
#include <aws/ec2/model/BlockDeviceMapping.h>
#include <aws/ec2/model/InstanceNetworkInterfaceSpecification.h>
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
   * <p>Describes the launch specification for an instance.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RequestSpotLaunchSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API RequestSpotLaunchSpecification
  {
  public:
    RequestSpotLaunchSpecification();
    RequestSpotLaunchSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    RequestSpotLaunchSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>One or more security group IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>One or more security group IDs.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>One or more security group IDs.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>One or more security group IDs.</p>
     */
    inline RequestSpotLaunchSpecification& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>One or more security group IDs.</p>
     */
    inline RequestSpotLaunchSpecification& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>One or more security group IDs.</p>
     */
    inline RequestSpotLaunchSpecification& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>One or more security group IDs.</p>
     */
    inline RequestSpotLaunchSpecification& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more security group IDs.</p>
     */
    inline RequestSpotLaunchSpecification& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>One or more security groups. When requesting instances in a VPC, you must
     * specify the IDs of the security groups. When requesting instances in
     * EC2-Classic, you can specify the names or the IDs of the security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>One or more security groups. When requesting instances in a VPC, you must
     * specify the IDs of the security groups. When requesting instances in
     * EC2-Classic, you can specify the names or the IDs of the security groups.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>One or more security groups. When requesting instances in a VPC, you must
     * specify the IDs of the security groups. When requesting instances in
     * EC2-Classic, you can specify the names or the IDs of the security groups.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>One or more security groups. When requesting instances in a VPC, you must
     * specify the IDs of the security groups. When requesting instances in
     * EC2-Classic, you can specify the names or the IDs of the security groups.</p>
     */
    inline RequestSpotLaunchSpecification& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>One or more security groups. When requesting instances in a VPC, you must
     * specify the IDs of the security groups. When requesting instances in
     * EC2-Classic, you can specify the names or the IDs of the security groups.</p>
     */
    inline RequestSpotLaunchSpecification& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>One or more security groups. When requesting instances in a VPC, you must
     * specify the IDs of the security groups. When requesting instances in
     * EC2-Classic, you can specify the names or the IDs of the security groups.</p>
     */
    inline RequestSpotLaunchSpecification& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>One or more security groups. When requesting instances in a VPC, you must
     * specify the IDs of the security groups. When requesting instances in
     * EC2-Classic, you can specify the names or the IDs of the security groups.</p>
     */
    inline RequestSpotLaunchSpecification& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more security groups. When requesting instances in a VPC, you must
     * specify the IDs of the security groups. When requesting instances in
     * EC2-Classic, you can specify the names or the IDs of the security groups.</p>
     */
    inline RequestSpotLaunchSpecification& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


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
    inline void SetAddressingType(Aws::String&& value) { m_addressingTypeHasBeenSet = true; m_addressingType = std::move(value); }

    /**
     * <p>Deprecated.</p>
     */
    inline void SetAddressingType(const char* value) { m_addressingTypeHasBeenSet = true; m_addressingType.assign(value); }

    /**
     * <p>Deprecated.</p>
     */
    inline RequestSpotLaunchSpecification& WithAddressingType(const Aws::String& value) { SetAddressingType(value); return *this;}

    /**
     * <p>Deprecated.</p>
     */
    inline RequestSpotLaunchSpecification& WithAddressingType(Aws::String&& value) { SetAddressingType(std::move(value)); return *this;}

    /**
     * <p>Deprecated.</p>
     */
    inline RequestSpotLaunchSpecification& WithAddressingType(const char* value) { SetAddressingType(value); return *this;}


    /**
     * <p>One or more block device mapping entries. You can't specify both a snapshot
     * ID and an encryption value. This is because only blank volumes can be encrypted
     * on creation. If a snapshot is the basis for a volume, it is not blank and its
     * encryption status is used for the volume encryption status.</p>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }

    /**
     * <p>One or more block device mapping entries. You can't specify both a snapshot
     * ID and an encryption value. This is because only blank volumes can be encrypted
     * on creation. If a snapshot is the basis for a volume, it is not blank and its
     * encryption status is used for the volume encryption status.</p>
     */
    inline void SetBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }

    /**
     * <p>One or more block device mapping entries. You can't specify both a snapshot
     * ID and an encryption value. This is because only blank volumes can be encrypted
     * on creation. If a snapshot is the basis for a volume, it is not blank and its
     * encryption status is used for the volume encryption status.</p>
     */
    inline void SetBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }

    /**
     * <p>One or more block device mapping entries. You can't specify both a snapshot
     * ID and an encryption value. This is because only blank volumes can be encrypted
     * on creation. If a snapshot is the basis for a volume, it is not blank and its
     * encryption status is used for the volume encryption status.</p>
     */
    inline RequestSpotLaunchSpecification& WithBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>One or more block device mapping entries. You can't specify both a snapshot
     * ID and an encryption value. This is because only blank volumes can be encrypted
     * on creation. If a snapshot is the basis for a volume, it is not blank and its
     * encryption status is used for the volume encryption status.</p>
     */
    inline RequestSpotLaunchSpecification& WithBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}

    /**
     * <p>One or more block device mapping entries. You can't specify both a snapshot
     * ID and an encryption value. This is because only blank volumes can be encrypted
     * on creation. If a snapshot is the basis for a volume, it is not blank and its
     * encryption status is used for the volume encryption status.</p>
     */
    inline RequestSpotLaunchSpecification& AddBlockDeviceMappings(const BlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>One or more block device mapping entries. You can't specify both a snapshot
     * ID and an encryption value. This is because only blank volumes can be encrypted
     * on creation. If a snapshot is the basis for a volume, it is not blank and its
     * encryption status is used for the volume encryption status.</p>
     */
    inline RequestSpotLaunchSpecification& AddBlockDeviceMappings(BlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether the instance is optimized for EBS I/O. This optimization
     * provides dedicated throughput to Amazon EBS and an optimized configuration stack
     * to provide optimal EBS I/O performance. This optimization isn't available with
     * all instance types. Additional usage charges apply when using an EBS Optimized
     * instance.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }

    /**
     * <p>Indicates whether the instance is optimized for EBS I/O. This optimization
     * provides dedicated throughput to Amazon EBS and an optimized configuration stack
     * to provide optimal EBS I/O performance. This optimization isn't available with
     * all instance types. Additional usage charges apply when using an EBS Optimized
     * instance.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }

    /**
     * <p>Indicates whether the instance is optimized for EBS I/O. This optimization
     * provides dedicated throughput to Amazon EBS and an optimized configuration stack
     * to provide optimal EBS I/O performance. This optimization isn't available with
     * all instance types. Additional usage charges apply when using an EBS Optimized
     * instance.</p> <p>Default: <code>false</code> </p>
     */
    inline RequestSpotLaunchSpecification& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}


    /**
     * <p>The IAM instance profile.</p>
     */
    inline const IamInstanceProfileSpecification& GetIamInstanceProfile() const{ return m_iamInstanceProfile; }

    /**
     * <p>The IAM instance profile.</p>
     */
    inline void SetIamInstanceProfile(const IamInstanceProfileSpecification& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = value; }

    /**
     * <p>The IAM instance profile.</p>
     */
    inline void SetIamInstanceProfile(IamInstanceProfileSpecification&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::move(value); }

    /**
     * <p>The IAM instance profile.</p>
     */
    inline RequestSpotLaunchSpecification& WithIamInstanceProfile(const IamInstanceProfileSpecification& value) { SetIamInstanceProfile(value); return *this;}

    /**
     * <p>The IAM instance profile.</p>
     */
    inline RequestSpotLaunchSpecification& WithIamInstanceProfile(IamInstanceProfileSpecification&& value) { SetIamInstanceProfile(std::move(value)); return *this;}


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
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline RequestSpotLaunchSpecification& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the AMI.</p>
     */
    inline RequestSpotLaunchSpecification& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AMI.</p>
     */
    inline RequestSpotLaunchSpecification& WithImageId(const char* value) { SetImageId(value); return *this;}


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
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type.</p>
     */
    inline RequestSpotLaunchSpecification& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type.</p>
     */
    inline RequestSpotLaunchSpecification& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


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
    inline void SetKernelId(Aws::String&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::move(value); }

    /**
     * <p>The ID of the kernel.</p>
     */
    inline void SetKernelId(const char* value) { m_kernelIdHasBeenSet = true; m_kernelId.assign(value); }

    /**
     * <p>The ID of the kernel.</p>
     */
    inline RequestSpotLaunchSpecification& WithKernelId(const Aws::String& value) { SetKernelId(value); return *this;}

    /**
     * <p>The ID of the kernel.</p>
     */
    inline RequestSpotLaunchSpecification& WithKernelId(Aws::String&& value) { SetKernelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the kernel.</p>
     */
    inline RequestSpotLaunchSpecification& WithKernelId(const char* value) { SetKernelId(value); return *this;}


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
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }

    /**
     * <p>The name of the key pair.</p>
     */
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }

    /**
     * <p>The name of the key pair.</p>
     */
    inline RequestSpotLaunchSpecification& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>The name of the key pair.</p>
     */
    inline RequestSpotLaunchSpecification& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>The name of the key pair.</p>
     */
    inline RequestSpotLaunchSpecification& WithKeyName(const char* value) { SetKeyName(value); return *this;}


    /**
     * <p>Indicates whether basic or detailed monitoring is enabled for the
     * instance.</p> <p>Default: Disabled</p>
     */
    inline const RunInstancesMonitoringEnabled& GetMonitoring() const{ return m_monitoring; }

    /**
     * <p>Indicates whether basic or detailed monitoring is enabled for the
     * instance.</p> <p>Default: Disabled</p>
     */
    inline void SetMonitoring(const RunInstancesMonitoringEnabled& value) { m_monitoringHasBeenSet = true; m_monitoring = value; }

    /**
     * <p>Indicates whether basic or detailed monitoring is enabled for the
     * instance.</p> <p>Default: Disabled</p>
     */
    inline void SetMonitoring(RunInstancesMonitoringEnabled&& value) { m_monitoringHasBeenSet = true; m_monitoring = std::move(value); }

    /**
     * <p>Indicates whether basic or detailed monitoring is enabled for the
     * instance.</p> <p>Default: Disabled</p>
     */
    inline RequestSpotLaunchSpecification& WithMonitoring(const RunInstancesMonitoringEnabled& value) { SetMonitoring(value); return *this;}

    /**
     * <p>Indicates whether basic or detailed monitoring is enabled for the
     * instance.</p> <p>Default: Disabled</p>
     */
    inline RequestSpotLaunchSpecification& WithMonitoring(RunInstancesMonitoringEnabled&& value) { SetMonitoring(std::move(value)); return *this;}


    /**
     * <p>One or more network interfaces. If you specify a network interface, you must
     * specify subnet IDs and security group IDs using the network interface.</p>
     */
    inline const Aws::Vector<InstanceNetworkInterfaceSpecification>& GetNetworkInterfaces() const{ return m_networkInterfaces; }

    /**
     * <p>One or more network interfaces. If you specify a network interface, you must
     * specify subnet IDs and security group IDs using the network interface.</p>
     */
    inline void SetNetworkInterfaces(const Aws::Vector<InstanceNetworkInterfaceSpecification>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }

    /**
     * <p>One or more network interfaces. If you specify a network interface, you must
     * specify subnet IDs and security group IDs using the network interface.</p>
     */
    inline void SetNetworkInterfaces(Aws::Vector<InstanceNetworkInterfaceSpecification>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }

    /**
     * <p>One or more network interfaces. If you specify a network interface, you must
     * specify subnet IDs and security group IDs using the network interface.</p>
     */
    inline RequestSpotLaunchSpecification& WithNetworkInterfaces(const Aws::Vector<InstanceNetworkInterfaceSpecification>& value) { SetNetworkInterfaces(value); return *this;}

    /**
     * <p>One or more network interfaces. If you specify a network interface, you must
     * specify subnet IDs and security group IDs using the network interface.</p>
     */
    inline RequestSpotLaunchSpecification& WithNetworkInterfaces(Aws::Vector<InstanceNetworkInterfaceSpecification>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}

    /**
     * <p>One or more network interfaces. If you specify a network interface, you must
     * specify subnet IDs and security group IDs using the network interface.</p>
     */
    inline RequestSpotLaunchSpecification& AddNetworkInterfaces(const InstanceNetworkInterfaceSpecification& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }

    /**
     * <p>One or more network interfaces. If you specify a network interface, you must
     * specify subnet IDs and security group IDs using the network interface.</p>
     */
    inline RequestSpotLaunchSpecification& AddNetworkInterfaces(InstanceNetworkInterfaceSpecification&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }


    /**
     * <p>The placement information for the instance.</p>
     */
    inline const SpotPlacement& GetPlacement() const{ return m_placement; }

    /**
     * <p>The placement information for the instance.</p>
     */
    inline void SetPlacement(const SpotPlacement& value) { m_placementHasBeenSet = true; m_placement = value; }

    /**
     * <p>The placement information for the instance.</p>
     */
    inline void SetPlacement(SpotPlacement&& value) { m_placementHasBeenSet = true; m_placement = std::move(value); }

    /**
     * <p>The placement information for the instance.</p>
     */
    inline RequestSpotLaunchSpecification& WithPlacement(const SpotPlacement& value) { SetPlacement(value); return *this;}

    /**
     * <p>The placement information for the instance.</p>
     */
    inline RequestSpotLaunchSpecification& WithPlacement(SpotPlacement&& value) { SetPlacement(std::move(value)); return *this;}


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
    inline void SetRamdiskId(Aws::String&& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = std::move(value); }

    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline void SetRamdiskId(const char* value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId.assign(value); }

    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline RequestSpotLaunchSpecification& WithRamdiskId(const Aws::String& value) { SetRamdiskId(value); return *this;}

    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline RequestSpotLaunchSpecification& WithRamdiskId(Aws::String&& value) { SetRamdiskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline RequestSpotLaunchSpecification& WithRamdiskId(const char* value) { SetRamdiskId(value); return *this;}


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
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the subnet in which to launch the instance.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet in which to launch the instance.</p>
     */
    inline RequestSpotLaunchSpecification& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet in which to launch the instance.</p>
     */
    inline RequestSpotLaunchSpecification& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet in which to launch the instance.</p>
     */
    inline RequestSpotLaunchSpecification& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The Base64-encoded user data for the instance.</p>
     */
    inline const Aws::String& GetUserData() const{ return m_userData; }

    /**
     * <p>The Base64-encoded user data for the instance.</p>
     */
    inline void SetUserData(const Aws::String& value) { m_userDataHasBeenSet = true; m_userData = value; }

    /**
     * <p>The Base64-encoded user data for the instance.</p>
     */
    inline void SetUserData(Aws::String&& value) { m_userDataHasBeenSet = true; m_userData = std::move(value); }

    /**
     * <p>The Base64-encoded user data for the instance.</p>
     */
    inline void SetUserData(const char* value) { m_userDataHasBeenSet = true; m_userData.assign(value); }

    /**
     * <p>The Base64-encoded user data for the instance.</p>
     */
    inline RequestSpotLaunchSpecification& WithUserData(const Aws::String& value) { SetUserData(value); return *this;}

    /**
     * <p>The Base64-encoded user data for the instance.</p>
     */
    inline RequestSpotLaunchSpecification& WithUserData(Aws::String&& value) { SetUserData(std::move(value)); return *this;}

    /**
     * <p>The Base64-encoded user data for the instance.</p>
     */
    inline RequestSpotLaunchSpecification& WithUserData(const char* value) { SetUserData(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet;

    Aws::String m_addressingType;
    bool m_addressingTypeHasBeenSet;

    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet;

    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet;

    IamInstanceProfileSpecification m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet;

    RunInstancesMonitoringEnabled m_monitoring;
    bool m_monitoringHasBeenSet;

    Aws::Vector<InstanceNetworkInterfaceSpecification> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet;

    SpotPlacement m_placement;
    bool m_placementHasBeenSet;

    Aws::String m_ramdiskId;
    bool m_ramdiskIdHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    Aws::String m_userData;
    bool m_userDataHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
