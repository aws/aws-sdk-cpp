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
    AWS_EC2_API Image() = default;
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
    inline const Aws::String& GetPlatformDetails() const { return m_platformDetails; }
    inline bool PlatformDetailsHasBeenSet() const { return m_platformDetailsHasBeenSet; }
    template<typename PlatformDetailsT = Aws::String>
    void SetPlatformDetails(PlatformDetailsT&& value) { m_platformDetailsHasBeenSet = true; m_platformDetails = std::forward<PlatformDetailsT>(value); }
    template<typename PlatformDetailsT = Aws::String>
    Image& WithPlatformDetails(PlatformDetailsT&& value) { SetPlatformDetails(std::forward<PlatformDetailsT>(value)); return *this;}
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
    inline const Aws::String& GetUsageOperation() const { return m_usageOperation; }
    inline bool UsageOperationHasBeenSet() const { return m_usageOperationHasBeenSet; }
    template<typename UsageOperationT = Aws::String>
    void SetUsageOperation(UsageOperationT&& value) { m_usageOperationHasBeenSet = true; m_usageOperation = std::forward<UsageOperationT>(value); }
    template<typename UsageOperationT = Aws::String>
    Image& WithUsageOperation(UsageOperationT&& value) { SetUsageOperation(std::forward<UsageOperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any block device mapping entries.</p>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const { return m_blockDeviceMappings; }
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }
    template<typename BlockDeviceMappingsT = Aws::Vector<BlockDeviceMapping>>
    void SetBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::forward<BlockDeviceMappingsT>(value); }
    template<typename BlockDeviceMappingsT = Aws::Vector<BlockDeviceMapping>>
    Image& WithBlockDeviceMappings(BlockDeviceMappingsT&& value) { SetBlockDeviceMappings(std::forward<BlockDeviceMappingsT>(value)); return *this;}
    template<typename BlockDeviceMappingsT = BlockDeviceMapping>
    Image& AddBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.emplace_back(std::forward<BlockDeviceMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description of the AMI that was provided during image creation.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Image& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether enhanced networking with ENA is enabled.</p>
     */
    inline bool GetEnaSupport() const { return m_enaSupport; }
    inline bool EnaSupportHasBeenSet() const { return m_enaSupportHasBeenSet; }
    inline void SetEnaSupport(bool value) { m_enaSupportHasBeenSet = true; m_enaSupport = value; }
    inline Image& WithEnaSupport(bool value) { SetEnaSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hypervisor type of the image. Only <code>xen</code> is supported.
     * <code>ovm</code> is not supported.</p>
     */
    inline HypervisorType GetHypervisor() const { return m_hypervisor; }
    inline bool HypervisorHasBeenSet() const { return m_hypervisorHasBeenSet; }
    inline void SetHypervisor(HypervisorType value) { m_hypervisorHasBeenSet = true; m_hypervisor = value; }
    inline Image& WithHypervisor(HypervisorType value) { SetHypervisor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner alias (<code>amazon</code> | <code>aws-backup-vault</code> |
     * <code>aws-marketplace</code>).</p>
     */
    inline const Aws::String& GetImageOwnerAlias() const { return m_imageOwnerAlias; }
    inline bool ImageOwnerAliasHasBeenSet() const { return m_imageOwnerAliasHasBeenSet; }
    template<typename ImageOwnerAliasT = Aws::String>
    void SetImageOwnerAlias(ImageOwnerAliasT&& value) { m_imageOwnerAliasHasBeenSet = true; m_imageOwnerAlias = std::forward<ImageOwnerAliasT>(value); }
    template<typename ImageOwnerAliasT = Aws::String>
    Image& WithImageOwnerAlias(ImageOwnerAliasT&& value) { SetImageOwnerAlias(std::forward<ImageOwnerAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AMI that was provided during image creation.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Image& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline const Aws::String& GetRootDeviceName() const { return m_rootDeviceName; }
    inline bool RootDeviceNameHasBeenSet() const { return m_rootDeviceNameHasBeenSet; }
    template<typename RootDeviceNameT = Aws::String>
    void SetRootDeviceName(RootDeviceNameT&& value) { m_rootDeviceNameHasBeenSet = true; m_rootDeviceName = std::forward<RootDeviceNameT>(value); }
    template<typename RootDeviceNameT = Aws::String>
    Image& WithRootDeviceName(RootDeviceNameT&& value) { SetRootDeviceName(std::forward<RootDeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of root device used by the AMI. The AMI can use an Amazon EBS volume
     * or an instance store volume.</p>
     */
    inline DeviceType GetRootDeviceType() const { return m_rootDeviceType; }
    inline bool RootDeviceTypeHasBeenSet() const { return m_rootDeviceTypeHasBeenSet; }
    inline void SetRootDeviceType(DeviceType value) { m_rootDeviceTypeHasBeenSet = true; m_rootDeviceType = value; }
    inline Image& WithRootDeviceType(DeviceType value) { SetRootDeviceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline const Aws::String& GetSriovNetSupport() const { return m_sriovNetSupport; }
    inline bool SriovNetSupportHasBeenSet() const { return m_sriovNetSupportHasBeenSet; }
    template<typename SriovNetSupportT = Aws::String>
    void SetSriovNetSupport(SriovNetSupportT&& value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport = std::forward<SriovNetSupportT>(value); }
    template<typename SriovNetSupportT = Aws::String>
    Image& WithSriovNetSupport(SriovNetSupportT&& value) { SetSriovNetSupport(std::forward<SriovNetSupportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the state change.</p>
     */
    inline const StateReason& GetStateReason() const { return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    template<typename StateReasonT = StateReason>
    void SetStateReason(StateReasonT&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::forward<StateReasonT>(value); }
    template<typename StateReasonT = StateReason>
    Image& WithStateReason(StateReasonT&& value) { SetStateReason(std::forward<StateReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the image.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Image& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Image& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of virtualization of the AMI.</p>
     */
    inline VirtualizationType GetVirtualizationType() const { return m_virtualizationType; }
    inline bool VirtualizationTypeHasBeenSet() const { return m_virtualizationTypeHasBeenSet; }
    inline void SetVirtualizationType(VirtualizationType value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = value; }
    inline Image& WithVirtualizationType(VirtualizationType value) { SetVirtualizationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The boot mode of the image. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Instance
     * launch behavior with Amazon EC2 boot modes</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline BootModeValues GetBootMode() const { return m_bootMode; }
    inline bool BootModeHasBeenSet() const { return m_bootModeHasBeenSet; }
    inline void SetBootMode(BootModeValues value) { m_bootModeHasBeenSet = true; m_bootMode = value; }
    inline Image& WithBootMode(BootModeValues value) { SetBootMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the image is configured for NitroTPM support, the value is
     * <code>v2.0</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitrotpm.html">NitroTPM</a>
     * in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline TpmSupportValues GetTpmSupport() const { return m_tpmSupport; }
    inline bool TpmSupportHasBeenSet() const { return m_tpmSupportHasBeenSet; }
    inline void SetTpmSupport(TpmSupportValues value) { m_tpmSupportHasBeenSet = true; m_tpmSupport = value; }
    inline Image& WithTpmSupport(TpmSupportValues value) { SetTpmSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time to deprecate the AMI, in UTC, in the following format:
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z. If you specified
     * a value for seconds, Amazon EC2 rounds the seconds to the nearest minute.</p>
     */
    inline const Aws::String& GetDeprecationTime() const { return m_deprecationTime; }
    inline bool DeprecationTimeHasBeenSet() const { return m_deprecationTimeHasBeenSet; }
    template<typename DeprecationTimeT = Aws::String>
    void SetDeprecationTime(DeprecationTimeT&& value) { m_deprecationTimeHasBeenSet = true; m_deprecationTime = std::forward<DeprecationTimeT>(value); }
    template<typename DeprecationTimeT = Aws::String>
    Image& WithDeprecationTime(DeprecationTimeT&& value) { SetDeprecationTime(std::forward<DeprecationTimeT>(value)); return *this;}
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
    inline ImdsSupportValues GetImdsSupport() const { return m_imdsSupport; }
    inline bool ImdsSupportHasBeenSet() const { return m_imdsSupportHasBeenSet; }
    inline void SetImdsSupport(ImdsSupportValues value) { m_imdsSupportHasBeenSet = true; m_imdsSupport = value; }
    inline Image& WithImdsSupport(ImdsSupportValues value) { SetImdsSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance that the AMI was created from if the AMI was created
     * using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateImage.html">CreateImage</a>.
     * This field only appears if the AMI was created using CreateImage.</p>
     */
    inline const Aws::String& GetSourceInstanceId() const { return m_sourceInstanceId; }
    inline bool SourceInstanceIdHasBeenSet() const { return m_sourceInstanceIdHasBeenSet; }
    template<typename SourceInstanceIdT = Aws::String>
    void SetSourceInstanceId(SourceInstanceIdT&& value) { m_sourceInstanceIdHasBeenSet = true; m_sourceInstanceId = std::forward<SourceInstanceIdT>(value); }
    template<typename SourceInstanceIdT = Aws::String>
    Image& WithSourceInstanceId(SourceInstanceIdT&& value) { SetSourceInstanceId(std::forward<SourceInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether deregistration protection is enabled for the AMI.</p>
     */
    inline const Aws::String& GetDeregistrationProtection() const { return m_deregistrationProtection; }
    inline bool DeregistrationProtectionHasBeenSet() const { return m_deregistrationProtectionHasBeenSet; }
    template<typename DeregistrationProtectionT = Aws::String>
    void SetDeregistrationProtection(DeregistrationProtectionT&& value) { m_deregistrationProtectionHasBeenSet = true; m_deregistrationProtection = std::forward<DeregistrationProtectionT>(value); }
    template<typename DeregistrationProtectionT = Aws::String>
    Image& WithDeregistrationProtection(DeregistrationProtectionT&& value) { SetDeregistrationProtection(std::forward<DeregistrationProtectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the AMI was last used to launch an EC2 instance. When
     * the AMI is used to launch an instance, there is a 24-hour delay before that
     * usage is reported.</p>  <p> <code>lastLaunchedTime</code> data is
     * available starting April 2017.</p> 
     */
    inline const Aws::String& GetLastLaunchedTime() const { return m_lastLaunchedTime; }
    inline bool LastLaunchedTimeHasBeenSet() const { return m_lastLaunchedTimeHasBeenSet; }
    template<typename LastLaunchedTimeT = Aws::String>
    void SetLastLaunchedTime(LastLaunchedTimeT&& value) { m_lastLaunchedTimeHasBeenSet = true; m_lastLaunchedTime = std::forward<LastLaunchedTimeT>(value); }
    template<typename LastLaunchedTimeT = Aws::String>
    Image& WithLastLaunchedTime(LastLaunchedTimeT&& value) { SetLastLaunchedTime(std::forward<LastLaunchedTimeT>(value)); return *this;}
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
    inline bool GetImageAllowed() const { return m_imageAllowed; }
    inline bool ImageAllowedHasBeenSet() const { return m_imageAllowedHasBeenSet; }
    inline void SetImageAllowed(bool value) { m_imageAllowedHasBeenSet = true; m_imageAllowed = value; }
    inline Image& WithImageAllowed(bool value) { SetImageAllowed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the source AMI from which the AMI was created.</p>
     */
    inline const Aws::String& GetSourceImageId() const { return m_sourceImageId; }
    inline bool SourceImageIdHasBeenSet() const { return m_sourceImageIdHasBeenSet; }
    template<typename SourceImageIdT = Aws::String>
    void SetSourceImageId(SourceImageIdT&& value) { m_sourceImageIdHasBeenSet = true; m_sourceImageId = std::forward<SourceImageIdT>(value); }
    template<typename SourceImageIdT = Aws::String>
    Image& WithSourceImageId(SourceImageIdT&& value) { SetSourceImageId(std::forward<SourceImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region of the source AMI.</p>
     */
    inline const Aws::String& GetSourceImageRegion() const { return m_sourceImageRegion; }
    inline bool SourceImageRegionHasBeenSet() const { return m_sourceImageRegionHasBeenSet; }
    template<typename SourceImageRegionT = Aws::String>
    void SetSourceImageRegion(SourceImageRegionT&& value) { m_sourceImageRegionHasBeenSet = true; m_sourceImageRegion = std::forward<SourceImageRegionT>(value); }
    template<typename SourceImageRegionT = Aws::String>
    Image& WithSourceImageRegion(SourceImageRegionT&& value) { SetSourceImageRegion(std::forward<SourceImageRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the image is eligible for Amazon Web Services Free
     * Tier.</p> <ul> <li> <p>If <code>true</code>, the AMI is eligible for Free Tier
     * and can be used to launch instances under the Free Tier limits.</p> </li> <li>
     * <p>If <code>false</code>, the AMI is not eligible for Free Tier.</p> </li> </ul>
     */
    inline bool GetFreeTierEligible() const { return m_freeTierEligible; }
    inline bool FreeTierEligibleHasBeenSet() const { return m_freeTierEligibleHasBeenSet; }
    inline void SetFreeTierEligible(bool value) { m_freeTierEligibleHasBeenSet = true; m_freeTierEligible = value; }
    inline Image& WithFreeTierEligible(bool value) { SetFreeTierEligible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the AMI.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    Image& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the AMI.</p>
     */
    inline const Aws::String& GetImageLocation() const { return m_imageLocation; }
    inline bool ImageLocationHasBeenSet() const { return m_imageLocationHasBeenSet; }
    template<typename ImageLocationT = Aws::String>
    void SetImageLocation(ImageLocationT&& value) { m_imageLocationHasBeenSet = true; m_imageLocation = std::forward<ImageLocationT>(value); }
    template<typename ImageLocationT = Aws::String>
    Image& WithImageLocation(ImageLocationT&& value) { SetImageLocation(std::forward<ImageLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the AMI. If the state is <code>available</code>, the
     * image is successfully registered and can be used to launch an instance.</p>
     */
    inline ImageState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ImageState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Image& WithState(ImageState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the image.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    Image& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the image was created.</p>
     */
    inline const Aws::String& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::String>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::String>
    Image& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the image has public launch permissions. The value is
     * <code>true</code> if this image has public launch permissions or
     * <code>false</code> if it has only implicit and explicit launch permissions.</p>
     */
    inline bool GetPublic() const { return m_public; }
    inline bool PublicHasBeenSet() const { return m_publicHasBeenSet; }
    inline void SetPublic(bool value) { m_publicHasBeenSet = true; m_public = value; }
    inline Image& WithPublic(bool value) { SetPublic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any product codes associated with the AMI.</p>
     */
    inline const Aws::Vector<ProductCode>& GetProductCodes() const { return m_productCodes; }
    inline bool ProductCodesHasBeenSet() const { return m_productCodesHasBeenSet; }
    template<typename ProductCodesT = Aws::Vector<ProductCode>>
    void SetProductCodes(ProductCodesT&& value) { m_productCodesHasBeenSet = true; m_productCodes = std::forward<ProductCodesT>(value); }
    template<typename ProductCodesT = Aws::Vector<ProductCode>>
    Image& WithProductCodes(ProductCodesT&& value) { SetProductCodes(std::forward<ProductCodesT>(value)); return *this;}
    template<typename ProductCodesT = ProductCode>
    Image& AddProductCodes(ProductCodesT&& value) { m_productCodesHasBeenSet = true; m_productCodes.emplace_back(std::forward<ProductCodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The architecture of the image.</p>
     */
    inline ArchitectureValues GetArchitecture() const { return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(ArchitectureValues value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline Image& WithArchitecture(ArchitectureValues value) { SetArchitecture(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of image.</p>
     */
    inline ImageTypeValues GetImageType() const { return m_imageType; }
    inline bool ImageTypeHasBeenSet() const { return m_imageTypeHasBeenSet; }
    inline void SetImageType(ImageTypeValues value) { m_imageTypeHasBeenSet = true; m_imageType = value; }
    inline Image& WithImageType(ImageTypeValues value) { SetImageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The kernel associated with the image, if any. Only applicable for machine
     * images.</p>
     */
    inline const Aws::String& GetKernelId() const { return m_kernelId; }
    inline bool KernelIdHasBeenSet() const { return m_kernelIdHasBeenSet; }
    template<typename KernelIdT = Aws::String>
    void SetKernelId(KernelIdT&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::forward<KernelIdT>(value); }
    template<typename KernelIdT = Aws::String>
    Image& WithKernelId(KernelIdT&& value) { SetKernelId(std::forward<KernelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RAM disk associated with the image, if any. Only applicable for machine
     * images.</p>
     */
    inline const Aws::String& GetRamdiskId() const { return m_ramdiskId; }
    inline bool RamdiskIdHasBeenSet() const { return m_ramdiskIdHasBeenSet; }
    template<typename RamdiskIdT = Aws::String>
    void SetRamdiskId(RamdiskIdT&& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = std::forward<RamdiskIdT>(value); }
    template<typename RamdiskIdT = Aws::String>
    Image& WithRamdiskId(RamdiskIdT&& value) { SetRamdiskId(std::forward<RamdiskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value is set to <code>windows</code> for Windows AMIs; otherwise, it is
     * blank.</p>
     */
    inline PlatformValues GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(PlatformValues value) { m_platformHasBeenSet = true; m_platform = value; }
    inline Image& WithPlatform(PlatformValues value) { SetPlatform(value); return *this;}
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

    bool m_enaSupport{false};
    bool m_enaSupportHasBeenSet = false;

    HypervisorType m_hypervisor{HypervisorType::NOT_SET};
    bool m_hypervisorHasBeenSet = false;

    Aws::String m_imageOwnerAlias;
    bool m_imageOwnerAliasHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_rootDeviceName;
    bool m_rootDeviceNameHasBeenSet = false;

    DeviceType m_rootDeviceType{DeviceType::NOT_SET};
    bool m_rootDeviceTypeHasBeenSet = false;

    Aws::String m_sriovNetSupport;
    bool m_sriovNetSupportHasBeenSet = false;

    StateReason m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    VirtualizationType m_virtualizationType{VirtualizationType::NOT_SET};
    bool m_virtualizationTypeHasBeenSet = false;

    BootModeValues m_bootMode{BootModeValues::NOT_SET};
    bool m_bootModeHasBeenSet = false;

    TpmSupportValues m_tpmSupport{TpmSupportValues::NOT_SET};
    bool m_tpmSupportHasBeenSet = false;

    Aws::String m_deprecationTime;
    bool m_deprecationTimeHasBeenSet = false;

    ImdsSupportValues m_imdsSupport{ImdsSupportValues::NOT_SET};
    bool m_imdsSupportHasBeenSet = false;

    Aws::String m_sourceInstanceId;
    bool m_sourceInstanceIdHasBeenSet = false;

    Aws::String m_deregistrationProtection;
    bool m_deregistrationProtectionHasBeenSet = false;

    Aws::String m_lastLaunchedTime;
    bool m_lastLaunchedTimeHasBeenSet = false;

    bool m_imageAllowed{false};
    bool m_imageAllowedHasBeenSet = false;

    Aws::String m_sourceImageId;
    bool m_sourceImageIdHasBeenSet = false;

    Aws::String m_sourceImageRegion;
    bool m_sourceImageRegionHasBeenSet = false;

    bool m_freeTierEligible{false};
    bool m_freeTierEligibleHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_imageLocation;
    bool m_imageLocationHasBeenSet = false;

    ImageState m_state{ImageState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    bool m_public{false};
    bool m_publicHasBeenSet = false;

    Aws::Vector<ProductCode> m_productCodes;
    bool m_productCodesHasBeenSet = false;

    ArchitectureValues m_architecture{ArchitectureValues::NOT_SET};
    bool m_architectureHasBeenSet = false;

    ImageTypeValues m_imageType{ImageTypeValues::NOT_SET};
    bool m_imageTypeHasBeenSet = false;

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet = false;

    Aws::String m_ramdiskId;
    bool m_ramdiskIdHasBeenSet = false;

    PlatformValues m_platform{PlatformValues::NOT_SET};
    bool m_platformHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
