/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/HypervisorType.h>
#include <aws/ec2/model/DeviceType.h>
#include <aws/ec2/model/StateReason.h>
#include <aws/ec2/model/VirtualizationType.h>
#include <aws/ec2/model/BootModeValues.h>
#include <aws/ec2/model/TpmSupportValues.h>
#include <aws/ec2/model/ImdsSupportValues.h>
#include <aws/ec2/model/ImageState.h>
#include <aws/ec2/model/ArchitectureValues.h>
#include <aws/ec2/model/ImageTypeValues.h>
#include <aws/ec2/model/PlatformValues.h>
#include <aws/ec2/model/BlockDeviceMapping.h>
#include <aws/ec2/model/Tag.h>
#include <aws/ec2/model/ProductCode.h>
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
   * <p>Describes an image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Image">AWS API
   * Reference</a></p>
   */
  class Image
  {
  public:
    AWS_EC2_API Image();
    AWS_EC2_API Image(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Image& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The platform details associated with the billing code of the AMI. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-billing-info.html">Understand
     * AMI billing information</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const Aws::String& GetPlatformDetails() const{ return m_platformDetails; }
    inline bool PlatformDetailsHasBeenSet() const { return m_platformDetailsHasBeenSet; }
    inline void SetPlatformDetails(const Aws::String& value) { m_platformDetailsHasBeenSet = true; m_platformDetails = value; }
    inline void SetPlatformDetails(Aws::String&& value) { m_platformDetailsHasBeenSet = true; m_platformDetails = std::move(value); }
    inline void SetPlatformDetails(const char* value) { m_platformDetailsHasBeenSet = true; m_platformDetails.assign(value); }
    inline Image& WithPlatformDetails(const Aws::String& value) { SetPlatformDetails(value); return *this;}
    inline Image& WithPlatformDetails(Aws::String&& value) { SetPlatformDetails(std::move(value)); return *this;}
    inline Image& WithPlatformDetails(const char* value) { SetPlatformDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation of the Amazon EC2 instance and the billing code that is
     * associated with the AMI. <code>usageOperation</code> corresponds to the <a
     * href="https://docs.aws.amazon.com/cur/latest/userguide/Lineitem-columns.html#Lineitem-details-O-Operation">lineitem/Operation</a>
     * column on your Amazon Web Services Cost and Usage Report and in the <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/price-changes.html">Amazon
     * Web Services Price List API</a>. You can view these fields on the
     * <b>Instances</b> or <b>AMIs</b> pages in the Amazon EC2 console, or in the
     * responses that are returned by the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeImages.html">DescribeImages</a>
     * command in the Amazon EC2 API, or the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/ec2/describe-images.html">describe-images</a>
     * command in the CLI.</p>
     */
    inline const Aws::String& GetUsageOperation() const{ return m_usageOperation; }
    inline bool UsageOperationHasBeenSet() const { return m_usageOperationHasBeenSet; }
    inline void SetUsageOperation(const Aws::String& value) { m_usageOperationHasBeenSet = true; m_usageOperation = value; }
    inline void SetUsageOperation(Aws::String&& value) { m_usageOperationHasBeenSet = true; m_usageOperation = std::move(value); }
    inline void SetUsageOperation(const char* value) { m_usageOperationHasBeenSet = true; m_usageOperation.assign(value); }
    inline Image& WithUsageOperation(const Aws::String& value) { SetUsageOperation(value); return *this;}
    inline Image& WithUsageOperation(Aws::String&& value) { SetUsageOperation(std::move(value)); return *this;}
    inline Image& WithUsageOperation(const char* value) { SetUsageOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any block device mapping entries.</p>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }
    inline void SetBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }
    inline void SetBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }
    inline Image& WithBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}
    inline Image& WithBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}
    inline Image& AddBlockDeviceMappings(const BlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }
    inline Image& AddBlockDeviceMappings(BlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description of the AMI that was provided during image creation.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Image& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Image& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Image& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether enhanced networking with ENA is enabled.</p>
     */
    inline bool GetEnaSupport() const{ return m_enaSupport; }
    inline bool EnaSupportHasBeenSet() const { return m_enaSupportHasBeenSet; }
    inline void SetEnaSupport(bool value) { m_enaSupportHasBeenSet = true; m_enaSupport = value; }
    inline Image& WithEnaSupport(bool value) { SetEnaSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hypervisor type of the image. Only <code>xen</code> is supported.
     * <code>ovm</code> is not supported.</p>
     */
    inline const HypervisorType& GetHypervisor() const{ return m_hypervisor; }
    inline bool HypervisorHasBeenSet() const { return m_hypervisorHasBeenSet; }
    inline void SetHypervisor(const HypervisorType& value) { m_hypervisorHasBeenSet = true; m_hypervisor = value; }
    inline void SetHypervisor(HypervisorType&& value) { m_hypervisorHasBeenSet = true; m_hypervisor = std::move(value); }
    inline Image& WithHypervisor(const HypervisorType& value) { SetHypervisor(value); return *this;}
    inline Image& WithHypervisor(HypervisorType&& value) { SetHypervisor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner alias (<code>amazon</code> | <code>aws-backup-vault</code> |
     * <code>aws-marketplace</code>).</p>
     */
    inline const Aws::String& GetImageOwnerAlias() const{ return m_imageOwnerAlias; }
    inline bool ImageOwnerAliasHasBeenSet() const { return m_imageOwnerAliasHasBeenSet; }
    inline void SetImageOwnerAlias(const Aws::String& value) { m_imageOwnerAliasHasBeenSet = true; m_imageOwnerAlias = value; }
    inline void SetImageOwnerAlias(Aws::String&& value) { m_imageOwnerAliasHasBeenSet = true; m_imageOwnerAlias = std::move(value); }
    inline void SetImageOwnerAlias(const char* value) { m_imageOwnerAliasHasBeenSet = true; m_imageOwnerAlias.assign(value); }
    inline Image& WithImageOwnerAlias(const Aws::String& value) { SetImageOwnerAlias(value); return *this;}
    inline Image& WithImageOwnerAlias(Aws::String&& value) { SetImageOwnerAlias(std::move(value)); return *this;}
    inline Image& WithImageOwnerAlias(const char* value) { SetImageOwnerAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AMI that was provided during image creation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Image& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Image& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Image& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline const Aws::String& GetRootDeviceName() const{ return m_rootDeviceName; }
    inline bool RootDeviceNameHasBeenSet() const { return m_rootDeviceNameHasBeenSet; }
    inline void SetRootDeviceName(const Aws::String& value) { m_rootDeviceNameHasBeenSet = true; m_rootDeviceName = value; }
    inline void SetRootDeviceName(Aws::String&& value) { m_rootDeviceNameHasBeenSet = true; m_rootDeviceName = std::move(value); }
    inline void SetRootDeviceName(const char* value) { m_rootDeviceNameHasBeenSet = true; m_rootDeviceName.assign(value); }
    inline Image& WithRootDeviceName(const Aws::String& value) { SetRootDeviceName(value); return *this;}
    inline Image& WithRootDeviceName(Aws::String&& value) { SetRootDeviceName(std::move(value)); return *this;}
    inline Image& WithRootDeviceName(const char* value) { SetRootDeviceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of root device used by the AMI. The AMI can use an Amazon EBS volume
     * or an instance store volume.</p>
     */
    inline const DeviceType& GetRootDeviceType() const{ return m_rootDeviceType; }
    inline bool RootDeviceTypeHasBeenSet() const { return m_rootDeviceTypeHasBeenSet; }
    inline void SetRootDeviceType(const DeviceType& value) { m_rootDeviceTypeHasBeenSet = true; m_rootDeviceType = value; }
    inline void SetRootDeviceType(DeviceType&& value) { m_rootDeviceTypeHasBeenSet = true; m_rootDeviceType = std::move(value); }
    inline Image& WithRootDeviceType(const DeviceType& value) { SetRootDeviceType(value); return *this;}
    inline Image& WithRootDeviceType(DeviceType&& value) { SetRootDeviceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline const Aws::String& GetSriovNetSupport() const{ return m_sriovNetSupport; }
    inline bool SriovNetSupportHasBeenSet() const { return m_sriovNetSupportHasBeenSet; }
    inline void SetSriovNetSupport(const Aws::String& value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport = value; }
    inline void SetSriovNetSupport(Aws::String&& value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport = std::move(value); }
    inline void SetSriovNetSupport(const char* value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport.assign(value); }
    inline Image& WithSriovNetSupport(const Aws::String& value) { SetSriovNetSupport(value); return *this;}
    inline Image& WithSriovNetSupport(Aws::String&& value) { SetSriovNetSupport(std::move(value)); return *this;}
    inline Image& WithSriovNetSupport(const char* value) { SetSriovNetSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the state change.</p>
     */
    inline const StateReason& GetStateReason() const{ return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    inline void SetStateReason(const StateReason& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }
    inline void SetStateReason(StateReason&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }
    inline Image& WithStateReason(const StateReason& value) { SetStateReason(value); return *this;}
    inline Image& WithStateReason(StateReason&& value) { SetStateReason(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the image.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Image& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline Image& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline Image& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline Image& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of virtualization of the AMI.</p>
     */
    inline const VirtualizationType& GetVirtualizationType() const{ return m_virtualizationType; }
    inline bool VirtualizationTypeHasBeenSet() const { return m_virtualizationTypeHasBeenSet; }
    inline void SetVirtualizationType(const VirtualizationType& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = value; }
    inline void SetVirtualizationType(VirtualizationType&& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = std::move(value); }
    inline Image& WithVirtualizationType(const VirtualizationType& value) { SetVirtualizationType(value); return *this;}
    inline Image& WithVirtualizationType(VirtualizationType&& value) { SetVirtualizationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The boot mode of the image. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Boot
     * modes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const BootModeValues& GetBootMode() const{ return m_bootMode; }
    inline bool BootModeHasBeenSet() const { return m_bootModeHasBeenSet; }
    inline void SetBootMode(const BootModeValues& value) { m_bootModeHasBeenSet = true; m_bootMode = value; }
    inline void SetBootMode(BootModeValues&& value) { m_bootModeHasBeenSet = true; m_bootMode = std::move(value); }
    inline Image& WithBootMode(const BootModeValues& value) { SetBootMode(value); return *this;}
    inline Image& WithBootMode(BootModeValues&& value) { SetBootMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the image is configured for NitroTPM support, the value is
     * <code>v2.0</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitrotpm.html">NitroTPM</a>
     * in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const TpmSupportValues& GetTpmSupport() const{ return m_tpmSupport; }
    inline bool TpmSupportHasBeenSet() const { return m_tpmSupportHasBeenSet; }
    inline void SetTpmSupport(const TpmSupportValues& value) { m_tpmSupportHasBeenSet = true; m_tpmSupport = value; }
    inline void SetTpmSupport(TpmSupportValues&& value) { m_tpmSupportHasBeenSet = true; m_tpmSupport = std::move(value); }
    inline Image& WithTpmSupport(const TpmSupportValues& value) { SetTpmSupport(value); return *this;}
    inline Image& WithTpmSupport(TpmSupportValues&& value) { SetTpmSupport(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time to deprecate the AMI, in UTC, in the following format:
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z. If you specified
     * a value for seconds, Amazon EC2 rounds the seconds to the nearest minute.</p>
     */
    inline const Aws::String& GetDeprecationTime() const{ return m_deprecationTime; }
    inline bool DeprecationTimeHasBeenSet() const { return m_deprecationTimeHasBeenSet; }
    inline void SetDeprecationTime(const Aws::String& value) { m_deprecationTimeHasBeenSet = true; m_deprecationTime = value; }
    inline void SetDeprecationTime(Aws::String&& value) { m_deprecationTimeHasBeenSet = true; m_deprecationTime = std::move(value); }
    inline void SetDeprecationTime(const char* value) { m_deprecationTimeHasBeenSet = true; m_deprecationTime.assign(value); }
    inline Image& WithDeprecationTime(const Aws::String& value) { SetDeprecationTime(value); return *this;}
    inline Image& WithDeprecationTime(Aws::String&& value) { SetDeprecationTime(std::move(value)); return *this;}
    inline Image& WithDeprecationTime(const char* value) { SetDeprecationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>v2.0</code>, it indicates that IMDSv2 is specified in the AMI.
     * Instances launched from this AMI will have <code>HttpTokens</code> automatically
     * set to <code>required</code> so that, by default, the instance requires that
     * IMDSv2 is used when requesting instance metadata. In addition,
     * <code>HttpPutResponseHopLimit</code> is set to <code>2</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/configuring-IMDS-new-instances.html#configure-IMDS-new-instances-ami-configuration">Configure
     * the AMI</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const ImdsSupportValues& GetImdsSupport() const{ return m_imdsSupport; }
    inline bool ImdsSupportHasBeenSet() const { return m_imdsSupportHasBeenSet; }
    inline void SetImdsSupport(const ImdsSupportValues& value) { m_imdsSupportHasBeenSet = true; m_imdsSupport = value; }
    inline void SetImdsSupport(ImdsSupportValues&& value) { m_imdsSupportHasBeenSet = true; m_imdsSupport = std::move(value); }
    inline Image& WithImdsSupport(const ImdsSupportValues& value) { SetImdsSupport(value); return *this;}
    inline Image& WithImdsSupport(ImdsSupportValues&& value) { SetImdsSupport(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance that the AMI was created from if the AMI was created
     * using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateImage.html">CreateImage</a>.
     * This field only appears if the AMI was created using CreateImage.</p>
     */
    inline const Aws::String& GetSourceInstanceId() const{ return m_sourceInstanceId; }
    inline bool SourceInstanceIdHasBeenSet() const { return m_sourceInstanceIdHasBeenSet; }
    inline void SetSourceInstanceId(const Aws::String& value) { m_sourceInstanceIdHasBeenSet = true; m_sourceInstanceId = value; }
    inline void SetSourceInstanceId(Aws::String&& value) { m_sourceInstanceIdHasBeenSet = true; m_sourceInstanceId = std::move(value); }
    inline void SetSourceInstanceId(const char* value) { m_sourceInstanceIdHasBeenSet = true; m_sourceInstanceId.assign(value); }
    inline Image& WithSourceInstanceId(const Aws::String& value) { SetSourceInstanceId(value); return *this;}
    inline Image& WithSourceInstanceId(Aws::String&& value) { SetSourceInstanceId(std::move(value)); return *this;}
    inline Image& WithSourceInstanceId(const char* value) { SetSourceInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether deregistration protection is enabled for the AMI.</p>
     */
    inline const Aws::String& GetDeregistrationProtection() const{ return m_deregistrationProtection; }
    inline bool DeregistrationProtectionHasBeenSet() const { return m_deregistrationProtectionHasBeenSet; }
    inline void SetDeregistrationProtection(const Aws::String& value) { m_deregistrationProtectionHasBeenSet = true; m_deregistrationProtection = value; }
    inline void SetDeregistrationProtection(Aws::String&& value) { m_deregistrationProtectionHasBeenSet = true; m_deregistrationProtection = std::move(value); }
    inline void SetDeregistrationProtection(const char* value) { m_deregistrationProtectionHasBeenSet = true; m_deregistrationProtection.assign(value); }
    inline Image& WithDeregistrationProtection(const Aws::String& value) { SetDeregistrationProtection(value); return *this;}
    inline Image& WithDeregistrationProtection(Aws::String&& value) { SetDeregistrationProtection(std::move(value)); return *this;}
    inline Image& WithDeregistrationProtection(const char* value) { SetDeregistrationProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the AMI was last used to launch an EC2 instance. When
     * the AMI is used to launch an instance, there is a 24-hour delay before that
     * usage is reported.</p>  <p> <code>lastLaunchedTime</code> data is
     * available starting April 2017.</p> 
     */
    inline const Aws::String& GetLastLaunchedTime() const{ return m_lastLaunchedTime; }
    inline bool LastLaunchedTimeHasBeenSet() const { return m_lastLaunchedTimeHasBeenSet; }
    inline void SetLastLaunchedTime(const Aws::String& value) { m_lastLaunchedTimeHasBeenSet = true; m_lastLaunchedTime = value; }
    inline void SetLastLaunchedTime(Aws::String&& value) { m_lastLaunchedTimeHasBeenSet = true; m_lastLaunchedTime = std::move(value); }
    inline void SetLastLaunchedTime(const char* value) { m_lastLaunchedTimeHasBeenSet = true; m_lastLaunchedTime.assign(value); }
    inline Image& WithLastLaunchedTime(const Aws::String& value) { SetLastLaunchedTime(value); return *this;}
    inline Image& WithLastLaunchedTime(Aws::String&& value) { SetLastLaunchedTime(std::move(value)); return *this;}
    inline Image& WithLastLaunchedTime(const char* value) { SetLastLaunchedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, the AMI satisfies the criteria for Allowed AMIs and can
     * be discovered and used in the account. If <code>false</code> and Allowed AMIs is
     * set to <code>enabled</code>, the AMI can't be discovered or used in the account.
     * If <code>false</code> and Allowed AMIs is set to <code>audit-mode</code>, the
     * AMI can be discovered and used in the account.</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-allowed-amis.html">Control
     * the discovery and use of AMIs in Amazon EC2 with Allowed AMIs</a> in <i>Amazon
     * EC2 User Guide</i>.</p>
     */
    inline bool GetImageAllowed() const{ return m_imageAllowed; }
    inline bool ImageAllowedHasBeenSet() const { return m_imageAllowedHasBeenSet; }
    inline void SetImageAllowed(bool value) { m_imageAllowedHasBeenSet = true; m_imageAllowed = value; }
    inline Image& WithImageAllowed(bool value) { SetImageAllowed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the source AMI from which the AMI was created.</p> <p>The ID only
     * appears if the AMI was created using <a>CreateImage</a>, <a>CopyImage</a>, or
     * <a>CreateRestoreImageTask</a>. The ID does not appear if the AMI was created
     * using any other API. For some older AMIs, the ID might not be available. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/identify-source-ami-used-to-create-new-ami.html">Identify
     * the source AMI used to create a new AMI</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetSourceImageId() const{ return m_sourceImageId; }
    inline bool SourceImageIdHasBeenSet() const { return m_sourceImageIdHasBeenSet; }
    inline void SetSourceImageId(const Aws::String& value) { m_sourceImageIdHasBeenSet = true; m_sourceImageId = value; }
    inline void SetSourceImageId(Aws::String&& value) { m_sourceImageIdHasBeenSet = true; m_sourceImageId = std::move(value); }
    inline void SetSourceImageId(const char* value) { m_sourceImageIdHasBeenSet = true; m_sourceImageId.assign(value); }
    inline Image& WithSourceImageId(const Aws::String& value) { SetSourceImageId(value); return *this;}
    inline Image& WithSourceImageId(Aws::String&& value) { SetSourceImageId(std::move(value)); return *this;}
    inline Image& WithSourceImageId(const char* value) { SetSourceImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region of the source AMI. </p> <p>The Region only appears if the AMI was
     * created using <a>CreateImage</a>, <a>CopyImage</a>, or
     * <a>CreateRestoreImageTask</a>. The Region does not appear if the AMI was created
     * using any other API. For some older AMIs, the Region might not be available. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/identify-source-ami-used-to-create-new-ami.html">Identify
     * the source AMI used to create a new AMI</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetSourceImageRegion() const{ return m_sourceImageRegion; }
    inline bool SourceImageRegionHasBeenSet() const { return m_sourceImageRegionHasBeenSet; }
    inline void SetSourceImageRegion(const Aws::String& value) { m_sourceImageRegionHasBeenSet = true; m_sourceImageRegion = value; }
    inline void SetSourceImageRegion(Aws::String&& value) { m_sourceImageRegionHasBeenSet = true; m_sourceImageRegion = std::move(value); }
    inline void SetSourceImageRegion(const char* value) { m_sourceImageRegionHasBeenSet = true; m_sourceImageRegion.assign(value); }
    inline Image& WithSourceImageRegion(const Aws::String& value) { SetSourceImageRegion(value); return *this;}
    inline Image& WithSourceImageRegion(Aws::String&& value) { SetSourceImageRegion(std::move(value)); return *this;}
    inline Image& WithSourceImageRegion(const char* value) { SetSourceImageRegion(value); return *this;}
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
    inline Image& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}
    inline Image& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}
    inline Image& WithImageId(const char* value) { SetImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the AMI.</p>
     */
    inline const Aws::String& GetImageLocation() const{ return m_imageLocation; }
    inline bool ImageLocationHasBeenSet() const { return m_imageLocationHasBeenSet; }
    inline void SetImageLocation(const Aws::String& value) { m_imageLocationHasBeenSet = true; m_imageLocation = value; }
    inline void SetImageLocation(Aws::String&& value) { m_imageLocationHasBeenSet = true; m_imageLocation = std::move(value); }
    inline void SetImageLocation(const char* value) { m_imageLocationHasBeenSet = true; m_imageLocation.assign(value); }
    inline Image& WithImageLocation(const Aws::String& value) { SetImageLocation(value); return *this;}
    inline Image& WithImageLocation(Aws::String&& value) { SetImageLocation(std::move(value)); return *this;}
    inline Image& WithImageLocation(const char* value) { SetImageLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the AMI. If the state is <code>available</code>, the
     * image is successfully registered and can be used to launch an instance.</p>
     */
    inline const ImageState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ImageState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ImageState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Image& WithState(const ImageState& value) { SetState(value); return *this;}
    inline Image& WithState(ImageState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the image.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline Image& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline Image& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline Image& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the image was created.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }
    inline Image& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}
    inline Image& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}
    inline Image& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the image has public launch permissions. The value is
     * <code>true</code> if this image has public launch permissions or
     * <code>false</code> if it has only implicit and explicit launch permissions.</p>
     */
    inline bool GetPublic() const{ return m_public; }
    inline bool PublicHasBeenSet() const { return m_publicHasBeenSet; }
    inline void SetPublic(bool value) { m_publicHasBeenSet = true; m_public = value; }
    inline Image& WithPublic(bool value) { SetPublic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any product codes associated with the AMI.</p>
     */
    inline const Aws::Vector<ProductCode>& GetProductCodes() const{ return m_productCodes; }
    inline bool ProductCodesHasBeenSet() const { return m_productCodesHasBeenSet; }
    inline void SetProductCodes(const Aws::Vector<ProductCode>& value) { m_productCodesHasBeenSet = true; m_productCodes = value; }
    inline void SetProductCodes(Aws::Vector<ProductCode>&& value) { m_productCodesHasBeenSet = true; m_productCodes = std::move(value); }
    inline Image& WithProductCodes(const Aws::Vector<ProductCode>& value) { SetProductCodes(value); return *this;}
    inline Image& WithProductCodes(Aws::Vector<ProductCode>&& value) { SetProductCodes(std::move(value)); return *this;}
    inline Image& AddProductCodes(const ProductCode& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(value); return *this; }
    inline Image& AddProductCodes(ProductCode&& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The architecture of the image.</p>
     */
    inline const ArchitectureValues& GetArchitecture() const{ return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(const ArchitectureValues& value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline void SetArchitecture(ArchitectureValues&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }
    inline Image& WithArchitecture(const ArchitectureValues& value) { SetArchitecture(value); return *this;}
    inline Image& WithArchitecture(ArchitectureValues&& value) { SetArchitecture(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of image.</p>
     */
    inline const ImageTypeValues& GetImageType() const{ return m_imageType; }
    inline bool ImageTypeHasBeenSet() const { return m_imageTypeHasBeenSet; }
    inline void SetImageType(const ImageTypeValues& value) { m_imageTypeHasBeenSet = true; m_imageType = value; }
    inline void SetImageType(ImageTypeValues&& value) { m_imageTypeHasBeenSet = true; m_imageType = std::move(value); }
    inline Image& WithImageType(const ImageTypeValues& value) { SetImageType(value); return *this;}
    inline Image& WithImageType(ImageTypeValues&& value) { SetImageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The kernel associated with the image, if any. Only applicable for machine
     * images.</p>
     */
    inline const Aws::String& GetKernelId() const{ return m_kernelId; }
    inline bool KernelIdHasBeenSet() const { return m_kernelIdHasBeenSet; }
    inline void SetKernelId(const Aws::String& value) { m_kernelIdHasBeenSet = true; m_kernelId = value; }
    inline void SetKernelId(Aws::String&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::move(value); }
    inline void SetKernelId(const char* value) { m_kernelIdHasBeenSet = true; m_kernelId.assign(value); }
    inline Image& WithKernelId(const Aws::String& value) { SetKernelId(value); return *this;}
    inline Image& WithKernelId(Aws::String&& value) { SetKernelId(std::move(value)); return *this;}
    inline Image& WithKernelId(const char* value) { SetKernelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RAM disk associated with the image, if any. Only applicable for machine
     * images.</p>
     */
    inline const Aws::String& GetRamdiskId() const{ return m_ramdiskId; }
    inline bool RamdiskIdHasBeenSet() const { return m_ramdiskIdHasBeenSet; }
    inline void SetRamdiskId(const Aws::String& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = value; }
    inline void SetRamdiskId(Aws::String&& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = std::move(value); }
    inline void SetRamdiskId(const char* value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId.assign(value); }
    inline Image& WithRamdiskId(const Aws::String& value) { SetRamdiskId(value); return *this;}
    inline Image& WithRamdiskId(Aws::String&& value) { SetRamdiskId(std::move(value)); return *this;}
    inline Image& WithRamdiskId(const char* value) { SetRamdiskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value is set to <code>windows</code> for Windows AMIs; otherwise, it is
     * blank.</p>
     */
    inline const PlatformValues& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const PlatformValues& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(PlatformValues&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline Image& WithPlatform(const PlatformValues& value) { SetPlatform(value); return *this;}
    inline Image& WithPlatform(PlatformValues&& value) { SetPlatform(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_platformDetails;
    bool m_platformDetailsHasBeenSet = false;

    Aws::String m_usageOperation;
    bool m_usageOperationHasBeenSet = false;

    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_enaSupport;
    bool m_enaSupportHasBeenSet = false;

    HypervisorType m_hypervisor;
    bool m_hypervisorHasBeenSet = false;

    Aws::String m_imageOwnerAlias;
    bool m_imageOwnerAliasHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_rootDeviceName;
    bool m_rootDeviceNameHasBeenSet = false;

    DeviceType m_rootDeviceType;
    bool m_rootDeviceTypeHasBeenSet = false;

    Aws::String m_sriovNetSupport;
    bool m_sriovNetSupportHasBeenSet = false;

    StateReason m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    VirtualizationType m_virtualizationType;
    bool m_virtualizationTypeHasBeenSet = false;

    BootModeValues m_bootMode;
    bool m_bootModeHasBeenSet = false;

    TpmSupportValues m_tpmSupport;
    bool m_tpmSupportHasBeenSet = false;

    Aws::String m_deprecationTime;
    bool m_deprecationTimeHasBeenSet = false;

    ImdsSupportValues m_imdsSupport;
    bool m_imdsSupportHasBeenSet = false;

    Aws::String m_sourceInstanceId;
    bool m_sourceInstanceIdHasBeenSet = false;

    Aws::String m_deregistrationProtection;
    bool m_deregistrationProtectionHasBeenSet = false;

    Aws::String m_lastLaunchedTime;
    bool m_lastLaunchedTimeHasBeenSet = false;

    bool m_imageAllowed;
    bool m_imageAllowedHasBeenSet = false;

    Aws::String m_sourceImageId;
    bool m_sourceImageIdHasBeenSet = false;

    Aws::String m_sourceImageRegion;
    bool m_sourceImageRegionHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_imageLocation;
    bool m_imageLocationHasBeenSet = false;

    ImageState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    bool m_public;
    bool m_publicHasBeenSet = false;

    Aws::Vector<ProductCode> m_productCodes;
    bool m_productCodesHasBeenSet = false;

    ArchitectureValues m_architecture;
    bool m_architectureHasBeenSet = false;

    ImageTypeValues m_imageType;
    bool m_imageTypeHasBeenSet = false;

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet = false;

    Aws::String m_ramdiskId;
    bool m_ramdiskIdHasBeenSet = false;

    PlatformValues m_platform;
    bool m_platformHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
