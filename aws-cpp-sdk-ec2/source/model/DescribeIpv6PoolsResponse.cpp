/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeIpv6PoolsResponse.h>
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

DescribeIpv6PoolsResponse::DescribeIpv6PoolsResponse()
{
}

DescribeIpv6PoolsResponse::DescribeIpv6PoolsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeIpv6PoolsResponse& DescribeIpv6PoolsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeIpv6PoolsResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeIpv6PoolsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode ipv6PoolsNode = resultNode.FirstChild("ipv6PoolSet");
    if(!ipv6PoolsNode.IsNull())
    {
      XmlNode ipv6PoolsMember = ipv6PoolsNode.FirstChild("item");
      while(!ipv6PoolsMember.IsNull())
      {
        m_ipv6Pools.push_back(ipv6PoolsMember);
        ipv6PoolsMember = ipv6PoolsMember.NextNode("item");
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
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeIpv6PoolsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
