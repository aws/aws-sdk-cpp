/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeClientVpnTargetNetworksResponse.h>
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

DescribeClientVpnTargetNetworksResponse::DescribeClientVpnTargetNetworksResponse()
{
}

DescribeClientVpnTargetNetworksResponse::DescribeClientVpnTargetNetworksResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeClientVpnTargetNetworksResponse& DescribeClientVpnTargetNetworksResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeClientVpnTargetNetworksResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeClientVpnTargetNetworksResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode clientVpnTargetNetworksNode = resultNode.FirstChild("clientVpnTargetNetworks");
    if(!clientVpnTargetNetworksNode.IsNull())
    {
      XmlNode clientVpnTargetNetworksMember = clientVpnTargetNetworksNode.FirstChild("item");
      while(!clientVpnTargetNetworksMember.IsNull())
      {
        m_clientVpnTargetNetworks.push_back(clientVpnTargetNetworksMember);
        clientVpnTargetNetworksMember = clientVpnTargetNetworksMember.NextNode("item");
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
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeClientVpnTargetNetworksResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
