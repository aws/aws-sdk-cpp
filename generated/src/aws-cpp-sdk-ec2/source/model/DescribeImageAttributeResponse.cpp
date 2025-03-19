/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeImageAttributeResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeImageAttributeResponse::DescribeImageAttributeResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeImageAttributeResponse& DescribeImageAttributeResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeImageAttributeResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeImageAttributeResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode;
      m_descriptionHasBeenSet = true;
    }
    XmlNode kernelIdNode = resultNode.FirstChild("kernel");
    if(!kernelIdNode.IsNull())
    {
      m_kernelId = kernelIdNode;
      m_kernelIdHasBeenSet = true;
    }
    XmlNode ramdiskIdNode = resultNode.FirstChild("ramdisk");
    if(!ramdiskIdNode.IsNull())
    {
      m_ramdiskId = ramdiskIdNode;
      m_ramdiskIdHasBeenSet = true;
    }
    XmlNode sriovNetSupportNode = resultNode.FirstChild("sriovNetSupport");
    if(!sriovNetSupportNode.IsNull())
    {
      m_sriovNetSupport = sriovNetSupportNode;
      m_sriovNetSupportHasBeenSet = true;
    }
    XmlNode bootModeNode = resultNode.FirstChild("bootMode");
    if(!bootModeNode.IsNull())
    {
      m_bootMode = bootModeNode;
      m_bootModeHasBeenSet = true;
    }
    XmlNode tpmSupportNode = resultNode.FirstChild("tpmSupport");
    if(!tpmSupportNode.IsNull())
    {
      m_tpmSupport = tpmSupportNode;
      m_tpmSupportHasBeenSet = true;
    }
    XmlNode uefiDataNode = resultNode.FirstChild("uefiData");
    if(!uefiDataNode.IsNull())
    {
      m_uefiData = uefiDataNode;
      m_uefiDataHasBeenSet = true;
    }
    XmlNode lastLaunchedTimeNode = resultNode.FirstChild("lastLaunchedTime");
    if(!lastLaunchedTimeNode.IsNull())
    {
      m_lastLaunchedTime = lastLaunchedTimeNode;
      m_lastLaunchedTimeHasBeenSet = true;
    }
    XmlNode imdsSupportNode = resultNode.FirstChild("imdsSupport");
    if(!imdsSupportNode.IsNull())
    {
      m_imdsSupport = imdsSupportNode;
      m_imdsSupportHasBeenSet = true;
    }
    XmlNode deregistrationProtectionNode = resultNode.FirstChild("deregistrationProtection");
    if(!deregistrationProtectionNode.IsNull())
    {
      m_deregistrationProtection = deregistrationProtectionNode;
      m_deregistrationProtectionHasBeenSet = true;
    }
    XmlNode imageIdNode = resultNode.FirstChild("imageId");
    if(!imageIdNode.IsNull())
    {
      m_imageId = Aws::Utils::Xml::DecodeEscapedXmlText(imageIdNode.GetText());
      m_imageIdHasBeenSet = true;
    }
    XmlNode launchPermissionsNode = resultNode.FirstChild("launchPermission");
    if(!launchPermissionsNode.IsNull())
    {
      XmlNode launchPermissionsMember = launchPermissionsNode.FirstChild("item");
      m_launchPermissionsHasBeenSet = !launchPermissionsMember.IsNull();
      while(!launchPermissionsMember.IsNull())
      {
        m_launchPermissions.push_back(launchPermissionsMember);
        launchPermissionsMember = launchPermissionsMember.NextNode("item");
      }

      m_launchPermissionsHasBeenSet = true;
    }
    XmlNode productCodesNode = resultNode.FirstChild("productCodes");
    if(!productCodesNode.IsNull())
    {
      XmlNode productCodesMember = productCodesNode.FirstChild("item");
      m_productCodesHasBeenSet = !productCodesMember.IsNull();
      while(!productCodesMember.IsNull())
      {
        m_productCodes.push_back(productCodesMember);
        productCodesMember = productCodesMember.NextNode("item");
      }

      m_productCodesHasBeenSet = true;
    }
    XmlNode blockDeviceMappingsNode = resultNode.FirstChild("blockDeviceMapping");
    if(!blockDeviceMappingsNode.IsNull())
    {
      XmlNode blockDeviceMappingsMember = blockDeviceMappingsNode.FirstChild("item");
      m_blockDeviceMappingsHasBeenSet = !blockDeviceMappingsMember.IsNull();
      while(!blockDeviceMappingsMember.IsNull())
      {
        m_blockDeviceMappings.push_back(blockDeviceMappingsMember);
        blockDeviceMappingsMember = blockDeviceMappingsMember.NextNode("item");
      }

      m_blockDeviceMappingsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeImageAttributeResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
