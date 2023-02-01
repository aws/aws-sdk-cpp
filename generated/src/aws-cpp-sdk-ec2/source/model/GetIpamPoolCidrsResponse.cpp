/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetIpamPoolCidrsResponse.h>
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

GetIpamPoolCidrsResponse::GetIpamPoolCidrsResponse()
{
}

GetIpamPoolCidrsResponse::GetIpamPoolCidrsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetIpamPoolCidrsResponse& GetIpamPoolCidrsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetIpamPoolCidrsResponse"))
  {
    resultNode = rootNode.FirstChild("GetIpamPoolCidrsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode ipamPoolCidrsNode = resultNode.FirstChild("ipamPoolCidrSet");
    if(!ipamPoolCidrsNode.IsNull())
    {
      XmlNode ipamPoolCidrsMember = ipamPoolCidrsNode.FirstChild("item");
      while(!ipamPoolCidrsMember.IsNull())
      {
        m_ipamPoolCidrs.push_back(ipamPoolCidrsMember);
        ipamPoolCidrsMember = ipamPoolCidrsMember.NextNode("item");
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
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetIpamPoolCidrsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
