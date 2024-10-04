/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/AttributeBooleanValue.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceAttributeName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/AttributeValue.h>
#include <aws/ec2/model/BlobAttributeValue.h>
#include <aws/ec2/model/InstanceBlockDeviceMappingSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyInstanceAttributeRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyInstanceAttributeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyInstanceAttribute"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Enable or disable source/destination checks, which ensure that the instance
     * is either the source or the destination of any traffic that it receives. If the
     * value is <code>true</code>, source/destination checks are enabled; otherwise,
     * they are disabled. The default value is <code>true</code>. You must disable
     * source/destination checks if the instance runs services such as network address
     * translation, routing, or firewalls.</p>
     */
    inline const AttributeBooleanValue& GetSourceDestCheck() const{ return m_sourceDestCheck; }
    inline bool SourceDestCheckHasBeenSet() const { return m_sourceDestCheckHasBeenSet; }
    inline void SetSourceDestCheck(const AttributeBooleanValue& value) { m_sourceDestCheckHasBeenSet = true; m_sourceDestCheck = value; }
    inline void SetSourceDestCheck(AttributeBooleanValue&& value) { m_sourceDestCheckHasBeenSet = true; m_sourceDestCheck = std::move(value); }
    inline ModifyInstanceAttributeRequest& WithSourceDestCheck(const AttributeBooleanValue& value) { SetSourceDestCheck(value); return *this;}
    inline ModifyInstanceAttributeRequest& WithSourceDestCheck(AttributeBooleanValue&& value) { SetSourceDestCheck(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether an instance is enabled for stop protection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-stop-protection.html">Enable
     * stop protection for your instance</a>.</p> <p/>
     */
    inline const AttributeBooleanValue& GetDisableApiStop() const{ return m_disableApiStop; }
    inline bool DisableApiStopHasBeenSet() const { return m_disableApiStopHasBeenSet; }
    inline void SetDisableApiStop(const AttributeBooleanValue& value) { m_disableApiStopHasBeenSet = true; m_disableApiStop = value; }
    inline void SetDisableApiStop(AttributeBooleanValue&& value) { m_disableApiStopHasBeenSet = true; m_disableApiStop = std::move(value); }
    inline ModifyInstanceAttributeRequest& WithDisableApiStop(const AttributeBooleanValue& value) { SetDisableApiStop(value); return *this;}
    inline ModifyInstanceAttributeRequest& WithDisableApiStop(AttributeBooleanValue&& value) { SetDisableApiStop(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the operation, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyInstanceAttributeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline ModifyInstanceAttributeRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline ModifyInstanceAttributeRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline ModifyInstanceAttributeRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the attribute to modify.</p>  <p>You can modify the
     * following attributes only: <code>disableApiTermination</code> |
     * <code>instanceType</code> | <code>kernel</code> | <code>ramdisk</code> |
     * <code>instanceInitiatedShutdownBehavior</code> | <code>blockDeviceMapping</code>
     * | <code>userData</code> | <code>sourceDestCheck</code> | <code>groupSet</code> |
     * <code>ebsOptimized</code> | <code>sriovNetSupport</code> |
     * <code>enaSupport</code> | <code>nvmeSupport</code> | <code>disableApiStop</code>
     * | <code>enclaveOptions</code> </p> 
     */
    inline const InstanceAttributeName& GetAttribute() const{ return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(const InstanceAttributeName& value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline void SetAttribute(InstanceAttributeName&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }
    inline ModifyInstanceAttributeRequest& WithAttribute(const InstanceAttributeName& value) { SetAttribute(value); return *this;}
    inline ModifyInstanceAttributeRequest& WithAttribute(InstanceAttributeName&& value) { SetAttribute(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new value for the attribute. Use only with the <code>kernel</code>,
     * <code>ramdisk</code>, <code>userData</code>, <code>disableApiTermination</code>,
     * or <code>instanceInitiatedShutdownBehavior</code> attribute.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline ModifyInstanceAttributeRequest& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline ModifyInstanceAttributeRequest& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline ModifyInstanceAttributeRequest& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Modifies the <code>DeleteOnTermination</code> attribute for volumes that are
     * currently attached. The volume must be owned by the caller. If no value is
     * specified for <code>DeleteOnTermination</code>, the default is <code>true</code>
     * and the volume is deleted when the instance is terminated. You can't modify the
     * <code>DeleteOnTermination</code> attribute for volumes that are attached to
     * Fargate tasks.</p> <p>To add instance store volumes to an Amazon EBS-backed
     * instance, you must add them when you launch the instance. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html#Using_OverridingAMIBDM">Update
     * the block device mapping when launching an instance</a> in the <i>Amazon EC2
     * User Guide</i>.</p>
     */
    inline const Aws::Vector<InstanceBlockDeviceMappingSpecification>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }
    inline void SetBlockDeviceMappings(const Aws::Vector<InstanceBlockDeviceMappingSpecification>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }
    inline void SetBlockDeviceMappings(Aws::Vector<InstanceBlockDeviceMappingSpecification>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }
    inline ModifyInstanceAttributeRequest& WithBlockDeviceMappings(const Aws::Vector<InstanceBlockDeviceMappingSpecification>& value) { SetBlockDeviceMappings(value); return *this;}
    inline ModifyInstanceAttributeRequest& WithBlockDeviceMappings(Aws::Vector<InstanceBlockDeviceMappingSpecification>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}
    inline ModifyInstanceAttributeRequest& AddBlockDeviceMappings(const InstanceBlockDeviceMappingSpecification& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }
    inline ModifyInstanceAttributeRequest& AddBlockDeviceMappings(InstanceBlockDeviceMappingSpecification&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the value is <code>true</code>, you can't terminate the instance using the
     * Amazon EC2 console, CLI, or API; otherwise, you can. You cannot use this
     * parameter for Spot Instances.</p>
     */
    inline const AttributeBooleanValue& GetDisableApiTermination() const{ return m_disableApiTermination; }
    inline bool DisableApiTerminationHasBeenSet() const { return m_disableApiTerminationHasBeenSet; }
    inline void SetDisableApiTermination(const AttributeBooleanValue& value) { m_disableApiTerminationHasBeenSet = true; m_disableApiTermination = value; }
    inline void SetDisableApiTermination(AttributeBooleanValue&& value) { m_disableApiTerminationHasBeenSet = true; m_disableApiTermination = std::move(value); }
    inline ModifyInstanceAttributeRequest& WithDisableApiTermination(const AttributeBooleanValue& value) { SetDisableApiTermination(value); return *this;}
    inline ModifyInstanceAttributeRequest& WithDisableApiTermination(AttributeBooleanValue&& value) { SetDisableApiTermination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Changes the instance type to the specified value. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>. If the instance type is not
     * valid, the error returned is <code>InvalidInstanceAttributeValue</code>.</p>
     */
    inline const AttributeValue& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const AttributeValue& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(AttributeValue&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline ModifyInstanceAttributeRequest& WithInstanceType(const AttributeValue& value) { SetInstanceType(value); return *this;}
    inline ModifyInstanceAttributeRequest& WithInstanceType(AttributeValue&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Changes the instance's kernel to the specified value. We recommend that you
     * use PV-GRUB instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedKernels.html">PV-GRUB</a>.</p>
     */
    inline const AttributeValue& GetKernel() const{ return m_kernel; }
    inline bool KernelHasBeenSet() const { return m_kernelHasBeenSet; }
    inline void SetKernel(const AttributeValue& value) { m_kernelHasBeenSet = true; m_kernel = value; }
    inline void SetKernel(AttributeValue&& value) { m_kernelHasBeenSet = true; m_kernel = std::move(value); }
    inline ModifyInstanceAttributeRequest& WithKernel(const AttributeValue& value) { SetKernel(value); return *this;}
    inline ModifyInstanceAttributeRequest& WithKernel(AttributeValue&& value) { SetKernel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Changes the instance's RAM disk to the specified value. We recommend that you
     * use PV-GRUB instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedKernels.html">PV-GRUB</a>.</p>
     */
    inline const AttributeValue& GetRamdisk() const{ return m_ramdisk; }
    inline bool RamdiskHasBeenSet() const { return m_ramdiskHasBeenSet; }
    inline void SetRamdisk(const AttributeValue& value) { m_ramdiskHasBeenSet = true; m_ramdisk = value; }
    inline void SetRamdisk(AttributeValue&& value) { m_ramdiskHasBeenSet = true; m_ramdisk = std::move(value); }
    inline ModifyInstanceAttributeRequest& WithRamdisk(const AttributeValue& value) { SetRamdisk(value); return *this;}
    inline ModifyInstanceAttributeRequest& WithRamdisk(AttributeValue&& value) { SetRamdisk(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Changes the instance's user data to the specified value. User data must be
     * base64-encoded. Depending on the tool or SDK that you're using, the
     * base64-encoding might be performed for you. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instancedata-add-user-data.html">Work
     * with instance user data</a>.</p>
     */
    inline const BlobAttributeValue& GetUserData() const{ return m_userData; }
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }
    inline void SetUserData(const BlobAttributeValue& value) { m_userDataHasBeenSet = true; m_userData = value; }
    inline void SetUserData(BlobAttributeValue&& value) { m_userDataHasBeenSet = true; m_userData = std::move(value); }
    inline ModifyInstanceAttributeRequest& WithUserData(const BlobAttributeValue& value) { SetUserData(value); return *this;}
    inline ModifyInstanceAttributeRequest& WithUserData(BlobAttributeValue&& value) { SetUserData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline const AttributeValue& GetInstanceInitiatedShutdownBehavior() const{ return m_instanceInitiatedShutdownBehavior; }
    inline bool InstanceInitiatedShutdownBehaviorHasBeenSet() const { return m_instanceInitiatedShutdownBehaviorHasBeenSet; }
    inline void SetInstanceInitiatedShutdownBehavior(const AttributeValue& value) { m_instanceInitiatedShutdownBehaviorHasBeenSet = true; m_instanceInitiatedShutdownBehavior = value; }
    inline void SetInstanceInitiatedShutdownBehavior(AttributeValue&& value) { m_instanceInitiatedShutdownBehaviorHasBeenSet = true; m_instanceInitiatedShutdownBehavior = std::move(value); }
    inline ModifyInstanceAttributeRequest& WithInstanceInitiatedShutdownBehavior(const AttributeValue& value) { SetInstanceInitiatedShutdownBehavior(value); return *this;}
    inline ModifyInstanceAttributeRequest& WithInstanceInitiatedShutdownBehavior(AttributeValue&& value) { SetInstanceInitiatedShutdownBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replaces the security groups of the instance with the specified security
     * groups. You must specify the ID of at least one security group, even if it's
     * just the default security group for the VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const{ return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    inline void SetGroups(const Aws::Vector<Aws::String>& value) { m_groupsHasBeenSet = true; m_groups = value; }
    inline void SetGroups(Aws::Vector<Aws::String>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }
    inline ModifyInstanceAttributeRequest& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}
    inline ModifyInstanceAttributeRequest& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(std::move(value)); return *this;}
    inline ModifyInstanceAttributeRequest& AddGroups(const Aws::String& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }
    inline ModifyInstanceAttributeRequest& AddGroups(Aws::String&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }
    inline ModifyInstanceAttributeRequest& AddGroups(const char* value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the instance is optimized for Amazon EBS I/O. This
     * optimization provides dedicated throughput to Amazon EBS and an optimized
     * configuration stack to provide optimal EBS I/O performance. This optimization
     * isn't available with all instance types. Additional usage charges apply when
     * using an EBS Optimized instance.</p>
     */
    inline const AttributeBooleanValue& GetEbsOptimized() const{ return m_ebsOptimized; }
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }
    inline void SetEbsOptimized(const AttributeBooleanValue& value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }
    inline void SetEbsOptimized(AttributeBooleanValue&& value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = std::move(value); }
    inline ModifyInstanceAttributeRequest& WithEbsOptimized(const AttributeBooleanValue& value) { SetEbsOptimized(value); return *this;}
    inline ModifyInstanceAttributeRequest& WithEbsOptimized(AttributeBooleanValue&& value) { SetEbsOptimized(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>simple</code> to enable enhanced networking with the Intel 82599
     * Virtual Function interface for the instance.</p> <p>There is no way to disable
     * enhanced networking with the Intel 82599 Virtual Function interface at this
     * time.</p> <p>This option is supported only for HVM instances. Specifying this
     * option with a PV instance can make it unreachable.</p>
     */
    inline const AttributeValue& GetSriovNetSupport() const{ return m_sriovNetSupport; }
    inline bool SriovNetSupportHasBeenSet() const { return m_sriovNetSupportHasBeenSet; }
    inline void SetSriovNetSupport(const AttributeValue& value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport = value; }
    inline void SetSriovNetSupport(AttributeValue&& value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport = std::move(value); }
    inline ModifyInstanceAttributeRequest& WithSriovNetSupport(const AttributeValue& value) { SetSriovNetSupport(value); return *this;}
    inline ModifyInstanceAttributeRequest& WithSriovNetSupport(AttributeValue&& value) { SetSriovNetSupport(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> to enable enhanced networking with ENA for the
     * instance.</p> <p>This option is supported only for HVM instances. Specifying
     * this option with a PV instance can make it unreachable.</p>
     */
    inline const AttributeBooleanValue& GetEnaSupport() const{ return m_enaSupport; }
    inline bool EnaSupportHasBeenSet() const { return m_enaSupportHasBeenSet; }
    inline void SetEnaSupport(const AttributeBooleanValue& value) { m_enaSupportHasBeenSet = true; m_enaSupport = value; }
    inline void SetEnaSupport(AttributeBooleanValue&& value) { m_enaSupportHasBeenSet = true; m_enaSupport = std::move(value); }
    inline ModifyInstanceAttributeRequest& WithEnaSupport(const AttributeBooleanValue& value) { SetEnaSupport(value); return *this;}
    inline ModifyInstanceAttributeRequest& WithEnaSupport(AttributeBooleanValue&& value) { SetEnaSupport(std::move(value)); return *this;}
    ///@}
  private:

    AttributeBooleanValue m_sourceDestCheck;
    bool m_sourceDestCheckHasBeenSet = false;

    AttributeBooleanValue m_disableApiStop;
    bool m_disableApiStopHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    InstanceAttributeName m_attribute;
    bool m_attributeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::Vector<InstanceBlockDeviceMappingSpecification> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    AttributeBooleanValue m_disableApiTermination;
    bool m_disableApiTerminationHasBeenSet = false;

    AttributeValue m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    AttributeValue m_kernel;
    bool m_kernelHasBeenSet = false;

    AttributeValue m_ramdisk;
    bool m_ramdiskHasBeenSet = false;

    BlobAttributeValue m_userData;
    bool m_userDataHasBeenSet = false;

    AttributeValue m_instanceInitiatedShutdownBehavior;
    bool m_instanceInitiatedShutdownBehaviorHasBeenSet = false;

    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet = false;

    AttributeBooleanValue m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet = false;

    AttributeValue m_sriovNetSupport;
    bool m_sriovNetSupportHasBeenSet = false;

    AttributeBooleanValue m_enaSupport;
    bool m_enaSupportHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
