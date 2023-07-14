﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TerminateClientVpnConnectionsResponse.h>
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

TerminateClientVpnConnectionsResponse::TerminateClientVpnConnectionsResponse()
{
}

TerminateClientVpnConnectionsResponse::TerminateClientVpnConnectionsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

TerminateClientVpnConnectionsResponse& TerminateClientVpnConnectionsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "TerminateClientVpnConnectionsResponse"))
  {
    resultNode = rootNode.FirstChild("TerminateClientVpnConnectionsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode clientVpnEndpointIdNode = resultNode.FirstChild("clientVpnEndpointId");
    if(!clientVpnEndpointIdNode.IsNull())
    {
      m_clientVpnEndpointId = Aws::Utils::Xml::DecodeEscapedXmlText(clientVpnEndpointIdNode.GetText());
    }
    XmlNode usernameNode = resultNode.FirstChild("username");
    if(!usernameNode.IsNull())
    {
      m_username = Aws::Utils::Xml::DecodeEscapedXmlText(usernameNode.GetText());
    }
    XmlNode connectionStatusesNode = resultNode.FirstChild("connectionStatuses");
    if(!connectionStatusesNode.IsNull())
    {
      XmlNode connectionStatusesMember = connectionStatusesNode.FirstChild("item");
      while(!connectionStatusesMember.IsNull())
      {
        m_connectionStatuses.push_back(connectionStatusesMember);
        connectionStatusesMember = connectionStatusesMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::TerminateClientVpnConnectionsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
