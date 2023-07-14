﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AssignPrivateIpAddressesResponse.h>
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

AssignPrivateIpAddressesResponse::AssignPrivateIpAddressesResponse()
{
}

AssignPrivateIpAddressesResponse::AssignPrivateIpAddressesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

AssignPrivateIpAddressesResponse& AssignPrivateIpAddressesResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "AssignPrivateIpAddressesResponse"))
  {
    resultNode = rootNode.FirstChild("AssignPrivateIpAddressesResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode networkInterfaceIdNode = resultNode.FirstChild("networkInterfaceId");
    if(!networkInterfaceIdNode.IsNull())
    {
      m_networkInterfaceId = Aws::Utils::Xml::DecodeEscapedXmlText(networkInterfaceIdNode.GetText());
    }
    XmlNode assignedPrivateIpAddressesNode = resultNode.FirstChild("assignedPrivateIpAddressesSet");
    if(!assignedPrivateIpAddressesNode.IsNull())
    {
      XmlNode assignedPrivateIpAddressesMember = assignedPrivateIpAddressesNode.FirstChild("item");
      while(!assignedPrivateIpAddressesMember.IsNull())
      {
        m_assignedPrivateIpAddresses.push_back(assignedPrivateIpAddressesMember);
        assignedPrivateIpAddressesMember = assignedPrivateIpAddressesMember.NextNode("item");
      }

    }
    XmlNode assignedIpv4PrefixesNode = resultNode.FirstChild("assignedIpv4PrefixSet");
    if(!assignedIpv4PrefixesNode.IsNull())
    {
      XmlNode assignedIpv4PrefixesMember = assignedIpv4PrefixesNode.FirstChild("item");
      while(!assignedIpv4PrefixesMember.IsNull())
      {
        m_assignedIpv4Prefixes.push_back(assignedIpv4PrefixesMember);
        assignedIpv4PrefixesMember = assignedIpv4PrefixesMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::AssignPrivateIpAddressesResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
