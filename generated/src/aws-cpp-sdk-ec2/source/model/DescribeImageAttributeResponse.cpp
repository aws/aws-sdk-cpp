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

DescribeImageAttributeResponse::DescribeImageAttributeResponse()
{
}

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
    XmlNode blockDeviceMappingsNode = resultNode.FirstChild("blockDeviceMapping");
    if(!blockDeviceMappingsNode.IsNull())
    {
      XmlNode blockDeviceMappingsMember = blockDeviceMappingsNode.FirstChild("item");
      while(!blockDeviceMappingsMember.IsNull())
      {
        m_blockDeviceMappings.push_back(blockDeviceMappingsMember);
        blockDeviceMappingsMember = blockDeviceMappingsMember.NextNode("item");
      }

    }
    XmlNode imageIdNode = resultNode.FirstChild("imageId");
    if(!imageIdNode.IsNull())
    {
      m_imageId = Aws::Utils::Xml::DecodeEscapedXmlText(imageIdNode.GetText());
    }
    XmlNode launchPermissionsNode = resultNode.FirstChild("launchPermission");
    if(!launchPermissionsNode.IsNull())
    {
      XmlNode launchPermissionsMember = launchPermissionsNode.FirstChild("item");
      while(!launchPermissionsMember.IsNull())
      {
        m_launchPermissions.push_back(launchPermissionsMember);
        launchPermissionsMember = launchPermissionsMember.NextNode("item");
      }

    }
    XmlNode productCodesNode = resultNode.FirstChild("productCodes");
    if(!productCodesNode.IsNull())
    {
      XmlNode productCodesMember = productCodesNode.FirstChild("item");
      while(!productCodesMember.IsNull())
      {
        m_productCodes.push_back(productCodesMember);
        productCodesMember = productCodesMember.NextNode("item");
      }

    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode;
    }
    XmlNode kernelIdNode = resultNode.FirstChild("kernel");
    if(!kernelIdNode.IsNull())
    {
      m_kernelId = kernelIdNode;
    }
    XmlNode ramdiskIdNode = resultNode.FirstChild("ramdisk");
    if(!ramdiskIdNode.IsNull())
    {
      m_ramdiskId = ramdiskIdNode;
    }
    XmlNode sriovNetSupportNode = resultNode.FirstChild("sriovNetSupport");
    if(!sriovNetSupportNode.IsNull())
    {
      m_sriovNetSupport = sriovNetSupportNode;
    }
    XmlNode bootModeNode = resultNode.FirstChild("bootMode");
    if(!bootModeNode.IsNull())
    {
      m_bootMode = bootModeNode;
    }
    XmlNode tpmSupportNode = resultNode.FirstChild("tpmSupport");
    if(!tpmSupportNode.IsNull())
    {
      m_tpmSupport = tpmSupportNode;
    }
    XmlNode uefiDataNode = resultNode.FirstChild("uefiData");
    if(!uefiDataNode.IsNull())
    {
      m_uefiData = uefiDataNode;
    }
    XmlNode lastLaunchedTimeNode = resultNode.FirstChild("lastLaunchedTime");
    if(!lastLaunchedTimeNode.IsNull())
    {
      m_lastLaunchedTime = lastLaunchedTimeNode;
    }
    XmlNode imdsSupportNode = resultNode.FirstChild("imdsSupport");
    if(!imdsSupportNode.IsNull())
    {
      m_imdsSupport = imdsSupportNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeImageAttributeResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
