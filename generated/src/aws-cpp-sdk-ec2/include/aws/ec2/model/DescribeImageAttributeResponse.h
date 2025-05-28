/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/AttributeValue.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/LaunchPermission.h>
#include <aws/ec2/model/ProductCode.h>
#include <aws/ec2/model/BlockDeviceMapping.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  /**
   * <p>Describes an image attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImageAttribute">AWS
   * API Reference</a></p>
   */
  class DescribeImageAttributeResponse
  {
  public:
    AWS_EC2_API DescribeImageAttributeResponse() = default;
    AWS_EC2_API DescribeImageAttributeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeImageAttributeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A description for the AMI.</p>
     */
    inline const AttributeValue& GetDescription() const { return m_description; }
    template<typename DescriptionT = AttributeValue>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = AttributeValue>
    DescribeImageAttributeResponse& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The kernel ID.</p>
     */
    inline const AttributeValue& GetKernelId() const { return m_kernelId; }
    template<typename KernelIdT = AttributeValue>
    void SetKernelId(KernelIdT&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::forward<KernelIdT>(value); }
    template<typename KernelIdT = AttributeValue>
    DescribeImageAttributeResponse& WithKernelId(KernelIdT&& value) { SetKernelId(std::forward<KernelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RAM disk ID.</p>
     */
    inline const AttributeValue& GetRamdiskId() const { return m_ramdiskId; }
    template<typename RamdiskIdT = AttributeValue>
    void SetRamdiskId(RamdiskIdT&& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = std::forward<RamdiskIdT>(value); }
    template<typename RamdiskIdT = AttributeValue>
    DescribeImageAttributeResponse& WithRamdiskId(RamdiskIdT&& value) { SetRamdiskId(std::forward<RamdiskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline const AttributeValue& GetSriovNetSupport() const { return m_sriovNetSupport; }
    template<typename SriovNetSupportT = AttributeValue>
    void SetSriovNetSupport(SriovNetSupportT&& value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport = std::forward<SriovNetSupportT>(value); }
    template<typename SriovNetSupportT = AttributeValue>
    DescribeImageAttributeResponse& WithSriovNetSupport(SriovNetSupportT&& value) { SetSriovNetSupport(std::forward<SriovNetSupportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The boot mode.</p>
     */
    inline const AttributeValue& GetBootMode() const { return m_bootMode; }
    template<typename BootModeT = AttributeValue>
    void SetBootMode(BootModeT&& value) { m_bootModeHasBeenSet = true; m_bootMode = std::forward<BootModeT>(value); }
    template<typename BootModeT = AttributeValue>
    DescribeImageAttributeResponse& WithBootMode(BootModeT&& value) { SetBootMode(std::forward<BootModeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the image is configured for NitroTPM support, the value is
     * <code>v2.0</code>.</p>
     */
    inline const AttributeValue& GetTpmSupport() const { return m_tpmSupport; }
    template<typename TpmSupportT = AttributeValue>
    void SetTpmSupport(TpmSupportT&& value) { m_tpmSupportHasBeenSet = true; m_tpmSupport = std::forward<TpmSupportT>(value); }
    template<typename TpmSupportT = AttributeValue>
    DescribeImageAttributeResponse& WithTpmSupport(TpmSupportT&& value) { SetTpmSupport(std::forward<TpmSupportT>(value)); return *this;}
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
    inline const AttributeValue& GetUefiData() const { return m_uefiData; }
    template<typename UefiDataT = AttributeValue>
    void SetUefiData(UefiDataT&& value) { m_uefiDataHasBeenSet = true; m_uefiData = std::forward<UefiDataT>(value); }
    template<typename UefiDataT = AttributeValue>
    DescribeImageAttributeResponse& WithUefiData(UefiDataT&& value) { SetUefiData(std::forward<UefiDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the AMI was last used to launch an EC2 instance. When
     * the AMI is used to launch an instance, there is a 24-hour delay before that
     * usage is reported.</p>  <p> <code>lastLaunchedTime</code> data is
     * available starting April 2017.</p> 
     */
    inline const AttributeValue& GetLastLaunchedTime() const { return m_lastLaunchedTime; }
    template<typename LastLaunchedTimeT = AttributeValue>
    void SetLastLaunchedTime(LastLaunchedTimeT&& value) { m_lastLaunchedTimeHasBeenSet = true; m_lastLaunchedTime = std::forward<LastLaunchedTimeT>(value); }
    template<typename LastLaunchedTimeT = AttributeValue>
    DescribeImageAttributeResponse& WithLastLaunchedTime(LastLaunchedTimeT&& value) { SetLastLaunchedTime(std::forward<LastLaunchedTimeT>(value)); return *this;}
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
    inline const AttributeValue& GetImdsSupport() const { return m_imdsSupport; }
    template<typename ImdsSupportT = AttributeValue>
    void SetImdsSupport(ImdsSupportT&& value) { m_imdsSupportHasBeenSet = true; m_imdsSupport = std::forward<ImdsSupportT>(value); }
    template<typename ImdsSupportT = AttributeValue>
    DescribeImageAttributeResponse& WithImdsSupport(ImdsSupportT&& value) { SetImdsSupport(std::forward<ImdsSupportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether deregistration protection is enabled for the AMI.</p>
     */
    inline const AttributeValue& GetDeregistrationProtection() const { return m_deregistrationProtection; }
    template<typename DeregistrationProtectionT = AttributeValue>
    void SetDeregistrationProtection(DeregistrationProtectionT&& value) { m_deregistrationProtectionHasBeenSet = true; m_deregistrationProtection = std::forward<DeregistrationProtectionT>(value); }
    template<typename DeregistrationProtectionT = AttributeValue>
    DescribeImageAttributeResponse& WithDeregistrationProtection(DeregistrationProtectionT&& value) { SetDeregistrationProtection(std::forward<DeregistrationProtectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the AMI.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    DescribeImageAttributeResponse& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch permissions.</p>
     */
    inline const Aws::Vector<LaunchPermission>& GetLaunchPermissions() const { return m_launchPermissions; }
    template<typename LaunchPermissionsT = Aws::Vector<LaunchPermission>>
    void SetLaunchPermissions(LaunchPermissionsT&& value) { m_launchPermissionsHasBeenSet = true; m_launchPermissions = std::forward<LaunchPermissionsT>(value); }
    template<typename LaunchPermissionsT = Aws::Vector<LaunchPermission>>
    DescribeImageAttributeResponse& WithLaunchPermissions(LaunchPermissionsT&& value) { SetLaunchPermissions(std::forward<LaunchPermissionsT>(value)); return *this;}
    template<typename LaunchPermissionsT = LaunchPermission>
    DescribeImageAttributeResponse& AddLaunchPermissions(LaunchPermissionsT&& value) { m_launchPermissionsHasBeenSet = true; m_launchPermissions.emplace_back(std::forward<LaunchPermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The product codes.</p>
     */
    inline const Aws::Vector<ProductCode>& GetProductCodes() const { return m_productCodes; }
    template<typename ProductCodesT = Aws::Vector<ProductCode>>
    void SetProductCodes(ProductCodesT&& value) { m_productCodesHasBeenSet = true; m_productCodes = std::forward<ProductCodesT>(value); }
    template<typename ProductCodesT = Aws::Vector<ProductCode>>
    DescribeImageAttributeResponse& WithProductCodes(ProductCodesT&& value) { SetProductCodes(std::forward<ProductCodesT>(value)); return *this;}
    template<typename ProductCodesT = ProductCode>
    DescribeImageAttributeResponse& AddProductCodes(ProductCodesT&& value) { m_productCodesHasBeenSet = true; m_productCodes.emplace_back(std::forward<ProductCodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The block device mapping entries.</p>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const { return m_blockDeviceMappings; }
    template<typename BlockDeviceMappingsT = Aws::Vector<BlockDeviceMapping>>
    void SetBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::forward<BlockDeviceMappingsT>(value); }
    template<typename BlockDeviceMappingsT = Aws::Vector<BlockDeviceMapping>>
    DescribeImageAttributeResponse& WithBlockDeviceMappings(BlockDeviceMappingsT&& value) { SetBlockDeviceMappings(std::forward<BlockDeviceMappingsT>(value)); return *this;}
    template<typename BlockDeviceMappingsT = BlockDeviceMapping>
    DescribeImageAttributeResponse& AddBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.emplace_back(std::forward<BlockDeviceMappingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeImageAttributeResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    AttributeValue m_description;
    bool m_descriptionHasBeenSet = false;

    AttributeValue m_kernelId;
    bool m_kernelIdHasBeenSet = false;

    AttributeValue m_ramdiskId;
    bool m_ramdiskIdHasBeenSet = false;

    AttributeValue m_sriovNetSupport;
    bool m_sriovNetSupportHasBeenSet = false;

    AttributeValue m_bootMode;
    bool m_bootModeHasBeenSet = false;

    AttributeValue m_tpmSupport;
    bool m_tpmSupportHasBeenSet = false;

    AttributeValue m_uefiData;
    bool m_uefiDataHasBeenSet = false;

    AttributeValue m_lastLaunchedTime;
    bool m_lastLaunchedTimeHasBeenSet = false;

    AttributeValue m_imdsSupport;
    bool m_imdsSupportHasBeenSet = false;

    AttributeValue m_deregistrationProtection;
    bool m_deregistrationProtectionHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::Vector<LaunchPermission> m_launchPermissions;
    bool m_launchPermissionsHasBeenSet = false;

    Aws::Vector<ProductCode> m_productCodes;
    bool m_productCodesHasBeenSet = false;

    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
