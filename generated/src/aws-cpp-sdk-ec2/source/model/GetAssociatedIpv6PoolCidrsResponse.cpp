/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetAssociatedIpv6PoolCidrsResponse.h>
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

GetAssociatedIpv6PoolCidrsResponse::GetAssociatedIpv6PoolCidrsResponse()
{
}

GetAssociatedIpv6PoolCidrsResponse::GetAssociatedIpv6PoolCidrsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetAssociatedIpv6PoolCidrsResponse& GetAssociatedIpv6PoolCidrsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetAssociatedIpv6PoolCidrsResponse"))
  {
    resultNode = rootNode.FirstChild("GetAssociatedIpv6PoolCidrsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode ipv6CidrAssociationsNode = resultNode.FirstChild("ipv6CidrAssociationSet");
    if(!ipv6CidrAssociationsNode.IsNull())
    {
      XmlNode ipv6CidrAssociationsMember = ipv6CidrAssociationsNode.FirstChild("item");
      while(!ipv6CidrAssociationsMember.IsNull())
      {
        m_ipv6CidrAssociations.push_back(ipv6CidrAssociationsMember);
        ipv6CidrAssociationsMember = ipv6CidrAssociationsMember.NextNode("item");
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
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetAssociatedIpv6PoolCidrsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
