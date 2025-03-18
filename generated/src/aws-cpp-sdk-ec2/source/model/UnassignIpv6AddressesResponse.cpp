/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/UnassignIpv6AddressesResponse.h>
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

UnassignIpv6AddressesResponse::UnassignIpv6AddressesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

UnassignIpv6AddressesResponse& UnassignIpv6AddressesResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "UnassignIpv6AddressesResponse"))
  {
    resultNode = rootNode.FirstChild("UnassignIpv6AddressesResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode networkInterfaceIdNode = resultNode.FirstChild("networkInterfaceId");
    if(!networkInterfaceIdNode.IsNull())
    {
      m_networkInterfaceId = Aws::Utils::Xml::DecodeEscapedXmlText(networkInterfaceIdNode.GetText());
      m_networkInterfaceIdHasBeenSet = true;
    }
    XmlNode unassignedIpv6AddressesNode = resultNode.FirstChild("unassignedIpv6Addresses");
    if(!unassignedIpv6AddressesNode.IsNull())
    {
      XmlNode unassignedIpv6AddressesMember = unassignedIpv6AddressesNode.FirstChild("item");
      m_unassignedIpv6AddressesHasBeenSet = !unassignedIpv6AddressesMember.IsNull();
      while(!unassignedIpv6AddressesMember.IsNull())
      {
        m_unassignedIpv6Addresses.push_back(unassignedIpv6AddressesMember.GetText());
        unassignedIpv6AddressesMember = unassignedIpv6AddressesMember.NextNode("item");
      }

      m_unassignedIpv6AddressesHasBeenSet = true;
    }
    XmlNode unassignedIpv6PrefixesNode = resultNode.FirstChild("unassignedIpv6PrefixSet");
    if(!unassignedIpv6PrefixesNode.IsNull())
    {
      XmlNode unassignedIpv6PrefixesMember = unassignedIpv6PrefixesNode.FirstChild("item");
      m_unassignedIpv6PrefixesHasBeenSet = !unassignedIpv6PrefixesMember.IsNull();
      while(!unassignedIpv6PrefixesMember.IsNull())
      {
        m_unassignedIpv6Prefixes.push_back(unassignedIpv6PrefixesMember.GetText());
        unassignedIpv6PrefixesMember = unassignedIpv6PrefixesMember.NextNode("item");
      }

      m_unassignedIpv6PrefixesHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::UnassignIpv6AddressesResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
