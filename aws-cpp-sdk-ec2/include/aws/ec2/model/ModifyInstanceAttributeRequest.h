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
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceAttributeName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/AttributeBooleanValue.h>
#include <aws/ec2/model/AttributeValue.h>
#include <aws/ec2/model/BlobAttributeValue.h>
#include <aws/ec2/model/InstanceBlockDeviceMappingSpecification.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for ModifyInstanceAttribute.</p>
   */
  class AWS_EC2_API ModifyInstanceAttributeRequest : public EC2Request
  {
  public:
    ModifyInstanceAttributeRequest();
    Aws::String SerializePayload() const override;

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
    inline ModifyInstanceAttributeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline ModifyInstanceAttributeRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline ModifyInstanceAttributeRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline ModifyInstanceAttributeRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>The name of the attribute.</p>
     */
    inline const InstanceAttributeName& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The name of the attribute.</p>
     */
    inline void SetAttribute(const InstanceAttributeName& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The name of the attribute.</p>
     */
    inline void SetAttribute(InstanceAttributeName&& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The name of the attribute.</p>
     */
    inline ModifyInstanceAttributeRequest& WithAttribute(const InstanceAttributeName& value) { SetAttribute(value); return *this;}

    /**
     * <p>The name of the attribute.</p>
     */
    inline ModifyInstanceAttributeRequest& WithAttribute(InstanceAttributeName&& value) { SetAttribute(value); return *this;}

    /**
     * <p>A new value for the attribute. Use only with the <code>kernel</code>,
     * <code>ramdisk</code>, <code>userData</code>, <code>disableApiTermination</code>,
     * or <code>instanceInitiatedShutdownBehavior</code> attribute.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>A new value for the attribute. Use only with the <code>kernel</code>,
     * <code>ramdisk</code>, <code>userData</code>, <code>disableApiTermination</code>,
     * or <code>instanceInitiatedShutdownBehavior</code> attribute.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A new value for the attribute. Use only with the <code>kernel</code>,
     * <code>ramdisk</code>, <code>userData</code>, <code>disableApiTermination</code>,
     * or <code>instanceInitiatedShutdownBehavior</code> attribute.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A new value for the attribute. Use only with the <code>kernel</code>,
     * <code>ramdisk</code>, <code>userData</code>, <code>disableApiTermination</code>,
     * or <code>instanceInitiatedShutdownBehavior</code> attribute.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>A new value for the attribute. Use only with the <code>kernel</code>,
     * <code>ramdisk</code>, <code>userData</code>, <code>disableApiTermination</code>,
     * or <code>instanceInitiatedShutdownBehavior</code> attribute.</p>
     */
    inline ModifyInstanceAttributeRequest& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>A new value for the attribute. Use only with the <code>kernel</code>,
     * <code>ramdisk</code>, <code>userData</code>, <code>disableApiTermination</code>,
     * or <code>instanceInitiatedShutdownBehavior</code> attribute.</p>
     */
    inline ModifyInstanceAttributeRequest& WithValue(Aws::String&& value) { SetValue(value); return *this;}

    /**
     * <p>A new value for the attribute. Use only with the <code>kernel</code>,
     * <code>ramdisk</code>, <code>userData</code>, <code>disableApiTermination</code>,
     * or <code>instanceInitiatedShutdownBehavior</code> attribute.</p>
     */
    inline ModifyInstanceAttributeRequest& WithValue(const char* value) { SetValue(value); return *this;}

    /**
     * <p>Modifies the <code>DeleteOnTermination</code> attribute for volumes that are
     * currently attached. The volume must be owned by the caller. If no value is
     * specified for <code>DeleteOnTermination</code>, the default is <code>true</code>
     * and the volume is deleted when the instance is terminated.</p> <p>To add
     * instance store volumes to an Amazon EBS-backed instance, you must add them when
     * you launch the instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html#Using_OverridingAMIBDM">Updating
     * the Block Device Mapping when Launching an Instance</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p>
     */
    inline const Aws::Vector<InstanceBlockDeviceMappingSpecification>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }

    /**
     * <p>Modifies the <code>DeleteOnTermination</code> attribute for volumes that are
     * currently attached. The volume must be owned by the caller. If no value is
     * specified for <code>DeleteOnTermination</code>, the default is <code>true</code>
     * and the volume is deleted when the instance is terminated.</p> <p>To add
     * instance store volumes to an Amazon EBS-backed instance, you must add them when
     * you launch the instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html#Using_OverridingAMIBDM">Updating
     * the Block Device Mapping when Launching an Instance</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p>
     */
    inline void SetBlockDeviceMappings(const Aws::Vector<InstanceBlockDeviceMappingSpecification>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }

    /**
     * <p>Modifies the <code>DeleteOnTermination</code> attribute for volumes that are
     * currently attached. The volume must be owned by the caller. If no value is
     * specified for <code>DeleteOnTermination</code>, the default is <code>true</code>
     * and the volume is deleted when the instance is terminated.</p> <p>To add
     * instance store volumes to an Amazon EBS-backed instance, you must add them when
     * you launch the instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html#Using_OverridingAMIBDM">Updating
     * the Block Device Mapping when Launching an Instance</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p>
     */
    inline void SetBlockDeviceMappings(Aws::Vector<InstanceBlockDeviceMappingSpecification>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }

    /**
     * <p>Modifies the <code>DeleteOnTermination</code> attribute for volumes that are
     * currently attached. The volume must be owned by the caller. If no value is
     * specified for <code>DeleteOnTermination</code>, the default is <code>true</code>
     * and the volume is deleted when the instance is terminated.</p> <p>To add
     * instance store volumes to an Amazon EBS-backed instance, you must add them when
     * you launch the instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html#Using_OverridingAMIBDM">Updating
     * the Block Device Mapping when Launching an Instance</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p>
     */
    inline ModifyInstanceAttributeRequest& WithBlockDeviceMappings(const Aws::Vector<InstanceBlockDeviceMappingSpecification>& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>Modifies the <code>DeleteOnTermination</code> attribute for volumes that are
     * currently attached. The volume must be owned by the caller. If no value is
     * specified for <code>DeleteOnTermination</code>, the default is <code>true</code>
     * and the volume is deleted when the instance is terminated.</p> <p>To add
     * instance store volumes to an Amazon EBS-backed instance, you must add them when
     * you launch the instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html#Using_OverridingAMIBDM">Updating
     * the Block Device Mapping when Launching an Instance</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p>
     */
    inline ModifyInstanceAttributeRequest& WithBlockDeviceMappings(Aws::Vector<InstanceBlockDeviceMappingSpecification>&& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>Modifies the <code>DeleteOnTermination</code> attribute for volumes that are
     * currently attached. The volume must be owned by the caller. If no value is
     * specified for <code>DeleteOnTermination</code>, the default is <code>true</code>
     * and the volume is deleted when the instance is terminated.</p> <p>To add
     * instance store volumes to an Amazon EBS-backed instance, you must add them when
     * you launch the instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html#Using_OverridingAMIBDM">Updating
     * the Block Device Mapping when Launching an Instance</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p>
     */
    inline ModifyInstanceAttributeRequest& AddBlockDeviceMappings(const InstanceBlockDeviceMappingSpecification& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>Modifies the <code>DeleteOnTermination</code> attribute for volumes that are
     * currently attached. The volume must be owned by the caller. If no value is
     * specified for <code>DeleteOnTermination</code>, the default is <code>true</code>
     * and the volume is deleted when the instance is terminated.</p> <p>To add
     * instance store volumes to an Amazon EBS-backed instance, you must add them when
     * you launch the instance. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html#Using_OverridingAMIBDM">Updating
     * the Block Device Mapping when Launching an Instance</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p>
     */
    inline ModifyInstanceAttributeRequest& AddBlockDeviceMappings(InstanceBlockDeviceMappingSpecification&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>Specifies whether source/destination checking is enabled. A value of
     * <code>true</code> means that checking is enabled, and <code>false</code> means
     * checking is disabled. This value must be <code>false</code> for a NAT instance
     * to perform NAT.</p>
     */
    inline const AttributeBooleanValue& GetSourceDestCheck() const{ return m_sourceDestCheck; }

    /**
     * <p>Specifies whether source/destination checking is enabled. A value of
     * <code>true</code> means that checking is enabled, and <code>false</code> means
     * checking is disabled. This value must be <code>false</code> for a NAT instance
     * to perform NAT.</p>
     */
    inline void SetSourceDestCheck(const AttributeBooleanValue& value) { m_sourceDestCheckHasBeenSet = true; m_sourceDestCheck = value; }

    /**
     * <p>Specifies whether source/destination checking is enabled. A value of
     * <code>true</code> means that checking is enabled, and <code>false</code> means
     * checking is disabled. This value must be <code>false</code> for a NAT instance
     * to perform NAT.</p>
     */
    inline void SetSourceDestCheck(AttributeBooleanValue&& value) { m_sourceDestCheckHasBeenSet = true; m_sourceDestCheck = value; }

    /**
     * <p>Specifies whether source/destination checking is enabled. A value of
     * <code>true</code> means that checking is enabled, and <code>false</code> means
     * checking is disabled. This value must be <code>false</code> for a NAT instance
     * to perform NAT.</p>
     */
    inline ModifyInstanceAttributeRequest& WithSourceDestCheck(const AttributeBooleanValue& value) { SetSourceDestCheck(value); return *this;}

    /**
     * <p>Specifies whether source/destination checking is enabled. A value of
     * <code>true</code> means that checking is enabled, and <code>false</code> means
     * checking is disabled. This value must be <code>false</code> for a NAT instance
     * to perform NAT.</p>
     */
    inline ModifyInstanceAttributeRequest& WithSourceDestCheck(AttributeBooleanValue&& value) { SetSourceDestCheck(value); return *this;}

    /**
     * <p>If the value is <code>true</code>, you can't terminate the instance using the
     * Amazon EC2 console, CLI, or API; otherwise, you can. You cannot use this
     * paramater for Spot Instances.</p>
     */
    inline const AttributeBooleanValue& GetDisableApiTermination() const{ return m_disableApiTermination; }

    /**
     * <p>If the value is <code>true</code>, you can't terminate the instance using the
     * Amazon EC2 console, CLI, or API; otherwise, you can. You cannot use this
     * paramater for Spot Instances.</p>
     */
    inline void SetDisableApiTermination(const AttributeBooleanValue& value) { m_disableApiTerminationHasBeenSet = true; m_disableApiTermination = value; }

    /**
     * <p>If the value is <code>true</code>, you can't terminate the instance using the
     * Amazon EC2 console, CLI, or API; otherwise, you can. You cannot use this
     * paramater for Spot Instances.</p>
     */
    inline void SetDisableApiTermination(AttributeBooleanValue&& value) { m_disableApiTerminationHasBeenSet = true; m_disableApiTermination = value; }

    /**
     * <p>If the value is <code>true</code>, you can't terminate the instance using the
     * Amazon EC2 console, CLI, or API; otherwise, you can. You cannot use this
     * paramater for Spot Instances.</p>
     */
    inline ModifyInstanceAttributeRequest& WithDisableApiTermination(const AttributeBooleanValue& value) { SetDisableApiTermination(value); return *this;}

    /**
     * <p>If the value is <code>true</code>, you can't terminate the instance using the
     * Amazon EC2 console, CLI, or API; otherwise, you can. You cannot use this
     * paramater for Spot Instances.</p>
     */
    inline ModifyInstanceAttributeRequest& WithDisableApiTermination(AttributeBooleanValue&& value) { SetDisableApiTermination(value); return *this;}

    /**
     * <p>Changes the instance type to the specified value. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a>. If the instance type is not valid, the error returned is
     * <code>InvalidInstanceAttributeValue</code>.</p>
     */
    inline const AttributeValue& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>Changes the instance type to the specified value. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a>. If the instance type is not valid, the error returned is
     * <code>InvalidInstanceAttributeValue</code>.</p>
     */
    inline void SetInstanceType(const AttributeValue& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>Changes the instance type to the specified value. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a>. If the instance type is not valid, the error returned is
     * <code>InvalidInstanceAttributeValue</code>.</p>
     */
    inline void SetInstanceType(AttributeValue&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>Changes the instance type to the specified value. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a>. If the instance type is not valid, the error returned is
     * <code>InvalidInstanceAttributeValue</code>.</p>
     */
    inline ModifyInstanceAttributeRequest& WithInstanceType(const AttributeValue& value) { SetInstanceType(value); return *this;}

    /**
     * <p>Changes the instance type to the specified value. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a>. If the instance type is not valid, the error returned is
     * <code>InvalidInstanceAttributeValue</code>.</p>
     */
    inline ModifyInstanceAttributeRequest& WithInstanceType(AttributeValue&& value) { SetInstanceType(value); return *this;}

    /**
     * <p>Changes the instance's kernel to the specified value. We recommend that you
     * use PV-GRUB instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedKernels.html">PV-GRUB</a>.</p>
     */
    inline const AttributeValue& GetKernel() const{ return m_kernel; }

    /**
     * <p>Changes the instance's kernel to the specified value. We recommend that you
     * use PV-GRUB instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedKernels.html">PV-GRUB</a>.</p>
     */
    inline void SetKernel(const AttributeValue& value) { m_kernelHasBeenSet = true; m_kernel = value; }

    /**
     * <p>Changes the instance's kernel to the specified value. We recommend that you
     * use PV-GRUB instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedKernels.html">PV-GRUB</a>.</p>
     */
    inline void SetKernel(AttributeValue&& value) { m_kernelHasBeenSet = true; m_kernel = value; }

    /**
     * <p>Changes the instance's kernel to the specified value. We recommend that you
     * use PV-GRUB instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedKernels.html">PV-GRUB</a>.</p>
     */
    inline ModifyInstanceAttributeRequest& WithKernel(const AttributeValue& value) { SetKernel(value); return *this;}

    /**
     * <p>Changes the instance's kernel to the specified value. We recommend that you
     * use PV-GRUB instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedKernels.html">PV-GRUB</a>.</p>
     */
    inline ModifyInstanceAttributeRequest& WithKernel(AttributeValue&& value) { SetKernel(value); return *this;}

    /**
     * <p>Changes the instance's RAM disk to the specified value. We recommend that you
     * use PV-GRUB instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedKernels.html">PV-GRUB</a>.</p>
     */
    inline const AttributeValue& GetRamdisk() const{ return m_ramdisk; }

    /**
     * <p>Changes the instance's RAM disk to the specified value. We recommend that you
     * use PV-GRUB instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedKernels.html">PV-GRUB</a>.</p>
     */
    inline void SetRamdisk(const AttributeValue& value) { m_ramdiskHasBeenSet = true; m_ramdisk = value; }

    /**
     * <p>Changes the instance's RAM disk to the specified value. We recommend that you
     * use PV-GRUB instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedKernels.html">PV-GRUB</a>.</p>
     */
    inline void SetRamdisk(AttributeValue&& value) { m_ramdiskHasBeenSet = true; m_ramdisk = value; }

    /**
     * <p>Changes the instance's RAM disk to the specified value. We recommend that you
     * use PV-GRUB instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedKernels.html">PV-GRUB</a>.</p>
     */
    inline ModifyInstanceAttributeRequest& WithRamdisk(const AttributeValue& value) { SetRamdisk(value); return *this;}

    /**
     * <p>Changes the instance's RAM disk to the specified value. We recommend that you
     * use PV-GRUB instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedKernels.html">PV-GRUB</a>.</p>
     */
    inline ModifyInstanceAttributeRequest& WithRamdisk(AttributeValue&& value) { SetRamdisk(value); return *this;}

    /**
     * <p>Changes the instance's user data to the specified base64-encoded value. For
     * command line tools, base64 encoding is performed for you.</p>
     */
    inline const BlobAttributeValue& GetUserData() const{ return m_userData; }

    /**
     * <p>Changes the instance's user data to the specified base64-encoded value. For
     * command line tools, base64 encoding is performed for you.</p>
     */
    inline void SetUserData(const BlobAttributeValue& value) { m_userDataHasBeenSet = true; m_userData = value; }

    /**
     * <p>Changes the instance's user data to the specified base64-encoded value. For
     * command line tools, base64 encoding is performed for you.</p>
     */
    inline void SetUserData(BlobAttributeValue&& value) { m_userDataHasBeenSet = true; m_userData = value; }

    /**
     * <p>Changes the instance's user data to the specified base64-encoded value. For
     * command line tools, base64 encoding is performed for you.</p>
     */
    inline ModifyInstanceAttributeRequest& WithUserData(const BlobAttributeValue& value) { SetUserData(value); return *this;}

    /**
     * <p>Changes the instance's user data to the specified base64-encoded value. For
     * command line tools, base64 encoding is performed for you.</p>
     */
    inline ModifyInstanceAttributeRequest& WithUserData(BlobAttributeValue&& value) { SetUserData(value); return *this;}

    /**
     * <p>Specifies whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline const AttributeValue& GetInstanceInitiatedShutdownBehavior() const{ return m_instanceInitiatedShutdownBehavior; }

    /**
     * <p>Specifies whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline void SetInstanceInitiatedShutdownBehavior(const AttributeValue& value) { m_instanceInitiatedShutdownBehaviorHasBeenSet = true; m_instanceInitiatedShutdownBehavior = value; }

    /**
     * <p>Specifies whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline void SetInstanceInitiatedShutdownBehavior(AttributeValue&& value) { m_instanceInitiatedShutdownBehaviorHasBeenSet = true; m_instanceInitiatedShutdownBehavior = value; }

    /**
     * <p>Specifies whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline ModifyInstanceAttributeRequest& WithInstanceInitiatedShutdownBehavior(const AttributeValue& value) { SetInstanceInitiatedShutdownBehavior(value); return *this;}

    /**
     * <p>Specifies whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline ModifyInstanceAttributeRequest& WithInstanceInitiatedShutdownBehavior(AttributeValue&& value) { SetInstanceInitiatedShutdownBehavior(value); return *this;}

    /**
     * <p>[EC2-VPC] Changes the security groups of the instance. You must specify at
     * least one security group, even if it's just the default security group for the
     * VPC. You must specify the security group ID, not the security group name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const{ return m_groups; }

    /**
     * <p>[EC2-VPC] Changes the security groups of the instance. You must specify at
     * least one security group, even if it's just the default security group for the
     * VPC. You must specify the security group ID, not the security group name.</p>
     */
    inline void SetGroups(const Aws::Vector<Aws::String>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>[EC2-VPC] Changes the security groups of the instance. You must specify at
     * least one security group, even if it's just the default security group for the
     * VPC. You must specify the security group ID, not the security group name.</p>
     */
    inline void SetGroups(Aws::Vector<Aws::String>&& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>[EC2-VPC] Changes the security groups of the instance. You must specify at
     * least one security group, even if it's just the default security group for the
     * VPC. You must specify the security group ID, not the security group name.</p>
     */
    inline ModifyInstanceAttributeRequest& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}

    /**
     * <p>[EC2-VPC] Changes the security groups of the instance. You must specify at
     * least one security group, even if it's just the default security group for the
     * VPC. You must specify the security group ID, not the security group name.</p>
     */
    inline ModifyInstanceAttributeRequest& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(value); return *this;}

    /**
     * <p>[EC2-VPC] Changes the security groups of the instance. You must specify at
     * least one security group, even if it's just the default security group for the
     * VPC. You must specify the security group ID, not the security group name.</p>
     */
    inline ModifyInstanceAttributeRequest& AddGroups(const Aws::String& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>[EC2-VPC] Changes the security groups of the instance. You must specify at
     * least one security group, even if it's just the default security group for the
     * VPC. You must specify the security group ID, not the security group name.</p>
     */
    inline ModifyInstanceAttributeRequest& AddGroups(Aws::String&& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>[EC2-VPC] Changes the security groups of the instance. You must specify at
     * least one security group, even if it's just the default security group for the
     * VPC. You must specify the security group ID, not the security group name.</p>
     */
    inline ModifyInstanceAttributeRequest& AddGroups(const char* value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>Specifies whether the instance is optimized for EBS I/O. This optimization
     * provides dedicated throughput to Amazon EBS and an optimized configuration stack
     * to provide optimal EBS I/O performance. This optimization isn't available with
     * all instance types. Additional usage charges apply when using an EBS Optimized
     * instance.</p>
     */
    inline const AttributeBooleanValue& GetEbsOptimized() const{ return m_ebsOptimized; }

    /**
     * <p>Specifies whether the instance is optimized for EBS I/O. This optimization
     * provides dedicated throughput to Amazon EBS and an optimized configuration stack
     * to provide optimal EBS I/O performance. This optimization isn't available with
     * all instance types. Additional usage charges apply when using an EBS Optimized
     * instance.</p>
     */
    inline void SetEbsOptimized(const AttributeBooleanValue& value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }

    /**
     * <p>Specifies whether the instance is optimized for EBS I/O. This optimization
     * provides dedicated throughput to Amazon EBS and an optimized configuration stack
     * to provide optimal EBS I/O performance. This optimization isn't available with
     * all instance types. Additional usage charges apply when using an EBS Optimized
     * instance.</p>
     */
    inline void SetEbsOptimized(AttributeBooleanValue&& value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }

    /**
     * <p>Specifies whether the instance is optimized for EBS I/O. This optimization
     * provides dedicated throughput to Amazon EBS and an optimized configuration stack
     * to provide optimal EBS I/O performance. This optimization isn't available with
     * all instance types. Additional usage charges apply when using an EBS Optimized
     * instance.</p>
     */
    inline ModifyInstanceAttributeRequest& WithEbsOptimized(const AttributeBooleanValue& value) { SetEbsOptimized(value); return *this;}

    /**
     * <p>Specifies whether the instance is optimized for EBS I/O. This optimization
     * provides dedicated throughput to Amazon EBS and an optimized configuration stack
     * to provide optimal EBS I/O performance. This optimization isn't available with
     * all instance types. Additional usage charges apply when using an EBS Optimized
     * instance.</p>
     */
    inline ModifyInstanceAttributeRequest& WithEbsOptimized(AttributeBooleanValue&& value) { SetEbsOptimized(value); return *this;}

    /**
     * <p>Set to <code>simple</code> to enable enhanced networking for the
     * instance.</p> <p>There is no way to disable enhanced networking at this
     * time.</p> <p>This option is supported only for HVM instances. Specifying this
     * option with a PV instance can make it unreachable.</p>
     */
    inline const AttributeValue& GetSriovNetSupport() const{ return m_sriovNetSupport; }

    /**
     * <p>Set to <code>simple</code> to enable enhanced networking for the
     * instance.</p> <p>There is no way to disable enhanced networking at this
     * time.</p> <p>This option is supported only for HVM instances. Specifying this
     * option with a PV instance can make it unreachable.</p>
     */
    inline void SetSriovNetSupport(const AttributeValue& value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport = value; }

    /**
     * <p>Set to <code>simple</code> to enable enhanced networking for the
     * instance.</p> <p>There is no way to disable enhanced networking at this
     * time.</p> <p>This option is supported only for HVM instances. Specifying this
     * option with a PV instance can make it unreachable.</p>
     */
    inline void SetSriovNetSupport(AttributeValue&& value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport = value; }

    /**
     * <p>Set to <code>simple</code> to enable enhanced networking for the
     * instance.</p> <p>There is no way to disable enhanced networking at this
     * time.</p> <p>This option is supported only for HVM instances. Specifying this
     * option with a PV instance can make it unreachable.</p>
     */
    inline ModifyInstanceAttributeRequest& WithSriovNetSupport(const AttributeValue& value) { SetSriovNetSupport(value); return *this;}

    /**
     * <p>Set to <code>simple</code> to enable enhanced networking for the
     * instance.</p> <p>There is no way to disable enhanced networking at this
     * time.</p> <p>This option is supported only for HVM instances. Specifying this
     * option with a PV instance can make it unreachable.</p>
     */
    inline ModifyInstanceAttributeRequest& WithSriovNetSupport(AttributeValue&& value) { SetSriovNetSupport(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    InstanceAttributeName m_attribute;
    bool m_attributeHasBeenSet;
    Aws::String m_value;
    bool m_valueHasBeenSet;
    Aws::Vector<InstanceBlockDeviceMappingSpecification> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet;
    AttributeBooleanValue m_sourceDestCheck;
    bool m_sourceDestCheckHasBeenSet;
    AttributeBooleanValue m_disableApiTermination;
    bool m_disableApiTerminationHasBeenSet;
    AttributeValue m_instanceType;
    bool m_instanceTypeHasBeenSet;
    AttributeValue m_kernel;
    bool m_kernelHasBeenSet;
    AttributeValue m_ramdisk;
    bool m_ramdiskHasBeenSet;
    BlobAttributeValue m_userData;
    bool m_userDataHasBeenSet;
    AttributeValue m_instanceInitiatedShutdownBehavior;
    bool m_instanceInitiatedShutdownBehaviorHasBeenSet;
    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet;
    AttributeBooleanValue m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet;
    AttributeValue m_sriovNetSupport;
    bool m_sriovNetSupportHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
