/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetVpnTunnelReplacementStatusResponse.h>
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

GetVpnTunnelReplacementStatusResponse::GetVpnTunnelReplacementStatusResponse()
{
}

GetVpnTunnelReplacementStatusResponse::GetVpnTunnelReplacementStatusResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetVpnTunnelReplacementStatusResponse& GetVpnTunnelReplacementStatusResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetVpnTunnelReplacementStatusResponse"))
  {
    resultNode = rootNode.FirstChild("GetVpnTunnelReplacementStatusResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode vpnConnectionIdNode = resultNode.FirstChild("vpnConnectionId");
    if(!vpnConnectionIdNode.IsNull())
    {
      m_vpnConnectionId = Aws::Utils::Xml::DecodeEscapedXmlText(vpnConnectionIdNode.GetText());
    }
    XmlNode transitGatewayIdNode = resultNode.FirstChild("transitGatewayId");
    if(!transitGatewayIdNode.IsNull())
    {
      m_transitGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayIdNode.GetText());
    }
    XmlNode customerGatewayIdNode = resultNode.FirstChild("customerGatewayId");
    if(!customerGatewayIdNode.IsNull())
    {
      m_customerGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(customerGatewayIdNode.GetText());
    }
    XmlNode vpnGatewayIdNode = resultNode.FirstChild("vpnGatewayId");
    if(!vpnGatewayIdNode.IsNull())
    {
      m_vpnGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(vpnGatewayIdNode.GetText());
    }
    XmlNode vpnTunnelOutsideIpAddressNode = resultNode.FirstChild("vpnTunnelOutsideIpAddress");
    if(!vpnTunnelOutsideIpAddressNode.IsNull())
    {
      m_vpnTunnelOutsideIpAddress = Aws::Utils::Xml::DecodeEscapedXmlText(vpnTunnelOutsideIpAddressNode.GetText());
    }
    XmlNode maintenanceDetailsNode = resultNode.FirstChild("maintenanceDetails");
    if(!maintenanceDetailsNode.IsNull())
    {
      m_maintenanceDetails = maintenanceDetailsNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetVpnTunnelReplacementStatusResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
