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
  class AWS_EC2_API ResponseLaunchTemplateData
  {
  public:
    ResponseLaunchTemplateData();
    ResponseLaunchTemplateData(const Aws::Utils::Xml::XmlNode& xmlNode);
    ResponseLaunchTemplateData& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the kernel, if applicable.</p>
     */
    inline const Aws::String& GetKernelId() const{ return m_kernelId; }

    /**
     * <p>The ID of the kernel, if applicable.</p>
     */
    inline bool KernelIdHasBeenSet() const { return m_kernelIdHasBeenSet; }

    /**
     * <p>The ID of the kernel, if applicable.</p>
     */
    inline void SetKernelId(const Aws::String& value) { m_kernelIdHasBeenSet = true; m_kernelId = value; }

    /**
     * <p>The ID of the kernel, if applicable.</p>
     */
    inline void SetKernelId(Aws::String&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::move(value); }

    /**
     * <p>The ID of the kernel, if applicable.</p>
     */
    inline void SetKernelId(const char* value) { m_kernelIdHasBeenSet = true; m_kernelId.assign(value); }

    /**
     * <p>The ID of the kernel, if applicable.</p>
     */
    inline ResponseLaunchTemplateData& WithKernelId(const Aws::String& value) { SetKernelId(value); return *this;}

    /**
     * <p>The ID of the kernel, if applicable.</p>
     */
    inline ResponseLaunchTemplateData& WithKernelId(Aws::String&& value) { SetKernelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the kernel, if applicable.</p>
     */
    inline ResponseLaunchTemplateData& WithKernelId(const char* value) { SetKernelId(value); return *this;}


    /**
     * <p>Indicates whether the instance is optimized for Amazon EBS I/O. </p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }

    /**
     * <p>Indicates whether the instance is optimized for Amazon EBS I/O. </p>
     */
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }

    /**
     * <p>Indicates whether the instance is optimized for Amazon EBS I/O. </p>
     */
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }

    /**
     * <p>Indicates whether the instance is optimized for Amazon EBS I/O. </p>
     */
    inline ResponseLaunchTemplateData& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}


    /**
     * <p>The IAM instance profile.</p>
     */
    inline const LaunchTemplateIamInstanceProfileSpecification& GetIamInstanceProfile() const{ return m_iamInstanceProfile; }

    /**
     * <p>The IAM instance profile.</p>
     */
    inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }

    /**
     * <p>The IAM instance profile.</p>
     */
    inline void SetIamInstanceProfile(const LaunchTemplateIamInstanceProfileSpecification& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = value; }

    /**
     * <p>The IAM instance profile.</p>
     */
    inline void SetIamInstanceProfile(LaunchTemplateIamInstanceProfileSpecification&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::move(value); }

    /**
     * <p>The IAM instance profile.</p>
     */
    inline ResponseLaunchTemplateData& WithIamInstanceProfile(const LaunchTemplateIamInstanceProfileSpecification& value) { SetIamInstanceProfile(value); return *this;}

    /**
     * <p>The IAM instance profile.</p>
     */
    inline ResponseLaunchTemplateData& WithIamInstanceProfile(LaunchTemplateIamInstanceProfileSpecification&& value) { SetIamInstanceProfile(std::move(value)); return *this;}


    /**
     * <p>The block device mappings.</p>
     */
    inline const Aws::Vector<LaunchTemplateBlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }

    /**
     * <p>The block device mappings.</p>
     */
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }

    /**
     * <p>The block device mappings.</p>
     */
    inline void SetBlockDeviceMappings(const Aws::Vector<LaunchTemplateBlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }

    /**
     * <p>The block device mappings.</p>
     */
    inline void SetBlockDeviceMappings(Aws::Vector<LaunchTemplateBlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }

    /**
     * <p>The block device mappings.</p>
     */
    inline ResponseLaunchTemplateData& WithBlockDeviceMappings(const Aws::Vector<LaunchTemplateBlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>The block device mappings.</p>
     */
    inline ResponseLaunchTemplateData& WithBlockDeviceMappings(Aws::Vector<LaunchTemplateBlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}

    /**
     * <p>The block device mappings.</p>
     */
    inline ResponseLaunchTemplateData& AddBlockDeviceMappings(const LaunchTemplateBlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>The block device mappings.</p>
     */
    inline ResponseLaunchTemplateData& AddBlockDeviceMappings(LaunchTemplateBlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>The network interfaces.</p>
     */
    inline const Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecification>& GetNetworkInterfaces() const{ return m_networkInterfaces; }

    /**
     * <p>The network interfaces.</p>
     */
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }

    /**
     * <p>The network interfaces.</p>
     */
    inline void SetNetworkInterfaces(const Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecification>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }

    /**
     * <p>The network interfaces.</p>
     */
    inline void SetNetworkInterfaces(Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecification>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }

    /**
     * <p>The network interfaces.</p>
     */
    inline ResponseLaunchTemplateData& WithNetworkInterfaces(const Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecification>& value) { SetNetworkInterfaces(value); return *this;}

    /**
     * <p>The network interfaces.</p>
     */
    inline ResponseLaunchTemplateData& WithNetworkInterfaces(Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecification>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}

    /**
     * <p>The network interfaces.</p>
     */
    inline ResponseLaunchTemplateData& AddNetworkInterfaces(const LaunchTemplateInstanceNetworkInterfaceSpecification& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }

    /**
     * <p>The network interfaces.</p>
     */
    inline ResponseLaunchTemplateData& AddNetworkInterfaces(LaunchTemplateInstanceNetworkInterfaceSpecification&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the AMI that was used to launch the instance.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The ID of the AMI that was used to launch the instance.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>The ID of the AMI that was used to launch the instance.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The ID of the AMI that was used to launch the instance.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The ID of the AMI that was used to launch the instance.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The ID of the AMI that was used to launch the instance.</p>
     */
    inline ResponseLaunchTemplateData& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the AMI that was used to launch the instance.</p>
     */
    inline ResponseLaunchTemplateData& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AMI that was used to launch the instance.</p>
     */
    inline ResponseLaunchTemplateData& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The instance type.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

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
    inline ResponseLaunchTemplateData& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type.</p>
     */
    inline ResponseLaunchTemplateData& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The name of the key pair.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>The name of the key pair.</p>
     */
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }

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
    inline ResponseLaunchTemplateData& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>The name of the key pair.</p>
     */
    inline ResponseLaunchTemplateData& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>The name of the key pair.</p>
     */
    inline ResponseLaunchTemplateData& WithKeyName(const char* value) { SetKeyName(value); return *this;}


    /**
     * <p>The monitoring for the instance.</p>
     */
    inline const LaunchTemplatesMonitoring& GetMonitoring() const{ return m_monitoring; }

    /**
     * <p>The monitoring for the instance.</p>
     */
    inline bool MonitoringHasBeenSet() const { return m_monitoringHasBeenSet; }

    /**
     * <p>The monitoring for the instance.</p>
     */
    inline void SetMonitoring(const LaunchTemplatesMonitoring& value) { m_monitoringHasBeenSet = true; m_monitoring = value; }

    /**
     * <p>The monitoring for the instance.</p>
     */
    inline void SetMonitoring(LaunchTemplatesMonitoring&& value) { m_monitoringHasBeenSet = true; m_monitoring = std::move(value); }

    /**
     * <p>The monitoring for the instance.</p>
     */
    inline ResponseLaunchTemplateData& WithMonitoring(const LaunchTemplatesMonitoring& value) { SetMonitoring(value); return *this;}

    /**
     * <p>The monitoring for the instance.</p>
     */
    inline ResponseLaunchTemplateData& WithMonitoring(LaunchTemplatesMonitoring&& value) { SetMonitoring(std::move(value)); return *this;}


    /**
     * <p>The placement of the instance.</p>
     */
    inline const LaunchTemplatePlacement& GetPlacement() const{ return m_placement; }

    /**
     * <p>The placement of the instance.</p>
     */
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }

    /**
     * <p>The placement of the instance.</p>
     */
    inline void SetPlacement(const LaunchTemplatePlacement& value) { m_placementHasBeenSet = true; m_placement = value; }

    /**
     * <p>The placement of the instance.</p>
     */
    inline void SetPlacement(LaunchTemplatePlacement&& value) { m_placementHasBeenSet = true; m_placement = std::move(value); }

    /**
     * <p>The placement of the instance.</p>
     */
    inline ResponseLaunchTemplateData& WithPlacement(const LaunchTemplatePlacement& value) { SetPlacement(value); return *this;}

    /**
     * <p>The placement of the instance.</p>
     */
    inline ResponseLaunchTemplateData& WithPlacement(LaunchTemplatePlacement&& value) { SetPlacement(std::move(value)); return *this;}


    /**
     * <p>The ID of the RAM disk, if applicable.</p>
     */
    inline const Aws::String& GetRamDiskId() const{ return m_ramDiskId; }

    /**
     * <p>The ID of the RAM disk, if applicable.</p>
     */
    inline bool RamDiskIdHasBeenSet() const { return m_ramDiskIdHasBeenSet; }

    /**
     * <p>The ID of the RAM disk, if applicable.</p>
     */
    inline void SetRamDiskId(const Aws::String& value) { m_ramDiskIdHasBeenSet = true; m_ramDiskId = value; }

    /**
     * <p>The ID of the RAM disk, if applicable.</p>
     */
    inline void SetRamDiskId(Aws::String&& value) { m_ramDiskIdHasBeenSet = true; m_ramDiskId = std::move(value); }

    /**
     * <p>The ID of the RAM disk, if applicable.</p>
     */
    inline void SetRamDiskId(const char* value) { m_ramDiskIdHasBeenSet = true; m_ramDiskId.assign(value); }

    /**
     * <p>The ID of the RAM disk, if applicable.</p>
     */
    inline ResponseLaunchTemplateData& WithRamDiskId(const Aws::String& value) { SetRamDiskId(value); return *this;}

    /**
     * <p>The ID of the RAM disk, if applicable.</p>
     */
    inline ResponseLaunchTemplateData& WithRamDiskId(Aws::String&& value) { SetRamDiskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the RAM disk, if applicable.</p>
     */
    inline ResponseLaunchTemplateData& WithRamDiskId(const char* value) { SetRamDiskId(value); return *this;}


    /**
     * <p>If set to <code>true</code>, indicates that the instance cannot be terminated
     * using the Amazon EC2 console, command line tool, or API.</p>
     */
    inline bool GetDisableApiTermination() const{ return m_disableApiTermination; }

    /**
     * <p>If set to <code>true</code>, indicates that the instance cannot be terminated
     * using the Amazon EC2 console, command line tool, or API.</p>
     */
    inline bool DisableApiTerminationHasBeenSet() const { return m_disableApiTerminationHasBeenSet; }

    /**
     * <p>If set to <code>true</code>, indicates that the instance cannot be terminated
     * using the Amazon EC2 console, command line tool, or API.</p>
     */
    inline void SetDisableApiTermination(bool value) { m_disableApiTerminationHasBeenSet = true; m_disableApiTermination = value; }

    /**
     * <p>If set to <code>true</code>, indicates that the instance cannot be terminated
     * using the Amazon EC2 console, command line tool, or API.</p>
     */
    inline ResponseLaunchTemplateData& WithDisableApiTermination(bool value) { SetDisableApiTermination(value); return *this;}


    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline const ShutdownBehavior& GetInstanceInitiatedShutdownBehavior() const{ return m_instanceInitiatedShutdownBehavior; }

    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline bool InstanceInitiatedShutdownBehaviorHasBeenSet() const { return m_instanceInitiatedShutdownBehaviorHasBeenSet; }

    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline void SetInstanceInitiatedShutdownBehavior(const ShutdownBehavior& value) { m_instanceInitiatedShutdownBehaviorHasBeenSet = true; m_instanceInitiatedShutdownBehavior = value; }

    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline void SetInstanceInitiatedShutdownBehavior(ShutdownBehavior&& value) { m_instanceInitiatedShutdownBehaviorHasBeenSet = true; m_instanceInitiatedShutdownBehavior = std::move(value); }

    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline ResponseLaunchTemplateData& WithInstanceInitiatedShutdownBehavior(const ShutdownBehavior& value) { SetInstanceInitiatedShutdownBehavior(value); return *this;}

    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline ResponseLaunchTemplateData& WithInstanceInitiatedShutdownBehavior(ShutdownBehavior&& value) { SetInstanceInitiatedShutdownBehavior(std::move(value)); return *this;}


    /**
     * <p>The user data for the instance. </p>
     */
    inline const Aws::String& GetUserData() const{ return m_userData; }

    /**
     * <p>The user data for the instance. </p>
     */
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }

    /**
     * <p>The user data for the instance. </p>
     */
    inline void SetUserData(const Aws::String& value) { m_userDataHasBeenSet = true; m_userData = value; }

    /**
     * <p>The user data for the instance. </p>
     */
    inline void SetUserData(Aws::String&& value) { m_userDataHasBeenSet = true; m_userData = std::move(value); }

    /**
     * <p>The user data for the instance. </p>
     */
    inline void SetUserData(const char* value) { m_userDataHasBeenSet = true; m_userData.assign(value); }

    /**
     * <p>The user data for the instance. </p>
     */
    inline ResponseLaunchTemplateData& WithUserData(const Aws::String& value) { SetUserData(value); return *this;}

    /**
     * <p>The user data for the instance. </p>
     */
    inline ResponseLaunchTemplateData& WithUserData(Aws::String&& value) { SetUserData(std::move(value)); return *this;}

    /**
     * <p>The user data for the instance. </p>
     */
    inline ResponseLaunchTemplateData& WithUserData(const char* value) { SetUserData(value); return *this;}


    /**
     * <p>The tags.</p>
     */
    inline const Aws::Vector<LaunchTemplateTagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<LaunchTemplateTagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<LaunchTemplateTagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags.</p>
     */
    inline ResponseLaunchTemplateData& WithTagSpecifications(const Aws::Vector<LaunchTemplateTagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline ResponseLaunchTemplateData& WithTagSpecifications(Aws::Vector<LaunchTemplateTagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline ResponseLaunchTemplateData& AddTagSpecifications(const LaunchTemplateTagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline ResponseLaunchTemplateData& AddTagSpecifications(LaunchTemplateTagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>The elastic GPU specification.</p>
     */
    inline const Aws::Vector<ElasticGpuSpecificationResponse>& GetElasticGpuSpecifications() const{ return m_elasticGpuSpecifications; }

    /**
     * <p>The elastic GPU specification.</p>
     */
    inline bool ElasticGpuSpecificationsHasBeenSet() const { return m_elasticGpuSpecificationsHasBeenSet; }

    /**
     * <p>The elastic GPU specification.</p>
     */
    inline void SetElasticGpuSpecifications(const Aws::Vector<ElasticGpuSpecificationResponse>& value) { m_elasticGpuSpecificationsHasBeenSet = true; m_elasticGpuSpecifications = value; }

    /**
     * <p>The elastic GPU specification.</p>
     */
    inline void SetElasticGpuSpecifications(Aws::Vector<ElasticGpuSpecificationResponse>&& value) { m_elasticGpuSpecificationsHasBeenSet = true; m_elasticGpuSpecifications = std::move(value); }

    /**
     * <p>The elastic GPU specification.</p>
     */
    inline ResponseLaunchTemplateData& WithElasticGpuSpecifications(const Aws::Vector<ElasticGpuSpecificationResponse>& value) { SetElasticGpuSpecifications(value); return *this;}

    /**
     * <p>The elastic GPU specification.</p>
     */
    inline ResponseLaunchTemplateData& WithElasticGpuSpecifications(Aws::Vector<ElasticGpuSpecificationResponse>&& value) { SetElasticGpuSpecifications(std::move(value)); return *this;}

    /**
     * <p>The elastic GPU specification.</p>
     */
    inline ResponseLaunchTemplateData& AddElasticGpuSpecifications(const ElasticGpuSpecificationResponse& value) { m_elasticGpuSpecificationsHasBeenSet = true; m_elasticGpuSpecifications.push_back(value); return *this; }

    /**
     * <p>The elastic GPU specification.</p>
     */
    inline ResponseLaunchTemplateData& AddElasticGpuSpecifications(ElasticGpuSpecificationResponse&& value) { m_elasticGpuSpecificationsHasBeenSet = true; m_elasticGpuSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p> The elastic inference accelerator for the instance. </p>
     */
    inline const Aws::Vector<LaunchTemplateElasticInferenceAcceleratorResponse>& GetElasticInferenceAccelerators() const{ return m_elasticInferenceAccelerators; }

    /**
     * <p> The elastic inference accelerator for the instance. </p>
     */
    inline bool ElasticInferenceAcceleratorsHasBeenSet() const { return m_elasticInferenceAcceleratorsHasBeenSet; }

    /**
     * <p> The elastic inference accelerator for the instance. </p>
     */
    inline void SetElasticInferenceAccelerators(const Aws::Vector<LaunchTemplateElasticInferenceAcceleratorResponse>& value) { m_elasticInferenceAcceleratorsHasBeenSet = true; m_elasticInferenceAccelerators = value; }

    /**
     * <p> The elastic inference accelerator for the instance. </p>
     */
    inline void SetElasticInferenceAccelerators(Aws::Vector<LaunchTemplateElasticInferenceAcceleratorResponse>&& value) { m_elasticInferenceAcceleratorsHasBeenSet = true; m_elasticInferenceAccelerators = std::move(value); }

    /**
     * <p> The elastic inference accelerator for the instance. </p>
     */
    inline ResponseLaunchTemplateData& WithElasticInferenceAccelerators(const Aws::Vector<LaunchTemplateElasticInferenceAcceleratorResponse>& value) { SetElasticInferenceAccelerators(value); return *this;}

    /**
     * <p> The elastic inference accelerator for the instance. </p>
     */
    inline ResponseLaunchTemplateData& WithElasticInferenceAccelerators(Aws::Vector<LaunchTemplateElasticInferenceAcceleratorResponse>&& value) { SetElasticInferenceAccelerators(std::move(value)); return *this;}

    /**
     * <p> The elastic inference accelerator for the instance. </p>
     */
    inline ResponseLaunchTemplateData& AddElasticInferenceAccelerators(const LaunchTemplateElasticInferenceAcceleratorResponse& value) { m_elasticInferenceAcceleratorsHasBeenSet = true; m_elasticInferenceAccelerators.push_back(value); return *this; }

    /**
     * <p> The elastic inference accelerator for the instance. </p>
     */
    inline ResponseLaunchTemplateData& AddElasticInferenceAccelerators(LaunchTemplateElasticInferenceAcceleratorResponse&& value) { m_elasticInferenceAcceleratorsHasBeenSet = true; m_elasticInferenceAccelerators.push_back(std::move(value)); return *this; }


    /**
     * <p>The security group IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The security group IDs.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The security group IDs.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The security group IDs.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The security group IDs.</p>
     */
    inline ResponseLaunchTemplateData& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The security group IDs.</p>
     */
    inline ResponseLaunchTemplateData& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The security group IDs.</p>
     */
    inline ResponseLaunchTemplateData& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The security group IDs.</p>
     */
    inline ResponseLaunchTemplateData& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The security group IDs.</p>
     */
    inline ResponseLaunchTemplateData& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The security group names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>The security group names.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>The security group names.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>The security group names.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>The security group names.</p>
     */
    inline ResponseLaunchTemplateData& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>The security group names.</p>
     */
    inline ResponseLaunchTemplateData& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>The security group names.</p>
     */
    inline ResponseLaunchTemplateData& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>The security group names.</p>
     */
    inline ResponseLaunchTemplateData& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The security group names.</p>
     */
    inline ResponseLaunchTemplateData& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


    /**
     * <p>The market (purchasing) option for the instances.</p>
     */
    inline const LaunchTemplateInstanceMarketOptions& GetInstanceMarketOptions() const{ return m_instanceMarketOptions; }

    /**
     * <p>The market (purchasing) option for the instances.</p>
     */
    inline bool InstanceMarketOptionsHasBeenSet() const { return m_instanceMarketOptionsHasBeenSet; }

    /**
     * <p>The market (purchasing) option for the instances.</p>
     */
    inline void SetInstanceMarketOptions(const LaunchTemplateInstanceMarketOptions& value) { m_instanceMarketOptionsHasBeenSet = true; m_instanceMarketOptions = value; }

    /**
     * <p>The market (purchasing) option for the instances.</p>
     */
    inline void SetInstanceMarketOptions(LaunchTemplateInstanceMarketOptions&& value) { m_instanceMarketOptionsHasBeenSet = true; m_instanceMarketOptions = std::move(value); }

    /**
     * <p>The market (purchasing) option for the instances.</p>
     */
    inline ResponseLaunchTemplateData& WithInstanceMarketOptions(const LaunchTemplateInstanceMarketOptions& value) { SetInstanceMarketOptions(value); return *this;}

    /**
     * <p>The market (purchasing) option for the instances.</p>
     */
    inline ResponseLaunchTemplateData& WithInstanceMarketOptions(LaunchTemplateInstanceMarketOptions&& value) { SetInstanceMarketOptions(std::move(value)); return *this;}


    /**
     * <p>The credit option for CPU usage of the instance.</p>
     */
    inline const CreditSpecification& GetCreditSpecification() const{ return m_creditSpecification; }

    /**
     * <p>The credit option for CPU usage of the instance.</p>
     */
    inline bool CreditSpecificationHasBeenSet() const { return m_creditSpecificationHasBeenSet; }

    /**
     * <p>The credit option for CPU usage of the instance.</p>
     */
    inline void SetCreditSpecification(const CreditSpecification& value) { m_creditSpecificationHasBeenSet = true; m_creditSpecification = value; }

    /**
     * <p>The credit option for CPU usage of the instance.</p>
     */
    inline void SetCreditSpecification(CreditSpecification&& value) { m_creditSpecificationHasBeenSet = true; m_creditSpecification = std::move(value); }

    /**
     * <p>The credit option for CPU usage of the instance.</p>
     */
    inline ResponseLaunchTemplateData& WithCreditSpecification(const CreditSpecification& value) { SetCreditSpecification(value); return *this;}

    /**
     * <p>The credit option for CPU usage of the instance.</p>
     */
    inline ResponseLaunchTemplateData& WithCreditSpecification(CreditSpecification&& value) { SetCreditSpecification(std::move(value)); return *this;}


    /**
     * <p>The CPU options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimizing
     * CPU Options</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline const LaunchTemplateCpuOptions& GetCpuOptions() const{ return m_cpuOptions; }

    /**
     * <p>The CPU options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimizing
     * CPU Options</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline bool CpuOptionsHasBeenSet() const { return m_cpuOptionsHasBeenSet; }

    /**
     * <p>The CPU options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimizing
     * CPU Options</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetCpuOptions(const LaunchTemplateCpuOptions& value) { m_cpuOptionsHasBeenSet = true; m_cpuOptions = value; }

    /**
     * <p>The CPU options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimizing
     * CPU Options</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetCpuOptions(LaunchTemplateCpuOptions&& value) { m_cpuOptionsHasBeenSet = true; m_cpuOptions = std::move(value); }

    /**
     * <p>The CPU options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimizing
     * CPU Options</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline ResponseLaunchTemplateData& WithCpuOptions(const LaunchTemplateCpuOptions& value) { SetCpuOptions(value); return *this;}

    /**
     * <p>The CPU options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimizing
     * CPU Options</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline ResponseLaunchTemplateData& WithCpuOptions(LaunchTemplateCpuOptions&& value) { SetCpuOptions(std::move(value)); return *this;}


    /**
     * <p>Information about the Capacity Reservation targeting option.</p>
     */
    inline const LaunchTemplateCapacityReservationSpecificationResponse& GetCapacityReservationSpecification() const{ return m_capacityReservationSpecification; }

    /**
     * <p>Information about the Capacity Reservation targeting option.</p>
     */
    inline bool CapacityReservationSpecificationHasBeenSet() const { return m_capacityReservationSpecificationHasBeenSet; }

    /**
     * <p>Information about the Capacity Reservation targeting option.</p>
     */
    inline void SetCapacityReservationSpecification(const LaunchTemplateCapacityReservationSpecificationResponse& value) { m_capacityReservationSpecificationHasBeenSet = true; m_capacityReservationSpecification = value; }

    /**
     * <p>Information about the Capacity Reservation targeting option.</p>
     */
    inline void SetCapacityReservationSpecification(LaunchTemplateCapacityReservationSpecificationResponse&& value) { m_capacityReservationSpecificationHasBeenSet = true; m_capacityReservationSpecification = std::move(value); }

    /**
     * <p>Information about the Capacity Reservation targeting option.</p>
     */
    inline ResponseLaunchTemplateData& WithCapacityReservationSpecification(const LaunchTemplateCapacityReservationSpecificationResponse& value) { SetCapacityReservationSpecification(value); return *this;}

    /**
     * <p>Information about the Capacity Reservation targeting option.</p>
     */
    inline ResponseLaunchTemplateData& WithCapacityReservationSpecification(LaunchTemplateCapacityReservationSpecificationResponse&& value) { SetCapacityReservationSpecification(std::move(value)); return *this;}


    /**
     * <p>The license configurations.</p>
     */
    inline const Aws::Vector<LaunchTemplateLicenseConfiguration>& GetLicenseSpecifications() const{ return m_licenseSpecifications; }

    /**
     * <p>The license configurations.</p>
     */
    inline bool LicenseSpecificationsHasBeenSet() const { return m_licenseSpecificationsHasBeenSet; }

    /**
     * <p>The license configurations.</p>
     */
    inline void SetLicenseSpecifications(const Aws::Vector<LaunchTemplateLicenseConfiguration>& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications = value; }

    /**
     * <p>The license configurations.</p>
     */
    inline void SetLicenseSpecifications(Aws::Vector<LaunchTemplateLicenseConfiguration>&& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications = std::move(value); }

    /**
     * <p>The license configurations.</p>
     */
    inline ResponseLaunchTemplateData& WithLicenseSpecifications(const Aws::Vector<LaunchTemplateLicenseConfiguration>& value) { SetLicenseSpecifications(value); return *this;}

    /**
     * <p>The license configurations.</p>
     */
    inline ResponseLaunchTemplateData& WithLicenseSpecifications(Aws::Vector<LaunchTemplateLicenseConfiguration>&& value) { SetLicenseSpecifications(std::move(value)); return *this;}

    /**
     * <p>The license configurations.</p>
     */
    inline ResponseLaunchTemplateData& AddLicenseSpecifications(const LaunchTemplateLicenseConfiguration& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications.push_back(value); return *this; }

    /**
     * <p>The license configurations.</p>
     */
    inline ResponseLaunchTemplateData& AddLicenseSpecifications(LaunchTemplateLicenseConfiguration&& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether an instance is configured for hibernation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html">Hibernate
     * Your Instance</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline const LaunchTemplateHibernationOptions& GetHibernationOptions() const{ return m_hibernationOptions; }

    /**
     * <p>Indicates whether an instance is configured for hibernation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html">Hibernate
     * Your Instance</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline bool HibernationOptionsHasBeenSet() const { return m_hibernationOptionsHasBeenSet; }

    /**
     * <p>Indicates whether an instance is configured for hibernation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html">Hibernate
     * Your Instance</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetHibernationOptions(const LaunchTemplateHibernationOptions& value) { m_hibernationOptionsHasBeenSet = true; m_hibernationOptions = value; }

    /**
     * <p>Indicates whether an instance is configured for hibernation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html">Hibernate
     * Your Instance</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetHibernationOptions(LaunchTemplateHibernationOptions&& value) { m_hibernationOptionsHasBeenSet = true; m_hibernationOptions = std::move(value); }

    /**
     * <p>Indicates whether an instance is configured for hibernation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html">Hibernate
     * Your Instance</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline ResponseLaunchTemplateData& WithHibernationOptions(const LaunchTemplateHibernationOptions& value) { SetHibernationOptions(value); return *this;}

    /**
     * <p>Indicates whether an instance is configured for hibernation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html">Hibernate
     * Your Instance</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline ResponseLaunchTemplateData& WithHibernationOptions(LaunchTemplateHibernationOptions&& value) { SetHibernationOptions(std::move(value)); return *this;}

  private:

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet;

    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet;

    LaunchTemplateIamInstanceProfileSpecification m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet;

    Aws::Vector<LaunchTemplateBlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet;

    Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecification> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet;

    LaunchTemplatesMonitoring m_monitoring;
    bool m_monitoringHasBeenSet;

    LaunchTemplatePlacement m_placement;
    bool m_placementHasBeenSet;

    Aws::String m_ramDiskId;
    bool m_ramDiskIdHasBeenSet;

    bool m_disableApiTermination;
    bool m_disableApiTerminationHasBeenSet;

    ShutdownBehavior m_instanceInitiatedShutdownBehavior;
    bool m_instanceInitiatedShutdownBehaviorHasBeenSet;

    Aws::String m_userData;
    bool m_userDataHasBeenSet;

    Aws::Vector<LaunchTemplateTagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet;

    Aws::Vector<ElasticGpuSpecificationResponse> m_elasticGpuSpecifications;
    bool m_elasticGpuSpecificationsHasBeenSet;

    Aws::Vector<LaunchTemplateElasticInferenceAcceleratorResponse> m_elasticInferenceAccelerators;
    bool m_elasticInferenceAcceleratorsHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet;

    LaunchTemplateInstanceMarketOptions m_instanceMarketOptions;
    bool m_instanceMarketOptionsHasBeenSet;

    CreditSpecification m_creditSpecification;
    bool m_creditSpecificationHasBeenSet;

    LaunchTemplateCpuOptions m_cpuOptions;
    bool m_cpuOptionsHasBeenSet;

    LaunchTemplateCapacityReservationSpecificationResponse m_capacityReservationSpecification;
    bool m_capacityReservationSpecificationHasBeenSet;

    Aws::Vector<LaunchTemplateLicenseConfiguration> m_licenseSpecifications;
    bool m_licenseSpecificationsHasBeenSet;

    LaunchTemplateHibernationOptions m_hibernationOptions;
    bool m_hibernationOptionsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
