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
#include <aws/ec2/model/LaunchTemplateIamInstanceProfileSpecificationRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/ec2/model/LaunchTemplatesMonitoringRequest.h>
#include <aws/ec2/model/LaunchTemplatePlacementRequest.h>
#include <aws/ec2/model/ShutdownBehavior.h>
#include <aws/ec2/model/LaunchTemplateInstanceMarketOptionsRequest.h>
#include <aws/ec2/model/CreditSpecificationRequest.h>
#include <aws/ec2/model/LaunchTemplateBlockDeviceMappingRequest.h>
#include <aws/ec2/model/LaunchTemplateInstanceNetworkInterfaceSpecificationRequest.h>
#include <aws/ec2/model/LaunchTemplateTagSpecificationRequest.h>
#include <aws/ec2/model/ElasticGpuSpecification.h>
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
   * <p>The information to include in the launch template.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RequestLaunchTemplateData">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API RequestLaunchTemplateData
  {
  public:
    RequestLaunchTemplateData();
    RequestLaunchTemplateData(const Aws::Utils::Xml::XmlNode& xmlNode);
    RequestLaunchTemplateData& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the kernel.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * Provided Kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline const Aws::String& GetKernelId() const{ return m_kernelId; }

    /**
     * <p>The ID of the kernel.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * Provided Kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline void SetKernelId(const Aws::String& value) { m_kernelIdHasBeenSet = true; m_kernelId = value; }

    /**
     * <p>The ID of the kernel.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * Provided Kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline void SetKernelId(Aws::String&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::move(value); }

    /**
     * <p>The ID of the kernel.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * Provided Kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline void SetKernelId(const char* value) { m_kernelIdHasBeenSet = true; m_kernelId.assign(value); }

    /**
     * <p>The ID of the kernel.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * Provided Kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline RequestLaunchTemplateData& WithKernelId(const Aws::String& value) { SetKernelId(value); return *this;}

    /**
     * <p>The ID of the kernel.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * Provided Kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline RequestLaunchTemplateData& WithKernelId(Aws::String&& value) { SetKernelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the kernel.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * Provided Kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline RequestLaunchTemplateData& WithKernelId(const char* value) { SetKernelId(value); return *this;}


    /**
     * <p>Indicates whether the instance is optimized for Amazon EBS I/O. This
     * optimization provides dedicated throughput to Amazon EBS and an optimized
     * configuration stack to provide optimal Amazon EBS I/O performance. This
     * optimization isn't available with all instance types. Additional usage charges
     * apply when using an EBS-optimized instance.</p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }

    /**
     * <p>Indicates whether the instance is optimized for Amazon EBS I/O. This
     * optimization provides dedicated throughput to Amazon EBS and an optimized
     * configuration stack to provide optimal Amazon EBS I/O performance. This
     * optimization isn't available with all instance types. Additional usage charges
     * apply when using an EBS-optimized instance.</p>
     */
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }

    /**
     * <p>Indicates whether the instance is optimized for Amazon EBS I/O. This
     * optimization provides dedicated throughput to Amazon EBS and an optimized
     * configuration stack to provide optimal Amazon EBS I/O performance. This
     * optimization isn't available with all instance types. Additional usage charges
     * apply when using an EBS-optimized instance.</p>
     */
    inline RequestLaunchTemplateData& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}


    /**
     * <p>The IAM instance profile.</p>
     */
    inline const LaunchTemplateIamInstanceProfileSpecificationRequest& GetIamInstanceProfile() const{ return m_iamInstanceProfile; }

    /**
     * <p>The IAM instance profile.</p>
     */
    inline void SetIamInstanceProfile(const LaunchTemplateIamInstanceProfileSpecificationRequest& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = value; }

    /**
     * <p>The IAM instance profile.</p>
     */
    inline void SetIamInstanceProfile(LaunchTemplateIamInstanceProfileSpecificationRequest&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::move(value); }

    /**
     * <p>The IAM instance profile.</p>
     */
    inline RequestLaunchTemplateData& WithIamInstanceProfile(const LaunchTemplateIamInstanceProfileSpecificationRequest& value) { SetIamInstanceProfile(value); return *this;}

    /**
     * <p>The IAM instance profile.</p>
     */
    inline RequestLaunchTemplateData& WithIamInstanceProfile(LaunchTemplateIamInstanceProfileSpecificationRequest&& value) { SetIamInstanceProfile(std::move(value)); return *this;}


    /**
     * <p>The block device mapping.</p> <important> <p>Supplying both a snapshot ID and
     * an encryption value as arguments for block-device mapping results in an error.
     * This is because only blank volumes can be encrypted on start, and these are not
     * created from a snapshot. If a snapshot is the basis for the volume, it contains
     * data by definition and its encryption status cannot be changed using this
     * action.</p> </important>
     */
    inline const Aws::Vector<LaunchTemplateBlockDeviceMappingRequest>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }

    /**
     * <p>The block device mapping.</p> <important> <p>Supplying both a snapshot ID and
     * an encryption value as arguments for block-device mapping results in an error.
     * This is because only blank volumes can be encrypted on start, and these are not
     * created from a snapshot. If a snapshot is the basis for the volume, it contains
     * data by definition and its encryption status cannot be changed using this
     * action.</p> </important>
     */
    inline void SetBlockDeviceMappings(const Aws::Vector<LaunchTemplateBlockDeviceMappingRequest>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }

    /**
     * <p>The block device mapping.</p> <important> <p>Supplying both a snapshot ID and
     * an encryption value as arguments for block-device mapping results in an error.
     * This is because only blank volumes can be encrypted on start, and these are not
     * created from a snapshot. If a snapshot is the basis for the volume, it contains
     * data by definition and its encryption status cannot be changed using this
     * action.</p> </important>
     */
    inline void SetBlockDeviceMappings(Aws::Vector<LaunchTemplateBlockDeviceMappingRequest>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }

    /**
     * <p>The block device mapping.</p> <important> <p>Supplying both a snapshot ID and
     * an encryption value as arguments for block-device mapping results in an error.
     * This is because only blank volumes can be encrypted on start, and these are not
     * created from a snapshot. If a snapshot is the basis for the volume, it contains
     * data by definition and its encryption status cannot be changed using this
     * action.</p> </important>
     */
    inline RequestLaunchTemplateData& WithBlockDeviceMappings(const Aws::Vector<LaunchTemplateBlockDeviceMappingRequest>& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>The block device mapping.</p> <important> <p>Supplying both a snapshot ID and
     * an encryption value as arguments for block-device mapping results in an error.
     * This is because only blank volumes can be encrypted on start, and these are not
     * created from a snapshot. If a snapshot is the basis for the volume, it contains
     * data by definition and its encryption status cannot be changed using this
     * action.</p> </important>
     */
    inline RequestLaunchTemplateData& WithBlockDeviceMappings(Aws::Vector<LaunchTemplateBlockDeviceMappingRequest>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}

    /**
     * <p>The block device mapping.</p> <important> <p>Supplying both a snapshot ID and
     * an encryption value as arguments for block-device mapping results in an error.
     * This is because only blank volumes can be encrypted on start, and these are not
     * created from a snapshot. If a snapshot is the basis for the volume, it contains
     * data by definition and its encryption status cannot be changed using this
     * action.</p> </important>
     */
    inline RequestLaunchTemplateData& AddBlockDeviceMappings(const LaunchTemplateBlockDeviceMappingRequest& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>The block device mapping.</p> <important> <p>Supplying both a snapshot ID and
     * an encryption value as arguments for block-device mapping results in an error.
     * This is because only blank volumes can be encrypted on start, and these are not
     * created from a snapshot. If a snapshot is the basis for the volume, it contains
     * data by definition and its encryption status cannot be changed using this
     * action.</p> </important>
     */
    inline RequestLaunchTemplateData& AddBlockDeviceMappings(LaunchTemplateBlockDeviceMappingRequest&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more network interfaces.</p>
     */
    inline const Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecificationRequest>& GetNetworkInterfaces() const{ return m_networkInterfaces; }

    /**
     * <p>One or more network interfaces.</p>
     */
    inline void SetNetworkInterfaces(const Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecificationRequest>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }

    /**
     * <p>One or more network interfaces.</p>
     */
    inline void SetNetworkInterfaces(Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecificationRequest>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }

    /**
     * <p>One or more network interfaces.</p>
     */
    inline RequestLaunchTemplateData& WithNetworkInterfaces(const Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecificationRequest>& value) { SetNetworkInterfaces(value); return *this;}

    /**
     * <p>One or more network interfaces.</p>
     */
    inline RequestLaunchTemplateData& WithNetworkInterfaces(Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecificationRequest>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}

    /**
     * <p>One or more network interfaces.</p>
     */
    inline RequestLaunchTemplateData& AddNetworkInterfaces(const LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }

    /**
     * <p>One or more network interfaces.</p>
     */
    inline RequestLaunchTemplateData& AddNetworkInterfaces(LaunchTemplateInstanceNetworkInterfaceSpecificationRequest&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the AMI, which you can get by using <a>DescribeImages</a>.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The ID of the AMI, which you can get by using <a>DescribeImages</a>.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The ID of the AMI, which you can get by using <a>DescribeImages</a>.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The ID of the AMI, which you can get by using <a>DescribeImages</a>.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The ID of the AMI, which you can get by using <a>DescribeImages</a>.</p>
     */
    inline RequestLaunchTemplateData& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the AMI, which you can get by using <a>DescribeImages</a>.</p>
     */
    inline RequestLaunchTemplateData& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AMI, which you can get by using <a>DescribeImages</a>.</p>
     */
    inline RequestLaunchTemplateData& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The instance type. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline RequestLaunchTemplateData& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline RequestLaunchTemplateData& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The name of the key pair. You can create a key pair using
     * <a>CreateKeyPair</a> or <a>ImportKeyPair</a>.</p> <important> <p>If you do not
     * specify a key pair, you can't connect to the instance unless you choose an AMI
     * that is configured to allow users another way to log in.</p> </important>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>The name of the key pair. You can create a key pair using
     * <a>CreateKeyPair</a> or <a>ImportKeyPair</a>.</p> <important> <p>If you do not
     * specify a key pair, you can't connect to the instance unless you choose an AMI
     * that is configured to allow users another way to log in.</p> </important>
     */
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }

    /**
     * <p>The name of the key pair. You can create a key pair using
     * <a>CreateKeyPair</a> or <a>ImportKeyPair</a>.</p> <important> <p>If you do not
     * specify a key pair, you can't connect to the instance unless you choose an AMI
     * that is configured to allow users another way to log in.</p> </important>
     */
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }

    /**
     * <p>The name of the key pair. You can create a key pair using
     * <a>CreateKeyPair</a> or <a>ImportKeyPair</a>.</p> <important> <p>If you do not
     * specify a key pair, you can't connect to the instance unless you choose an AMI
     * that is configured to allow users another way to log in.</p> </important>
     */
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }

    /**
     * <p>The name of the key pair. You can create a key pair using
     * <a>CreateKeyPair</a> or <a>ImportKeyPair</a>.</p> <important> <p>If you do not
     * specify a key pair, you can't connect to the instance unless you choose an AMI
     * that is configured to allow users another way to log in.</p> </important>
     */
    inline RequestLaunchTemplateData& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>The name of the key pair. You can create a key pair using
     * <a>CreateKeyPair</a> or <a>ImportKeyPair</a>.</p> <important> <p>If you do not
     * specify a key pair, you can't connect to the instance unless you choose an AMI
     * that is configured to allow users another way to log in.</p> </important>
     */
    inline RequestLaunchTemplateData& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>The name of the key pair. You can create a key pair using
     * <a>CreateKeyPair</a> or <a>ImportKeyPair</a>.</p> <important> <p>If you do not
     * specify a key pair, you can't connect to the instance unless you choose an AMI
     * that is configured to allow users another way to log in.</p> </important>
     */
    inline RequestLaunchTemplateData& WithKeyName(const char* value) { SetKeyName(value); return *this;}


    /**
     * <p>The monitoring for the instance.</p>
     */
    inline const LaunchTemplatesMonitoringRequest& GetMonitoring() const{ return m_monitoring; }

    /**
     * <p>The monitoring for the instance.</p>
     */
    inline void SetMonitoring(const LaunchTemplatesMonitoringRequest& value) { m_monitoringHasBeenSet = true; m_monitoring = value; }

    /**
     * <p>The monitoring for the instance.</p>
     */
    inline void SetMonitoring(LaunchTemplatesMonitoringRequest&& value) { m_monitoringHasBeenSet = true; m_monitoring = std::move(value); }

    /**
     * <p>The monitoring for the instance.</p>
     */
    inline RequestLaunchTemplateData& WithMonitoring(const LaunchTemplatesMonitoringRequest& value) { SetMonitoring(value); return *this;}

    /**
     * <p>The monitoring for the instance.</p>
     */
    inline RequestLaunchTemplateData& WithMonitoring(LaunchTemplatesMonitoringRequest&& value) { SetMonitoring(std::move(value)); return *this;}


    /**
     * <p>The placement for the instance.</p>
     */
    inline const LaunchTemplatePlacementRequest& GetPlacement() const{ return m_placement; }

    /**
     * <p>The placement for the instance.</p>
     */
    inline void SetPlacement(const LaunchTemplatePlacementRequest& value) { m_placementHasBeenSet = true; m_placement = value; }

    /**
     * <p>The placement for the instance.</p>
     */
    inline void SetPlacement(LaunchTemplatePlacementRequest&& value) { m_placementHasBeenSet = true; m_placement = std::move(value); }

    /**
     * <p>The placement for the instance.</p>
     */
    inline RequestLaunchTemplateData& WithPlacement(const LaunchTemplatePlacementRequest& value) { SetPlacement(value); return *this;}

    /**
     * <p>The placement for the instance.</p>
     */
    inline RequestLaunchTemplateData& WithPlacement(LaunchTemplatePlacementRequest&& value) { SetPlacement(std::move(value)); return *this;}


    /**
     * <p>The ID of the RAM disk.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * Provided Kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline const Aws::String& GetRamDiskId() const{ return m_ramDiskId; }

    /**
     * <p>The ID of the RAM disk.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * Provided Kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline void SetRamDiskId(const Aws::String& value) { m_ramDiskIdHasBeenSet = true; m_ramDiskId = value; }

    /**
     * <p>The ID of the RAM disk.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * Provided Kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline void SetRamDiskId(Aws::String&& value) { m_ramDiskIdHasBeenSet = true; m_ramDiskId = std::move(value); }

    /**
     * <p>The ID of the RAM disk.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * Provided Kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline void SetRamDiskId(const char* value) { m_ramDiskIdHasBeenSet = true; m_ramDiskId.assign(value); }

    /**
     * <p>The ID of the RAM disk.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * Provided Kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline RequestLaunchTemplateData& WithRamDiskId(const Aws::String& value) { SetRamDiskId(value); return *this;}

    /**
     * <p>The ID of the RAM disk.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * Provided Kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline RequestLaunchTemplateData& WithRamDiskId(Aws::String&& value) { SetRamDiskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the RAM disk.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * Provided Kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline RequestLaunchTemplateData& WithRamDiskId(const char* value) { SetRamDiskId(value); return *this;}


    /**
     * <p>If set to <code>true</code>, you can't terminate the instance using the
     * Amazon EC2 console, CLI, or API. To change this attribute to <code>false</code>
     * after launch, use <a>ModifyInstanceAttribute</a>.</p>
     */
    inline bool GetDisableApiTermination() const{ return m_disableApiTermination; }

    /**
     * <p>If set to <code>true</code>, you can't terminate the instance using the
     * Amazon EC2 console, CLI, or API. To change this attribute to <code>false</code>
     * after launch, use <a>ModifyInstanceAttribute</a>.</p>
     */
    inline void SetDisableApiTermination(bool value) { m_disableApiTerminationHasBeenSet = true; m_disableApiTermination = value; }

    /**
     * <p>If set to <code>true</code>, you can't terminate the instance using the
     * Amazon EC2 console, CLI, or API. To change this attribute to <code>false</code>
     * after launch, use <a>ModifyInstanceAttribute</a>.</p>
     */
    inline RequestLaunchTemplateData& WithDisableApiTermination(bool value) { SetDisableApiTermination(value); return *this;}


    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     * <p>Default: <code>stop</code> </p>
     */
    inline const ShutdownBehavior& GetInstanceInitiatedShutdownBehavior() const{ return m_instanceInitiatedShutdownBehavior; }

    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     * <p>Default: <code>stop</code> </p>
     */
    inline void SetInstanceInitiatedShutdownBehavior(const ShutdownBehavior& value) { m_instanceInitiatedShutdownBehaviorHasBeenSet = true; m_instanceInitiatedShutdownBehavior = value; }

    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     * <p>Default: <code>stop</code> </p>
     */
    inline void SetInstanceInitiatedShutdownBehavior(ShutdownBehavior&& value) { m_instanceInitiatedShutdownBehaviorHasBeenSet = true; m_instanceInitiatedShutdownBehavior = std::move(value); }

    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     * <p>Default: <code>stop</code> </p>
     */
    inline RequestLaunchTemplateData& WithInstanceInitiatedShutdownBehavior(const ShutdownBehavior& value) { SetInstanceInitiatedShutdownBehavior(value); return *this;}

    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     * <p>Default: <code>stop</code> </p>
     */
    inline RequestLaunchTemplateData& WithInstanceInitiatedShutdownBehavior(ShutdownBehavior&& value) { SetInstanceInitiatedShutdownBehavior(std::move(value)); return *this;}


    /**
     * <p>The Base64-encoded user data to make available to the instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Running
     * Commands on Your Linux Instance at Launch</a> (Linux) and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html#instancedata-add-user-data">Adding
     * User Data</a> (Windows).</p>
     */
    inline const Aws::String& GetUserData() const{ return m_userData; }

    /**
     * <p>The Base64-encoded user data to make available to the instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Running
     * Commands on Your Linux Instance at Launch</a> (Linux) and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html#instancedata-add-user-data">Adding
     * User Data</a> (Windows).</p>
     */
    inline void SetUserData(const Aws::String& value) { m_userDataHasBeenSet = true; m_userData = value; }

    /**
     * <p>The Base64-encoded user data to make available to the instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Running
     * Commands on Your Linux Instance at Launch</a> (Linux) and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html#instancedata-add-user-data">Adding
     * User Data</a> (Windows).</p>
     */
    inline void SetUserData(Aws::String&& value) { m_userDataHasBeenSet = true; m_userData = std::move(value); }

    /**
     * <p>The Base64-encoded user data to make available to the instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Running
     * Commands on Your Linux Instance at Launch</a> (Linux) and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html#instancedata-add-user-data">Adding
     * User Data</a> (Windows).</p>
     */
    inline void SetUserData(const char* value) { m_userDataHasBeenSet = true; m_userData.assign(value); }

    /**
     * <p>The Base64-encoded user data to make available to the instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Running
     * Commands on Your Linux Instance at Launch</a> (Linux) and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html#instancedata-add-user-data">Adding
     * User Data</a> (Windows).</p>
     */
    inline RequestLaunchTemplateData& WithUserData(const Aws::String& value) { SetUserData(value); return *this;}

    /**
     * <p>The Base64-encoded user data to make available to the instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Running
     * Commands on Your Linux Instance at Launch</a> (Linux) and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html#instancedata-add-user-data">Adding
     * User Data</a> (Windows).</p>
     */
    inline RequestLaunchTemplateData& WithUserData(Aws::String&& value) { SetUserData(std::move(value)); return *this;}

    /**
     * <p>The Base64-encoded user data to make available to the instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Running
     * Commands on Your Linux Instance at Launch</a> (Linux) and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html#instancedata-add-user-data">Adding
     * User Data</a> (Windows).</p>
     */
    inline RequestLaunchTemplateData& WithUserData(const char* value) { SetUserData(value); return *this;}


    /**
     * <p>The tags to apply to the resources during launch. You can tag instances and
     * volumes. The specified tags are applied to all instances or volumes that are
     * created during launch.</p>
     */
    inline const Aws::Vector<LaunchTemplateTagSpecificationRequest>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply to the resources during launch. You can tag instances and
     * volumes. The specified tags are applied to all instances or volumes that are
     * created during launch.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<LaunchTemplateTagSpecificationRequest>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply to the resources during launch. You can tag instances and
     * volumes. The specified tags are applied to all instances or volumes that are
     * created during launch.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<LaunchTemplateTagSpecificationRequest>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the resources during launch. You can tag instances and
     * volumes. The specified tags are applied to all instances or volumes that are
     * created during launch.</p>
     */
    inline RequestLaunchTemplateData& WithTagSpecifications(const Aws::Vector<LaunchTemplateTagSpecificationRequest>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the resources during launch. You can tag instances and
     * volumes. The specified tags are applied to all instances or volumes that are
     * created during launch.</p>
     */
    inline RequestLaunchTemplateData& WithTagSpecifications(Aws::Vector<LaunchTemplateTagSpecificationRequest>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the resources during launch. You can tag instances and
     * volumes. The specified tags are applied to all instances or volumes that are
     * created during launch.</p>
     */
    inline RequestLaunchTemplateData& AddTagSpecifications(const LaunchTemplateTagSpecificationRequest& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the resources during launch. You can tag instances and
     * volumes. The specified tags are applied to all instances or volumes that are
     * created during launch.</p>
     */
    inline RequestLaunchTemplateData& AddTagSpecifications(LaunchTemplateTagSpecificationRequest&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>An elastic GPU to associate with the instance.</p>
     */
    inline const Aws::Vector<ElasticGpuSpecification>& GetElasticGpuSpecifications() const{ return m_elasticGpuSpecifications; }

    /**
     * <p>An elastic GPU to associate with the instance.</p>
     */
    inline void SetElasticGpuSpecifications(const Aws::Vector<ElasticGpuSpecification>& value) { m_elasticGpuSpecificationsHasBeenSet = true; m_elasticGpuSpecifications = value; }

    /**
     * <p>An elastic GPU to associate with the instance.</p>
     */
    inline void SetElasticGpuSpecifications(Aws::Vector<ElasticGpuSpecification>&& value) { m_elasticGpuSpecificationsHasBeenSet = true; m_elasticGpuSpecifications = std::move(value); }

    /**
     * <p>An elastic GPU to associate with the instance.</p>
     */
    inline RequestLaunchTemplateData& WithElasticGpuSpecifications(const Aws::Vector<ElasticGpuSpecification>& value) { SetElasticGpuSpecifications(value); return *this;}

    /**
     * <p>An elastic GPU to associate with the instance.</p>
     */
    inline RequestLaunchTemplateData& WithElasticGpuSpecifications(Aws::Vector<ElasticGpuSpecification>&& value) { SetElasticGpuSpecifications(std::move(value)); return *this;}

    /**
     * <p>An elastic GPU to associate with the instance.</p>
     */
    inline RequestLaunchTemplateData& AddElasticGpuSpecifications(const ElasticGpuSpecification& value) { m_elasticGpuSpecificationsHasBeenSet = true; m_elasticGpuSpecifications.push_back(value); return *this; }

    /**
     * <p>An elastic GPU to associate with the instance.</p>
     */
    inline RequestLaunchTemplateData& AddElasticGpuSpecifications(ElasticGpuSpecification&& value) { m_elasticGpuSpecificationsHasBeenSet = true; m_elasticGpuSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more security group IDs. You can create a security group using
     * <a>CreateSecurityGroup</a>. You cannot specify both a security group ID and
     * security name in the same request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>One or more security group IDs. You can create a security group using
     * <a>CreateSecurityGroup</a>. You cannot specify both a security group ID and
     * security name in the same request.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>One or more security group IDs. You can create a security group using
     * <a>CreateSecurityGroup</a>. You cannot specify both a security group ID and
     * security name in the same request.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>One or more security group IDs. You can create a security group using
     * <a>CreateSecurityGroup</a>. You cannot specify both a security group ID and
     * security name in the same request.</p>
     */
    inline RequestLaunchTemplateData& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>One or more security group IDs. You can create a security group using
     * <a>CreateSecurityGroup</a>. You cannot specify both a security group ID and
     * security name in the same request.</p>
     */
    inline RequestLaunchTemplateData& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>One or more security group IDs. You can create a security group using
     * <a>CreateSecurityGroup</a>. You cannot specify both a security group ID and
     * security name in the same request.</p>
     */
    inline RequestLaunchTemplateData& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>One or more security group IDs. You can create a security group using
     * <a>CreateSecurityGroup</a>. You cannot specify both a security group ID and
     * security name in the same request.</p>
     */
    inline RequestLaunchTemplateData& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more security group IDs. You can create a security group using
     * <a>CreateSecurityGroup</a>. You cannot specify both a security group ID and
     * security name in the same request.</p>
     */
    inline RequestLaunchTemplateData& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault
     * VPC, you must use security group IDs instead. You cannot specify both a security
     * group ID and security name in the same request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault
     * VPC, you must use security group IDs instead. You cannot specify both a security
     * group ID and security name in the same request.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault
     * VPC, you must use security group IDs instead. You cannot specify both a security
     * group ID and security name in the same request.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault
     * VPC, you must use security group IDs instead. You cannot specify both a security
     * group ID and security name in the same request.</p>
     */
    inline RequestLaunchTemplateData& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault
     * VPC, you must use security group IDs instead. You cannot specify both a security
     * group ID and security name in the same request.</p>
     */
    inline RequestLaunchTemplateData& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault
     * VPC, you must use security group IDs instead. You cannot specify both a security
     * group ID and security name in the same request.</p>
     */
    inline RequestLaunchTemplateData& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault
     * VPC, you must use security group IDs instead. You cannot specify both a security
     * group ID and security name in the same request.</p>
     */
    inline RequestLaunchTemplateData& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault
     * VPC, you must use security group IDs instead. You cannot specify both a security
     * group ID and security name in the same request.</p>
     */
    inline RequestLaunchTemplateData& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


    /**
     * <p>The market (purchasing) option for the instances.</p>
     */
    inline const LaunchTemplateInstanceMarketOptionsRequest& GetInstanceMarketOptions() const{ return m_instanceMarketOptions; }

    /**
     * <p>The market (purchasing) option for the instances.</p>
     */
    inline void SetInstanceMarketOptions(const LaunchTemplateInstanceMarketOptionsRequest& value) { m_instanceMarketOptionsHasBeenSet = true; m_instanceMarketOptions = value; }

    /**
     * <p>The market (purchasing) option for the instances.</p>
     */
    inline void SetInstanceMarketOptions(LaunchTemplateInstanceMarketOptionsRequest&& value) { m_instanceMarketOptionsHasBeenSet = true; m_instanceMarketOptions = std::move(value); }

    /**
     * <p>The market (purchasing) option for the instances.</p>
     */
    inline RequestLaunchTemplateData& WithInstanceMarketOptions(const LaunchTemplateInstanceMarketOptionsRequest& value) { SetInstanceMarketOptions(value); return *this;}

    /**
     * <p>The market (purchasing) option for the instances.</p>
     */
    inline RequestLaunchTemplateData& WithInstanceMarketOptions(LaunchTemplateInstanceMarketOptionsRequest&& value) { SetInstanceMarketOptions(std::move(value)); return *this;}


    /**
     * <p>The credit option for CPU usage of the instance. Valid for T2 instances
     * only.</p>
     */
    inline const CreditSpecificationRequest& GetCreditSpecification() const{ return m_creditSpecification; }

    /**
     * <p>The credit option for CPU usage of the instance. Valid for T2 instances
     * only.</p>
     */
    inline void SetCreditSpecification(const CreditSpecificationRequest& value) { m_creditSpecificationHasBeenSet = true; m_creditSpecification = value; }

    /**
     * <p>The credit option for CPU usage of the instance. Valid for T2 instances
     * only.</p>
     */
    inline void SetCreditSpecification(CreditSpecificationRequest&& value) { m_creditSpecificationHasBeenSet = true; m_creditSpecification = std::move(value); }

    /**
     * <p>The credit option for CPU usage of the instance. Valid for T2 instances
     * only.</p>
     */
    inline RequestLaunchTemplateData& WithCreditSpecification(const CreditSpecificationRequest& value) { SetCreditSpecification(value); return *this;}

    /**
     * <p>The credit option for CPU usage of the instance. Valid for T2 instances
     * only.</p>
     */
    inline RequestLaunchTemplateData& WithCreditSpecification(CreditSpecificationRequest&& value) { SetCreditSpecification(std::move(value)); return *this;}

  private:

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet;

    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet;

    LaunchTemplateIamInstanceProfileSpecificationRequest m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet;

    Aws::Vector<LaunchTemplateBlockDeviceMappingRequest> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet;

    Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecificationRequest> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet;

    LaunchTemplatesMonitoringRequest m_monitoring;
    bool m_monitoringHasBeenSet;

    LaunchTemplatePlacementRequest m_placement;
    bool m_placementHasBeenSet;

    Aws::String m_ramDiskId;
    bool m_ramDiskIdHasBeenSet;

    bool m_disableApiTermination;
    bool m_disableApiTerminationHasBeenSet;

    ShutdownBehavior m_instanceInitiatedShutdownBehavior;
    bool m_instanceInitiatedShutdownBehaviorHasBeenSet;

    Aws::String m_userData;
    bool m_userDataHasBeenSet;

    Aws::Vector<LaunchTemplateTagSpecificationRequest> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet;

    Aws::Vector<ElasticGpuSpecification> m_elasticGpuSpecifications;
    bool m_elasticGpuSpecificationsHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet;

    LaunchTemplateInstanceMarketOptionsRequest m_instanceMarketOptions;
    bool m_instanceMarketOptionsHasBeenSet;

    CreditSpecificationRequest m_creditSpecification;
    bool m_creditSpecificationHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
