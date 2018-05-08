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
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/ec2/model/RunInstancesMonitoringEnabled.h>
#include <aws/ec2/model/Placement.h>
#include <aws/ec2/model/IamInstanceProfileSpecification.h>
#include <aws/ec2/model/ShutdownBehavior.h>
#include <aws/ec2/model/LaunchTemplateSpecification.h>
#include <aws/ec2/model/InstanceMarketOptionsRequest.h>
#include <aws/ec2/model/CreditSpecificationRequest.h>
#include <aws/ec2/model/CpuOptionsRequest.h>
#include <aws/ec2/model/BlockDeviceMapping.h>
#include <aws/ec2/model/InstanceIpv6Address.h>
#include <aws/ec2/model/InstanceNetworkInterfaceSpecification.h>
#include <aws/ec2/model/ElasticGpuSpecification.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for RunInstances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RunInstancesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API RunInstancesRequest : public EC2Request
  {
  public:
    RunInstancesRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RunInstances"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline RunInstancesRequest& WithBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>One or more block device mapping entries. You can't specify both a snapshot
     * ID and an encryption value. This is because only blank volumes can be encrypted
     * on creation. If a snapshot is the basis for a volume, it is not blank and its
     * encryption status is used for the volume encryption status.</p>
     */
    inline RunInstancesRequest& WithBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}

    /**
     * <p>One or more block device mapping entries. You can't specify both a snapshot
     * ID and an encryption value. This is because only blank volumes can be encrypted
     * on creation. If a snapshot is the basis for a volume, it is not blank and its
     * encryption status is used for the volume encryption status.</p>
     */
    inline RunInstancesRequest& AddBlockDeviceMappings(const BlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>One or more block device mapping entries. You can't specify both a snapshot
     * ID and an encryption value. This is because only blank volumes can be encrypted
     * on creation. If a snapshot is the basis for a volume, it is not blank and its
     * encryption status is used for the volume encryption status.</p>
     */
    inline RunInstancesRequest& AddBlockDeviceMappings(BlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the AMI, which you can get by calling <a>DescribeImages</a>. An AMI
     * is required to launch an instance and must be specified here or in a launch
     * template.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The ID of the AMI, which you can get by calling <a>DescribeImages</a>. An AMI
     * is required to launch an instance and must be specified here or in a launch
     * template.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The ID of the AMI, which you can get by calling <a>DescribeImages</a>. An AMI
     * is required to launch an instance and must be specified here or in a launch
     * template.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The ID of the AMI, which you can get by calling <a>DescribeImages</a>. An AMI
     * is required to launch an instance and must be specified here or in a launch
     * template.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The ID of the AMI, which you can get by calling <a>DescribeImages</a>. An AMI
     * is required to launch an instance and must be specified here or in a launch
     * template.</p>
     */
    inline RunInstancesRequest& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the AMI, which you can get by calling <a>DescribeImages</a>. An AMI
     * is required to launch an instance and must be specified here or in a launch
     * template.</p>
     */
    inline RunInstancesRequest& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AMI, which you can get by calling <a>DescribeImages</a>. An AMI
     * is required to launch an instance and must be specified here or in a launch
     * template.</p>
     */
    inline RunInstancesRequest& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The instance type. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>Default:
     * <code>m1.small</code> </p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>Default:
     * <code>m1.small</code> </p>
     */
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>Default:
     * <code>m1.small</code> </p>
     */
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>Default:
     * <code>m1.small</code> </p>
     */
    inline RunInstancesRequest& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>Default:
     * <code>m1.small</code> </p>
     */
    inline RunInstancesRequest& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>[EC2-VPC] A number of IPv6 addresses to associate with the primary network
     * interface. Amazon EC2 chooses the IPv6 addresses from the range of your subnet.
     * You cannot specify this option and the option to assign specific IPv6 addresses
     * in the same request. You can specify this option if you've specified a minimum
     * number of instances to launch.</p>
     */
    inline int GetIpv6AddressCount() const{ return m_ipv6AddressCount; }

    /**
     * <p>[EC2-VPC] A number of IPv6 addresses to associate with the primary network
     * interface. Amazon EC2 chooses the IPv6 addresses from the range of your subnet.
     * You cannot specify this option and the option to assign specific IPv6 addresses
     * in the same request. You can specify this option if you've specified a minimum
     * number of instances to launch.</p>
     */
    inline void SetIpv6AddressCount(int value) { m_ipv6AddressCountHasBeenSet = true; m_ipv6AddressCount = value; }

    /**
     * <p>[EC2-VPC] A number of IPv6 addresses to associate with the primary network
     * interface. Amazon EC2 chooses the IPv6 addresses from the range of your subnet.
     * You cannot specify this option and the option to assign specific IPv6 addresses
     * in the same request. You can specify this option if you've specified a minimum
     * number of instances to launch.</p>
     */
    inline RunInstancesRequest& WithIpv6AddressCount(int value) { SetIpv6AddressCount(value); return *this;}


    /**
     * <p>[EC2-VPC] Specify one or more IPv6 addresses from the range of the subnet to
     * associate with the primary network interface. You cannot specify this option and
     * the option to assign a number of IPv6 addresses in the same request. You cannot
     * specify this option if you've specified a minimum number of instances to
     * launch.</p>
     */
    inline const Aws::Vector<InstanceIpv6Address>& GetIpv6Addresses() const{ return m_ipv6Addresses; }

    /**
     * <p>[EC2-VPC] Specify one or more IPv6 addresses from the range of the subnet to
     * associate with the primary network interface. You cannot specify this option and
     * the option to assign a number of IPv6 addresses in the same request. You cannot
     * specify this option if you've specified a minimum number of instances to
     * launch.</p>
     */
    inline void SetIpv6Addresses(const Aws::Vector<InstanceIpv6Address>& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = value; }

    /**
     * <p>[EC2-VPC] Specify one or more IPv6 addresses from the range of the subnet to
     * associate with the primary network interface. You cannot specify this option and
     * the option to assign a number of IPv6 addresses in the same request. You cannot
     * specify this option if you've specified a minimum number of instances to
     * launch.</p>
     */
    inline void SetIpv6Addresses(Aws::Vector<InstanceIpv6Address>&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::move(value); }

    /**
     * <p>[EC2-VPC] Specify one or more IPv6 addresses from the range of the subnet to
     * associate with the primary network interface. You cannot specify this option and
     * the option to assign a number of IPv6 addresses in the same request. You cannot
     * specify this option if you've specified a minimum number of instances to
     * launch.</p>
     */
    inline RunInstancesRequest& WithIpv6Addresses(const Aws::Vector<InstanceIpv6Address>& value) { SetIpv6Addresses(value); return *this;}

    /**
     * <p>[EC2-VPC] Specify one or more IPv6 addresses from the range of the subnet to
     * associate with the primary network interface. You cannot specify this option and
     * the option to assign a number of IPv6 addresses in the same request. You cannot
     * specify this option if you've specified a minimum number of instances to
     * launch.</p>
     */
    inline RunInstancesRequest& WithIpv6Addresses(Aws::Vector<InstanceIpv6Address>&& value) { SetIpv6Addresses(std::move(value)); return *this;}

    /**
     * <p>[EC2-VPC] Specify one or more IPv6 addresses from the range of the subnet to
     * associate with the primary network interface. You cannot specify this option and
     * the option to assign a number of IPv6 addresses in the same request. You cannot
     * specify this option if you've specified a minimum number of instances to
     * launch.</p>
     */
    inline RunInstancesRequest& AddIpv6Addresses(const InstanceIpv6Address& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }

    /**
     * <p>[EC2-VPC] Specify one or more IPv6 addresses from the range of the subnet to
     * associate with the primary network interface. You cannot specify this option and
     * the option to assign a number of IPv6 addresses in the same request. You cannot
     * specify this option if you've specified a minimum number of instances to
     * launch.</p>
     */
    inline RunInstancesRequest& AddIpv6Addresses(InstanceIpv6Address&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the kernel.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline const Aws::String& GetKernelId() const{ return m_kernelId; }

    /**
     * <p>The ID of the kernel.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline void SetKernelId(const Aws::String& value) { m_kernelIdHasBeenSet = true; m_kernelId = value; }

    /**
     * <p>The ID of the kernel.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline void SetKernelId(Aws::String&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::move(value); }

    /**
     * <p>The ID of the kernel.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline void SetKernelId(const char* value) { m_kernelIdHasBeenSet = true; m_kernelId.assign(value); }

    /**
     * <p>The ID of the kernel.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline RunInstancesRequest& WithKernelId(const Aws::String& value) { SetKernelId(value); return *this;}

    /**
     * <p>The ID of the kernel.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline RunInstancesRequest& WithKernelId(Aws::String&& value) { SetKernelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the kernel.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline RunInstancesRequest& WithKernelId(const char* value) { SetKernelId(value); return *this;}


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
    inline RunInstancesRequest& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>The name of the key pair. You can create a key pair using
     * <a>CreateKeyPair</a> or <a>ImportKeyPair</a>.</p> <important> <p>If you do not
     * specify a key pair, you can't connect to the instance unless you choose an AMI
     * that is configured to allow users another way to log in.</p> </important>
     */
    inline RunInstancesRequest& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>The name of the key pair. You can create a key pair using
     * <a>CreateKeyPair</a> or <a>ImportKeyPair</a>.</p> <important> <p>If you do not
     * specify a key pair, you can't connect to the instance unless you choose an AMI
     * that is configured to allow users another way to log in.</p> </important>
     */
    inline RunInstancesRequest& WithKeyName(const char* value) { SetKeyName(value); return *this;}


    /**
     * <p>The maximum number of instances to launch. If you specify more instances than
     * Amazon EC2 can launch in the target Availability Zone, Amazon EC2 launches the
     * largest possible number of instances above <code>MinCount</code>.</p>
     * <p>Constraints: Between 1 and the maximum number you're allowed for the
     * specified instance type. For more information about the default limits, and how
     * to request an increase, see <a
     * href="http://aws.amazon.com/ec2/faqs/#How_many_instances_can_I_run_in_Amazon_EC2">How
     * many instances can I run in Amazon EC2</a> in the Amazon EC2 FAQ.</p>
     */
    inline int GetMaxCount() const{ return m_maxCount; }

    /**
     * <p>The maximum number of instances to launch. If you specify more instances than
     * Amazon EC2 can launch in the target Availability Zone, Amazon EC2 launches the
     * largest possible number of instances above <code>MinCount</code>.</p>
     * <p>Constraints: Between 1 and the maximum number you're allowed for the
     * specified instance type. For more information about the default limits, and how
     * to request an increase, see <a
     * href="http://aws.amazon.com/ec2/faqs/#How_many_instances_can_I_run_in_Amazon_EC2">How
     * many instances can I run in Amazon EC2</a> in the Amazon EC2 FAQ.</p>
     */
    inline void SetMaxCount(int value) { m_maxCountHasBeenSet = true; m_maxCount = value; }

    /**
     * <p>The maximum number of instances to launch. If you specify more instances than
     * Amazon EC2 can launch in the target Availability Zone, Amazon EC2 launches the
     * largest possible number of instances above <code>MinCount</code>.</p>
     * <p>Constraints: Between 1 and the maximum number you're allowed for the
     * specified instance type. For more information about the default limits, and how
     * to request an increase, see <a
     * href="http://aws.amazon.com/ec2/faqs/#How_many_instances_can_I_run_in_Amazon_EC2">How
     * many instances can I run in Amazon EC2</a> in the Amazon EC2 FAQ.</p>
     */
    inline RunInstancesRequest& WithMaxCount(int value) { SetMaxCount(value); return *this;}


    /**
     * <p>The minimum number of instances to launch. If you specify a minimum that is
     * more instances than Amazon EC2 can launch in the target Availability Zone,
     * Amazon EC2 launches no instances.</p> <p>Constraints: Between 1 and the maximum
     * number you're allowed for the specified instance type. For more information
     * about the default limits, and how to request an increase, see <a
     * href="http://aws.amazon.com/ec2/faqs/#How_many_instances_can_I_run_in_Amazon_EC2">How
     * many instances can I run in Amazon EC2</a> in the Amazon EC2 General FAQ.</p>
     */
    inline int GetMinCount() const{ return m_minCount; }

    /**
     * <p>The minimum number of instances to launch. If you specify a minimum that is
     * more instances than Amazon EC2 can launch in the target Availability Zone,
     * Amazon EC2 launches no instances.</p> <p>Constraints: Between 1 and the maximum
     * number you're allowed for the specified instance type. For more information
     * about the default limits, and how to request an increase, see <a
     * href="http://aws.amazon.com/ec2/faqs/#How_many_instances_can_I_run_in_Amazon_EC2">How
     * many instances can I run in Amazon EC2</a> in the Amazon EC2 General FAQ.</p>
     */
    inline void SetMinCount(int value) { m_minCountHasBeenSet = true; m_minCount = value; }

    /**
     * <p>The minimum number of instances to launch. If you specify a minimum that is
     * more instances than Amazon EC2 can launch in the target Availability Zone,
     * Amazon EC2 launches no instances.</p> <p>Constraints: Between 1 and the maximum
     * number you're allowed for the specified instance type. For more information
     * about the default limits, and how to request an increase, see <a
     * href="http://aws.amazon.com/ec2/faqs/#How_many_instances_can_I_run_in_Amazon_EC2">How
     * many instances can I run in Amazon EC2</a> in the Amazon EC2 General FAQ.</p>
     */
    inline RunInstancesRequest& WithMinCount(int value) { SetMinCount(value); return *this;}


    /**
     * <p>The monitoring for the instance.</p>
     */
    inline const RunInstancesMonitoringEnabled& GetMonitoring() const{ return m_monitoring; }

    /**
     * <p>The monitoring for the instance.</p>
     */
    inline void SetMonitoring(const RunInstancesMonitoringEnabled& value) { m_monitoringHasBeenSet = true; m_monitoring = value; }

    /**
     * <p>The monitoring for the instance.</p>
     */
    inline void SetMonitoring(RunInstancesMonitoringEnabled&& value) { m_monitoringHasBeenSet = true; m_monitoring = std::move(value); }

    /**
     * <p>The monitoring for the instance.</p>
     */
    inline RunInstancesRequest& WithMonitoring(const RunInstancesMonitoringEnabled& value) { SetMonitoring(value); return *this;}

    /**
     * <p>The monitoring for the instance.</p>
     */
    inline RunInstancesRequest& WithMonitoring(RunInstancesMonitoringEnabled&& value) { SetMonitoring(std::move(value)); return *this;}


    /**
     * <p>The placement for the instance.</p>
     */
    inline const Placement& GetPlacement() const{ return m_placement; }

    /**
     * <p>The placement for the instance.</p>
     */
    inline void SetPlacement(const Placement& value) { m_placementHasBeenSet = true; m_placement = value; }

    /**
     * <p>The placement for the instance.</p>
     */
    inline void SetPlacement(Placement&& value) { m_placementHasBeenSet = true; m_placement = std::move(value); }

    /**
     * <p>The placement for the instance.</p>
     */
    inline RunInstancesRequest& WithPlacement(const Placement& value) { SetPlacement(value); return *this;}

    /**
     * <p>The placement for the instance.</p>
     */
    inline RunInstancesRequest& WithPlacement(Placement&& value) { SetPlacement(std::move(value)); return *this;}


    /**
     * <p>The ID of the RAM disk.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline const Aws::String& GetRamdiskId() const{ return m_ramdiskId; }

    /**
     * <p>The ID of the RAM disk.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline void SetRamdiskId(const Aws::String& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = value; }

    /**
     * <p>The ID of the RAM disk.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline void SetRamdiskId(Aws::String&& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = std::move(value); }

    /**
     * <p>The ID of the RAM disk.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline void SetRamdiskId(const char* value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId.assign(value); }

    /**
     * <p>The ID of the RAM disk.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline RunInstancesRequest& WithRamdiskId(const Aws::String& value) { SetRamdiskId(value); return *this;}

    /**
     * <p>The ID of the RAM disk.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline RunInstancesRequest& WithRamdiskId(Aws::String&& value) { SetRamdiskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the RAM disk.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline RunInstancesRequest& WithRamdiskId(const char* value) { SetRamdiskId(value); return *this;}


    /**
     * <p>One or more security group IDs. You can create a security group using
     * <a>CreateSecurityGroup</a>.</p> <p>Default: Amazon EC2 uses the default security
     * group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>One or more security group IDs. You can create a security group using
     * <a>CreateSecurityGroup</a>.</p> <p>Default: Amazon EC2 uses the default security
     * group.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>One or more security group IDs. You can create a security group using
     * <a>CreateSecurityGroup</a>.</p> <p>Default: Amazon EC2 uses the default security
     * group.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>One or more security group IDs. You can create a security group using
     * <a>CreateSecurityGroup</a>.</p> <p>Default: Amazon EC2 uses the default security
     * group.</p>
     */
    inline RunInstancesRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>One or more security group IDs. You can create a security group using
     * <a>CreateSecurityGroup</a>.</p> <p>Default: Amazon EC2 uses the default security
     * group.</p>
     */
    inline RunInstancesRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>One or more security group IDs. You can create a security group using
     * <a>CreateSecurityGroup</a>.</p> <p>Default: Amazon EC2 uses the default security
     * group.</p>
     */
    inline RunInstancesRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>One or more security group IDs. You can create a security group using
     * <a>CreateSecurityGroup</a>.</p> <p>Default: Amazon EC2 uses the default security
     * group.</p>
     */
    inline RunInstancesRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more security group IDs. You can create a security group using
     * <a>CreateSecurityGroup</a>.</p> <p>Default: Amazon EC2 uses the default security
     * group.</p>
     */
    inline RunInstancesRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault
     * VPC, you must use security group IDs instead.</p> <p>Default: Amazon EC2 uses
     * the default security group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault
     * VPC, you must use security group IDs instead.</p> <p>Default: Amazon EC2 uses
     * the default security group.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault
     * VPC, you must use security group IDs instead.</p> <p>Default: Amazon EC2 uses
     * the default security group.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault
     * VPC, you must use security group IDs instead.</p> <p>Default: Amazon EC2 uses
     * the default security group.</p>
     */
    inline RunInstancesRequest& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault
     * VPC, you must use security group IDs instead.</p> <p>Default: Amazon EC2 uses
     * the default security group.</p>
     */
    inline RunInstancesRequest& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault
     * VPC, you must use security group IDs instead.</p> <p>Default: Amazon EC2 uses
     * the default security group.</p>
     */
    inline RunInstancesRequest& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault
     * VPC, you must use security group IDs instead.</p> <p>Default: Amazon EC2 uses
     * the default security group.</p>
     */
    inline RunInstancesRequest& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault
     * VPC, you must use security group IDs instead.</p> <p>Default: Amazon EC2 uses
     * the default security group.</p>
     */
    inline RunInstancesRequest& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


    /**
     * <p>[EC2-VPC] The ID of the subnet to launch the instance into.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>[EC2-VPC] The ID of the subnet to launch the instance into.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>[EC2-VPC] The ID of the subnet to launch the instance into.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>[EC2-VPC] The ID of the subnet to launch the instance into.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>[EC2-VPC] The ID of the subnet to launch the instance into.</p>
     */
    inline RunInstancesRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>[EC2-VPC] The ID of the subnet to launch the instance into.</p>
     */
    inline RunInstancesRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>[EC2-VPC] The ID of the subnet to launch the instance into.</p>
     */
    inline RunInstancesRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The user data to make available to the instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Running
     * Commands on Your Linux Instance at Launch</a> (Linux) and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html#instancedata-add-user-data">Adding
     * User Data</a> (Windows). If you are using a command line tool, base64-encoding
     * is performed for you, and you can load the text from a file. Otherwise, you must
     * provide base64-encoded text.</p>
     */
    inline const Aws::String& GetUserData() const{ return m_userData; }

    /**
     * <p>The user data to make available to the instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Running
     * Commands on Your Linux Instance at Launch</a> (Linux) and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html#instancedata-add-user-data">Adding
     * User Data</a> (Windows). If you are using a command line tool, base64-encoding
     * is performed for you, and you can load the text from a file. Otherwise, you must
     * provide base64-encoded text.</p>
     */
    inline void SetUserData(const Aws::String& value) { m_userDataHasBeenSet = true; m_userData = value; }

    /**
     * <p>The user data to make available to the instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Running
     * Commands on Your Linux Instance at Launch</a> (Linux) and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html#instancedata-add-user-data">Adding
     * User Data</a> (Windows). If you are using a command line tool, base64-encoding
     * is performed for you, and you can load the text from a file. Otherwise, you must
     * provide base64-encoded text.</p>
     */
    inline void SetUserData(Aws::String&& value) { m_userDataHasBeenSet = true; m_userData = std::move(value); }

    /**
     * <p>The user data to make available to the instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Running
     * Commands on Your Linux Instance at Launch</a> (Linux) and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html#instancedata-add-user-data">Adding
     * User Data</a> (Windows). If you are using a command line tool, base64-encoding
     * is performed for you, and you can load the text from a file. Otherwise, you must
     * provide base64-encoded text.</p>
     */
    inline void SetUserData(const char* value) { m_userDataHasBeenSet = true; m_userData.assign(value); }

    /**
     * <p>The user data to make available to the instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Running
     * Commands on Your Linux Instance at Launch</a> (Linux) and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html#instancedata-add-user-data">Adding
     * User Data</a> (Windows). If you are using a command line tool, base64-encoding
     * is performed for you, and you can load the text from a file. Otherwise, you must
     * provide base64-encoded text.</p>
     */
    inline RunInstancesRequest& WithUserData(const Aws::String& value) { SetUserData(value); return *this;}

    /**
     * <p>The user data to make available to the instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Running
     * Commands on Your Linux Instance at Launch</a> (Linux) and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html#instancedata-add-user-data">Adding
     * User Data</a> (Windows). If you are using a command line tool, base64-encoding
     * is performed for you, and you can load the text from a file. Otherwise, you must
     * provide base64-encoded text.</p>
     */
    inline RunInstancesRequest& WithUserData(Aws::String&& value) { SetUserData(std::move(value)); return *this;}

    /**
     * <p>The user data to make available to the instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Running
     * Commands on Your Linux Instance at Launch</a> (Linux) and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html#instancedata-add-user-data">Adding
     * User Data</a> (Windows). If you are using a command line tool, base64-encoding
     * is performed for you, and you can load the text from a file. Otherwise, you must
     * provide base64-encoded text.</p>
     */
    inline RunInstancesRequest& WithUserData(const char* value) { SetUserData(value); return *this;}


    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetAdditionalInfo() const{ return m_additionalInfo; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetAdditionalInfo(const Aws::String& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = value; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetAdditionalInfo(Aws::String&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = std::move(value); }

    /**
     * <p>Reserved.</p>
     */
    inline void SetAdditionalInfo(const char* value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.assign(value); }

    /**
     * <p>Reserved.</p>
     */
    inline RunInstancesRequest& WithAdditionalInfo(const Aws::String& value) { SetAdditionalInfo(value); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline RunInstancesRequest& WithAdditionalInfo(Aws::String&& value) { SetAdditionalInfo(std::move(value)); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline RunInstancesRequest& WithAdditionalInfo(const char* value) { SetAdditionalInfo(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline RunInstancesRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline RunInstancesRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline RunInstancesRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>If you set this parameter to <code>true</code>, you can't terminate the
     * instance using the Amazon EC2 console, CLI, or API; otherwise, you can. To
     * change this attribute to <code>false</code> after launch, use
     * <a>ModifyInstanceAttribute</a>. Alternatively, if you set
     * <code>InstanceInitiatedShutdownBehavior</code> to <code>terminate</code>, you
     * can terminate the instance by running the shutdown command from the
     * instance.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetDisableApiTermination() const{ return m_disableApiTermination; }

    /**
     * <p>If you set this parameter to <code>true</code>, you can't terminate the
     * instance using the Amazon EC2 console, CLI, or API; otherwise, you can. To
     * change this attribute to <code>false</code> after launch, use
     * <a>ModifyInstanceAttribute</a>. Alternatively, if you set
     * <code>InstanceInitiatedShutdownBehavior</code> to <code>terminate</code>, you
     * can terminate the instance by running the shutdown command from the
     * instance.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetDisableApiTermination(bool value) { m_disableApiTerminationHasBeenSet = true; m_disableApiTermination = value; }

    /**
     * <p>If you set this parameter to <code>true</code>, you can't terminate the
     * instance using the Amazon EC2 console, CLI, or API; otherwise, you can. To
     * change this attribute to <code>false</code> after launch, use
     * <a>ModifyInstanceAttribute</a>. Alternatively, if you set
     * <code>InstanceInitiatedShutdownBehavior</code> to <code>terminate</code>, you
     * can terminate the instance by running the shutdown command from the
     * instance.</p> <p>Default: <code>false</code> </p>
     */
    inline RunInstancesRequest& WithDisableApiTermination(bool value) { SetDisableApiTermination(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline RunInstancesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Indicates whether the instance is optimized for Amazon EBS I/O. This
     * optimization provides dedicated throughput to Amazon EBS and an optimized
     * configuration stack to provide optimal Amazon EBS I/O performance. This
     * optimization isn't available with all instance types. Additional usage charges
     * apply when using an EBS-optimized instance.</p> <p>Default: <code>false</code>
     * </p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }

    /**
     * <p>Indicates whether the instance is optimized for Amazon EBS I/O. This
     * optimization provides dedicated throughput to Amazon EBS and an optimized
     * configuration stack to provide optimal Amazon EBS I/O performance. This
     * optimization isn't available with all instance types. Additional usage charges
     * apply when using an EBS-optimized instance.</p> <p>Default: <code>false</code>
     * </p>
     */
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }

    /**
     * <p>Indicates whether the instance is optimized for Amazon EBS I/O. This
     * optimization provides dedicated throughput to Amazon EBS and an optimized
     * configuration stack to provide optimal Amazon EBS I/O performance. This
     * optimization isn't available with all instance types. Additional usage charges
     * apply when using an EBS-optimized instance.</p> <p>Default: <code>false</code>
     * </p>
     */
    inline RunInstancesRequest& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}


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
    inline RunInstancesRequest& WithIamInstanceProfile(const IamInstanceProfileSpecification& value) { SetIamInstanceProfile(value); return *this;}

    /**
     * <p>The IAM instance profile.</p>
     */
    inline RunInstancesRequest& WithIamInstanceProfile(IamInstanceProfileSpecification&& value) { SetIamInstanceProfile(std::move(value)); return *this;}


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
    inline RunInstancesRequest& WithInstanceInitiatedShutdownBehavior(const ShutdownBehavior& value) { SetInstanceInitiatedShutdownBehavior(value); return *this;}

    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     * <p>Default: <code>stop</code> </p>
     */
    inline RunInstancesRequest& WithInstanceInitiatedShutdownBehavior(ShutdownBehavior&& value) { SetInstanceInitiatedShutdownBehavior(std::move(value)); return *this;}


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
    inline void SetNetworkInterfaces(Aws::Vector<InstanceNetworkInterfaceSpecification>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }

    /**
     * <p>One or more network interfaces.</p>
     */
    inline RunInstancesRequest& WithNetworkInterfaces(const Aws::Vector<InstanceNetworkInterfaceSpecification>& value) { SetNetworkInterfaces(value); return *this;}

    /**
     * <p>One or more network interfaces.</p>
     */
    inline RunInstancesRequest& WithNetworkInterfaces(Aws::Vector<InstanceNetworkInterfaceSpecification>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}

    /**
     * <p>One or more network interfaces.</p>
     */
    inline RunInstancesRequest& AddNetworkInterfaces(const InstanceNetworkInterfaceSpecification& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }

    /**
     * <p>One or more network interfaces.</p>
     */
    inline RunInstancesRequest& AddNetworkInterfaces(InstanceNetworkInterfaceSpecification&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }


    /**
     * <p>[EC2-VPC] The primary IPv4 address. You must specify a value from the IPv4
     * address range of the subnet.</p> <p>Only one private IP address can be
     * designated as primary. You can't specify this option if you've specified the
     * option to designate a private IP address as the primary IP address in a network
     * interface specification. You cannot specify this option if you're launching more
     * than one instance in the request.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>[EC2-VPC] The primary IPv4 address. You must specify a value from the IPv4
     * address range of the subnet.</p> <p>Only one private IP address can be
     * designated as primary. You can't specify this option if you've specified the
     * option to designate a private IP address as the primary IP address in a network
     * interface specification. You cannot specify this option if you're launching more
     * than one instance in the request.</p>
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>[EC2-VPC] The primary IPv4 address. You must specify a value from the IPv4
     * address range of the subnet.</p> <p>Only one private IP address can be
     * designated as primary. You can't specify this option if you've specified the
     * option to designate a private IP address as the primary IP address in a network
     * interface specification. You cannot specify this option if you're launching more
     * than one instance in the request.</p>
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }

    /**
     * <p>[EC2-VPC] The primary IPv4 address. You must specify a value from the IPv4
     * address range of the subnet.</p> <p>Only one private IP address can be
     * designated as primary. You can't specify this option if you've specified the
     * option to designate a private IP address as the primary IP address in a network
     * interface specification. You cannot specify this option if you're launching more
     * than one instance in the request.</p>
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * <p>[EC2-VPC] The primary IPv4 address. You must specify a value from the IPv4
     * address range of the subnet.</p> <p>Only one private IP address can be
     * designated as primary. You can't specify this option if you've specified the
     * option to designate a private IP address as the primary IP address in a network
     * interface specification. You cannot specify this option if you're launching more
     * than one instance in the request.</p>
     */
    inline RunInstancesRequest& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>[EC2-VPC] The primary IPv4 address. You must specify a value from the IPv4
     * address range of the subnet.</p> <p>Only one private IP address can be
     * designated as primary. You can't specify this option if you've specified the
     * option to designate a private IP address as the primary IP address in a network
     * interface specification. You cannot specify this option if you're launching more
     * than one instance in the request.</p>
     */
    inline RunInstancesRequest& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}

    /**
     * <p>[EC2-VPC] The primary IPv4 address. You must specify a value from the IPv4
     * address range of the subnet.</p> <p>Only one private IP address can be
     * designated as primary. You can't specify this option if you've specified the
     * option to designate a private IP address as the primary IP address in a network
     * interface specification. You cannot specify this option if you're launching more
     * than one instance in the request.</p>
     */
    inline RunInstancesRequest& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}


    /**
     * <p>An elastic GPU to associate with the instance.</p>
     */
    inline const Aws::Vector<ElasticGpuSpecification>& GetElasticGpuSpecification() const{ return m_elasticGpuSpecification; }

    /**
     * <p>An elastic GPU to associate with the instance.</p>
     */
    inline void SetElasticGpuSpecification(const Aws::Vector<ElasticGpuSpecification>& value) { m_elasticGpuSpecificationHasBeenSet = true; m_elasticGpuSpecification = value; }

    /**
     * <p>An elastic GPU to associate with the instance.</p>
     */
    inline void SetElasticGpuSpecification(Aws::Vector<ElasticGpuSpecification>&& value) { m_elasticGpuSpecificationHasBeenSet = true; m_elasticGpuSpecification = std::move(value); }

    /**
     * <p>An elastic GPU to associate with the instance.</p>
     */
    inline RunInstancesRequest& WithElasticGpuSpecification(const Aws::Vector<ElasticGpuSpecification>& value) { SetElasticGpuSpecification(value); return *this;}

    /**
     * <p>An elastic GPU to associate with the instance.</p>
     */
    inline RunInstancesRequest& WithElasticGpuSpecification(Aws::Vector<ElasticGpuSpecification>&& value) { SetElasticGpuSpecification(std::move(value)); return *this;}

    /**
     * <p>An elastic GPU to associate with the instance.</p>
     */
    inline RunInstancesRequest& AddElasticGpuSpecification(const ElasticGpuSpecification& value) { m_elasticGpuSpecificationHasBeenSet = true; m_elasticGpuSpecification.push_back(value); return *this; }

    /**
     * <p>An elastic GPU to associate with the instance.</p>
     */
    inline RunInstancesRequest& AddElasticGpuSpecification(ElasticGpuSpecification&& value) { m_elasticGpuSpecificationHasBeenSet = true; m_elasticGpuSpecification.push_back(std::move(value)); return *this; }


    /**
     * <p>The tags to apply to the resources during launch. You can tag instances and
     * volumes. The specified tags are applied to all instances or volumes that are
     * created during launch.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply to the resources during launch. You can tag instances and
     * volumes. The specified tags are applied to all instances or volumes that are
     * created during launch.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply to the resources during launch. You can tag instances and
     * volumes. The specified tags are applied to all instances or volumes that are
     * created during launch.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the resources during launch. You can tag instances and
     * volumes. The specified tags are applied to all instances or volumes that are
     * created during launch.</p>
     */
    inline RunInstancesRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the resources during launch. You can tag instances and
     * volumes. The specified tags are applied to all instances or volumes that are
     * created during launch.</p>
     */
    inline RunInstancesRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the resources during launch. You can tag instances and
     * volumes. The specified tags are applied to all instances or volumes that are
     * created during launch.</p>
     */
    inline RunInstancesRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the resources during launch. You can tag instances and
     * volumes. The specified tags are applied to all instances or volumes that are
     * created during launch.</p>
     */
    inline RunInstancesRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>The launch template to use to launch the instances. Any parameters that you
     * specify in <a>RunInstances</a> override the same parameters in the launch
     * template. You can specify either the name or ID of a launch template, but not
     * both.</p>
     */
    inline const LaunchTemplateSpecification& GetLaunchTemplate() const{ return m_launchTemplate; }

    /**
     * <p>The launch template to use to launch the instances. Any parameters that you
     * specify in <a>RunInstances</a> override the same parameters in the launch
     * template. You can specify either the name or ID of a launch template, but not
     * both.</p>
     */
    inline void SetLaunchTemplate(const LaunchTemplateSpecification& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = value; }

    /**
     * <p>The launch template to use to launch the instances. Any parameters that you
     * specify in <a>RunInstances</a> override the same parameters in the launch
     * template. You can specify either the name or ID of a launch template, but not
     * both.</p>
     */
    inline void SetLaunchTemplate(LaunchTemplateSpecification&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::move(value); }

    /**
     * <p>The launch template to use to launch the instances. Any parameters that you
     * specify in <a>RunInstances</a> override the same parameters in the launch
     * template. You can specify either the name or ID of a launch template, but not
     * both.</p>
     */
    inline RunInstancesRequest& WithLaunchTemplate(const LaunchTemplateSpecification& value) { SetLaunchTemplate(value); return *this;}

    /**
     * <p>The launch template to use to launch the instances. Any parameters that you
     * specify in <a>RunInstances</a> override the same parameters in the launch
     * template. You can specify either the name or ID of a launch template, but not
     * both.</p>
     */
    inline RunInstancesRequest& WithLaunchTemplate(LaunchTemplateSpecification&& value) { SetLaunchTemplate(std::move(value)); return *this;}


    /**
     * <p>The market (purchasing) option for the instances.</p>
     */
    inline const InstanceMarketOptionsRequest& GetInstanceMarketOptions() const{ return m_instanceMarketOptions; }

    /**
     * <p>The market (purchasing) option for the instances.</p>
     */
    inline void SetInstanceMarketOptions(const InstanceMarketOptionsRequest& value) { m_instanceMarketOptionsHasBeenSet = true; m_instanceMarketOptions = value; }

    /**
     * <p>The market (purchasing) option for the instances.</p>
     */
    inline void SetInstanceMarketOptions(InstanceMarketOptionsRequest&& value) { m_instanceMarketOptionsHasBeenSet = true; m_instanceMarketOptions = std::move(value); }

    /**
     * <p>The market (purchasing) option for the instances.</p>
     */
    inline RunInstancesRequest& WithInstanceMarketOptions(const InstanceMarketOptionsRequest& value) { SetInstanceMarketOptions(value); return *this;}

    /**
     * <p>The market (purchasing) option for the instances.</p>
     */
    inline RunInstancesRequest& WithInstanceMarketOptions(InstanceMarketOptionsRequest&& value) { SetInstanceMarketOptions(std::move(value)); return *this;}


    /**
     * <p>The credit option for CPU usage of the instance. Valid values are
     * <code>standard</code> and <code>unlimited</code>. To change this attribute after
     * launch, use <a>ModifyInstanceCreditSpecification</a>. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/t2-instances.html">T2
     * Instances</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Default: <code>standard</code> </p>
     */
    inline const CreditSpecificationRequest& GetCreditSpecification() const{ return m_creditSpecification; }

    /**
     * <p>The credit option for CPU usage of the instance. Valid values are
     * <code>standard</code> and <code>unlimited</code>. To change this attribute after
     * launch, use <a>ModifyInstanceCreditSpecification</a>. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/t2-instances.html">T2
     * Instances</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Default: <code>standard</code> </p>
     */
    inline void SetCreditSpecification(const CreditSpecificationRequest& value) { m_creditSpecificationHasBeenSet = true; m_creditSpecification = value; }

    /**
     * <p>The credit option for CPU usage of the instance. Valid values are
     * <code>standard</code> and <code>unlimited</code>. To change this attribute after
     * launch, use <a>ModifyInstanceCreditSpecification</a>. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/t2-instances.html">T2
     * Instances</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Default: <code>standard</code> </p>
     */
    inline void SetCreditSpecification(CreditSpecificationRequest&& value) { m_creditSpecificationHasBeenSet = true; m_creditSpecification = std::move(value); }

    /**
     * <p>The credit option for CPU usage of the instance. Valid values are
     * <code>standard</code> and <code>unlimited</code>. To change this attribute after
     * launch, use <a>ModifyInstanceCreditSpecification</a>. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/t2-instances.html">T2
     * Instances</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Default: <code>standard</code> </p>
     */
    inline RunInstancesRequest& WithCreditSpecification(const CreditSpecificationRequest& value) { SetCreditSpecification(value); return *this;}

    /**
     * <p>The credit option for CPU usage of the instance. Valid values are
     * <code>standard</code> and <code>unlimited</code>. To change this attribute after
     * launch, use <a>ModifyInstanceCreditSpecification</a>. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/t2-instances.html">T2
     * Instances</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Default: <code>standard</code> </p>
     */
    inline RunInstancesRequest& WithCreditSpecification(CreditSpecificationRequest&& value) { SetCreditSpecification(std::move(value)); return *this;}


    /**
     * <p>The CPU options for the instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimizing
     * CPU Options</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline const CpuOptionsRequest& GetCpuOptions() const{ return m_cpuOptions; }

    /**
     * <p>The CPU options for the instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimizing
     * CPU Options</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetCpuOptions(const CpuOptionsRequest& value) { m_cpuOptionsHasBeenSet = true; m_cpuOptions = value; }

    /**
     * <p>The CPU options for the instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimizing
     * CPU Options</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetCpuOptions(CpuOptionsRequest&& value) { m_cpuOptionsHasBeenSet = true; m_cpuOptions = std::move(value); }

    /**
     * <p>The CPU options for the instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimizing
     * CPU Options</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline RunInstancesRequest& WithCpuOptions(const CpuOptionsRequest& value) { SetCpuOptions(value); return *this;}

    /**
     * <p>The CPU options for the instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimizing
     * CPU Options</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline RunInstancesRequest& WithCpuOptions(CpuOptionsRequest&& value) { SetCpuOptions(std::move(value)); return *this;}

  private:

    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;

    int m_ipv6AddressCount;
    bool m_ipv6AddressCountHasBeenSet;

    Aws::Vector<InstanceIpv6Address> m_ipv6Addresses;
    bool m_ipv6AddressesHasBeenSet;

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet;

    int m_maxCount;
    bool m_maxCountHasBeenSet;

    int m_minCount;
    bool m_minCountHasBeenSet;

    RunInstancesMonitoringEnabled m_monitoring;
    bool m_monitoringHasBeenSet;

    Placement m_placement;
    bool m_placementHasBeenSet;

    Aws::String m_ramdiskId;
    bool m_ramdiskIdHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    Aws::String m_userData;
    bool m_userDataHasBeenSet;

    Aws::String m_additionalInfo;
    bool m_additionalInfoHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    bool m_disableApiTermination;
    bool m_disableApiTerminationHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet;

    IamInstanceProfileSpecification m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet;

    ShutdownBehavior m_instanceInitiatedShutdownBehavior;
    bool m_instanceInitiatedShutdownBehaviorHasBeenSet;

    Aws::Vector<InstanceNetworkInterfaceSpecification> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet;

    Aws::Vector<ElasticGpuSpecification> m_elasticGpuSpecification;
    bool m_elasticGpuSpecificationHasBeenSet;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet;

    LaunchTemplateSpecification m_launchTemplate;
    bool m_launchTemplateHasBeenSet;

    InstanceMarketOptionsRequest m_instanceMarketOptions;
    bool m_instanceMarketOptionsHasBeenSet;

    CreditSpecificationRequest m_creditSpecification;
    bool m_creditSpecificationHasBeenSet;

    CpuOptionsRequest m_cpuOptions;
    bool m_cpuOptionsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
