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
    AWS_EC2_API ModifyInstanceAttributeRequest() = default;

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
    inline const AttributeBooleanValue& GetSourceDestCheck() const { return m_sourceDestCheck; }
    inline bool SourceDestCheckHasBeenSet() const { return m_sourceDestCheckHasBeenSet; }
    template<typename SourceDestCheckT = AttributeBooleanValue>
    void SetSourceDestCheck(SourceDestCheckT&& value) { m_sourceDestCheckHasBeenSet = true; m_sourceDestCheck = std::forward<SourceDestCheckT>(value); }
    template<typename SourceDestCheckT = AttributeBooleanValue>
    ModifyInstanceAttributeRequest& WithSourceDestCheck(SourceDestCheckT&& value) { SetSourceDestCheck(std::forward<SourceDestCheckT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether an instance is enabled for stop protection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-stop-protection.html">Enable
     * stop protection for your instance</a>.</p> <p/>
     */
    inline const AttributeBooleanValue& GetDisableApiStop() const { return m_disableApiStop; }
    inline bool DisableApiStopHasBeenSet() const { return m_disableApiStopHasBeenSet; }
    template<typename DisableApiStopT = AttributeBooleanValue>
    void SetDisableApiStop(DisableApiStopT&& value) { m_disableApiStopHasBeenSet = true; m_disableApiStop = std::forward<DisableApiStopT>(value); }
    template<typename DisableApiStopT = AttributeBooleanValue>
    ModifyInstanceAttributeRequest& WithDisableApiStop(DisableApiStopT&& value) { SetDisableApiStop(std::forward<DisableApiStopT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the operation, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyInstanceAttributeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    ModifyInstanceAttributeRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the attribute to modify.</p>  <p>When changing the instance
     * type: If the original instance type is configured for configurable bandwidth,
     * and the desired instance type doesn't support configurable bandwidth, first set
     * the existing bandwidth configuration to <code>default</code> using the
     * <a>ModifyInstanceNetworkPerformanceOptions</a> operation.</p> 
     *  <p>You can modify the following attributes only:
     * <code>disableApiTermination</code> | <code>instanceType</code> |
     * <code>kernel</code> | <code>ramdisk</code> |
     * <code>instanceInitiatedShutdownBehavior</code> | <code>blockDeviceMapping</code>
     * | <code>userData</code> | <code>sourceDestCheck</code> | <code>groupSet</code> |
     * <code>ebsOptimized</code> | <code>sriovNetSupport</code> |
     * <code>enaSupport</code> | <code>nvmeSupport</code> | <code>disableApiStop</code>
     * | <code>enclaveOptions</code> </p> 
     */
    inline InstanceAttributeName GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(InstanceAttributeName value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline ModifyInstanceAttributeRequest& WithAttribute(InstanceAttributeName value) { SetAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new value for the attribute. Use only with the <code>kernel</code>,
     * <code>ramdisk</code>, <code>userData</code>, <code>disableApiTermination</code>,
     * or <code>instanceInitiatedShutdownBehavior</code> attribute.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ModifyInstanceAttributeRequest& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Modifies the <code>DeleteOnTermination</code> attribute for volumes that are
     * currently attached. The volume must be owned by the caller. If no value is
     * specified for <code>DeleteOnTermination</code>, the default is <code>true</code>
     * and the volume is deleted when the instance is terminated. You can't modify the
     * <code>DeleteOnTermination</code> attribute for volumes that are attached to
     * Amazon Web Services-managed resources.</p> <p>To add instance store volumes to
     * an Amazon EBS-backed instance, you must add them when you launch the instance.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html#Using_OverridingAMIBDM">Update
     * the block device mapping when launching an instance</a> in the <i>Amazon EC2
     * User Guide</i>.</p>
     */
    inline const Aws::Vector<InstanceBlockDeviceMappingSpecification>& GetBlockDeviceMappings() const { return m_blockDeviceMappings; }
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }
    template<typename BlockDeviceMappingsT = Aws::Vector<InstanceBlockDeviceMappingSpecification>>
    void SetBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::forward<BlockDeviceMappingsT>(value); }
    template<typename BlockDeviceMappingsT = Aws::Vector<InstanceBlockDeviceMappingSpecification>>
    ModifyInstanceAttributeRequest& WithBlockDeviceMappings(BlockDeviceMappingsT&& value) { SetBlockDeviceMappings(std::forward<BlockDeviceMappingsT>(value)); return *this;}
    template<typename BlockDeviceMappingsT = InstanceBlockDeviceMappingSpecification>
    ModifyInstanceAttributeRequest& AddBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.emplace_back(std::forward<BlockDeviceMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enable or disable termination protection for the instance. If the value is
     * <code>true</code>, you can't terminate the instance using the Amazon EC2
     * console, command line interface, or API. You can't enable termination protection
     * for Spot Instances.</p>
     */
    inline const AttributeBooleanValue& GetDisableApiTermination() const { return m_disableApiTermination; }
    inline bool DisableApiTerminationHasBeenSet() const { return m_disableApiTerminationHasBeenSet; }
    template<typename DisableApiTerminationT = AttributeBooleanValue>
    void SetDisableApiTermination(DisableApiTerminationT&& value) { m_disableApiTerminationHasBeenSet = true; m_disableApiTermination = std::forward<DisableApiTerminationT>(value); }
    template<typename DisableApiTerminationT = AttributeBooleanValue>
    ModifyInstanceAttributeRequest& WithDisableApiTermination(DisableApiTerminationT&& value) { SetDisableApiTermination(std::forward<DisableApiTerminationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Changes the instance type to the specified value. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>. If the instance type is not
     * valid, the error returned is <code>InvalidInstanceAttributeValue</code>.</p>
     */
    inline const AttributeValue& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = AttributeValue>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = AttributeValue>
    ModifyInstanceAttributeRequest& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Changes the instance's kernel to the specified value. We recommend that you
     * use PV-GRUB instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedKernels.html">PV-GRUB</a>.</p>
     */
    inline const AttributeValue& GetKernel() const { return m_kernel; }
    inline bool KernelHasBeenSet() const { return m_kernelHasBeenSet; }
    template<typename KernelT = AttributeValue>
    void SetKernel(KernelT&& value) { m_kernelHasBeenSet = true; m_kernel = std::forward<KernelT>(value); }
    template<typename KernelT = AttributeValue>
    ModifyInstanceAttributeRequest& WithKernel(KernelT&& value) { SetKernel(std::forward<KernelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Changes the instance's RAM disk to the specified value. We recommend that you
     * use PV-GRUB instead of kernels and RAM disks. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedKernels.html">PV-GRUB</a>.</p>
     */
    inline const AttributeValue& GetRamdisk() const { return m_ramdisk; }
    inline bool RamdiskHasBeenSet() const { return m_ramdiskHasBeenSet; }
    template<typename RamdiskT = AttributeValue>
    void SetRamdisk(RamdiskT&& value) { m_ramdiskHasBeenSet = true; m_ramdisk = std::forward<RamdiskT>(value); }
    template<typename RamdiskT = AttributeValue>
    ModifyInstanceAttributeRequest& WithRamdisk(RamdiskT&& value) { SetRamdisk(std::forward<RamdiskT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Changes the instance's user data to the specified value. User data must be
     * base64-encoded. Depending on the tool or SDK that you're using, the
     * base64-encoding might be performed for you. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instancedata-add-user-data.html">Work
     * with instance user data</a>.</p>
     */
    inline const BlobAttributeValue& GetUserData() const { return m_userData; }
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }
    template<typename UserDataT = BlobAttributeValue>
    void SetUserData(UserDataT&& value) { m_userDataHasBeenSet = true; m_userData = std::forward<UserDataT>(value); }
    template<typename UserDataT = BlobAttributeValue>
    ModifyInstanceAttributeRequest& WithUserData(UserDataT&& value) { SetUserData(std::forward<UserDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     */
    inline const AttributeValue& GetInstanceInitiatedShutdownBehavior() const { return m_instanceInitiatedShutdownBehavior; }
    inline bool InstanceInitiatedShutdownBehaviorHasBeenSet() const { return m_instanceInitiatedShutdownBehaviorHasBeenSet; }
    template<typename InstanceInitiatedShutdownBehaviorT = AttributeValue>
    void SetInstanceInitiatedShutdownBehavior(InstanceInitiatedShutdownBehaviorT&& value) { m_instanceInitiatedShutdownBehaviorHasBeenSet = true; m_instanceInitiatedShutdownBehavior = std::forward<InstanceInitiatedShutdownBehaviorT>(value); }
    template<typename InstanceInitiatedShutdownBehaviorT = AttributeValue>
    ModifyInstanceAttributeRequest& WithInstanceInitiatedShutdownBehavior(InstanceInitiatedShutdownBehaviorT&& value) { SetInstanceInitiatedShutdownBehavior(std::forward<InstanceInitiatedShutdownBehaviorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replaces the security groups of the instance with the specified security
     * groups. You must specify the ID of at least one security group, even if it's
     * just the default security group for the VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const { return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    template<typename GroupsT = Aws::Vector<Aws::String>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<Aws::String>>
    ModifyInstanceAttributeRequest& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = Aws::String>
    ModifyInstanceAttributeRequest& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the instance is optimized for Amazon EBS I/O. This
     * optimization provides dedicated throughput to Amazon EBS and an optimized
     * configuration stack to provide optimal EBS I/O performance. This optimization
     * isn't available with all instance types. Additional usage charges apply when
     * using an EBS Optimized instance.</p>
     */
    inline const AttributeBooleanValue& GetEbsOptimized() const { return m_ebsOptimized; }
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }
    template<typename EbsOptimizedT = AttributeBooleanValue>
    void SetEbsOptimized(EbsOptimizedT&& value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = std::forward<EbsOptimizedT>(value); }
    template<typename EbsOptimizedT = AttributeBooleanValue>
    ModifyInstanceAttributeRequest& WithEbsOptimized(EbsOptimizedT&& value) { SetEbsOptimized(std::forward<EbsOptimizedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>simple</code> to enable enhanced networking with the Intel 82599
     * Virtual Function interface for the instance.</p> <p>There is no way to disable
     * enhanced networking with the Intel 82599 Virtual Function interface at this
     * time.</p> <p>This option is supported only for HVM instances. Specifying this
     * option with a PV instance can make it unreachable.</p>
     */
    inline const AttributeValue& GetSriovNetSupport() const { return m_sriovNetSupport; }
    inline bool SriovNetSupportHasBeenSet() const { return m_sriovNetSupportHasBeenSet; }
    template<typename SriovNetSupportT = AttributeValue>
    void SetSriovNetSupport(SriovNetSupportT&& value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport = std::forward<SriovNetSupportT>(value); }
    template<typename SriovNetSupportT = AttributeValue>
    ModifyInstanceAttributeRequest& WithSriovNetSupport(SriovNetSupportT&& value) { SetSriovNetSupport(std::forward<SriovNetSupportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> to enable enhanced networking with ENA for the
     * instance.</p> <p>This option is supported only for HVM instances. Specifying
     * this option with a PV instance can make it unreachable.</p>
     */
    inline const AttributeBooleanValue& GetEnaSupport() const { return m_enaSupport; }
    inline bool EnaSupportHasBeenSet() const { return m_enaSupportHasBeenSet; }
    template<typename EnaSupportT = AttributeBooleanValue>
    void SetEnaSupport(EnaSupportT&& value) { m_enaSupportHasBeenSet = true; m_enaSupport = std::forward<EnaSupportT>(value); }
    template<typename EnaSupportT = AttributeBooleanValue>
    ModifyInstanceAttributeRequest& WithEnaSupport(EnaSupportT&& value) { SetEnaSupport(std::forward<EnaSupportT>(value)); return *this;}
    ///@}
  private:

    AttributeBooleanValue m_sourceDestCheck;
    bool m_sourceDestCheckHasBeenSet = false;

    AttributeBooleanValue m_disableApiStop;
    bool m_disableApiStopHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    InstanceAttributeName m_attribute{InstanceAttributeName::NOT_SET};
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
