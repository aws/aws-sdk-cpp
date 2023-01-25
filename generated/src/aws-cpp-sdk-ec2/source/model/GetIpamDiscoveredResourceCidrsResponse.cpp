/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetIpamDiscoveredResourceCidrsResponse.h>
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

GetIpamDiscoveredResourceCidrsResponse::GetIpamDiscoveredResourceCidrsResponse()
{
}

GetIpamDiscoveredResourceCidrsResponse::GetIpamDiscoveredResourceCidrsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetIpamDiscoveredResourceCidrsResponse& GetIpamDiscoveredResourceCidrsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetIpamDiscoveredResourceCidrsResponse"))
  {
    resultNode = rootNode.FirstChild("GetIpamDiscoveredResourceCidrsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode ipamDiscoveredResourceCidrsNode = resultNode.FirstChild("ipamDiscoveredResourceCidrSet");
    if(!ipamDiscoveredResourceCidrsNode.IsNull())
    {
      XmlNode ipamDiscoveredResourceCidrsMember = ipamDiscoveredResourceCidrsNode.FirstChild("item");
      while(!ipamDiscoveredResourceCidrsMember.IsNull())
      {
        m_ipamDiscoveredResourceCidrs.push_back(ipamDiscoveredResourceCidrsMember);
        ipamDiscoveredResourceCidrsMember = ipamDiscoveredResourceCidrsMember.NextNode("item");
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
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetIpamDiscoveredResourceCidrsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
