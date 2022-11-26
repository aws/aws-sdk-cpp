﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AssignIpv6AddressesResponse.h>
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

AssignIpv6AddressesResponse::AssignIpv6AddressesResponse()
{
}

AssignIpv6AddressesResponse::AssignIpv6AddressesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

AssignIpv6AddressesResponse& AssignIpv6AddressesResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "AssignIpv6AddressesResponse"))
  {
    resultNode = rootNode.FirstChild("AssignIpv6AddressesResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode assignedIpv6AddressesNode = resultNode.FirstChild("assignedIpv6Addresses");
    if(!assignedIpv6AddressesNode.IsNull())
    {
      XmlNode assignedIpv6AddressesMember = assignedIpv6AddressesNode.FirstChild("item");
      while(!assignedIpv6AddressesMember.IsNull())
      {
        m_assignedIpv6Addresses.push_back(assignedIpv6AddressesMember.GetText());
        assignedIpv6AddressesMember = assignedIpv6AddressesMember.NextNode("item");
      }

    }
    XmlNode assignedIpv6PrefixesNode = resultNode.FirstChild("assignedIpv6PrefixSet");
    if(!assignedIpv6PrefixesNode.IsNull())
    {
      XmlNode assignedIpv6PrefixesMember = assignedIpv6PrefixesNode.FirstChild("item");
      while(!assignedIpv6PrefixesMember.IsNull())
      {
        m_assignedIpv6Prefixes.push_back(assignedIpv6PrefixesMember.GetText());
        assignedIpv6PrefixesMember = assignedIpv6PrefixesMember.NextNode("item");
      }

    }
    XmlNode networkInterfaceIdNode = resultNode.FirstChild("networkInterfaceId");
    if(!networkInterfaceIdNode.IsNull())
    {
      m_networkInterfaceId = Aws::Utils::Xml::DecodeEscapedXmlText(networkInterfaceIdNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::AssignIpv6AddressesResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
