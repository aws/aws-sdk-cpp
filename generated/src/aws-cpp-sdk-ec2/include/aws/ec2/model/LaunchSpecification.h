/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IamInstanceProfileSpecification.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/ec2/model/SpotPlacement.h>
#include <aws/ec2/model/RunInstancesMonitoringEnabled.h>
#include <aws/ec2/model/BlockDeviceMapping.h>
#include <aws/ec2/model/InstanceNetworkInterfaceSpecification.h>
#include <aws/ec2/model/GroupIdentifier.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchSpecification">AWS
   * API Reference</a></p>
   */
  class LaunchSpecification
  {
  public:
    AWS_EC2_API LaunchSpecification();
    AWS_EC2_API LaunchSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline LaunchSpecification& WithUserData(const Aws::String& value) { SetUserData(value); return *this;}
    inline LaunchSpecification& WithUserData(Aws::String&& value) { SetUserData(std::move(value)); return *this;}
    inline LaunchSpecification& WithUserData(const char* value) { SetUserData(value); return *this;}
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
    inline LaunchSpecification& WithAddressingType(const Aws::String& value) { SetAddressingType(value); return *this;}
    inline LaunchSpecification& WithAddressingType(Aws::String&& value) { SetAddressingType(std::move(value)); return *this;}
    inline LaunchSpecification& WithAddressingType(const char* value) { SetAddressingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block device mapping entries.</p>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }
    inline void SetBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }
    inline void SetBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }
    inline LaunchSpecification& WithBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}
    inline LaunchSpecification& WithBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}
    inline LaunchSpecification& AddBlockDeviceMappings(const BlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }
    inline LaunchSpecification& AddBlockDeviceMappings(BlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance is optimized for EBS I/O. This optimization
     * provides dedicated throughput to Amazon EBS and an optimized configuration stack
     * to provide optimal EBS I/O performance. This optimization isn't available with
     * all instance types. Additional usage charges apply when using an EBS Optimized
     * instance.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }
    inline LaunchSpecification& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM instance profile.</p>
     */
    inline const IamInstanceProfileSpecification& GetIamInstanceProfile() const{ return m_iamInstanceProfile; }
    inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }
    inline void SetIamInstanceProfile(const IamInstanceProfileSpecification& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = value; }
    inline void SetIamInstanceProfile(IamInstanceProfileSpecification&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::move(value); }
    inline LaunchSpecification& WithIamInstanceProfile(const IamInstanceProfileSpecification& value) { SetIamInstanceProfile(value); return *this;}
    inline LaunchSpecification& WithIamInstanceProfile(IamInstanceProfileSpecification&& value) { SetIamInstanceProfile(std::move(value)); return *this;}
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
    inline LaunchSpecification& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}
    inline LaunchSpecification& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}
    inline LaunchSpecification& WithImageId(const char* value) { SetImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type. Only one instance type can be specified.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline LaunchSpecification& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}
    inline LaunchSpecification& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
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
    inline LaunchSpecification& WithKernelId(const Aws::String& value) { SetKernelId(value); return *this;}
    inline LaunchSpecification& WithKernelId(Aws::String&& value) { SetKernelId(std::move(value)); return *this;}
    inline LaunchSpecification& WithKernelId(const char* value) { SetKernelId(value); return *this;}
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
    inline LaunchSpecification& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}
    inline LaunchSpecification& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}
    inline LaunchSpecification& WithKeyName(const char* value) { SetKeyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interfaces. If you specify a network interface, you must specify
     * subnet IDs and security group IDs using the network interface.</p>
     */
    inline const Aws::Vector<InstanceNetworkInterfaceSpecification>& GetNetworkInterfaces() const{ return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    inline void SetNetworkInterfaces(const Aws::Vector<InstanceNetworkInterfaceSpecification>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }
    inline void SetNetworkInterfaces(Aws::Vector<InstanceNetworkInterfaceSpecification>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }
    inline LaunchSpecification& WithNetworkInterfaces(const Aws::Vector<InstanceNetworkInterfaceSpecification>& value) { SetNetworkInterfaces(value); return *this;}
    inline LaunchSpecification& WithNetworkInterfaces(Aws::Vector<InstanceNetworkInterfaceSpecification>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}
    inline LaunchSpecification& AddNetworkInterfaces(const InstanceNetworkInterfaceSpecification& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }
    inline LaunchSpecification& AddNetworkInterfaces(InstanceNetworkInterfaceSpecification&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The placement information for the instance.</p>
     */
    inline const SpotPlacement& GetPlacement() const{ return m_placement; }
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }
    inline void SetPlacement(const SpotPlacement& value) { m_placementHasBeenSet = true; m_placement = value; }
    inline void SetPlacement(SpotPlacement&& value) { m_placementHasBeenSet = true; m_placement = std::move(value); }
    inline LaunchSpecification& WithPlacement(const SpotPlacement& value) { SetPlacement(value); return *this;}
    inline LaunchSpecification& WithPlacement(SpotPlacement&& value) { SetPlacement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline const Aws::String& GetRamdiskId() const{ return m_ramdiskId; }
    inline bool RamdiskIdHasBeenSet() const { return m_ramdiskIdHasBeenSet; }
    inline void SetRamdiskId(const Aws::String& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = value; }
    inline void SetRamdiskId(Aws::String&& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = std::move(value); }
    inline void SetRamdiskId(const char* value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId.assign(value); }
    inline LaunchSpecification& WithRamdiskId(const Aws::String& value) { SetRamdiskId(value); return *this;}
    inline LaunchSpecification& WithRamdiskId(Aws::String&& value) { SetRamdiskId(std::move(value)); return *this;}
    inline LaunchSpecification& WithRamdiskId(const char* value) { SetRamdiskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet in which to launch the instance.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline LaunchSpecification& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline LaunchSpecification& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline LaunchSpecification& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the security groups.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<GroupIdentifier>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<GroupIdentifier>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline LaunchSpecification& WithSecurityGroups(const Aws::Vector<GroupIdentifier>& value) { SetSecurityGroups(value); return *this;}
    inline LaunchSpecification& WithSecurityGroups(Aws::Vector<GroupIdentifier>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline LaunchSpecification& AddSecurityGroups(const GroupIdentifier& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline LaunchSpecification& AddSecurityGroups(GroupIdentifier&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const RunInstancesMonitoringEnabled& GetMonitoring() const{ return m_monitoring; }
    inline bool MonitoringHasBeenSet() const { return m_monitoringHasBeenSet; }
    inline void SetMonitoring(const RunInstancesMonitoringEnabled& value) { m_monitoringHasBeenSet = true; m_monitoring = value; }
    inline void SetMonitoring(RunInstancesMonitoringEnabled&& value) { m_monitoringHasBeenSet = true; m_monitoring = std::move(value); }
    inline LaunchSpecification& WithMonitoring(const RunInstancesMonitoringEnabled& value) { SetMonitoring(value); return *this;}
    inline LaunchSpecification& WithMonitoring(RunInstancesMonitoringEnabled&& value) { SetMonitoring(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_userData;
    bool m_userDataHasBeenSet = false;

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

    Aws::Vector<InstanceNetworkInterfaceSpecification> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;

    SpotPlacement m_placement;
    bool m_placementHasBeenSet = false;

    Aws::String m_ramdiskId;
    bool m_ramdiskIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::Vector<GroupIdentifier> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    RunInstancesMonitoringEnabled m_monitoring;
    bool m_monitoringHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
