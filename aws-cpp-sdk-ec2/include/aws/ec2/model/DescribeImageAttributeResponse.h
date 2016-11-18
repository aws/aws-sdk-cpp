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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/AttributeValue.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/LaunchPermission.h>
#include <aws/ec2/model/ProductCode.h>
#include <aws/ec2/model/BlockDeviceMapping.h>

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
   * <p>Describes an image attribute.</p>
   */
  class AWS_EC2_API DescribeImageAttributeResponse
  {
  public:
    DescribeImageAttributeResponse();
    DescribeImageAttributeResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeImageAttributeResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

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
    inline void SetImageId(Aws::String&& value) { m_imageId = value; }

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
    inline DescribeImageAttributeResponse& WithImageId(Aws::String&& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the AMI.</p>
     */
    inline DescribeImageAttributeResponse& WithImageId(const char* value) { SetImageId(value); return *this;}

    /**
     * <p>One or more launch permissions.</p>
     */
    inline const Aws::Vector<LaunchPermission>& GetLaunchPermissions() const{ return m_launchPermissions; }

    /**
     * <p>One or more launch permissions.</p>
     */
    inline void SetLaunchPermissions(const Aws::Vector<LaunchPermission>& value) { m_launchPermissions = value; }

    /**
     * <p>One or more launch permissions.</p>
     */
    inline void SetLaunchPermissions(Aws::Vector<LaunchPermission>&& value) { m_launchPermissions = value; }

    /**
     * <p>One or more launch permissions.</p>
     */
    inline DescribeImageAttributeResponse& WithLaunchPermissions(const Aws::Vector<LaunchPermission>& value) { SetLaunchPermissions(value); return *this;}

    /**
     * <p>One or more launch permissions.</p>
     */
    inline DescribeImageAttributeResponse& WithLaunchPermissions(Aws::Vector<LaunchPermission>&& value) { SetLaunchPermissions(value); return *this;}

    /**
     * <p>One or more launch permissions.</p>
     */
    inline DescribeImageAttributeResponse& AddLaunchPermissions(const LaunchPermission& value) { m_launchPermissions.push_back(value); return *this; }

    /**
     * <p>One or more launch permissions.</p>
     */
    inline DescribeImageAttributeResponse& AddLaunchPermissions(LaunchPermission&& value) { m_launchPermissions.push_back(value); return *this; }

    /**
     * <p>One or more product codes.</p>
     */
    inline const Aws::Vector<ProductCode>& GetProductCodes() const{ return m_productCodes; }

    /**
     * <p>One or more product codes.</p>
     */
    inline void SetProductCodes(const Aws::Vector<ProductCode>& value) { m_productCodes = value; }

    /**
     * <p>One or more product codes.</p>
     */
    inline void SetProductCodes(Aws::Vector<ProductCode>&& value) { m_productCodes = value; }

    /**
     * <p>One or more product codes.</p>
     */
    inline DescribeImageAttributeResponse& WithProductCodes(const Aws::Vector<ProductCode>& value) { SetProductCodes(value); return *this;}

    /**
     * <p>One or more product codes.</p>
     */
    inline DescribeImageAttributeResponse& WithProductCodes(Aws::Vector<ProductCode>&& value) { SetProductCodes(value); return *this;}

    /**
     * <p>One or more product codes.</p>
     */
    inline DescribeImageAttributeResponse& AddProductCodes(const ProductCode& value) { m_productCodes.push_back(value); return *this; }

    /**
     * <p>One or more product codes.</p>
     */
    inline DescribeImageAttributeResponse& AddProductCodes(ProductCode&& value) { m_productCodes.push_back(value); return *this; }

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
    inline void SetKernelId(AttributeValue&& value) { m_kernelId = value; }

    /**
     * <p>The kernel ID.</p>
     */
    inline DescribeImageAttributeResponse& WithKernelId(const AttributeValue& value) { SetKernelId(value); return *this;}

    /**
     * <p>The kernel ID.</p>
     */
    inline DescribeImageAttributeResponse& WithKernelId(AttributeValue&& value) { SetKernelId(value); return *this;}

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
    inline void SetRamdiskId(AttributeValue&& value) { m_ramdiskId = value; }

    /**
     * <p>The RAM disk ID.</p>
     */
    inline DescribeImageAttributeResponse& WithRamdiskId(const AttributeValue& value) { SetRamdiskId(value); return *this;}

    /**
     * <p>The RAM disk ID.</p>
     */
    inline DescribeImageAttributeResponse& WithRamdiskId(AttributeValue&& value) { SetRamdiskId(value); return *this;}

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
    inline void SetDescription(AttributeValue&& value) { m_description = value; }

    /**
     * <p>A description for the AMI.</p>
     */
    inline DescribeImageAttributeResponse& WithDescription(const AttributeValue& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the AMI.</p>
     */
    inline DescribeImageAttributeResponse& WithDescription(AttributeValue&& value) { SetDescription(value); return *this;}

    
    inline const AttributeValue& GetSriovNetSupport() const{ return m_sriovNetSupport; }

    
    inline void SetSriovNetSupport(const AttributeValue& value) { m_sriovNetSupport = value; }

    
    inline void SetSriovNetSupport(AttributeValue&& value) { m_sriovNetSupport = value; }

    
    inline DescribeImageAttributeResponse& WithSriovNetSupport(const AttributeValue& value) { SetSriovNetSupport(value); return *this;}

    
    inline DescribeImageAttributeResponse& WithSriovNetSupport(AttributeValue&& value) { SetSriovNetSupport(value); return *this;}

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline void SetBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { m_blockDeviceMappings = value; }

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline void SetBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { m_blockDeviceMappings = value; }

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline DescribeImageAttributeResponse& WithBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline DescribeImageAttributeResponse& WithBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline DescribeImageAttributeResponse& AddBlockDeviceMappings(const BlockDeviceMapping& value) { m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>One or more block device mapping entries.</p>
     */
    inline DescribeImageAttributeResponse& AddBlockDeviceMappings(BlockDeviceMapping&& value) { m_blockDeviceMappings.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeImageAttributeResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeImageAttributeResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_imageId;
    Aws::Vector<LaunchPermission> m_launchPermissions;
    Aws::Vector<ProductCode> m_productCodes;
    AttributeValue m_kernelId;
    AttributeValue m_ramdiskId;
    AttributeValue m_description;
    AttributeValue m_sriovNetSupport;
    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws