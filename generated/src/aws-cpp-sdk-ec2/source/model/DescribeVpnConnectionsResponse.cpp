/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeVpnConnectionsResponse.h>
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

DescribeVpnConnectionsResponse::DescribeVpnConnectionsResponse()
{
}

DescribeVpnConnectionsResponse::DescribeVpnConnectionsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeVpnConnectionsResponse& DescribeVpnConnectionsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeVpnConnectionsResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeVpnConnectionsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode vpnConnectionsNode = resultNode.FirstChild("vpnConnectionSet");
    if(!vpnConnectionsNode.IsNull())
    {
      XmlNode vpnConnectionsMember = vpnConnectionsNode.FirstChild("item");
      while(!vpnConnectionsMember.IsNull())
      {
        m_vpnConnections.push_back(vpnConnectionsMember);
        vpnConnectionsMember = vpnConnectionsMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeVpnConnectionsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
