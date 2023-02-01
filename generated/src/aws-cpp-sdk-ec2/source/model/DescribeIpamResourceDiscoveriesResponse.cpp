/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeIpamResourceDiscoveriesResponse.h>
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

DescribeIpamResourceDiscoveriesResponse::DescribeIpamResourceDiscoveriesResponse()
{
}

DescribeIpamResourceDiscoveriesResponse::DescribeIpamResourceDiscoveriesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeIpamResourceDiscoveriesResponse& DescribeIpamResourceDiscoveriesResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeIpamResourceDiscoveriesResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeIpamResourceDiscoveriesResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode ipamResourceDiscoveriesNode = resultNode.FirstChild("ipamResourceDiscoverySet");
    if(!ipamResourceDiscoveriesNode.IsNull())
    {
      XmlNode ipamResourceDiscoveriesMember = ipamResourceDiscoveriesNode.FirstChild("item");
      while(!ipamResourceDiscoveriesMember.IsNull())
      {
        m_ipamResourceDiscoveries.push_back(ipamResourceDiscoveriesMember);
        ipamResourceDiscoveriesMember = ipamResourceDiscoveriesMember.NextNode("item");
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
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeIpamResourceDiscoveriesResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
