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
    AWS_EC2_API RegisterImageRequest() = default;

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
     * ACL</a> in the <i>Amazon S3 Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetImageLocation() const { return m_imageLocation; }
    inline bool ImageLocationHasBeenSet() const { return m_imageLocationHasBeenSet; }
    template<typename ImageLocationT = Aws::String>
    void SetImageLocation(ImageLocationT&& value) { m_imageLocationHasBeenSet = true; m_imageLocation = std::forward<ImageLocationT>(value); }
    template<typename ImageLocationT = Aws::String>
    RegisterImageRequest& WithImageLocation(ImageLocationT&& value) { SetImageLocation(std::forward<ImageLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The billing product codes. Your account must be authorized to specify billing
     * product codes.</p> <p>If your account is not authorized to specify billing
     * product codes, you can publish AMIs that include billable software and list them
     * on the Amazon Web Services Marketplace. You must first register as a seller on
     * the Amazon Web Services Marketplace. For more information, see <a
     * href="https://docs.aws.amazon.com/marketplace/latest/userguide/user-guide-for-sellers.html">Getting
     * started as an Amazon Web Services Marketplace seller</a> and <a
     * href="https://docs.aws.amazon.com/marketplace/latest/userguide/ami-products.html">AMI-based
     * products in Amazon Web Services Marketplace</a> in the <i>Amazon Web Services
     * Marketplace Seller Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBillingProducts() const { return m_billingProducts; }
    inline bool BillingProductsHasBeenSet() const { return m_billingProductsHasBeenSet; }
    template<typename BillingProductsT = Aws::Vector<Aws::String>>
    void SetBillingProducts(BillingProductsT&& value) { m_billingProductsHasBeenSet = true; m_billingProducts = std::forward<BillingProductsT>(value); }
    template<typename BillingProductsT = Aws::Vector<Aws::String>>
    RegisterImageRequest& WithBillingProducts(BillingProductsT&& value) { SetBillingProducts(std::forward<BillingProductsT>(value)); return *this;}
    template<typename BillingProductsT = Aws::String>
    RegisterImageRequest& AddBillingProducts(BillingProductsT&& value) { m_billingProductsHasBeenSet = true; m_billingProducts.emplace_back(std::forward<BillingProductsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The boot mode of the AMI. A value of <code>uefi-preferred</code> indicates
     * that the AMI supports both UEFI and Legacy BIOS.</p>  <p>The operating
     * system contained in the AMI must be configured to support the specified boot
     * mode.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Instance
     * launch behavior with Amazon EC2 boot modes</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline BootModeValues GetBootMode() const { return m_bootMode; }
    inline bool BootModeHasBeenSet() const { return m_bootModeHasBeenSet; }
    inline void SetBootMode(BootModeValues value) { m_bootModeHasBeenSet = true; m_bootMode = value; }
    inline RegisterImageRequest& WithBootMode(BootModeValues value) { SetBootMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>v2.0</code> to enable Trusted Platform Module (TPM) support. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitrotpm.html">NitroTPM</a>
     * in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline TpmSupportValues GetTpmSupport() const { return m_tpmSupport; }
    inline bool TpmSupportHasBeenSet() const { return m_tpmSupportHasBeenSet; }
    inline void SetTpmSupport(TpmSupportValues value) { m_tpmSupportHasBeenSet = true; m_tpmSupport = value; }
    inline RegisterImageRequest& WithTpmSupport(TpmSupportValues value) { SetTpmSupport(value); return *this;}
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
     * Secure Boot for Amazon EC2 instances</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetUefiData() const { return m_uefiData; }
    inline bool UefiDataHasBeenSet() const { return m_uefiDataHasBeenSet; }
    template<typename UefiDataT = Aws::String>
    void SetUefiData(UefiDataT&& value) { m_uefiDataHasBeenSet = true; m_uefiData = std::forward<UefiDataT>(value); }
    template<typename UefiDataT = Aws::String>
    RegisterImageRequest& WithUefiData(UefiDataT&& value) { SetUefiData(std::forward<UefiDataT>(value)); return *this;}
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
    inline ImdsSupportValues GetImdsSupport() const { return m_imdsSupport; }
    inline bool ImdsSupportHasBeenSet() const { return m_imdsSupportHasBeenSet; }
    inline void SetImdsSupport(ImdsSupportValues value) { m_imdsSupportHasBeenSet = true; m_imdsSupport = value; }
    inline RegisterImageRequest& WithImdsSupport(ImdsSupportValues value) { SetImdsSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the AMI.</p> <p>To tag the AMI, the value for
     * <code>ResourceType</code> must be <code>image</code>. If you specify another
     * value for <code>ResourceType</code>, the request fails.</p> <p>To tag an AMI
     * after it has been registered, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    RegisterImageRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    RegisterImageRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
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
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RegisterImageRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for your AMI.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    RegisterImageRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The architecture of the AMI.</p> <p>Default: For Amazon EBS-backed AMIs,
     * <code>i386</code>. For instance store-backed AMIs, the architecture specified in
     * the manifest file.</p>
     */
    inline ArchitectureValues GetArchitecture() const { return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(ArchitectureValues value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline RegisterImageRequest& WithArchitecture(ArchitectureValues value) { SetArchitecture(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the kernel.</p>
     */
    inline const Aws::String& GetKernelId() const { return m_kernelId; }
    inline bool KernelIdHasBeenSet() const { return m_kernelIdHasBeenSet; }
    template<typename KernelIdT = Aws::String>
    void SetKernelId(KernelIdT&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::forward<KernelIdT>(value); }
    template<typename KernelIdT = Aws::String>
    RegisterImageRequest& WithKernelId(KernelIdT&& value) { SetKernelId(std::forward<KernelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the RAM disk.</p>
     */
    inline const Aws::String& GetRamdiskId() const { return m_ramdiskId; }
    inline bool RamdiskIdHasBeenSet() const { return m_ramdiskIdHasBeenSet; }
    template<typename RamdiskIdT = Aws::String>
    void SetRamdiskId(RamdiskIdT&& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = std::forward<RamdiskIdT>(value); }
    template<typename RamdiskIdT = Aws::String>
    RegisterImageRequest& WithRamdiskId(RamdiskIdT&& value) { SetRamdiskId(std::forward<RamdiskIdT>(value)); return *this;}
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
    RegisterImageRequest& WithRootDeviceName(RootDeviceNameT&& value) { SetRootDeviceName(std::forward<RootDeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block device mapping entries.</p> <p>If you specify an Amazon EBS volume
     * using the ID of an Amazon EBS snapshot, you can't specify the encryption state
     * of the volume.</p> <p>If you create an AMI on an Outpost, then all backing
     * snapshots must be on the same Outpost or in the Region of that Outpost. AMIs on
     * an Outpost that include local snapshots can be used to launch instances on the
     * same Outpost only. For more information, <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/snapshots-outposts.html#ami">Create
     * AMIs from local snapshots</a> in the <i>Amazon EBS User Guide</i>.</p>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const { return m_blockDeviceMappings; }
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }
    template<typename BlockDeviceMappingsT = Aws::Vector<BlockDeviceMapping>>
    void SetBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::forward<BlockDeviceMappingsT>(value); }
    template<typename BlockDeviceMappingsT = Aws::Vector<BlockDeviceMapping>>
    RegisterImageRequest& WithBlockDeviceMappings(BlockDeviceMappingsT&& value) { SetBlockDeviceMappings(std::forward<BlockDeviceMappingsT>(value)); return *this;}
    template<typename BlockDeviceMappingsT = BlockDeviceMapping>
    RegisterImageRequest& AddBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.emplace_back(std::forward<BlockDeviceMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of virtualization (<code>hvm</code> | <code>paravirtual</code>).</p>
     * <p>Default: <code>paravirtual</code> </p>
     */
    inline const Aws::String& GetVirtualizationType() const { return m_virtualizationType; }
    inline bool VirtualizationTypeHasBeenSet() const { return m_virtualizationTypeHasBeenSet; }
    template<typename VirtualizationTypeT = Aws::String>
    void SetVirtualizationType(VirtualizationTypeT&& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = std::forward<VirtualizationTypeT>(value); }
    template<typename VirtualizationTypeT = Aws::String>
    RegisterImageRequest& WithVirtualizationType(VirtualizationTypeT&& value) { SetVirtualizationType(std::forward<VirtualizationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>simple</code> to enable enhanced networking with the Intel 82599
     * Virtual Function interface for the AMI and any instances that you launch from
     * the AMI.</p> <p>There is no way to disable <code>sriovNetSupport</code> at this
     * time.</p> <p>This option is supported only for HVM AMIs. Specifying this option
     * with a PV AMI can make instances launched from the AMI unreachable.</p>
     */
    inline const Aws::String& GetSriovNetSupport() const { return m_sriovNetSupport; }
    inline bool SriovNetSupportHasBeenSet() const { return m_sriovNetSupportHasBeenSet; }
    template<typename SriovNetSupportT = Aws::String>
    void SetSriovNetSupport(SriovNetSupportT&& value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport = std::forward<SriovNetSupportT>(value); }
    template<typename SriovNetSupportT = Aws::String>
    RegisterImageRequest& WithSriovNetSupport(SriovNetSupportT&& value) { SetSriovNetSupport(std::forward<SriovNetSupportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> to enable enhanced networking with ENA for the AMI
     * and any instances that you launch from the AMI.</p> <p>This option is supported
     * only for HVM AMIs. Specifying this option with a PV AMI can make instances
     * launched from the AMI unreachable.</p>
     */
    inline bool GetEnaSupport() const { return m_enaSupport; }
    inline bool EnaSupportHasBeenSet() const { return m_enaSupportHasBeenSet; }
    inline void SetEnaSupport(bool value) { m_enaSupportHasBeenSet = true; m_enaSupport = value; }
    inline RegisterImageRequest& WithEnaSupport(bool value) { SetEnaSupport(value); return *this;}
    ///@}
  private:

    Aws::String m_imageLocation;
    bool m_imageLocationHasBeenSet = false;

    Aws::Vector<Aws::String> m_billingProducts;
    bool m_billingProductsHasBeenSet = false;

    BootModeValues m_bootMode{BootModeValues::NOT_SET};
    bool m_bootModeHasBeenSet = false;

    TpmSupportValues m_tpmSupport{TpmSupportValues::NOT_SET};
    bool m_tpmSupportHasBeenSet = false;

    Aws::String m_uefiData;
    bool m_uefiDataHasBeenSet = false;

    ImdsSupportValues m_imdsSupport{ImdsSupportValues::NOT_SET};
    bool m_imdsSupportHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ArchitectureValues m_architecture{ArchitectureValues::NOT_SET};
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

    bool m_enaSupport{false};
    bool m_enaSupportHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
