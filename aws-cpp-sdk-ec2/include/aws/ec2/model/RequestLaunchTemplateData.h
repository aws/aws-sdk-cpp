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
#include <aws/ec2/model/LaunchTemplateBlockDeviceMappingRequest.h>
#include <aws/ec2/model/LaunchTemplateInstanceNetworkInterfaceSpecificationRequest.h>
#include <aws/ec2/model/LaunchTemplateTagSpecificationRequest.h>
#include <aws/ec2/model/ElasticGpuSpecification.h>
#include <aws/ec2/model/LaunchTemplateElasticInferenceAccelerator.h>
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
    AWS_EC2_API RequestLaunchTemplateData();
    AWS_EC2_API RequestLaunchTemplateData(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RequestLaunchTemplateData& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the kernel.</p>  <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * provided kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * 
     */
    inline const Aws::String& GetKernelId() const{ return m_kernelId; }

    /**
     * <p>The ID of the kernel.</p>  <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * provided kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * 
     */
    inline bool KernelIdHasBeenSet() const { return m_kernelIdHasBeenSet; }

    /**
     * <p>The ID of the kernel.</p>  <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * provided kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * 
     */
    inline void SetKernelId(const Aws::String& value) { m_kernelIdHasBeenSet = true; m_kernelId = value; }

    /**
     * <p>The ID of the kernel.</p>  <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * provided kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * 
     */
    inline void SetKernelId(Aws::String&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::move(value); }

    /**
     * <p>The ID of the kernel.</p>  <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * provided kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * 
     */
    inline void SetKernelId(const char* value) { m_kernelIdHasBeenSet = true; m_kernelId.assign(value); }

    /**
     * <p>The ID of the kernel.</p>  <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * provided kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * 
     */
    inline RequestLaunchTemplateData& WithKernelId(const Aws::String& value) { SetKernelId(value); return *this;}

    /**
     * <p>The ID of the kernel.</p>  <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * provided kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * 
     */
    inline RequestLaunchTemplateData& WithKernelId(Aws::String&& value) { SetKernelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the kernel.</p>  <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * provided kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * 
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
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }

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
     * <p>The name or Amazon Resource Name (ARN) of an IAM instance profile.</p>
     */
    inline const LaunchTemplateIamInstanceProfileSpecificationRequest& GetIamInstanceProfile() const{ return m_iamInstanceProfile; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of an IAM instance profile.</p>
     */
    inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of an IAM instance profile.</p>
     */
    inline void SetIamInstanceProfile(const LaunchTemplateIamInstanceProfileSpecificationRequest& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of an IAM instance profile.</p>
     */
    inline void SetIamInstanceProfile(LaunchTemplateIamInstanceProfileSpecificationRequest&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::move(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of an IAM instance profile.</p>
     */
    inline RequestLaunchTemplateData& WithIamInstanceProfile(const LaunchTemplateIamInstanceProfileSpecificationRequest& value) { SetIamInstanceProfile(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of an IAM instance profile.</p>
     */
    inline RequestLaunchTemplateData& WithIamInstanceProfile(LaunchTemplateIamInstanceProfileSpecificationRequest&& value) { SetIamInstanceProfile(std::move(value)); return *this;}


    /**
     * <p>The block device mapping.</p>
     */
    inline const Aws::Vector<LaunchTemplateBlockDeviceMappingRequest>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }

    /**
     * <p>The block device mapping.</p>
     */
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }

    /**
     * <p>The block device mapping.</p>
     */
    inline void SetBlockDeviceMappings(const Aws::Vector<LaunchTemplateBlockDeviceMappingRequest>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }

    /**
     * <p>The block device mapping.</p>
     */
    inline void SetBlockDeviceMappings(Aws::Vector<LaunchTemplateBlockDeviceMappingRequest>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }

    /**
     * <p>The block device mapping.</p>
     */
    inline RequestLaunchTemplateData& WithBlockDeviceMappings(const Aws::Vector<LaunchTemplateBlockDeviceMappingRequest>& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>The block device mapping.</p>
     */
    inline RequestLaunchTemplateData& WithBlockDeviceMappings(Aws::Vector<LaunchTemplateBlockDeviceMappingRequest>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}

    /**
     * <p>The block device mapping.</p>
     */
    inline RequestLaunchTemplateData& AddBlockDeviceMappings(const LaunchTemplateBlockDeviceMappingRequest& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>The block device mapping.</p>
     */
    inline RequestLaunchTemplateData& AddBlockDeviceMappings(LaunchTemplateBlockDeviceMappingRequest&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more network interfaces. If you specify a network interface, you must
     * specify any security groups and subnets as part of the network interface.</p>
     */
    inline const Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecificationRequest>& GetNetworkInterfaces() const{ return m_networkInterfaces; }

    /**
     * <p>One or more network interfaces. If you specify a network interface, you must
     * specify any security groups and subnets as part of the network interface.</p>
     */
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }

    /**
     * <p>One or more network interfaces. If you specify a network interface, you must
     * specify any security groups and subnets as part of the network interface.</p>
     */
    inline void SetNetworkInterfaces(const Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecificationRequest>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }

    /**
     * <p>One or more network interfaces. If you specify a network interface, you must
     * specify any security groups and subnets as part of the network interface.</p>
     */
    inline void SetNetworkInterfaces(Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecificationRequest>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }

    /**
     * <p>One or more network interfaces. If you specify a network interface, you must
     * specify any security groups and subnets as part of the network interface.</p>
     */
    inline RequestLaunchTemplateData& WithNetworkInterfaces(const Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecificationRequest>& value) { SetNetworkInterfaces(value); return *this;}

    /**
     * <p>One or more network interfaces. If you specify a network interface, you must
     * specify any security groups and subnets as part of the network interface.</p>
     */
    inline RequestLaunchTemplateData& WithNetworkInterfaces(Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecificationRequest>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}

    /**
     * <p>One or more network interfaces. If you specify a network interface, you must
     * specify any security groups and subnets as part of the network interface.</p>
     */
    inline RequestLaunchTemplateData& AddNetworkInterfaces(const LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }

    /**
     * <p>One or more network interfaces. If you specify a network interface, you must
     * specify any security groups and subnets as part of the network interface.</p>
     */
    inline RequestLaunchTemplateData& AddNetworkInterfaces(LaunchTemplateInstanceNetworkInterfaceSpecificationRequest&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the AMI.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

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
    inline RequestLaunchTemplateData& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the AMI.</p>
     */
    inline RequestLaunchTemplateData& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AMI.</p>
     */
    inline RequestLaunchTemplateData& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>If you
     * specify <code>InstanceType</code>, you can't specify
     * <code>InstanceRequirements</code>.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>If you
     * specify <code>InstanceType</code>, you can't specify
     * <code>InstanceRequirements</code>.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>If you
     * specify <code>InstanceType</code>, you can't specify
     * <code>InstanceRequirements</code>.</p>
     */
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>If you
     * specify <code>InstanceType</code>, you can't specify
     * <code>InstanceRequirements</code>.</p>
     */
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>If you
     * specify <code>InstanceType</code>, you can't specify
     * <code>InstanceRequirements</code>.</p>
     */
    inline RequestLaunchTemplateData& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>If you
     * specify <code>InstanceType</code>, you can't specify
     * <code>InstanceRequirements</code>.</p>
     */
    inline RequestLaunchTemplateData& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The name of the key pair. You can create a key pair using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateKeyPair.html">CreateKeyPair</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportKeyPair.html">ImportKeyPair</a>.</p>
     *  <p>If you do not specify a key pair, you can't connect to the
     * instance unless you choose an AMI that is configured to allow users another way
     * to log in.</p> 
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>The name of the key pair. You can create a key pair using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateKeyPair.html">CreateKeyPair</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportKeyPair.html">ImportKeyPair</a>.</p>
     *  <p>If you do not specify a key pair, you can't connect to the
     * instance unless you choose an AMI that is configured to allow users another way
     * to log in.</p> 
     */
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }

    /**
     * <p>The name of the key pair. You can create a key pair using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateKeyPair.html">CreateKeyPair</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportKeyPair.html">ImportKeyPair</a>.</p>
     *  <p>If you do not specify a key pair, you can't connect to the
     * instance unless you choose an AMI that is configured to allow users another way
     * to log in.</p> 
     */
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }

    /**
     * <p>The name of the key pair. You can create a key pair using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateKeyPair.html">CreateKeyPair</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportKeyPair.html">ImportKeyPair</a>.</p>
     *  <p>If you do not specify a key pair, you can't connect to the
     * instance unless you choose an AMI that is configured to allow users another way
     * to log in.</p> 
     */
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }

    /**
     * <p>The name of the key pair. You can create a key pair using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateKeyPair.html">CreateKeyPair</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportKeyPair.html">ImportKeyPair</a>.</p>
     *  <p>If you do not specify a key pair, you can't connect to the
     * instance unless you choose an AMI that is configured to allow users another way
     * to log in.</p> 
     */
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }

    /**
     * <p>The name of the key pair. You can create a key pair using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateKeyPair.html">CreateKeyPair</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportKeyPair.html">ImportKeyPair</a>.</p>
     *  <p>If you do not specify a key pair, you can't connect to the
     * instance unless you choose an AMI that is configured to allow users another way
     * to log in.</p> 
     */
    inline RequestLaunchTemplateData& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>The name of the key pair. You can create a key pair using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateKeyPair.html">CreateKeyPair</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportKeyPair.html">ImportKeyPair</a>.</p>
     *  <p>If you do not specify a key pair, you can't connect to the
     * instance unless you choose an AMI that is configured to allow users another way
     * to log in.</p> 
     */
    inline RequestLaunchTemplateData& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>The name of the key pair. You can create a key pair using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateKeyPair.html">CreateKeyPair</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportKeyPair.html">ImportKeyPair</a>.</p>
     *  <p>If you do not specify a key pair, you can't connect to the
     * instance unless you choose an AMI that is configured to allow users another way
     * to log in.</p> 
     */
    inline RequestLaunchTemplateData& WithKeyName(const char* value) { SetKeyName(value); return *this;}


    /**
     * <p>The monitoring for the instance.</p>
     */
    inline const LaunchTemplatesMonitoringRequest& GetMonitoring() const{ return m_monitoring; }

    /**
     * <p>The monitoring for the instance.</p>
     */
    inline bool MonitoringHasBeenSet() const { return m_monitoringHasBeenSet; }

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
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }

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
     * <p>The ID of the RAM disk.</p>  <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * provided kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * 
     */
    inline const Aws::String& GetRamDiskId() const{ return m_ramDiskId; }

    /**
     * <p>The ID of the RAM disk.</p>  <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * provided kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * 
     */
    inline bool RamDiskIdHasBeenSet() const { return m_ramDiskIdHasBeenSet; }

    /**
     * <p>The ID of the RAM disk.</p>  <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * provided kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * 
     */
    inline void SetRamDiskId(const Aws::String& value) { m_ramDiskIdHasBeenSet = true; m_ramDiskId = value; }

    /**
     * <p>The ID of the RAM disk.</p>  <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * provided kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * 
     */
    inline void SetRamDiskId(Aws::String&& value) { m_ramDiskIdHasBeenSet = true; m_ramDiskId = std::move(value); }

    /**
     * <p>The ID of the RAM disk.</p>  <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * provided kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * 
     */
    inline void SetRamDiskId(const char* value) { m_ramDiskIdHasBeenSet = true; m_ramDiskId.assign(value); }

    /**
     * <p>The ID of the RAM disk.</p>  <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * provided kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * 
     */
    inline RequestLaunchTemplateData& WithRamDiskId(const Aws::String& value) { SetRamDiskId(value); return *this;}

    /**
     * <p>The ID of the RAM disk.</p>  <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * provided kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * 
     */
    inline RequestLaunchTemplateData& WithRamDiskId(Aws::String&& value) { SetRamDiskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the RAM disk.</p>  <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User
     * provided kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * 
     */
    inline RequestLaunchTemplateData& WithRamDiskId(const char* value) { SetRamDiskId(value); return *this;}


    /**
     * <p>If you set this parameter to <code>true</code>, you can't terminate the
     * instance using the Amazon EC2 console, CLI, or API; otherwise, you can. To
     * change this attribute after launch, use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ModifyInstanceAttribute.html">ModifyInstanceAttribute</a>.
     * Alternatively, if you set <code>InstanceInitiatedShutdownBehavior</code> to
     * <code>terminate</code>, you can terminate the instance by running the shutdown
     * command from the instance.</p>
     */
    inline bool GetDisableApiTermination() const{ return m_disableApiTermination; }

    /**
     * <p>If you set this parameter to <code>true</code>, you can't terminate the
     * instance using the Amazon EC2 console, CLI, or API; otherwise, you can. To
     * change this attribute after launch, use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ModifyInstanceAttribute.html">ModifyInstanceAttribute</a>.
     * Alternatively, if you set <code>InstanceInitiatedShutdownBehavior</code> to
     * <code>terminate</code>, you can terminate the instance by running the shutdown
     * command from the instance.</p>
     */
    inline bool DisableApiTerminationHasBeenSet() const { return m_disableApiTerminationHasBeenSet; }

    /**
     * <p>If you set this parameter to <code>true</code>, you can't terminate the
     * instance using the Amazon EC2 console, CLI, or API; otherwise, you can. To
     * change this attribute after launch, use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ModifyInstanceAttribute.html">ModifyInstanceAttribute</a>.
     * Alternatively, if you set <code>InstanceInitiatedShutdownBehavior</code> to
     * <code>terminate</code>, you can terminate the instance by running the shutdown
     * command from the instance.</p>
     */
    inline void SetDisableApiTermination(bool value) { m_disableApiTerminationHasBeenSet = true; m_disableApiTermination = value; }

    /**
     * <p>If you set this parameter to <code>true</code>, you can't terminate the
     * instance using the Amazon EC2 console, CLI, or API; otherwise, you can. To
     * change this attribute after launch, use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ModifyInstanceAttribute.html">ModifyInstanceAttribute</a>.
     * Alternatively, if you set <code>InstanceInitiatedShutdownBehavior</code> to
     * <code>terminate</code>, you can terminate the instance by running the shutdown
     * command from the instance.</p>
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
    inline bool InstanceInitiatedShutdownBehaviorHasBeenSet() const { return m_instanceInitiatedShutdownBehaviorHasBeenSet; }

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
     * <p>The user data to make available to the instance. You must provide
     * base64-encoded text. User data is limited to 16 KB. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Run
     * commands on your Linux instance at launch</a> (Linux) or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instancedata-add-user-data.html">Work
     * with instance user data</a> (Windows) in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>.</p> <p>If you are creating the launch template for use with
     * Batch, the user data must be provided in the <a
     * href="https://cloudinit.readthedocs.io/en/latest/topics/format.html#mime-multi-part-archive">
     * MIME multi-part archive format</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/launch-templates.html">Amazon
     * EC2 user data in launch templates</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const Aws::String& GetUserData() const{ return m_userData; }

    /**
     * <p>The user data to make available to the instance. You must provide
     * base64-encoded text. User data is limited to 16 KB. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Run
     * commands on your Linux instance at launch</a> (Linux) or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instancedata-add-user-data.html">Work
     * with instance user data</a> (Windows) in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>.</p> <p>If you are creating the launch template for use with
     * Batch, the user data must be provided in the <a
     * href="https://cloudinit.readthedocs.io/en/latest/topics/format.html#mime-multi-part-archive">
     * MIME multi-part archive format</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/launch-templates.html">Amazon
     * EC2 user data in launch templates</a> in the <i>Batch User Guide</i>.</p>
     */
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }

    /**
     * <p>The user data to make available to the instance. You must provide
     * base64-encoded text. User data is limited to 16 KB. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Run
     * commands on your Linux instance at launch</a> (Linux) or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instancedata-add-user-data.html">Work
     * with instance user data</a> (Windows) in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>.</p> <p>If you are creating the launch template for use with
     * Batch, the user data must be provided in the <a
     * href="https://cloudinit.readthedocs.io/en/latest/topics/format.html#mime-multi-part-archive">
     * MIME multi-part archive format</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/launch-templates.html">Amazon
     * EC2 user data in launch templates</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetUserData(const Aws::String& value) { m_userDataHasBeenSet = true; m_userData = value; }

    /**
     * <p>The user data to make available to the instance. You must provide
     * base64-encoded text. User data is limited to 16 KB. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Run
     * commands on your Linux instance at launch</a> (Linux) or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instancedata-add-user-data.html">Work
     * with instance user data</a> (Windows) in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>.</p> <p>If you are creating the launch template for use with
     * Batch, the user data must be provided in the <a
     * href="https://cloudinit.readthedocs.io/en/latest/topics/format.html#mime-multi-part-archive">
     * MIME multi-part archive format</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/launch-templates.html">Amazon
     * EC2 user data in launch templates</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetUserData(Aws::String&& value) { m_userDataHasBeenSet = true; m_userData = std::move(value); }

    /**
     * <p>The user data to make available to the instance. You must provide
     * base64-encoded text. User data is limited to 16 KB. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Run
     * commands on your Linux instance at launch</a> (Linux) or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instancedata-add-user-data.html">Work
     * with instance user data</a> (Windows) in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>.</p> <p>If you are creating the launch template for use with
     * Batch, the user data must be provided in the <a
     * href="https://cloudinit.readthedocs.io/en/latest/topics/format.html#mime-multi-part-archive">
     * MIME multi-part archive format</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/launch-templates.html">Amazon
     * EC2 user data in launch templates</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetUserData(const char* value) { m_userDataHasBeenSet = true; m_userData.assign(value); }

    /**
     * <p>The user data to make available to the instance. You must provide
     * base64-encoded text. User data is limited to 16 KB. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Run
     * commands on your Linux instance at launch</a> (Linux) or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instancedata-add-user-data.html">Work
     * with instance user data</a> (Windows) in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>.</p> <p>If you are creating the launch template for use with
     * Batch, the user data must be provided in the <a
     * href="https://cloudinit.readthedocs.io/en/latest/topics/format.html#mime-multi-part-archive">
     * MIME multi-part archive format</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/launch-templates.html">Amazon
     * EC2 user data in launch templates</a> in the <i>Batch User Guide</i>.</p>
     */
    inline RequestLaunchTemplateData& WithUserData(const Aws::String& value) { SetUserData(value); return *this;}

    /**
     * <p>The user data to make available to the instance. You must provide
     * base64-encoded text. User data is limited to 16 KB. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Run
     * commands on your Linux instance at launch</a> (Linux) or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instancedata-add-user-data.html">Work
     * with instance user data</a> (Windows) in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>.</p> <p>If you are creating the launch template for use with
     * Batch, the user data must be provided in the <a
     * href="https://cloudinit.readthedocs.io/en/latest/topics/format.html#mime-multi-part-archive">
     * MIME multi-part archive format</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/launch-templates.html">Amazon
     * EC2 user data in launch templates</a> in the <i>Batch User Guide</i>.</p>
     */
    inline RequestLaunchTemplateData& WithUserData(Aws::String&& value) { SetUserData(std::move(value)); return *this;}

    /**
     * <p>The user data to make available to the instance. You must provide
     * base64-encoded text. User data is limited to 16 KB. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Run
     * commands on your Linux instance at launch</a> (Linux) or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instancedata-add-user-data.html">Work
     * with instance user data</a> (Windows) in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>.</p> <p>If you are creating the launch template for use with
     * Batch, the user data must be provided in the <a
     * href="https://cloudinit.readthedocs.io/en/latest/topics/format.html#mime-multi-part-archive">
     * MIME multi-part archive format</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/launch-templates.html">Amazon
     * EC2 user data in launch templates</a> in the <i>Batch User Guide</i>.</p>
     */
    inline RequestLaunchTemplateData& WithUserData(const char* value) { SetUserData(value); return *this;}


    /**
     * <p>The tags to apply to the resources that are created during instance
     * launch.</p> <p>You can specify tags for the following resources only:</p> <ul>
     * <li> <p>Instances</p> </li> <li> <p>Volumes</p> </li> <li> <p>Elastic
     * graphics</p> </li> <li> <p>Spot Instance requests</p> </li> <li> <p>Network
     * interfaces</p> </li> </ul> <p>To tag a resource after it has been created, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.</p>
     *  <p>To tag the launch template itself, you must use the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateLaunchTemplate.html">TagSpecification</a>
     * parameter.</p> 
     */
    inline const Aws::Vector<LaunchTemplateTagSpecificationRequest>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply to the resources that are created during instance
     * launch.</p> <p>You can specify tags for the following resources only:</p> <ul>
     * <li> <p>Instances</p> </li> <li> <p>Volumes</p> </li> <li> <p>Elastic
     * graphics</p> </li> <li> <p>Spot Instance requests</p> </li> <li> <p>Network
     * interfaces</p> </li> </ul> <p>To tag a resource after it has been created, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.</p>
     *  <p>To tag the launch template itself, you must use the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateLaunchTemplate.html">TagSpecification</a>
     * parameter.</p> 
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to apply to the resources that are created during instance
     * launch.</p> <p>You can specify tags for the following resources only:</p> <ul>
     * <li> <p>Instances</p> </li> <li> <p>Volumes</p> </li> <li> <p>Elastic
     * graphics</p> </li> <li> <p>Spot Instance requests</p> </li> <li> <p>Network
     * interfaces</p> </li> </ul> <p>To tag a resource after it has been created, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.</p>
     *  <p>To tag the launch template itself, you must use the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateLaunchTemplate.html">TagSpecification</a>
     * parameter.</p> 
     */
    inline void SetTagSpecifications(const Aws::Vector<LaunchTemplateTagSpecificationRequest>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply to the resources that are created during instance
     * launch.</p> <p>You can specify tags for the following resources only:</p> <ul>
     * <li> <p>Instances</p> </li> <li> <p>Volumes</p> </li> <li> <p>Elastic
     * graphics</p> </li> <li> <p>Spot Instance requests</p> </li> <li> <p>Network
     * interfaces</p> </li> </ul> <p>To tag a resource after it has been created, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.</p>
     *  <p>To tag the launch template itself, you must use the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateLaunchTemplate.html">TagSpecification</a>
     * parameter.</p> 
     */
    inline void SetTagSpecifications(Aws::Vector<LaunchTemplateTagSpecificationRequest>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the resources that are created during instance
     * launch.</p> <p>You can specify tags for the following resources only:</p> <ul>
     * <li> <p>Instances</p> </li> <li> <p>Volumes</p> </li> <li> <p>Elastic
     * graphics</p> </li> <li> <p>Spot Instance requests</p> </li> <li> <p>Network
     * interfaces</p> </li> </ul> <p>To tag a resource after it has been created, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.</p>
     *  <p>To tag the launch template itself, you must use the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateLaunchTemplate.html">TagSpecification</a>
     * parameter.</p> 
     */
    inline RequestLaunchTemplateData& WithTagSpecifications(const Aws::Vector<LaunchTemplateTagSpecificationRequest>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the resources that are created during instance
     * launch.</p> <p>You can specify tags for the following resources only:</p> <ul>
     * <li> <p>Instances</p> </li> <li> <p>Volumes</p> </li> <li> <p>Elastic
     * graphics</p> </li> <li> <p>Spot Instance requests</p> </li> <li> <p>Network
     * interfaces</p> </li> </ul> <p>To tag a resource after it has been created, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.</p>
     *  <p>To tag the launch template itself, you must use the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateLaunchTemplate.html">TagSpecification</a>
     * parameter.</p> 
     */
    inline RequestLaunchTemplateData& WithTagSpecifications(Aws::Vector<LaunchTemplateTagSpecificationRequest>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the resources that are created during instance
     * launch.</p> <p>You can specify tags for the following resources only:</p> <ul>
     * <li> <p>Instances</p> </li> <li> <p>Volumes</p> </li> <li> <p>Elastic
     * graphics</p> </li> <li> <p>Spot Instance requests</p> </li> <li> <p>Network
     * interfaces</p> </li> </ul> <p>To tag a resource after it has been created, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.</p>
     *  <p>To tag the launch template itself, you must use the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateLaunchTemplate.html">TagSpecification</a>
     * parameter.</p> 
     */
    inline RequestLaunchTemplateData& AddTagSpecifications(const LaunchTemplateTagSpecificationRequest& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the resources that are created during instance
     * launch.</p> <p>You can specify tags for the following resources only:</p> <ul>
     * <li> <p>Instances</p> </li> <li> <p>Volumes</p> </li> <li> <p>Elastic
     * graphics</p> </li> <li> <p>Spot Instance requests</p> </li> <li> <p>Network
     * interfaces</p> </li> </ul> <p>To tag a resource after it has been created, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.</p>
     *  <p>To tag the launch template itself, you must use the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateLaunchTemplate.html">TagSpecification</a>
     * parameter.</p> 
     */
    inline RequestLaunchTemplateData& AddTagSpecifications(LaunchTemplateTagSpecificationRequest&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>An elastic GPU to associate with the instance.</p>
     */
    inline const Aws::Vector<ElasticGpuSpecification>& GetElasticGpuSpecifications() const{ return m_elasticGpuSpecifications; }

    /**
     * <p>An elastic GPU to associate with the instance.</p>
     */
    inline bool ElasticGpuSpecificationsHasBeenSet() const { return m_elasticGpuSpecificationsHasBeenSet; }

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
     * <p> The elastic inference accelerator for the instance. </p>
     */
    inline const Aws::Vector<LaunchTemplateElasticInferenceAccelerator>& GetElasticInferenceAccelerators() const{ return m_elasticInferenceAccelerators; }

    /**
     * <p> The elastic inference accelerator for the instance. </p>
     */
    inline bool ElasticInferenceAcceleratorsHasBeenSet() const { return m_elasticInferenceAcceleratorsHasBeenSet; }

    /**
     * <p> The elastic inference accelerator for the instance. </p>
     */
    inline void SetElasticInferenceAccelerators(const Aws::Vector<LaunchTemplateElasticInferenceAccelerator>& value) { m_elasticInferenceAcceleratorsHasBeenSet = true; m_elasticInferenceAccelerators = value; }

    /**
     * <p> The elastic inference accelerator for the instance. </p>
     */
    inline void SetElasticInferenceAccelerators(Aws::Vector<LaunchTemplateElasticInferenceAccelerator>&& value) { m_elasticInferenceAcceleratorsHasBeenSet = true; m_elasticInferenceAccelerators = std::move(value); }

    /**
     * <p> The elastic inference accelerator for the instance. </p>
     */
    inline RequestLaunchTemplateData& WithElasticInferenceAccelerators(const Aws::Vector<LaunchTemplateElasticInferenceAccelerator>& value) { SetElasticInferenceAccelerators(value); return *this;}

    /**
     * <p> The elastic inference accelerator for the instance. </p>
     */
    inline RequestLaunchTemplateData& WithElasticInferenceAccelerators(Aws::Vector<LaunchTemplateElasticInferenceAccelerator>&& value) { SetElasticInferenceAccelerators(std::move(value)); return *this;}

    /**
     * <p> The elastic inference accelerator for the instance. </p>
     */
    inline RequestLaunchTemplateData& AddElasticInferenceAccelerators(const LaunchTemplateElasticInferenceAccelerator& value) { m_elasticInferenceAcceleratorsHasBeenSet = true; m_elasticInferenceAccelerators.push_back(value); return *this; }

    /**
     * <p> The elastic inference accelerator for the instance. </p>
     */
    inline RequestLaunchTemplateData& AddElasticInferenceAccelerators(LaunchTemplateElasticInferenceAccelerator&& value) { m_elasticInferenceAcceleratorsHasBeenSet = true; m_elasticInferenceAccelerators.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more security group IDs. You can create a security group using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateSecurityGroup.html">CreateSecurityGroup</a>.
     * You cannot specify both a security group ID and security name in the same
     * request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>One or more security group IDs. You can create a security group using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateSecurityGroup.html">CreateSecurityGroup</a>.
     * You cannot specify both a security group ID and security name in the same
     * request.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>One or more security group IDs. You can create a security group using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateSecurityGroup.html">CreateSecurityGroup</a>.
     * You cannot specify both a security group ID and security name in the same
     * request.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>One or more security group IDs. You can create a security group using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateSecurityGroup.html">CreateSecurityGroup</a>.
     * You cannot specify both a security group ID and security name in the same
     * request.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>One or more security group IDs. You can create a security group using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateSecurityGroup.html">CreateSecurityGroup</a>.
     * You cannot specify both a security group ID and security name in the same
     * request.</p>
     */
    inline RequestLaunchTemplateData& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>One or more security group IDs. You can create a security group using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateSecurityGroup.html">CreateSecurityGroup</a>.
     * You cannot specify both a security group ID and security name in the same
     * request.</p>
     */
    inline RequestLaunchTemplateData& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>One or more security group IDs. You can create a security group using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateSecurityGroup.html">CreateSecurityGroup</a>.
     * You cannot specify both a security group ID and security name in the same
     * request.</p>
     */
    inline RequestLaunchTemplateData& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>One or more security group IDs. You can create a security group using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateSecurityGroup.html">CreateSecurityGroup</a>.
     * You cannot specify both a security group ID and security name in the same
     * request.</p>
     */
    inline RequestLaunchTemplateData& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more security group IDs. You can create a security group using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateSecurityGroup.html">CreateSecurityGroup</a>.
     * You cannot specify both a security group ID and security name in the same
     * request.</p>
     */
    inline RequestLaunchTemplateData& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>One or more security group names. For a nondefault VPC, you must use security
     * group IDs instead. You cannot specify both a security group ID and security name
     * in the same request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>One or more security group names. For a nondefault VPC, you must use security
     * group IDs instead. You cannot specify both a security group ID and security name
     * in the same request.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>One or more security group names. For a nondefault VPC, you must use security
     * group IDs instead. You cannot specify both a security group ID and security name
     * in the same request.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>One or more security group names. For a nondefault VPC, you must use security
     * group IDs instead. You cannot specify both a security group ID and security name
     * in the same request.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>One or more security group names. For a nondefault VPC, you must use security
     * group IDs instead. You cannot specify both a security group ID and security name
     * in the same request.</p>
     */
    inline RequestLaunchTemplateData& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>One or more security group names. For a nondefault VPC, you must use security
     * group IDs instead. You cannot specify both a security group ID and security name
     * in the same request.</p>
     */
    inline RequestLaunchTemplateData& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>One or more security group names. For a nondefault VPC, you must use security
     * group IDs instead. You cannot specify both a security group ID and security name
     * in the same request.</p>
     */
    inline RequestLaunchTemplateData& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>One or more security group names. For a nondefault VPC, you must use security
     * group IDs instead. You cannot specify both a security group ID and security name
     * in the same request.</p>
     */
    inline RequestLaunchTemplateData& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more security group names. For a nondefault VPC, you must use security
     * group IDs instead. You cannot specify both a security group ID and security name
     * in the same request.</p>
     */
    inline RequestLaunchTemplateData& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


    /**
     * <p>The market (purchasing) option for the instances.</p>
     */
    inline const LaunchTemplateInstanceMarketOptionsRequest& GetInstanceMarketOptions() const{ return m_instanceMarketOptions; }

    /**
     * <p>The market (purchasing) option for the instances.</p>
     */
    inline bool InstanceMarketOptionsHasBeenSet() const { return m_instanceMarketOptionsHasBeenSet; }

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
     * <p>The credit option for CPU usage of the instance. Valid only for T
     * instances.</p>
     */
    inline const CreditSpecificationRequest& GetCreditSpecification() const{ return m_creditSpecification; }

    /**
     * <p>The credit option for CPU usage of the instance. Valid only for T
     * instances.</p>
     */
    inline bool CreditSpecificationHasBeenSet() const { return m_creditSpecificationHasBeenSet; }

    /**
     * <p>The credit option for CPU usage of the instance. Valid only for T
     * instances.</p>
     */
    inline void SetCreditSpecification(const CreditSpecificationRequest& value) { m_creditSpecificationHasBeenSet = true; m_creditSpecification = value; }

    /**
     * <p>The credit option for CPU usage of the instance. Valid only for T
     * instances.</p>
     */
    inline void SetCreditSpecification(CreditSpecificationRequest&& value) { m_creditSpecificationHasBeenSet = true; m_creditSpecification = std::move(value); }

    /**
     * <p>The credit option for CPU usage of the instance. Valid only for T
     * instances.</p>
     */
    inline RequestLaunchTemplateData& WithCreditSpecification(const CreditSpecificationRequest& value) { SetCreditSpecification(value); return *this;}

    /**
     * <p>The credit option for CPU usage of the instance. Valid only for T
     * instances.</p>
     */
    inline RequestLaunchTemplateData& WithCreditSpecification(CreditSpecificationRequest&& value) { SetCreditSpecification(std::move(value)); return *this;}


    /**
     * <p>The CPU options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimizing
     * CPU Options</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline const LaunchTemplateCpuOptionsRequest& GetCpuOptions() const{ return m_cpuOptions; }

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
    inline void SetCpuOptions(const LaunchTemplateCpuOptionsRequest& value) { m_cpuOptionsHasBeenSet = true; m_cpuOptions = value; }

    /**
     * <p>The CPU options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimizing
     * CPU Options</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetCpuOptions(LaunchTemplateCpuOptionsRequest&& value) { m_cpuOptionsHasBeenSet = true; m_cpuOptions = std::move(value); }

    /**
     * <p>The CPU options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimizing
     * CPU Options</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline RequestLaunchTemplateData& WithCpuOptions(const LaunchTemplateCpuOptionsRequest& value) { SetCpuOptions(value); return *this;}

    /**
     * <p>The CPU options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimizing
     * CPU Options</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline RequestLaunchTemplateData& WithCpuOptions(LaunchTemplateCpuOptionsRequest&& value) { SetCpuOptions(std::move(value)); return *this;}


    /**
     * <p>The Capacity Reservation targeting option. If you do not specify this
     * parameter, the instance's Capacity Reservation preference defaults to
     * <code>open</code>, which enables it to run in any open Capacity Reservation that
     * has matching attributes (instance type, platform, Availability Zone).</p>
     */
    inline const LaunchTemplateCapacityReservationSpecificationRequest& GetCapacityReservationSpecification() const{ return m_capacityReservationSpecification; }

    /**
     * <p>The Capacity Reservation targeting option. If you do not specify this
     * parameter, the instance's Capacity Reservation preference defaults to
     * <code>open</code>, which enables it to run in any open Capacity Reservation that
     * has matching attributes (instance type, platform, Availability Zone).</p>
     */
    inline bool CapacityReservationSpecificationHasBeenSet() const { return m_capacityReservationSpecificationHasBeenSet; }

    /**
     * <p>The Capacity Reservation targeting option. If you do not specify this
     * parameter, the instance's Capacity Reservation preference defaults to
     * <code>open</code>, which enables it to run in any open Capacity Reservation that
     * has matching attributes (instance type, platform, Availability Zone).</p>
     */
    inline void SetCapacityReservationSpecification(const LaunchTemplateCapacityReservationSpecificationRequest& value) { m_capacityReservationSpecificationHasBeenSet = true; m_capacityReservationSpecification = value; }

    /**
     * <p>The Capacity Reservation targeting option. If you do not specify this
     * parameter, the instance's Capacity Reservation preference defaults to
     * <code>open</code>, which enables it to run in any open Capacity Reservation that
     * has matching attributes (instance type, platform, Availability Zone).</p>
     */
    inline void SetCapacityReservationSpecification(LaunchTemplateCapacityReservationSpecificationRequest&& value) { m_capacityReservationSpecificationHasBeenSet = true; m_capacityReservationSpecification = std::move(value); }

    /**
     * <p>The Capacity Reservation targeting option. If you do not specify this
     * parameter, the instance's Capacity Reservation preference defaults to
     * <code>open</code>, which enables it to run in any open Capacity Reservation that
     * has matching attributes (instance type, platform, Availability Zone).</p>
     */
    inline RequestLaunchTemplateData& WithCapacityReservationSpecification(const LaunchTemplateCapacityReservationSpecificationRequest& value) { SetCapacityReservationSpecification(value); return *this;}

    /**
     * <p>The Capacity Reservation targeting option. If you do not specify this
     * parameter, the instance's Capacity Reservation preference defaults to
     * <code>open</code>, which enables it to run in any open Capacity Reservation that
     * has matching attributes (instance type, platform, Availability Zone).</p>
     */
    inline RequestLaunchTemplateData& WithCapacityReservationSpecification(LaunchTemplateCapacityReservationSpecificationRequest&& value) { SetCapacityReservationSpecification(std::move(value)); return *this;}


    /**
     * <p>The license configurations.</p>
     */
    inline const Aws::Vector<LaunchTemplateLicenseConfigurationRequest>& GetLicenseSpecifications() const{ return m_licenseSpecifications; }

    /**
     * <p>The license configurations.</p>
     */
    inline bool LicenseSpecificationsHasBeenSet() const { return m_licenseSpecificationsHasBeenSet; }

    /**
     * <p>The license configurations.</p>
     */
    inline void SetLicenseSpecifications(const Aws::Vector<LaunchTemplateLicenseConfigurationRequest>& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications = value; }

    /**
     * <p>The license configurations.</p>
     */
    inline void SetLicenseSpecifications(Aws::Vector<LaunchTemplateLicenseConfigurationRequest>&& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications = std::move(value); }

    /**
     * <p>The license configurations.</p>
     */
    inline RequestLaunchTemplateData& WithLicenseSpecifications(const Aws::Vector<LaunchTemplateLicenseConfigurationRequest>& value) { SetLicenseSpecifications(value); return *this;}

    /**
     * <p>The license configurations.</p>
     */
    inline RequestLaunchTemplateData& WithLicenseSpecifications(Aws::Vector<LaunchTemplateLicenseConfigurationRequest>&& value) { SetLicenseSpecifications(std::move(value)); return *this;}

    /**
     * <p>The license configurations.</p>
     */
    inline RequestLaunchTemplateData& AddLicenseSpecifications(const LaunchTemplateLicenseConfigurationRequest& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications.push_back(value); return *this; }

    /**
     * <p>The license configurations.</p>
     */
    inline RequestLaunchTemplateData& AddLicenseSpecifications(LaunchTemplateLicenseConfigurationRequest&& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether an instance is enabled for hibernation. This parameter is
     * valid only if the instance meets the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/hibernating-prerequisites.html">hibernation
     * prerequisites</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html">Hibernate
     * your instance</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline const LaunchTemplateHibernationOptionsRequest& GetHibernationOptions() const{ return m_hibernationOptions; }

    /**
     * <p>Indicates whether an instance is enabled for hibernation. This parameter is
     * valid only if the instance meets the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/hibernating-prerequisites.html">hibernation
     * prerequisites</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html">Hibernate
     * your instance</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline bool HibernationOptionsHasBeenSet() const { return m_hibernationOptionsHasBeenSet; }

    /**
     * <p>Indicates whether an instance is enabled for hibernation. This parameter is
     * valid only if the instance meets the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/hibernating-prerequisites.html">hibernation
     * prerequisites</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html">Hibernate
     * your instance</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetHibernationOptions(const LaunchTemplateHibernationOptionsRequest& value) { m_hibernationOptionsHasBeenSet = true; m_hibernationOptions = value; }

    /**
     * <p>Indicates whether an instance is enabled for hibernation. This parameter is
     * valid only if the instance meets the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/hibernating-prerequisites.html">hibernation
     * prerequisites</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html">Hibernate
     * your instance</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetHibernationOptions(LaunchTemplateHibernationOptionsRequest&& value) { m_hibernationOptionsHasBeenSet = true; m_hibernationOptions = std::move(value); }

    /**
     * <p>Indicates whether an instance is enabled for hibernation. This parameter is
     * valid only if the instance meets the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/hibernating-prerequisites.html">hibernation
     * prerequisites</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html">Hibernate
     * your instance</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline RequestLaunchTemplateData& WithHibernationOptions(const LaunchTemplateHibernationOptionsRequest& value) { SetHibernationOptions(value); return *this;}

    /**
     * <p>Indicates whether an instance is enabled for hibernation. This parameter is
     * valid only if the instance meets the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/hibernating-prerequisites.html">hibernation
     * prerequisites</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html">Hibernate
     * your instance</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline RequestLaunchTemplateData& WithHibernationOptions(LaunchTemplateHibernationOptionsRequest&& value) { SetHibernationOptions(std::move(value)); return *this;}


    /**
     * <p>The metadata options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline const LaunchTemplateInstanceMetadataOptionsRequest& GetMetadataOptions() const{ return m_metadataOptions; }

    /**
     * <p>The metadata options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline bool MetadataOptionsHasBeenSet() const { return m_metadataOptionsHasBeenSet; }

    /**
     * <p>The metadata options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline void SetMetadataOptions(const LaunchTemplateInstanceMetadataOptionsRequest& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = value; }

    /**
     * <p>The metadata options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline void SetMetadataOptions(LaunchTemplateInstanceMetadataOptionsRequest&& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = std::move(value); }

    /**
     * <p>The metadata options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline RequestLaunchTemplateData& WithMetadataOptions(const LaunchTemplateInstanceMetadataOptionsRequest& value) { SetMetadataOptions(value); return *this;}

    /**
     * <p>The metadata options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline RequestLaunchTemplateData& WithMetadataOptions(LaunchTemplateInstanceMetadataOptionsRequest&& value) { SetMetadataOptions(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the instance is enabled for Amazon Web Services Nitro
     * Enclaves. For more information, see <a
     * href="https://docs.aws.amazon.com/enclaves/latest/user/nitro-enclave.html"> What
     * is Amazon Web Services Nitro Enclaves?</a> in the <i>Amazon Web Services Nitro
     * Enclaves User Guide</i>.</p> <p>You can't enable Amazon Web Services Nitro
     * Enclaves and hibernation on the same instance.</p>
     */
    inline const LaunchTemplateEnclaveOptionsRequest& GetEnclaveOptions() const{ return m_enclaveOptions; }

    /**
     * <p>Indicates whether the instance is enabled for Amazon Web Services Nitro
     * Enclaves. For more information, see <a
     * href="https://docs.aws.amazon.com/enclaves/latest/user/nitro-enclave.html"> What
     * is Amazon Web Services Nitro Enclaves?</a> in the <i>Amazon Web Services Nitro
     * Enclaves User Guide</i>.</p> <p>You can't enable Amazon Web Services Nitro
     * Enclaves and hibernation on the same instance.</p>
     */
    inline bool EnclaveOptionsHasBeenSet() const { return m_enclaveOptionsHasBeenSet; }

    /**
     * <p>Indicates whether the instance is enabled for Amazon Web Services Nitro
     * Enclaves. For more information, see <a
     * href="https://docs.aws.amazon.com/enclaves/latest/user/nitro-enclave.html"> What
     * is Amazon Web Services Nitro Enclaves?</a> in the <i>Amazon Web Services Nitro
     * Enclaves User Guide</i>.</p> <p>You can't enable Amazon Web Services Nitro
     * Enclaves and hibernation on the same instance.</p>
     */
    inline void SetEnclaveOptions(const LaunchTemplateEnclaveOptionsRequest& value) { m_enclaveOptionsHasBeenSet = true; m_enclaveOptions = value; }

    /**
     * <p>Indicates whether the instance is enabled for Amazon Web Services Nitro
     * Enclaves. For more information, see <a
     * href="https://docs.aws.amazon.com/enclaves/latest/user/nitro-enclave.html"> What
     * is Amazon Web Services Nitro Enclaves?</a> in the <i>Amazon Web Services Nitro
     * Enclaves User Guide</i>.</p> <p>You can't enable Amazon Web Services Nitro
     * Enclaves and hibernation on the same instance.</p>
     */
    inline void SetEnclaveOptions(LaunchTemplateEnclaveOptionsRequest&& value) { m_enclaveOptionsHasBeenSet = true; m_enclaveOptions = std::move(value); }

    /**
     * <p>Indicates whether the instance is enabled for Amazon Web Services Nitro
     * Enclaves. For more information, see <a
     * href="https://docs.aws.amazon.com/enclaves/latest/user/nitro-enclave.html"> What
     * is Amazon Web Services Nitro Enclaves?</a> in the <i>Amazon Web Services Nitro
     * Enclaves User Guide</i>.</p> <p>You can't enable Amazon Web Services Nitro
     * Enclaves and hibernation on the same instance.</p>
     */
    inline RequestLaunchTemplateData& WithEnclaveOptions(const LaunchTemplateEnclaveOptionsRequest& value) { SetEnclaveOptions(value); return *this;}

    /**
     * <p>Indicates whether the instance is enabled for Amazon Web Services Nitro
     * Enclaves. For more information, see <a
     * href="https://docs.aws.amazon.com/enclaves/latest/user/nitro-enclave.html"> What
     * is Amazon Web Services Nitro Enclaves?</a> in the <i>Amazon Web Services Nitro
     * Enclaves User Guide</i>.</p> <p>You can't enable Amazon Web Services Nitro
     * Enclaves and hibernation on the same instance.</p>
     */
    inline RequestLaunchTemplateData& WithEnclaveOptions(LaunchTemplateEnclaveOptionsRequest&& value) { SetEnclaveOptions(std::move(value)); return *this;}


    /**
     * <p>The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with these attributes.</p> <p>If you
     * specify <code>InstanceRequirements</code>, you can't specify
     * <code>InstanceType</code>.</p>
     */
    inline const InstanceRequirementsRequest& GetInstanceRequirements() const{ return m_instanceRequirements; }

    /**
     * <p>The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with these attributes.</p> <p>If you
     * specify <code>InstanceRequirements</code>, you can't specify
     * <code>InstanceType</code>.</p>
     */
    inline bool InstanceRequirementsHasBeenSet() const { return m_instanceRequirementsHasBeenSet; }

    /**
     * <p>The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with these attributes.</p> <p>If you
     * specify <code>InstanceRequirements</code>, you can't specify
     * <code>InstanceType</code>.</p>
     */
    inline void SetInstanceRequirements(const InstanceRequirementsRequest& value) { m_instanceRequirementsHasBeenSet = true; m_instanceRequirements = value; }

    /**
     * <p>The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with these attributes.</p> <p>If you
     * specify <code>InstanceRequirements</code>, you can't specify
     * <code>InstanceType</code>.</p>
     */
    inline void SetInstanceRequirements(InstanceRequirementsRequest&& value) { m_instanceRequirementsHasBeenSet = true; m_instanceRequirements = std::move(value); }

    /**
     * <p>The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with these attributes.</p> <p>If you
     * specify <code>InstanceRequirements</code>, you can't specify
     * <code>InstanceType</code>.</p>
     */
    inline RequestLaunchTemplateData& WithInstanceRequirements(const InstanceRequirementsRequest& value) { SetInstanceRequirements(value); return *this;}

    /**
     * <p>The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with these attributes.</p> <p>If you
     * specify <code>InstanceRequirements</code>, you can't specify
     * <code>InstanceType</code>.</p>
     */
    inline RequestLaunchTemplateData& WithInstanceRequirements(InstanceRequirementsRequest&& value) { SetInstanceRequirements(std::move(value)); return *this;}


    /**
     * <p>The options for the instance hostname. The default values are inherited from
     * the subnet.</p>
     */
    inline const LaunchTemplatePrivateDnsNameOptionsRequest& GetPrivateDnsNameOptions() const{ return m_privateDnsNameOptions; }

    /**
     * <p>The options for the instance hostname. The default values are inherited from
     * the subnet.</p>
     */
    inline bool PrivateDnsNameOptionsHasBeenSet() const { return m_privateDnsNameOptionsHasBeenSet; }

    /**
     * <p>The options for the instance hostname. The default values are inherited from
     * the subnet.</p>
     */
    inline void SetPrivateDnsNameOptions(const LaunchTemplatePrivateDnsNameOptionsRequest& value) { m_privateDnsNameOptionsHasBeenSet = true; m_privateDnsNameOptions = value; }

    /**
     * <p>The options for the instance hostname. The default values are inherited from
     * the subnet.</p>
     */
    inline void SetPrivateDnsNameOptions(LaunchTemplatePrivateDnsNameOptionsRequest&& value) { m_privateDnsNameOptionsHasBeenSet = true; m_privateDnsNameOptions = std::move(value); }

    /**
     * <p>The options for the instance hostname. The default values are inherited from
     * the subnet.</p>
     */
    inline RequestLaunchTemplateData& WithPrivateDnsNameOptions(const LaunchTemplatePrivateDnsNameOptionsRequest& value) { SetPrivateDnsNameOptions(value); return *this;}

    /**
     * <p>The options for the instance hostname. The default values are inherited from
     * the subnet.</p>
     */
    inline RequestLaunchTemplateData& WithPrivateDnsNameOptions(LaunchTemplatePrivateDnsNameOptionsRequest&& value) { SetPrivateDnsNameOptions(std::move(value)); return *this;}


    /**
     * <p>The maintenance options for the instance.</p>
     */
    inline const LaunchTemplateInstanceMaintenanceOptionsRequest& GetMaintenanceOptions() const{ return m_maintenanceOptions; }

    /**
     * <p>The maintenance options for the instance.</p>
     */
    inline bool MaintenanceOptionsHasBeenSet() const { return m_maintenanceOptionsHasBeenSet; }

    /**
     * <p>The maintenance options for the instance.</p>
     */
    inline void SetMaintenanceOptions(const LaunchTemplateInstanceMaintenanceOptionsRequest& value) { m_maintenanceOptionsHasBeenSet = true; m_maintenanceOptions = value; }

    /**
     * <p>The maintenance options for the instance.</p>
     */
    inline void SetMaintenanceOptions(LaunchTemplateInstanceMaintenanceOptionsRequest&& value) { m_maintenanceOptionsHasBeenSet = true; m_maintenanceOptions = std::move(value); }

    /**
     * <p>The maintenance options for the instance.</p>
     */
    inline RequestLaunchTemplateData& WithMaintenanceOptions(const LaunchTemplateInstanceMaintenanceOptionsRequest& value) { SetMaintenanceOptions(value); return *this;}

    /**
     * <p>The maintenance options for the instance.</p>
     */
    inline RequestLaunchTemplateData& WithMaintenanceOptions(LaunchTemplateInstanceMaintenanceOptionsRequest&& value) { SetMaintenanceOptions(std::move(value)); return *this;}


    /**
     * <p>Indicates whether to enable the instance for stop protection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Stop_Start.html#Using_StopProtection">Stop
     * Protection</a>.</p>
     */
    inline bool GetDisableApiStop() const{ return m_disableApiStop; }

    /**
     * <p>Indicates whether to enable the instance for stop protection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Stop_Start.html#Using_StopProtection">Stop
     * Protection</a>.</p>
     */
    inline bool DisableApiStopHasBeenSet() const { return m_disableApiStopHasBeenSet; }

    /**
     * <p>Indicates whether to enable the instance for stop protection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Stop_Start.html#Using_StopProtection">Stop
     * Protection</a>.</p>
     */
    inline void SetDisableApiStop(bool value) { m_disableApiStopHasBeenSet = true; m_disableApiStop = value; }

    /**
     * <p>Indicates whether to enable the instance for stop protection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Stop_Start.html#Using_StopProtection">Stop
     * Protection</a>.</p>
     */
    inline RequestLaunchTemplateData& WithDisableApiStop(bool value) { SetDisableApiStop(value); return *this;}

  private:

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet = false;

    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet = false;

    LaunchTemplateIamInstanceProfileSpecificationRequest m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet = false;

    Aws::Vector<LaunchTemplateBlockDeviceMappingRequest> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    Aws::Vector<LaunchTemplateInstanceNetworkInterfaceSpecificationRequest> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    LaunchTemplatesMonitoringRequest m_monitoring;
    bool m_monitoringHasBeenSet = false;

    LaunchTemplatePlacementRequest m_placement;
    bool m_placementHasBeenSet = false;

    Aws::String m_ramDiskId;
    bool m_ramDiskIdHasBeenSet = false;

    bool m_disableApiTermination;
    bool m_disableApiTerminationHasBeenSet = false;

    ShutdownBehavior m_instanceInitiatedShutdownBehavior;
    bool m_instanceInitiatedShutdownBehaviorHasBeenSet = false;

    Aws::String m_userData;
    bool m_userDataHasBeenSet = false;

    Aws::Vector<LaunchTemplateTagSpecificationRequest> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::Vector<ElasticGpuSpecification> m_elasticGpuSpecifications;
    bool m_elasticGpuSpecificationsHasBeenSet = false;

    Aws::Vector<LaunchTemplateElasticInferenceAccelerator> m_elasticInferenceAccelerators;
    bool m_elasticInferenceAcceleratorsHasBeenSet = false;

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

    bool m_disableApiStop;
    bool m_disableApiStopHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
