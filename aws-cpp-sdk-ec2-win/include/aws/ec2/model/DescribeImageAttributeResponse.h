﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AttributeValue.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/BlockDeviceMapping.h>
#include <aws/ec2/model/LaunchPermission.h>
#include <aws/ec2/model/ProductCode.h>
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
  class AWS_EC2_API DescribeImageAttributeResponse
  {
  public:
    DescribeImageAttributeResponse();
    DescribeImageAttributeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeImageAttributeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The block device mapping entries.</p>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }

    /**
     * <p>The block device mapping entries.</p>
     */
    inline void SetBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { m_blockDeviceMappings = value; }

    /**
     * <p>The block device mapping entries.</p>
     */
    inline void SetBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { m_blockDeviceMappings = std::move(value); }

    /**
     * <p>The block device mapping entries.</p>
     */
    inline DescribeImageAttributeResponse& WithBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>The block device mapping entries.</p>
     */
    inline DescribeImageAttributeResponse& WithBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}

    /**
     * <p>The block device mapping entries.</p>
     */
    inline DescribeImageAttributeResponse& AddBlockDeviceMappings(const BlockDeviceMapping& value) { m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>The block device mapping entries.</p>
     */
    inline DescribeImageAttributeResponse& AddBlockDeviceMappings(BlockDeviceMapping&& value) { m_blockDeviceMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the AMI.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageId = value; }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageId = std::move(value); }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline void SetImageId(const char* value) { m_imageId.assign(value); }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline DescribeImageAttributeResponse& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the AMI.</p>
     */
    inline DescribeImageAttributeResponse& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AMI.</p>
     */
    inline DescribeImageAttributeResponse& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The launch permissions.</p>
     */
    inline const Aws::Vector<LaunchPermission>& GetLaunchPermissions() const{ return m_launchPermissions; }

    /**
     * <p>The launch permissions.</p>
     */
    inline void SetLaunchPermissions(const Aws::Vector<LaunchPermission>& value) { m_launchPermissions = value; }

    /**
     * <p>The launch permissions.</p>
     */
    inline void SetLaunchPermissions(Aws::Vector<LaunchPermission>&& value) { m_launchPermissions = std::move(value); }

    /**
     * <p>The launch permissions.</p>
     */
    inline DescribeImageAttributeResponse& WithLaunchPermissions(const Aws::Vector<LaunchPermission>& value) { SetLaunchPermissions(value); return *this;}

    /**
     * <p>The launch permissions.</p>
     */
    inline DescribeImageAttributeResponse& WithLaunchPermissions(Aws::Vector<LaunchPermission>&& value) { SetLaunchPermissions(std::move(value)); return *this;}

    /**
     * <p>The launch permissions.</p>
     */
    inline DescribeImageAttributeResponse& AddLaunchPermissions(const LaunchPermission& value) { m_launchPermissions.push_back(value); return *this; }

    /**
     * <p>The launch permissions.</p>
     */
    inline DescribeImageAttributeResponse& AddLaunchPermissions(LaunchPermission&& value) { m_launchPermissions.push_back(std::move(value)); return *this; }


    /**
     * <p>The product codes.</p>
     */
    inline const Aws::Vector<ProductCode>& GetProductCodes() const{ return m_productCodes; }

    /**
     * <p>The product codes.</p>
     */
    inline void SetProductCodes(const Aws::Vector<ProductCode>& value) { m_productCodes = value; }

    /**
     * <p>The product codes.</p>
     */
    inline void SetProductCodes(Aws::Vector<ProductCode>&& value) { m_productCodes = std::move(value); }

    /**
     * <p>The product codes.</p>
     */
    inline DescribeImageAttributeResponse& WithProductCodes(const Aws::Vector<ProductCode>& value) { SetProductCodes(value); return *this;}

    /**
     * <p>The product codes.</p>
     */
    inline DescribeImageAttributeResponse& WithProductCodes(Aws::Vector<ProductCode>&& value) { SetProductCodes(std::move(value)); return *this;}

    /**
     * <p>The product codes.</p>
     */
    inline DescribeImageAttributeResponse& AddProductCodes(const ProductCode& value) { m_productCodes.push_back(value); return *this; }

    /**
     * <p>The product codes.</p>
     */
    inline DescribeImageAttributeResponse& AddProductCodes(ProductCode&& value) { m_productCodes.push_back(std::move(value)); return *this; }


    /**
     * <p>A description for the AMI.</p>
     */
    inline const AttributeValue& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the AMI.</p>
     */
    inline void SetDescription(const AttributeValue& value) { m_description = value; }

    /**
     * <p>A description for the AMI.</p>
     */
    inline void SetDescription(AttributeValue&& value) { m_description = std::move(value); }

    /**
     * <p>A description for the AMI.</p>
     */
    inline DescribeImageAttributeResponse& WithDescription(const AttributeValue& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the AMI.</p>
     */
    inline DescribeImageAttributeResponse& WithDescription(AttributeValue&& value) { SetDescription(std::move(value)); return *this;}


    /**
     * <p>The kernel ID.</p>
     */
    inline const AttributeValue& GetKernelId() const{ return m_kernelId; }

    /**
     * <p>The kernel ID.</p>
     */
    inline void SetKernelId(const AttributeValue& value) { m_kernelId = value; }

    /**
     * <p>The kernel ID.</p>
     */
    inline void SetKernelId(AttributeValue&& value) { m_kernelId = std::move(value); }

    /**
     * <p>The kernel ID.</p>
     */
    inline DescribeImageAttributeResponse& WithKernelId(const AttributeValue& value) { SetKernelId(value); return *this;}

    /**
     * <p>The kernel ID.</p>
     */
    inline DescribeImageAttributeResponse& WithKernelId(AttributeValue&& value) { SetKernelId(std::move(value)); return *this;}


    /**
     * <p>The RAM disk ID.</p>
     */
    inline const AttributeValue& GetRamdiskId() const{ return m_ramdiskId; }

    /**
     * <p>The RAM disk ID.</p>
     */
    inline void SetRamdiskId(const AttributeValue& value) { m_ramdiskId = value; }

    /**
     * <p>The RAM disk ID.</p>
     */
    inline void SetRamdiskId(AttributeValue&& value) { m_ramdiskId = std::move(value); }

    /**
     * <p>The RAM disk ID.</p>
     */
    inline DescribeImageAttributeResponse& WithRamdiskId(const AttributeValue& value) { SetRamdiskId(value); return *this;}

    /**
     * <p>The RAM disk ID.</p>
     */
    inline DescribeImageAttributeResponse& WithRamdiskId(AttributeValue&& value) { SetRamdiskId(std::move(value)); return *this;}


    /**
     * <p>Indicates whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline const AttributeValue& GetSriovNetSupport() const{ return m_sriovNetSupport; }

    /**
     * <p>Indicates whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline void SetSriovNetSupport(const AttributeValue& value) { m_sriovNetSupport = value; }

    /**
     * <p>Indicates whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline void SetSriovNetSupport(AttributeValue&& value) { m_sriovNetSupport = std::move(value); }

    /**
     * <p>Indicates whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline DescribeImageAttributeResponse& WithSriovNetSupport(const AttributeValue& value) { SetSriovNetSupport(value); return *this;}

    /**
     * <p>Indicates whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline DescribeImageAttributeResponse& WithSriovNetSupport(AttributeValue&& value) { SetSriovNetSupport(std::move(value)); return *this;}


    /**
     * <p>The boot mode.</p>
     */
    inline const AttributeValue& GetBootMode() const{ return m_bootMode; }

    /**
     * <p>The boot mode.</p>
     */
    inline void SetBootMode(const AttributeValue& value) { m_bootMode = value; }

    /**
     * <p>The boot mode.</p>
     */
    inline void SetBootMode(AttributeValue&& value) { m_bootMode = std::move(value); }

    /**
     * <p>The boot mode.</p>
     */
    inline DescribeImageAttributeResponse& WithBootMode(const AttributeValue& value) { SetBootMode(value); return *this;}

    /**
     * <p>The boot mode.</p>
     */
    inline DescribeImageAttributeResponse& WithBootMode(AttributeValue&& value) { SetBootMode(std::move(value)); return *this;}


    /**
     * <p>If the image is configured for NitroTPM support, the value is
     * <code>v2.0</code>.</p>
     */
    inline const AttributeValue& GetTpmSupport() const{ return m_tpmSupport; }

    /**
     * <p>If the image is configured for NitroTPM support, the value is
     * <code>v2.0</code>.</p>
     */
    inline void SetTpmSupport(const AttributeValue& value) { m_tpmSupport = value; }

    /**
     * <p>If the image is configured for NitroTPM support, the value is
     * <code>v2.0</code>.</p>
     */
    inline void SetTpmSupport(AttributeValue&& value) { m_tpmSupport = std::move(value); }

    /**
     * <p>If the image is configured for NitroTPM support, the value is
     * <code>v2.0</code>.</p>
     */
    inline DescribeImageAttributeResponse& WithTpmSupport(const AttributeValue& value) { SetTpmSupport(value); return *this;}

    /**
     * <p>If the image is configured for NitroTPM support, the value is
     * <code>v2.0</code>.</p>
     */
    inline DescribeImageAttributeResponse& WithTpmSupport(AttributeValue&& value) { SetTpmSupport(std::move(value)); return *this;}


    /**
     * <p>Base64 representation of the non-volatile UEFI variable store. To retrieve
     * the UEFI data, use the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetInstanceUefiData">GetInstanceUefiData</a>
     * command. You can inspect and modify the UEFI data by using the <a
     * href="https://github.com/awslabs/python-uefivars">python-uefivars tool</a> on
     * GitHub. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/uefi-secure-boot.html">UEFI
     * Secure Boot</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline const AttributeValue& GetUefiData() const{ return m_uefiData; }

    /**
     * <p>Base64 representation of the non-volatile UEFI variable store. To retrieve
     * the UEFI data, use the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetInstanceUefiData">GetInstanceUefiData</a>
     * command. You can inspect and modify the UEFI data by using the <a
     * href="https://github.com/awslabs/python-uefivars">python-uefivars tool</a> on
     * GitHub. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/uefi-secure-boot.html">UEFI
     * Secure Boot</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetUefiData(const AttributeValue& value) { m_uefiData = value; }

    /**
     * <p>Base64 representation of the non-volatile UEFI variable store. To retrieve
     * the UEFI data, use the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetInstanceUefiData">GetInstanceUefiData</a>
     * command. You can inspect and modify the UEFI data by using the <a
     * href="https://github.com/awslabs/python-uefivars">python-uefivars tool</a> on
     * GitHub. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/uefi-secure-boot.html">UEFI
     * Secure Boot</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetUefiData(AttributeValue&& value) { m_uefiData = std::move(value); }

    /**
     * <p>Base64 representation of the non-volatile UEFI variable store. To retrieve
     * the UEFI data, use the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetInstanceUefiData">GetInstanceUefiData</a>
     * command. You can inspect and modify the UEFI data by using the <a
     * href="https://github.com/awslabs/python-uefivars">python-uefivars tool</a> on
     * GitHub. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/uefi-secure-boot.html">UEFI
     * Secure Boot</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline DescribeImageAttributeResponse& WithUefiData(const AttributeValue& value) { SetUefiData(value); return *this;}

    /**
     * <p>Base64 representation of the non-volatile UEFI variable store. To retrieve
     * the UEFI data, use the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetInstanceUefiData">GetInstanceUefiData</a>
     * command. You can inspect and modify the UEFI data by using the <a
     * href="https://github.com/awslabs/python-uefivars">python-uefivars tool</a> on
     * GitHub. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/uefi-secure-boot.html">UEFI
     * Secure Boot</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline DescribeImageAttributeResponse& WithUefiData(AttributeValue&& value) { SetUefiData(std::move(value)); return *this;}


    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the AMI was last used to launch an EC2 instance. When
     * the AMI is used to launch an instance, there is a 24-hour delay before that
     * usage is reported.</p>  <p> <code>lastLaunchedTime</code> data is
     * available starting April 2017.</p> 
     */
    inline const AttributeValue& GetLastLaunchedTime() const{ return m_lastLaunchedTime; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the AMI was last used to launch an EC2 instance. When
     * the AMI is used to launch an instance, there is a 24-hour delay before that
     * usage is reported.</p>  <p> <code>lastLaunchedTime</code> data is
     * available starting April 2017.</p> 
     */
    inline void SetLastLaunchedTime(const AttributeValue& value) { m_lastLaunchedTime = value; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the AMI was last used to launch an EC2 instance. When
     * the AMI is used to launch an instance, there is a 24-hour delay before that
     * usage is reported.</p>  <p> <code>lastLaunchedTime</code> data is
     * available starting April 2017.</p> 
     */
    inline void SetLastLaunchedTime(AttributeValue&& value) { m_lastLaunchedTime = std::move(value); }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the AMI was last used to launch an EC2 instance. When
     * the AMI is used to launch an instance, there is a 24-hour delay before that
     * usage is reported.</p>  <p> <code>lastLaunchedTime</code> data is
     * available starting April 2017.</p> 
     */
    inline DescribeImageAttributeResponse& WithLastLaunchedTime(const AttributeValue& value) { SetLastLaunchedTime(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the AMI was last used to launch an EC2 instance. When
     * the AMI is used to launch an instance, there is a 24-hour delay before that
     * usage is reported.</p>  <p> <code>lastLaunchedTime</code> data is
     * available starting April 2017.</p> 
     */
    inline DescribeImageAttributeResponse& WithLastLaunchedTime(AttributeValue&& value) { SetLastLaunchedTime(std::move(value)); return *this;}


    /**
     * <p>If <code>v2.0</code>, it indicates that IMDSv2 is specified in the AMI.
     * Instances launched from this AMI will have <code>HttpTokens</code> automatically
     * set to <code>required</code> so that, by default, the instance requires that
     * IMDSv2 is used when requesting instance metadata. In addition,
     * <code>HttpPutResponseHopLimit</code> is set to <code>2</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/configuring-IMDS-new-instances.html#configure-IMDS-new-instances-ami-configuration">Configure
     * the AMI</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline const AttributeValue& GetImdsSupport() const{ return m_imdsSupport; }

    /**
     * <p>If <code>v2.0</code>, it indicates that IMDSv2 is specified in the AMI.
     * Instances launched from this AMI will have <code>HttpTokens</code> automatically
     * set to <code>required</code> so that, by default, the instance requires that
     * IMDSv2 is used when requesting instance metadata. In addition,
     * <code>HttpPutResponseHopLimit</code> is set to <code>2</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/configuring-IMDS-new-instances.html#configure-IMDS-new-instances-ami-configuration">Configure
     * the AMI</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetImdsSupport(const AttributeValue& value) { m_imdsSupport = value; }

    /**
     * <p>If <code>v2.0</code>, it indicates that IMDSv2 is specified in the AMI.
     * Instances launched from this AMI will have <code>HttpTokens</code> automatically
     * set to <code>required</code> so that, by default, the instance requires that
     * IMDSv2 is used when requesting instance metadata. In addition,
     * <code>HttpPutResponseHopLimit</code> is set to <code>2</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/configuring-IMDS-new-instances.html#configure-IMDS-new-instances-ami-configuration">Configure
     * the AMI</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetImdsSupport(AttributeValue&& value) { m_imdsSupport = std::move(value); }

    /**
     * <p>If <code>v2.0</code>, it indicates that IMDSv2 is specified in the AMI.
     * Instances launched from this AMI will have <code>HttpTokens</code> automatically
     * set to <code>required</code> so that, by default, the instance requires that
     * IMDSv2 is used when requesting instance metadata. In addition,
     * <code>HttpPutResponseHopLimit</code> is set to <code>2</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/configuring-IMDS-new-instances.html#configure-IMDS-new-instances-ami-configuration">Configure
     * the AMI</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline DescribeImageAttributeResponse& WithImdsSupport(const AttributeValue& value) { SetImdsSupport(value); return *this;}

    /**
     * <p>If <code>v2.0</code>, it indicates that IMDSv2 is specified in the AMI.
     * Instances launched from this AMI will have <code>HttpTokens</code> automatically
     * set to <code>required</code> so that, by default, the instance requires that
     * IMDSv2 is used when requesting instance metadata. In addition,
     * <code>HttpPutResponseHopLimit</code> is set to <code>2</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/configuring-IMDS-new-instances.html#configure-IMDS-new-instances-ami-configuration">Configure
     * the AMI</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline DescribeImageAttributeResponse& WithImdsSupport(AttributeValue&& value) { SetImdsSupport(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeImageAttributeResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeImageAttributeResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;

    Aws::String m_imageId;

    Aws::Vector<LaunchPermission> m_launchPermissions;

    Aws::Vector<ProductCode> m_productCodes;

    AttributeValue m_description;

    AttributeValue m_kernelId;

    AttributeValue m_ramdiskId;

    AttributeValue m_sriovNetSupport;

    AttributeValue m_bootMode;

    AttributeValue m_tpmSupport;

    AttributeValue m_uefiData;

    AttributeValue m_lastLaunchedTime;

    AttributeValue m_imdsSupport;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
