/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ClientVpnEndpoint.h>
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

ClientVpnEndpoint::ClientVpnEndpoint(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ClientVpnEndpoint& ClientVpnEndpoint::operator =(const XmlNode& xmlNode)
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
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode;
      m_statusHasBeenSet = true;
    }
    XmlNode creationTimeNode = resultNode.FirstChild("creationTime");
    if(!creationTimeNode.IsNull())
    {
      m_creationTime = Aws::Utils::Xml::DecodeEscapedXmlText(creationTimeNode.GetText());
      m_creationTimeHasBeenSet = true;
    }
    XmlNode deletionTimeNode = resultNode.FirstChild("deletionTime");
    if(!deletionTimeNode.IsNull())
    {
      m_deletionTime = Aws::Utils::Xml::DecodeEscapedXmlText(deletionTimeNode.GetText());
      m_deletionTimeHasBeenSet = true;
    }
    XmlNode dnsNameNode = resultNode.FirstChild("dnsName");
    if(!dnsNameNode.IsNull())
    {
      m_dnsName = Aws::Utils::Xml::DecodeEscapedXmlText(dnsNameNode.GetText());
      m_dnsNameHasBeenSet = true;
    }
    XmlNode clientCidrBlockNode = resultNode.FirstChild("clientCidrBlock");
    if(!clientCidrBlockNode.IsNull())
    {
      m_clientCidrBlock = Aws::Utils::Xml::DecodeEscapedXmlText(clientCidrBlockNode.GetText());
      m_clientCidrBlockHasBeenSet = true;
    }
    XmlNode dnsServersNode = resultNode.FirstChild("dnsServer");
    if(!dnsServersNode.IsNull())
    {
      XmlNode dnsServersMember = dnsServersNode.FirstChild("item");
      m_dnsServersHasBeenSet = !dnsServersMember.IsNull();
      while(!dnsServersMember.IsNull())
      {
        m_dnsServers.push_back(dnsServersMember.GetText());
        dnsServersMember = dnsServersMember.NextNode("item");
      }

      m_dnsServersHasBeenSet = true;
    }
    XmlNode splitTunnelNode = resultNode.FirstChild("splitTunnel");
    if(!splitTunnelNode.IsNull())
    {
      m_splitTunnel = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(splitTunnelNode.GetText()).c_str()).c_str());
      m_splitTunnelHasBeenSet = true;
    }
    XmlNode vpnProtocolNode = resultNode.FirstChild("vpnProtocol");
    if(!vpnProtocolNode.IsNull())
    {
      m_vpnProtocol = VpnProtocolMapper::GetVpnProtocolForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(vpnProtocolNode.GetText()).c_str()));
      m_vpnProtocolHasBeenSet = true;
    }
    XmlNode transportProtocolNode = resultNode.FirstChild("transportProtocol");
    if(!transportProtocolNode.IsNull())
    {
      m_transportProtocol = TransportProtocolMapper::GetTransportProtocolForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(transportProtocolNode.GetText()).c_str()));
      m_transportProtocolHasBeenSet = true;
    }
    XmlNode vpnPortNode = resultNode.FirstChild("vpnPort");
    if(!vpnPortNode.IsNull())
    {
      m_vpnPort = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(vpnPortNode.GetText()).c_str()).c_str());
      m_vpnPortHasBeenSet = true;
    }
    XmlNode serverCertificateArnNode = resultNode.FirstChild("serverCertificateArn");
    if(!serverCertificateArnNode.IsNull())
    {
      m_serverCertificateArn = Aws::Utils::Xml::DecodeEscapedXmlText(serverCertificateArnNode.GetText());
      m_serverCertificateArnHasBeenSet = true;
    }
    XmlNode authenticationOptionsNode = resultNode.FirstChild("authenticationOptions");
    if(!authenticationOptionsNode.IsNull())
    {
      XmlNode authenticationOptionsMember = authenticationOptionsNode.FirstChild("item");
      m_authenticationOptionsHasBeenSet = !authenticationOptionsMember.IsNull();
      while(!authenticationOptionsMember.IsNull())
      {
        m_authenticationOptions.push_back(authenticationOptionsMember);
        authenticationOptionsMember = authenticationOptionsMember.NextNode("item");
      }

      m_authenticationOptionsHasBeenSet = true;
    }
    XmlNode connectionLogOptionsNode = resultNode.FirstChild("connectionLogOptions");
    if(!connectionLogOptionsNode.IsNull())
    {
      m_connectionLogOptions = connectionLogOptionsNode;
      m_connectionLogOptionsHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      m_tagsHasBeenSet = !tagsMember.IsNull();
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode securityGroupIdsNode = resultNode.FirstChild("securityGroupIdSet");
    if(!securityGroupIdsNode.IsNull())
    {
      XmlNode securityGroupIdsMember = securityGroupIdsNode.FirstChild("item");
      m_securityGroupIdsHasBeenSet = !securityGroupIdsMember.IsNull();
      while(!securityGroupIdsMember.IsNull())
      {
        m_securityGroupIds.push_back(securityGroupIdsMember.GetText());
        securityGroupIdsMember = securityGroupIdsMember.NextNode("item");
      }

      m_securityGroupIdsHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode selfServicePortalUrlNode = resultNode.FirstChild("selfServicePortalUrl");
    if(!selfServicePortalUrlNode.IsNull())
    {
      m_selfServicePortalUrl = Aws::Utils::Xml::DecodeEscapedXmlText(selfServicePortalUrlNode.GetText());
      m_selfServicePortalUrlHasBeenSet = true;
    }
    XmlNode clientConnectOptionsNode = resultNode.FirstChild("clientConnectOptions");
    if(!clientConnectOptionsNode.IsNull())
    {
      m_clientConnectOptions = clientConnectOptionsNode;
      m_clientConnectOptionsHasBeenSet = true;
    }
    XmlNode sessionTimeoutHoursNode = resultNode.FirstChild("sessionTimeoutHours");
    if(!sessionTimeoutHoursNode.IsNull())
    {
      m_sessionTimeoutHours = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sessionTimeoutHoursNode.GetText()).c_str()).c_str());
      m_sessionTimeoutHoursHasBeenSet = true;
    }
    XmlNode clientLoginBannerOptionsNode = resultNode.FirstChild("clientLoginBannerOptions");
    if(!clientLoginBannerOptionsNode.IsNull())
    {
      m_clientLoginBannerOptions = clientLoginBannerOptionsNode;
      m_clientLoginBannerOptionsHasBeenSet = true;
    }
    XmlNode clientRouteEnforcementOptionsNode = resultNode.FirstChild("clientRouteEnforcementOptions");
    if(!clientRouteEnforcementOptionsNode.IsNull())
    {
      m_clientRouteEnforcementOptions = clientRouteEnforcementOptionsNode;
      m_clientRouteEnforcementOptionsHasBeenSet = true;
    }
    XmlNode disconnectOnSessionTimeoutNode = resultNode.FirstChild("disconnectOnSessionTimeout");
    if(!disconnectOnSessionTimeoutNode.IsNull())
    {
      m_disconnectOnSessionTimeout = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(disconnectOnSessionTimeoutNode.GetText()).c_str()).c_str());
      m_disconnectOnSessionTimeoutHasBeenSet = true;
    }
    XmlNode endpointIpAddressTypeNode = resultNode.FirstChild("endpointIpAddressType");
    if(!endpointIpAddressTypeNode.IsNull())
    {
      m_endpointIpAddressType = EndpointIpAddressTypeMapper::GetEndpointIpAddressTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endpointIpAddressTypeNode.GetText()).c_str()));
      m_endpointIpAddressTypeHasBeenSet = true;
    }
    XmlNode trafficIpAddressTypeNode = resultNode.FirstChild("trafficIpAddressType");
    if(!trafficIpAddressTypeNode.IsNull())
    {
      m_trafficIpAddressType = TrafficIpAddressTypeMapper::GetTrafficIpAddressTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(trafficIpAddressTypeNode.GetText()).c_str()));
      m_trafficIpAddressTypeHasBeenSet = true;
    }
  }

  return *this;
}

void ClientVpnEndpoint::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_clientVpnEndpointIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientVpnEndpointId=" << StringUtils::URLEncode(m_clientVpnEndpointId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      Aws::StringStream statusLocationAndMemberSs;
      statusLocationAndMemberSs << location << index << locationValue << ".Status";
      m_status.OutputToStream(oStream, statusLocationAndMemberSs.str().c_str());
  }

  if(m_creationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.c_str()) << "&";
  }

  if(m_deletionTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeletionTime=" << StringUtils::URLEncode(m_deletionTime.c_str()) << "&";
  }

  if(m_dnsNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DnsName=" << StringUtils::URLEncode(m_dnsName.c_str()) << "&";
  }

  if(m_clientCidrBlockHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientCidrBlock=" << StringUtils::URLEncode(m_clientCidrBlock.c_str()) << "&";
  }

  if(m_dnsServersHasBeenSet)
  {
      unsigned dnsServersIdx = 1;
      for(auto& item : m_dnsServers)
      {
        oStream << location << index << locationValue << ".DnsServer." << dnsServersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_splitTunnelHasBeenSet)
  {
      oStream << location << index << locationValue << ".SplitTunnel=" << std::boolalpha << m_splitTunnel << "&";
  }

  if(m_vpnProtocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpnProtocol=" << StringUtils::URLEncode(VpnProtocolMapper::GetNameForVpnProtocol(m_vpnProtocol)) << "&";
  }

  if(m_transportProtocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransportProtocol=" << StringUtils::URLEncode(TransportProtocolMapper::GetNameForTransportProtocol(m_transportProtocol)) << "&";
  }

  if(m_vpnPortHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpnPort=" << m_vpnPort << "&";
  }

  if(m_serverCertificateArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServerCertificateArn=" << StringUtils::URLEncode(m_serverCertificateArn.c_str()) << "&";
  }

  if(m_authenticationOptionsHasBeenSet)
  {
      unsigned authenticationOptionsIdx = 1;
      for(auto& item : m_authenticationOptions)
      {
        Aws::StringStream authenticationOptionsSs;
        authenticationOptionsSs << location << index << locationValue << ".AuthenticationOptions." << authenticationOptionsIdx++;
        item.OutputToStream(oStream, authenticationOptionsSs.str().c_str());
      }
  }

  if(m_connectionLogOptionsHasBeenSet)
  {
      Aws::StringStream connectionLogOptionsLocationAndMemberSs;
      connectionLogOptionsLocationAndMemberSs << location << index << locationValue << ".ConnectionLogOptions";
      m_connectionLogOptions.OutputToStream(oStream, connectionLogOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

  if(m_securityGroupIdsHasBeenSet)
  {
      unsigned securityGroupIdsIdx = 1;
      for(auto& item : m_securityGroupIds)
      {
        oStream << location << index << locationValue << ".SecurityGroupIdSet." << securityGroupIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_selfServicePortalUrlHasBeenSet)
  {
      oStream << location << index << locationValue << ".SelfServicePortalUrl=" << StringUtils::URLEncode(m_selfServicePortalUrl.c_str()) << "&";
  }

  if(m_clientConnectOptionsHasBeenSet)
  {
      Aws::StringStream clientConnectOptionsLocationAndMemberSs;
      clientConnectOptionsLocationAndMemberSs << location << index << locationValue << ".ClientConnectOptions";
      m_clientConnectOptions.OutputToStream(oStream, clientConnectOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_sessionTimeoutHoursHasBeenSet)
  {
      oStream << location << index << locationValue << ".SessionTimeoutHours=" << m_sessionTimeoutHours << "&";
  }

  if(m_clientLoginBannerOptionsHasBeenSet)
  {
      Aws::StringStream clientLoginBannerOptionsLocationAndMemberSs;
      clientLoginBannerOptionsLocationAndMemberSs << location << index << locationValue << ".ClientLoginBannerOptions";
      m_clientLoginBannerOptions.OutputToStream(oStream, clientLoginBannerOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_clientRouteEnforcementOptionsHasBeenSet)
  {
      Aws::StringStream clientRouteEnforcementOptionsLocationAndMemberSs;
      clientRouteEnforcementOptionsLocationAndMemberSs << location << index << locationValue << ".ClientRouteEnforcementOptions";
      m_clientRouteEnforcementOptions.OutputToStream(oStream, clientRouteEnforcementOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_disconnectOnSessionTimeoutHasBeenSet)
  {
      oStream << location << index << locationValue << ".DisconnectOnSessionTimeout=" << std::boolalpha << m_disconnectOnSessionTimeout << "&";
  }

  if(m_endpointIpAddressTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndpointIpAddressType=" << StringUtils::URLEncode(EndpointIpAddressTypeMapper::GetNameForEndpointIpAddressType(m_endpointIpAddressType)) << "&";
  }

  if(m_trafficIpAddressTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".TrafficIpAddressType=" << StringUtils::URLEncode(TrafficIpAddressTypeMapper::GetNameForTrafficIpAddressType(m_trafficIpAddressType)) << "&";
  }

}

void ClientVpnEndpoint::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_clientVpnEndpointIdHasBeenSet)
  {
      oStream << location << ".ClientVpnEndpointId=" << StringUtils::URLEncode(m_clientVpnEndpointId.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      Aws::String statusLocationAndMember(location);
      statusLocationAndMember += ".Status";
      m_status.OutputToStream(oStream, statusLocationAndMember.c_str());
  }
  if(m_creationTimeHasBeenSet)
  {
      oStream << location << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.c_str()) << "&";
  }
  if(m_deletionTimeHasBeenSet)
  {
      oStream << location << ".DeletionTime=" << StringUtils::URLEncode(m_deletionTime.c_str()) << "&";
  }
  if(m_dnsNameHasBeenSet)
  {
      oStream << location << ".DnsName=" << StringUtils::URLEncode(m_dnsName.c_str()) << "&";
  }
  if(m_clientCidrBlockHasBeenSet)
  {
      oStream << location << ".ClientCidrBlock=" << StringUtils::URLEncode(m_clientCidrBlock.c_str()) << "&";
  }
  if(m_dnsServersHasBeenSet)
  {
      unsigned dnsServersIdx = 1;
      for(auto& item : m_dnsServers)
      {
        oStream << location << ".DnsServer." << dnsServersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_splitTunnelHasBeenSet)
  {
      oStream << location << ".SplitTunnel=" << std::boolalpha << m_splitTunnel << "&";
  }
  if(m_vpnProtocolHasBeenSet)
  {
      oStream << location << ".VpnProtocol=" << StringUtils::URLEncode(VpnProtocolMapper::GetNameForVpnProtocol(m_vpnProtocol)) << "&";
  }
  if(m_transportProtocolHasBeenSet)
  {
      oStream << location << ".TransportProtocol=" << StringUtils::URLEncode(TransportProtocolMapper::GetNameForTransportProtocol(m_transportProtocol)) << "&";
  }
  if(m_vpnPortHasBeenSet)
  {
      oStream << location << ".VpnPort=" << m_vpnPort << "&";
  }
  if(m_serverCertificateArnHasBeenSet)
  {
      oStream << location << ".ServerCertificateArn=" << StringUtils::URLEncode(m_serverCertificateArn.c_str()) << "&";
  }
  if(m_authenticationOptionsHasBeenSet)
  {
      unsigned authenticationOptionsIdx = 1;
      for(auto& item : m_authenticationOptions)
      {
        Aws::StringStream authenticationOptionsSs;
        authenticationOptionsSs << location << ".AuthenticationOptions." << authenticationOptionsIdx++;
        item.OutputToStream(oStream, authenticationOptionsSs.str().c_str());
      }
  }
  if(m_connectionLogOptionsHasBeenSet)
  {
      Aws::String connectionLogOptionsLocationAndMember(location);
      connectionLogOptionsLocationAndMember += ".ConnectionLogOptions";
      m_connectionLogOptions.OutputToStream(oStream, connectionLogOptionsLocationAndMember.c_str());
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_securityGroupIdsHasBeenSet)
  {
      unsigned securityGroupIdsIdx = 1;
      for(auto& item : m_securityGroupIds)
      {
        oStream << location << ".SecurityGroupIdSet." << securityGroupIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_selfServicePortalUrlHasBeenSet)
  {
      oStream << location << ".SelfServicePortalUrl=" << StringUtils::URLEncode(m_selfServicePortalUrl.c_str()) << "&";
  }
  if(m_clientConnectOptionsHasBeenSet)
  {
      Aws::String clientConnectOptionsLocationAndMember(location);
      clientConnectOptionsLocationAndMember += ".ClientConnectOptions";
      m_clientConnectOptions.OutputToStream(oStream, clientConnectOptionsLocationAndMember.c_str());
  }
  if(m_sessionTimeoutHoursHasBeenSet)
  {
      oStream << location << ".SessionTimeoutHours=" << m_sessionTimeoutHours << "&";
  }
  if(m_clientLoginBannerOptionsHasBeenSet)
  {
      Aws::String clientLoginBannerOptionsLocationAndMember(location);
      clientLoginBannerOptionsLocationAndMember += ".ClientLoginBannerOptions";
      m_clientLoginBannerOptions.OutputToStream(oStream, clientLoginBannerOptionsLocationAndMember.c_str());
  }
  if(m_clientRouteEnforcementOptionsHasBeenSet)
  {
      Aws::String clientRouteEnforcementOptionsLocationAndMember(location);
      clientRouteEnforcementOptionsLocationAndMember += ".ClientRouteEnforcementOptions";
      m_clientRouteEnforcementOptions.OutputToStream(oStream, clientRouteEnforcementOptionsLocationAndMember.c_str());
  }
  if(m_disconnectOnSessionTimeoutHasBeenSet)
  {
      oStream << location << ".DisconnectOnSessionTimeout=" << std::boolalpha << m_disconnectOnSessionTimeout << "&";
  }
  if(m_endpointIpAddressTypeHasBeenSet)
  {
      oStream << location << ".EndpointIpAddressType=" << StringUtils::URLEncode(EndpointIpAddressTypeMapper::GetNameForEndpointIpAddressType(m_endpointIpAddressType)) << "&";
  }
  if(m_trafficIpAddressTypeHasBeenSet)
  {
      oStream << location << ".TrafficIpAddressType=" << StringUtils::URLEncode(TrafficIpAddressTypeMapper::GetNameForTrafficIpAddressType(m_trafficIpAddressType)) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
