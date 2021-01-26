/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ClientVpnConnection.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

ClientVpnConnection::ClientVpnConnection() : 
    m_clientVpnEndpointIdHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_connectionIdHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_connectionEstablishedTimeHasBeenSet(false),
    m_ingressBytesHasBeenSet(false),
    m_egressBytesHasBeenSet(false),
    m_ingressPacketsHasBeenSet(false),
    m_egressPacketsHasBeenSet(false),
    m_clientIpHasBeenSet(false),
    m_commonNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_connectionEndTimeHasBeenSet(false),
    m_postureComplianceStatusesHasBeenSet(false)
{
}

ClientVpnConnection::ClientVpnConnection(const XmlNode& xmlNode) : 
    m_clientVpnEndpointIdHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_connectionIdHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_connectionEstablishedTimeHasBeenSet(false),
    m_ingressBytesHasBeenSet(false),
    m_egressBytesHasBeenSet(false),
    m_ingressPacketsHasBeenSet(false),
    m_egressPacketsHasBeenSet(false),
    m_clientIpHasBeenSet(false),
    m_commonNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_connectionEndTimeHasBeenSet(false),
    m_postureComplianceStatusesHasBeenSet(false)
{
  *this = xmlNode;
}

ClientVpnConnection& ClientVpnConnection::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode clientVpnEndpointIdNode = resultNode.FirstChild("clientVpnEndpointId");
    if(!clientVpnEndpointIdNode.IsNull())
    {
      m_clientVpnEndpointId = Aws::Utils::Xml::DecodeEscapedXmlText(clientVpnEndpointIdNode.GetText());
      m_clientVpnEndpointIdHasBeenSet = true;
    }
    XmlNode timestampNode = resultNode.FirstChild("timestamp");
    if(!timestampNode.IsNull())
    {
      m_timestamp = Aws::Utils::Xml::DecodeEscapedXmlText(timestampNode.GetText());
      m_timestampHasBeenSet = true;
    }
    XmlNode connectionIdNode = resultNode.FirstChild("connectionId");
    if(!connectionIdNode.IsNull())
    {
      m_connectionId = Aws::Utils::Xml::DecodeEscapedXmlText(connectionIdNode.GetText());
      m_connectionIdHasBeenSet = true;
    }
    XmlNode usernameNode = resultNode.FirstChild("username");
    if(!usernameNode.IsNull())
    {
      m_username = Aws::Utils::Xml::DecodeEscapedXmlText(usernameNode.GetText());
      m_usernameHasBeenSet = true;
    }
    XmlNode connectionEstablishedTimeNode = resultNode.FirstChild("connectionEstablishedTime");
    if(!connectionEstablishedTimeNode.IsNull())
    {
      m_connectionEstablishedTime = Aws::Utils::Xml::DecodeEscapedXmlText(connectionEstablishedTimeNode.GetText());
      m_connectionEstablishedTimeHasBeenSet = true;
    }
    XmlNode ingressBytesNode = resultNode.FirstChild("ingressBytes");
    if(!ingressBytesNode.IsNull())
    {
      m_ingressBytes = Aws::Utils::Xml::DecodeEscapedXmlText(ingressBytesNode.GetText());
      m_ingressBytesHasBeenSet = true;
    }
    XmlNode egressBytesNode = resultNode.FirstChild("egressBytes");
    if(!egressBytesNode.IsNull())
    {
      m_egressBytes = Aws::Utils::Xml::DecodeEscapedXmlText(egressBytesNode.GetText());
      m_egressBytesHasBeenSet = true;
    }
    XmlNode ingressPacketsNode = resultNode.FirstChild("ingressPackets");
    if(!ingressPacketsNode.IsNull())
    {
      m_ingressPackets = Aws::Utils::Xml::DecodeEscapedXmlText(ingressPacketsNode.GetText());
      m_ingressPacketsHasBeenSet = true;
    }
    XmlNode egressPacketsNode = resultNode.FirstChild("egressPackets");
    if(!egressPacketsNode.IsNull())
    {
      m_egressPackets = Aws::Utils::Xml::DecodeEscapedXmlText(egressPacketsNode.GetText());
      m_egressPacketsHasBeenSet = true;
    }
    XmlNode clientIpNode = resultNode.FirstChild("clientIp");
    if(!clientIpNode.IsNull())
    {
      m_clientIp = Aws::Utils::Xml::DecodeEscapedXmlText(clientIpNode.GetText());
      m_clientIpHasBeenSet = true;
    }
    XmlNode commonNameNode = resultNode.FirstChild("commonName");
    if(!commonNameNode.IsNull())
    {
      m_commonName = Aws::Utils::Xml::DecodeEscapedXmlText(commonNameNode.GetText());
      m_commonNameHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode;
      m_statusHasBeenSet = true;
    }
    XmlNode connectionEndTimeNode = resultNode.FirstChild("connectionEndTime");
    if(!connectionEndTimeNode.IsNull())
    {
      m_connectionEndTime = Aws::Utils::Xml::DecodeEscapedXmlText(connectionEndTimeNode.GetText());
      m_connectionEndTimeHasBeenSet = true;
    }
    XmlNode postureComplianceStatusesNode = resultNode.FirstChild("postureComplianceStatusSet");
    if(!postureComplianceStatusesNode.IsNull())
    {
      XmlNode postureComplianceStatusesMember = postureComplianceStatusesNode.FirstChild("item");
      while(!postureComplianceStatusesMember.IsNull())
      {
        m_postureComplianceStatuses.push_back(postureComplianceStatusesMember.GetText());
        postureComplianceStatusesMember = postureComplianceStatusesMember.NextNode("item");
      }

      m_postureComplianceStatusesHasBeenSet = true;
    }
  }

  return *this;
}

void ClientVpnConnection::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_clientVpnEndpointIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientVpnEndpointId=" << StringUtils::URLEncode(m_clientVpnEndpointId.c_str()) << "&";
  }

  if(m_timestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.c_str()) << "&";
  }

  if(m_connectionIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ConnectionId=" << StringUtils::URLEncode(m_connectionId.c_str()) << "&";
  }

  if(m_usernameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Username=" << StringUtils::URLEncode(m_username.c_str()) << "&";
  }

  if(m_connectionEstablishedTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ConnectionEstablishedTime=" << StringUtils::URLEncode(m_connectionEstablishedTime.c_str()) << "&";
  }

  if(m_ingressBytesHasBeenSet)
  {
      oStream << location << index << locationValue << ".IngressBytes=" << StringUtils::URLEncode(m_ingressBytes.c_str()) << "&";
  }

  if(m_egressBytesHasBeenSet)
  {
      oStream << location << index << locationValue << ".EgressBytes=" << StringUtils::URLEncode(m_egressBytes.c_str()) << "&";
  }

  if(m_ingressPacketsHasBeenSet)
  {
      oStream << location << index << locationValue << ".IngressPackets=" << StringUtils::URLEncode(m_ingressPackets.c_str()) << "&";
  }

  if(m_egressPacketsHasBeenSet)
  {
      oStream << location << index << locationValue << ".EgressPackets=" << StringUtils::URLEncode(m_egressPackets.c_str()) << "&";
  }

  if(m_clientIpHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientIp=" << StringUtils::URLEncode(m_clientIp.c_str()) << "&";
  }

  if(m_commonNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".CommonName=" << StringUtils::URLEncode(m_commonName.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      Aws::StringStream statusLocationAndMemberSs;
      statusLocationAndMemberSs << location << index << locationValue << ".Status";
      m_status.OutputToStream(oStream, statusLocationAndMemberSs.str().c_str());
  }

  if(m_connectionEndTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ConnectionEndTime=" << StringUtils::URLEncode(m_connectionEndTime.c_str()) << "&";
  }

  if(m_postureComplianceStatusesHasBeenSet)
  {
      unsigned postureComplianceStatusesIdx = 1;
      for(auto& item : m_postureComplianceStatuses)
      {
        oStream << location << index << locationValue << ".PostureComplianceStatusSet." << postureComplianceStatusesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void ClientVpnConnection::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_clientVpnEndpointIdHasBeenSet)
  {
      oStream << location << ".ClientVpnEndpointId=" << StringUtils::URLEncode(m_clientVpnEndpointId.c_str()) << "&";
  }
  if(m_timestampHasBeenSet)
  {
      oStream << location << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.c_str()) << "&";
  }
  if(m_connectionIdHasBeenSet)
  {
      oStream << location << ".ConnectionId=" << StringUtils::URLEncode(m_connectionId.c_str()) << "&";
  }
  if(m_usernameHasBeenSet)
  {
      oStream << location << ".Username=" << StringUtils::URLEncode(m_username.c_str()) << "&";
  }
  if(m_connectionEstablishedTimeHasBeenSet)
  {
      oStream << location << ".ConnectionEstablishedTime=" << StringUtils::URLEncode(m_connectionEstablishedTime.c_str()) << "&";
  }
  if(m_ingressBytesHasBeenSet)
  {
      oStream << location << ".IngressBytes=" << StringUtils::URLEncode(m_ingressBytes.c_str()) << "&";
  }
  if(m_egressBytesHasBeenSet)
  {
      oStream << location << ".EgressBytes=" << StringUtils::URLEncode(m_egressBytes.c_str()) << "&";
  }
  if(m_ingressPacketsHasBeenSet)
  {
      oStream << location << ".IngressPackets=" << StringUtils::URLEncode(m_ingressPackets.c_str()) << "&";
  }
  if(m_egressPacketsHasBeenSet)
  {
      oStream << location << ".EgressPackets=" << StringUtils::URLEncode(m_egressPackets.c_str()) << "&";
  }
  if(m_clientIpHasBeenSet)
  {
      oStream << location << ".ClientIp=" << StringUtils::URLEncode(m_clientIp.c_str()) << "&";
  }
  if(m_commonNameHasBeenSet)
  {
      oStream << location << ".CommonName=" << StringUtils::URLEncode(m_commonName.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      Aws::String statusLocationAndMember(location);
      statusLocationAndMember += ".Status";
      m_status.OutputToStream(oStream, statusLocationAndMember.c_str());
  }
  if(m_connectionEndTimeHasBeenSet)
  {
      oStream << location << ".ConnectionEndTime=" << StringUtils::URLEncode(m_connectionEndTime.c_str()) << "&";
  }
  if(m_postureComplianceStatusesHasBeenSet)
  {
      unsigned postureComplianceStatusesIdx = 1;
      for(auto& item : m_postureComplianceStatuses)
      {
        oStream << location << ".PostureComplianceStatusSet." << postureComplianceStatusesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
