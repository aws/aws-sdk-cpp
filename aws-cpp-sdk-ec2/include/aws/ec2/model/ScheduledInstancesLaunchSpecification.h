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
#include <aws/ec2/model/ScheduledInstancesIamInstanceProfile.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ScheduledInstancesMonitoring.h>
#include <aws/ec2/model/ScheduledInstancesPlacement.h>
#include <aws/ec2/model/ScheduledInstancesBlockDeviceMapping.h>
#include <aws/ec2/model/ScheduledInstancesNetworkInterface.h>
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
   * <p>Describes the launch specification for a Scheduled Instance.</p> <p>If you
   * are launching the Scheduled Instance in EC2-VPC, you must specify the ID of the
   * subnet. You can specify the subnet using either <code>SubnetId</code> or
   * <code>NetworkInterface</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ScheduledInstancesLaunchSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ScheduledInstancesLaunchSpecification
  {
  public:
    ScheduledInstancesLaunchSpecification();
    ScheduledInstancesLaunchSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    ScheduledInstancesLaunchSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline const Aws::Vector<ScheduledInstancesBlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline void SetBlockDeviceMappings(const Aws::Vector<ScheduledInstancesBlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline void SetBlockDeviceMappings(Aws::Vector<ScheduledInstancesBlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithBlockDeviceMappings(const Aws::Vector<ScheduledInstancesBlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithBlockDeviceMappings(Aws::Vector<ScheduledInstancesBlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline ScheduledInstancesLaunchSpecification& AddBlockDeviceMappings(const ScheduledInstancesBlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline ScheduledInstancesLaunchSpecification& AddBlockDeviceMappings(ScheduledInstancesBlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether the instances are optimized for EBS I/O. This optimization
     * provides dedicated throughput to Amazon EBS and an optimized configuration stack
     * to provide optimal EBS I/O performance. This optimization isn't available with
     * all instance types. Additional usage charges apply when using an EBS-optimized
     * instance.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }

    /**
     * <p>Indicates whether the instances are optimized for EBS I/O. This optimization
     * provides dedicated throughput to Amazon EBS and an optimized configuration stack
     * to provide optimal EBS I/O performance. This optimization isn't available with
     * all instance types. Additional usage charges apply when using an EBS-optimized
     * instance.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }

    /**
     * <p>Indicates whether the instances are optimized for EBS I/O. This optimization
     * provides dedicated throughput to Amazon EBS and an optimized configuration stack
     * to provide optimal EBS I/O performance. This optimization isn't available with
     * all instance types. Additional usage charges apply when using an EBS-optimized
     * instance.</p> <p>Default: <code>false</code> </p>
     */
    inline ScheduledInstancesLaunchSpecification& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}


    /**
     * <p>The IAM instance profile.</p>
     */
    inline const ScheduledInstancesIamInstanceProfile& GetIamInstanceProfile() const{ return m_iamInstanceProfile; }

    /**
     * <p>The IAM instance profile.</p>
     */
    inline void SetIamInstanceProfile(const ScheduledInstancesIamInstanceProfile& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = value; }

    /**
     * <p>The IAM instance profile.</p>
     */
    inline void SetIamInstanceProfile(ScheduledInstancesIamInstanceProfile&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::move(value); }

    /**
     * <p>The IAM instance profile.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithIamInstanceProfile(const ScheduledInstancesIamInstanceProfile& value) { SetIamInstanceProfile(value); return *this;}

    /**
     * <p>The IAM instance profile.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithIamInstanceProfile(ScheduledInstancesIamInstanceProfile&& value) { SetIamInstanceProfile(std::move(value)); return *this;}


    /**
     * <p>The ID of the Amazon Machine Image (AMI).</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The ID of the Amazon Machine Image (AMI).</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The ID of the Amazon Machine Image (AMI).</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The ID of the Amazon Machine Image (AMI).</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The ID of the Amazon Machine Image (AMI).</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the Amazon Machine Image (AMI).</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Machine Image (AMI).</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The instance type.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


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
    inline ScheduledInstancesLaunchSpecification& WithKernelId(const Aws::String& value) { SetKernelId(value); return *this;}

    /**
     * <p>The ID of the kernel.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithKernelId(Aws::String&& value) { SetKernelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the kernel.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithKernelId(const char* value) { SetKernelId(value); return *this;}


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
    inline ScheduledInstancesLaunchSpecification& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>The name of the key pair.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>The name of the key pair.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithKeyName(const char* value) { SetKeyName(value); return *this;}


    /**
     * <p>Enable or disable monitoring for the instances.</p>
     */
    inline const ScheduledInstancesMonitoring& GetMonitoring() const{ return m_monitoring; }

    /**
     * <p>Enable or disable monitoring for the instances.</p>
     */
    inline void SetMonitoring(const ScheduledInstancesMonitoring& value) { m_monitoringHasBeenSet = true; m_monitoring = value; }

    /**
     * <p>Enable or disable monitoring for the instances.</p>
     */
    inline void SetMonitoring(ScheduledInstancesMonitoring&& value) { m_monitoringHasBeenSet = true; m_monitoring = std::move(value); }

    /**
     * <p>Enable or disable monitoring for the instances.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithMonitoring(const ScheduledInstancesMonitoring& value) { SetMonitoring(value); return *this;}

    /**
     * <p>Enable or disable monitoring for the instances.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithMonitoring(ScheduledInstancesMonitoring&& value) { SetMonitoring(std::move(value)); return *this;}


    /**
     * <p>One or more network interfaces.</p>
     */
    inline const Aws::Vector<ScheduledInstancesNetworkInterface>& GetNetworkInterfaces() const{ return m_networkInterfaces; }

    /**
     * <p>One or more network interfaces.</p>
     */
    inline void SetNetworkInterfaces(const Aws::Vector<ScheduledInstancesNetworkInterface>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }

    /**
     * <p>One or more network interfaces.</p>
     */
    inline void SetNetworkInterfaces(Aws::Vector<ScheduledInstancesNetworkInterface>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }

    /**
     * <p>One or more network interfaces.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithNetworkInterfaces(const Aws::Vector<ScheduledInstancesNetworkInterface>& value) { SetNetworkInterfaces(value); return *this;}

    /**
     * <p>One or more network interfaces.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithNetworkInterfaces(Aws::Vector<ScheduledInstancesNetworkInterface>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}

    /**
     * <p>One or more network interfaces.</p>
     */
    inline ScheduledInstancesLaunchSpecification& AddNetworkInterfaces(const ScheduledInstancesNetworkInterface& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }

    /**
     * <p>One or more network interfaces.</p>
     */
    inline ScheduledInstancesLaunchSpecification& AddNetworkInterfaces(ScheduledInstancesNetworkInterface&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }


    /**
     * <p>The placement information.</p>
     */
    inline const ScheduledInstancesPlacement& GetPlacement() const{ return m_placement; }

    /**
     * <p>The placement information.</p>
     */
    inline void SetPlacement(const ScheduledInstancesPlacement& value) { m_placementHasBeenSet = true; m_placement = value; }

    /**
     * <p>The placement information.</p>
     */
    inline void SetPlacement(ScheduledInstancesPlacement&& value) { m_placementHasBeenSet = true; m_placement = std::move(value); }

    /**
     * <p>The placement information.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithPlacement(const ScheduledInstancesPlacement& value) { SetPlacement(value); return *this;}

    /**
     * <p>The placement information.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithPlacement(ScheduledInstancesPlacement&& value) { SetPlacement(std::move(value)); return *this;}


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
    inline ScheduledInstancesLaunchSpecification& WithRamdiskId(const Aws::String& value) { SetRamdiskId(value); return *this;}

    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithRamdiskId(Aws::String&& value) { SetRamdiskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithRamdiskId(const char* value) { SetRamdiskId(value); return *this;}


    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline ScheduledInstancesLaunchSpecification& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline ScheduledInstancesLaunchSpecification& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of one or more security groups.</p>
     */
    inline ScheduledInstancesLaunchSpecification& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The ID of the subnet in which to launch the instances.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet in which to launch the instances.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet in which to launch the instances.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the subnet in which to launch the instances.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet in which to launch the instances.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet in which to launch the instances.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet in which to launch the instances.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The base64-encoded MIME user data.</p>
     */
    inline const Aws::String& GetUserData() const{ return m_userData; }

    /**
     * <p>The base64-encoded MIME user data.</p>
     */
    inline void SetUserData(const Aws::String& value) { m_userDataHasBeenSet = true; m_userData = value; }

    /**
     * <p>The base64-encoded MIME user data.</p>
     */
    inline void SetUserData(Aws::String&& value) { m_userDataHasBeenSet = true; m_userData = std::move(value); }

    /**
     * <p>The base64-encoded MIME user data.</p>
     */
    inline void SetUserData(const char* value) { m_userDataHasBeenSet = true; m_userData.assign(value); }

    /**
     * <p>The base64-encoded MIME user data.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithUserData(const Aws::String& value) { SetUserData(value); return *this;}

    /**
     * <p>The base64-encoded MIME user data.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithUserData(Aws::String&& value) { SetUserData(std::move(value)); return *this;}

    /**
     * <p>The base64-encoded MIME user data.</p>
     */
    inline ScheduledInstancesLaunchSpecification& WithUserData(const char* value) { SetUserData(value); return *this;}

  private:

    Aws::Vector<ScheduledInstancesBlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet;

    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet;

    ScheduledInstancesIamInstanceProfile m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet;

    ScheduledInstancesMonitoring m_monitoring;
    bool m_monitoringHasBeenSet;

    Aws::Vector<ScheduledInstancesNetworkInterface> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet;

    ScheduledInstancesPlacement m_placement;
    bool m_placementHasBeenSet;

    Aws::String m_ramdiskId;
    bool m_ramdiskIdHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    Aws::String m_userData;
    bool m_userDataHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
