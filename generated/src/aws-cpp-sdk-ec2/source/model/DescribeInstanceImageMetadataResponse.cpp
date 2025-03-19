/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeInstanceImageMetadataResponse.h>
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

DescribeInstanceImageMetadataResponse::DescribeInstanceImageMetadataResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeInstanceImageMetadataResponse& DescribeInstanceImageMetadataResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeInstanceImageMetadataResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeInstanceImageMetadataResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode instanceImageMetadataNode = resultNode.FirstChild("instanceImageMetadataSet");
    if(!instanceImageMetadataNode.IsNull())
    {
      XmlNode instanceImageMetadataMember = instanceImageMetadataNode.FirstChild("item");
      m_instanceImageMetadataHasBeenSet = !instanceImageMetadataMember.IsNull();
      while(!instanceImageMetadataMember.IsNull())
      {
        m_instanceImageMetadata.push_back(instanceImageMetadataMember);
        instanceImageMetadataMember = instanceImageMetadataMember.NextNode("item");
      }

      m_instanceImageMetadataHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeInstanceImageMetadataResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
