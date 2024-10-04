/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/BootModeValues.h>
#include <aws/ec2/model/TpmSupportValues.h>
#include <aws/ec2/model/ImdsSupportValues.h>
#include <aws/ec2/model/ArchitectureValues.h>
#include <aws/ec2/model/TagSpecification.h>
#include <aws/ec2/model/BlockDeviceMapping.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for RegisterImage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RegisterImageRequest">AWS
   * API Reference</a></p>
   */
  class RegisterImageRequest : public EC2Request
  {
  public:
    AWS_EC2_API RegisterImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterImage"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The full path to your AMI manifest in Amazon S3 storage. The specified bucket
     * must have the <code>aws-exec-read</code> canned access control list (ACL) to
     * ensure that it can be accessed by Amazon EC2. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#canned-acl">Canned
     * ACLs</a> in the <i>Amazon S3 Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetImageLocation() const{ return m_imageLocation; }
    inline bool ImageLocationHasBeenSet() const { return m_imageLocationHasBeenSet; }
    inline void SetImageLocation(const Aws::String& value) { m_imageLocationHasBeenSet = true; m_imageLocation = value; }
    inline void SetImageLocation(Aws::String&& value) { m_imageLocationHasBeenSet = true; m_imageLocation = std::move(value); }
    inline void SetImageLocation(const char* value) { m_imageLocationHasBeenSet = true; m_imageLocation.assign(value); }
    inline RegisterImageRequest& WithImageLocation(const Aws::String& value) { SetImageLocation(value); return *this;}
    inline RegisterImageRequest& WithImageLocation(Aws::String&& value) { SetImageLocation(std::move(value)); return *this;}
    inline RegisterImageRequest& WithImageLocation(const char* value) { SetImageLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The billing product codes. Your account must be authorized to specify billing
     * product codes.</p> <p>If your account is not authorized to specify billing
     * product codes, you can publish AMIs that include billable software and list them
     * on the Amazon Web Services Marketplace. You must first register as a seller on
     * the Amazon Web Services Marketplace. For more information, see <a
     * href="https://docs.aws.amazon.com/marketplace/latest/userguide/user-guide-for-sellers.html">Getting
     * started as a seller</a> and <a
     * href="https://docs.aws.amazon.com/marketplace/latest/userguide/ami-products.html">AMI-based
     * products</a> in the <i>Amazon Web Services Marketplace Seller Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBillingProducts() const{ return m_billingProducts; }
    inline bool BillingProductsHasBeenSet() const { return m_billingProductsHasBeenSet; }
    inline void SetBillingProducts(const Aws::Vector<Aws::String>& value) { m_billingProductsHasBeenSet = true; m_billingProducts = value; }
    inline void SetBillingProducts(Aws::Vector<Aws::String>&& value) { m_billingProductsHasBeenSet = true; m_billingProducts = std::move(value); }
    inline RegisterImageRequest& WithBillingProducts(const Aws::Vector<Aws::String>& value) { SetBillingProducts(value); return *this;}
    inline RegisterImageRequest& WithBillingProducts(Aws::Vector<Aws::String>&& value) { SetBillingProducts(std::move(value)); return *this;}
    inline RegisterImageRequest& AddBillingProducts(const Aws::String& value) { m_billingProductsHasBeenSet = true; m_billingProducts.push_back(value); return *this; }
    inline RegisterImageRequest& AddBillingProducts(Aws::String&& value) { m_billingProductsHasBeenSet = true; m_billingProducts.push_back(std::move(value)); return *this; }
    inline RegisterImageRequest& AddBillingProducts(const char* value) { m_billingProductsHasBeenSet = true; m_billingProducts.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The boot mode of the AMI. A value of <code>uefi-preferred</code> indicates
     * that the AMI supports both UEFI and Legacy BIOS.</p>  <p>The operating
     * system contained in the AMI must be configured to support the specified boot
     * mode.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Boot
     * modes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const BootModeValues& GetBootMode() const{ return m_bootMode; }
    inline bool BootModeHasBeenSet() const { return m_bootModeHasBeenSet; }
    inline void SetBootMode(const BootModeValues& value) { m_bootModeHasBeenSet = true; m_bootMode = value; }
    inline void SetBootMode(BootModeValues&& value) { m_bootModeHasBeenSet = true; m_bootMode = std::move(value); }
    inline RegisterImageRequest& WithBootMode(const BootModeValues& value) { SetBootMode(value); return *this;}
    inline RegisterImageRequest& WithBootMode(BootModeValues&& value) { SetBootMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>v2.0</code> to enable Trusted Platform Module (TPM) support. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitrotpm.html">NitroTPM</a>
     * in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const TpmSupportValues& GetTpmSupport() const{ return m_tpmSupport; }
    inline bool TpmSupportHasBeenSet() const { return m_tpmSupportHasBeenSet; }
    inline void SetTpmSupport(const TpmSupportValues& value) { m_tpmSupportHasBeenSet = true; m_tpmSupport = value; }
    inline void SetTpmSupport(TpmSupportValues&& value) { m_tpmSupportHasBeenSet = true; m_tpmSupport = std::move(value); }
    inline RegisterImageRequest& WithTpmSupport(const TpmSupportValues& value) { SetTpmSupport(value); return *this;}
    inline RegisterImageRequest& WithTpmSupport(TpmSupportValues&& value) { SetTpmSupport(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Base64 representation of the non-volatile UEFI variable store. To retrieve
     * the UEFI data, use the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetInstanceUefiData">GetInstanceUefiData</a>
     * command. You can inspect and modify the UEFI data by using the <a
     * href="https://github.com/awslabs/python-uefivars">python-uefivars tool</a> on
     * GitHub. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/uefi-secure-boot.html">UEFI
     * Secure Boot</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const Aws::String& GetUefiData() const{ return m_uefiData; }
    inline bool UefiDataHasBeenSet() const { return m_uefiDataHasBeenSet; }
    inline void SetUefiData(const Aws::String& value) { m_uefiDataHasBeenSet = true; m_uefiData = value; }
    inline void SetUefiData(Aws::String&& value) { m_uefiDataHasBeenSet = true; m_uefiData = std::move(value); }
    inline void SetUefiData(const char* value) { m_uefiDataHasBeenSet = true; m_uefiData.assign(value); }
    inline RegisterImageRequest& WithUefiData(const Aws::String& value) { SetUefiData(value); return *this;}
    inline RegisterImageRequest& WithUefiData(Aws::String&& value) { SetUefiData(std::move(value)); return *this;}
    inline RegisterImageRequest& WithUefiData(const char* value) { SetUefiData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>v2.0</code> to indicate that IMDSv2 is specified in the AMI.
     * Instances launched from this AMI will have <code>HttpTokens</code> automatically
     * set to <code>required</code> so that, by default, the instance requires that
     * IMDSv2 is used when requesting instance metadata. In addition,
     * <code>HttpPutResponseHopLimit</code> is set to <code>2</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/configuring-IMDS-new-instances.html#configure-IMDS-new-instances-ami-configuration">Configure
     * the AMI</a> in the <i>Amazon EC2 User Guide</i>.</p>  <p>If you set the
     * value to <code>v2.0</code>, make sure that your AMI software can support
     * IMDSv2.</p> 
     */
    inline const ImdsSupportValues& GetImdsSupport() const{ return m_imdsSupport; }
    inline bool ImdsSupportHasBeenSet() const { return m_imdsSupportHasBeenSet; }
    inline void SetImdsSupport(const ImdsSupportValues& value) { m_imdsSupportHasBeenSet = true; m_imdsSupport = value; }
    inline void SetImdsSupport(ImdsSupportValues&& value) { m_imdsSupportHasBeenSet = true; m_imdsSupport = std::move(value); }
    inline RegisterImageRequest& WithImdsSupport(const ImdsSupportValues& value) { SetImdsSupport(value); return *this;}
    inline RegisterImageRequest& WithImdsSupport(ImdsSupportValues&& value) { SetImdsSupport(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the AMI.</p> <p>To tag the AMI, the value for
     * <code>ResourceType</code> must be <code>image</code>. If you specify another
     * value for <code>ResourceType</code>, the request fails.</p> <p>To tag an AMI
     * after it has been registered, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline RegisterImageRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline RegisterImageRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline RegisterImageRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline RegisterImageRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline RegisterImageRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for your AMI.</p> <p>Constraints: 3-128 alphanumeric characters,
     * parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/),
     * dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RegisterImageRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RegisterImageRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RegisterImageRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for your AMI.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline RegisterImageRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline RegisterImageRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline RegisterImageRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The architecture of the AMI.</p> <p>Default: For Amazon EBS-backed AMIs,
     * <code>i386</code>. For instance store-backed AMIs, the architecture specified in
     * the manifest file.</p>
     */
    inline const ArchitectureValues& GetArchitecture() const{ return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(const ArchitectureValues& value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline void SetArchitecture(ArchitectureValues&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }
    inline RegisterImageRequest& WithArchitecture(const ArchitectureValues& value) { SetArchitecture(value); return *this;}
    inline RegisterImageRequest& WithArchitecture(ArchitectureValues&& value) { SetArchitecture(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the kernel.</p>
     */
    inline const Aws::String& GetKernelId() const{ return m_kernelId; }
    inline bool KernelIdHasBeenSet() const { return m_kernelIdHasBeenSet; }
    inline void SetKernelId(const Aws::String& value) { m_kernelIdHasBeenSet = true; m_kernelId = value; }
    inline void SetKernelId(Aws::String&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::move(value); }
    inline void SetKernelId(const char* value) { m_kernelIdHasBeenSet = true; m_kernelId.assign(value); }
    inline RegisterImageRequest& WithKernelId(const Aws::String& value) { SetKernelId(value); return *this;}
    inline RegisterImageRequest& WithKernelId(Aws::String&& value) { SetKernelId(std::move(value)); return *this;}
    inline RegisterImageRequest& WithKernelId(const char* value) { SetKernelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline const Aws::String& GetRamdiskId() const{ return m_ramdiskId; }
    inline bool RamdiskIdHasBeenSet() const { return m_ramdiskIdHasBeenSet; }
    inline void SetRamdiskId(const Aws::String& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = value; }
    inline void SetRamdiskId(Aws::String&& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = std::move(value); }
    inline void SetRamdiskId(const char* value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId.assign(value); }
    inline RegisterImageRequest& WithRamdiskId(const Aws::String& value) { SetRamdiskId(value); return *this;}
    inline RegisterImageRequest& WithRamdiskId(Aws::String&& value) { SetRamdiskId(std::move(value)); return *this;}
    inline RegisterImageRequest& WithRamdiskId(const char* value) { SetRamdiskId(value); return *this;}
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
    inline RegisterImageRequest& WithRootDeviceName(const Aws::String& value) { SetRootDeviceName(value); return *this;}
    inline RegisterImageRequest& WithRootDeviceName(Aws::String&& value) { SetRootDeviceName(std::move(value)); return *this;}
    inline RegisterImageRequest& WithRootDeviceName(const char* value) { SetRootDeviceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block device mapping entries.</p> <p>If you specify an Amazon EBS volume
     * using the ID of an Amazon EBS snapshot, you can't specify the encryption state
     * of the volume.</p> <p>If you create an AMI on an Outpost, then all backing
     * snapshots must be on the same Outpost or in the Region of that Outpost. AMIs on
     * an Outpost that include local snapshots can be used to launch instances on the
     * same Outpost only. For more information, <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/snapshots-outposts.html#ami">Amazon
     * EBS local snapshots on Outposts</a> in the <i>Amazon EBS User Guide</i>.</p>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }
    inline void SetBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }
    inline void SetBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }
    inline RegisterImageRequest& WithBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}
    inline RegisterImageRequest& WithBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}
    inline RegisterImageRequest& AddBlockDeviceMappings(const BlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }
    inline RegisterImageRequest& AddBlockDeviceMappings(BlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of virtualization (<code>hvm</code> | <code>paravirtual</code>).</p>
     * <p>Default: <code>paravirtual</code> </p>
     */
    inline const Aws::String& GetVirtualizationType() const{ return m_virtualizationType; }
    inline bool VirtualizationTypeHasBeenSet() const { return m_virtualizationTypeHasBeenSet; }
    inline void SetVirtualizationType(const Aws::String& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = value; }
    inline void SetVirtualizationType(Aws::String&& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = std::move(value); }
    inline void SetVirtualizationType(const char* value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType.assign(value); }
    inline RegisterImageRequest& WithVirtualizationType(const Aws::String& value) { SetVirtualizationType(value); return *this;}
    inline RegisterImageRequest& WithVirtualizationType(Aws::String&& value) { SetVirtualizationType(std::move(value)); return *this;}
    inline RegisterImageRequest& WithVirtualizationType(const char* value) { SetVirtualizationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>simple</code> to enable enhanced networking with the Intel 82599
     * Virtual Function interface for the AMI and any instances that you launch from
     * the AMI.</p> <p>There is no way to disable <code>sriovNetSupport</code> at this
     * time.</p> <p>This option is supported only for HVM AMIs. Specifying this option
     * with a PV AMI can make instances launched from the AMI unreachable.</p>
     */
    inline const Aws::String& GetSriovNetSupport() const{ return m_sriovNetSupport; }
    inline bool SriovNetSupportHasBeenSet() const { return m_sriovNetSupportHasBeenSet; }
    inline void SetSriovNetSupport(const Aws::String& value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport = value; }
    inline void SetSriovNetSupport(Aws::String&& value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport = std::move(value); }
    inline void SetSriovNetSupport(const char* value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport.assign(value); }
    inline RegisterImageRequest& WithSriovNetSupport(const Aws::String& value) { SetSriovNetSupport(value); return *this;}
    inline RegisterImageRequest& WithSriovNetSupport(Aws::String&& value) { SetSriovNetSupport(std::move(value)); return *this;}
    inline RegisterImageRequest& WithSriovNetSupport(const char* value) { SetSriovNetSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> to enable enhanced networking with ENA for the AMI
     * and any instances that you launch from the AMI.</p> <p>This option is supported
     * only for HVM AMIs. Specifying this option with a PV AMI can make instances
     * launched from the AMI unreachable.</p>
     */
    inline bool GetEnaSupport() const{ return m_enaSupport; }
    inline bool EnaSupportHasBeenSet() const { return m_enaSupportHasBeenSet; }
    inline void SetEnaSupport(bool value) { m_enaSupportHasBeenSet = true; m_enaSupport = value; }
    inline RegisterImageRequest& WithEnaSupport(bool value) { SetEnaSupport(value); return *this;}
    ///@}
  private:

    Aws::String m_imageLocation;
    bool m_imageLocationHasBeenSet = false;

    Aws::Vector<Aws::String> m_billingProducts;
    bool m_billingProductsHasBeenSet = false;

    BootModeValues m_bootMode;
    bool m_bootModeHasBeenSet = false;

    TpmSupportValues m_tpmSupport;
    bool m_tpmSupportHasBeenSet = false;

    Aws::String m_uefiData;
    bool m_uefiDataHasBeenSet = false;

    ImdsSupportValues m_imdsSupport;
    bool m_imdsSupportHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ArchitectureValues m_architecture;
    bool m_architectureHasBeenSet = false;

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet = false;

    Aws::String m_ramdiskId;
    bool m_ramdiskIdHasBeenSet = false;

    Aws::String m_rootDeviceName;
    bool m_rootDeviceNameHasBeenSet = false;

    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    Aws::String m_virtualizationType;
    bool m_virtualizationTypeHasBeenSet = false;

    Aws::String m_sriovNetSupport;
    bool m_sriovNetSupportHasBeenSet = false;

    bool m_enaSupport;
    bool m_enaSupportHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
