/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetTransitGatewayAttachmentPropagationsResponse.h>
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

GetTransitGatewayAttachmentPropagationsResponse::GetTransitGatewayAttachmentPropagationsResponse()
{
}

GetTransitGatewayAttachmentPropagationsResponse::GetTransitGatewayAttachmentPropagationsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetTransitGatewayAttachmentPropagationsResponse& GetTransitGatewayAttachmentPropagationsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetTransitGatewayAttachmentPropagationsResponse"))
  {
    resultNode = rootNode.FirstChild("GetTransitGatewayAttachmentPropagationsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode transitGatewayAttachmentPropagationsNode = resultNode.FirstChild("transitGatewayAttachmentPropagations");
    if(!transitGatewayAttachmentPropagationsNode.IsNull())
    {
      XmlNode transitGatewayAttachmentPropagationsMember = transitGatewayAttachmentPropagationsNode.FirstChild("item");
      while(!transitGatewayAttachmentPropagationsMember.IsNull())
      {
        m_transitGatewayAttachmentPropagations.push_back(transitGatewayAttachmentPropagationsMember);
        transitGatewayAttachmentPropagationsMember = transitGatewayAttachmentPropagationsMember.NextNode("item");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetTransitGatewayAttachmentPropagationsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
