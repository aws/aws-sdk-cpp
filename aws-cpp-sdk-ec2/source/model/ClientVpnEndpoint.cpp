/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

ClientVpnEndpoint::ClientVpnEndpoint() : 
    m_clientVpnEndpointIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_deletionTimeHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_clientCidrBlockHasBeenSet(false),
    m_dnsServersHasBeenSet(false),
    m_splitTunnel(false),
    m_splitTunnelHasBeenSet(false),
    m_vpnProtocol(VpnProtocol::NOT_SET),
    m_vpnProtocolHasBeenSet(false),
    m_transportProtocol(TransportProtocol::NOT_SET),
    m_transportProtocolHasBeenSet(false),
    m_serverCertificateArnHasBeenSet(false),
    m_authenticationOptionsHasBeenSet(false),
    m_connectionLogOptionsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ClientVpnEndpoint::ClientVpnEndpoint(const XmlNode& xmlNode) : 
    m_clientVpnEndpointIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_deletionTimeHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_clientCidrBlockHasBeenSet(false),
    m_dnsServersHasBeenSet(false),
    m_splitTunnel(false),
    m_splitTunnelHasBeenSet(false),
    m_vpnProtocol(VpnProtocol::NOT_SET),
    m_vpnProtocolHasBeenSet(false),
    m_transportProtocol(TransportProtocol::NOT_SET),
    m_transportProtocolHasBeenSet(false),
    m_serverCertificateArnHasBeenSet(false),
    m_authenticationOptionsHasBeenSet(false),
    m_connectionLogOptionsHasBeenSet(false),
    m_tagsHasBeenSet(false)
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
      m_clientVpnEndpointId = clientVpnEndpointIdNode.GetText();
      m_clientVpnEndpointIdHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
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
      m_creationTime = creationTimeNode.GetText();
      m_creationTimeHasBeenSet = true;
    }
    XmlNode deletionTimeNode = resultNode.FirstChild("deletionTime");
    if(!deletionTimeNode.IsNull())
    {
      m_deletionTime = deletionTimeNode.GetText();
      m_deletionTimeHasBeenSet = true;
    }
    XmlNode dnsNameNode = resultNode.FirstChild("dnsName");
    if(!dnsNameNode.IsNull())
    {
      m_dnsName = dnsNameNode.GetText();
      m_dnsNameHasBeenSet = true;
    }
    XmlNode clientCidrBlockNode = resultNode.FirstChild("clientCidrBlock");
    if(!clientCidrBlockNode.IsNull())
    {
      m_clientCidrBlock = clientCidrBlockNode.GetText();
      m_clientCidrBlockHasBeenSet = true;
    }
    XmlNode dnsServersNode = resultNode.FirstChild("dnsServer");
    if(!dnsServersNode.IsNull())
    {
      XmlNode dnsServersMember = dnsServersNode.FirstChild("item");
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
      m_splitTunnel = StringUtils::ConvertToBool(StringUtils::Trim(splitTunnelNode.GetText().c_str()).c_str());
      m_splitTunnelHasBeenSet = true;
    }
    XmlNode vpnProtocolNode = resultNode.FirstChild("vpnProtocol");
    if(!vpnProtocolNode.IsNull())
    {
      m_vpnProtocol = VpnProtocolMapper::GetVpnProtocolForName(StringUtils::Trim(vpnProtocolNode.GetText().c_str()).c_str());
      m_vpnProtocolHasBeenSet = true;
    }
    XmlNode transportProtocolNode = resultNode.FirstChild("transportProtocol");
    if(!transportProtocolNode.IsNull())
    {
      m_transportProtocol = TransportProtocolMapper::GetTransportProtocolForName(StringUtils::Trim(transportProtocolNode.GetText().c_str()).c_str());
      m_transportProtocolHasBeenSet = true;
    }
    XmlNode serverCertificateArnNode = resultNode.FirstChild("serverCertificateArn");
    if(!serverCertificateArnNode.IsNull())
    {
      m_serverCertificateArn = serverCertificateArnNode.GetText();
      m_serverCertificateArnHasBeenSet = true;
    }
    XmlNode authenticationOptionsNode = resultNode.FirstChild("authenticationOptions");
    if(!authenticationOptionsNode.IsNull())
    {
      XmlNode authenticationOptionsMember = authenticationOptionsNode.FirstChild("item");
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
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
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
      oStream << location << index << locationValue << ".VpnProtocol=" << VpnProtocolMapper::GetNameForVpnProtocol(m_vpnProtocol) << "&";
  }

  if(m_transportProtocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransportProtocol=" << TransportProtocolMapper::GetNameForTransportProtocol(m_transportProtocol) << "&";
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
      oStream << location << ".VpnProtocol=" << VpnProtocolMapper::GetNameForVpnProtocol(m_vpnProtocol) << "&";
  }
  if(m_transportProtocolHasBeenSet)
  {
      oStream << location << ".TransportProtocol=" << TransportProtocolMapper::GetNameForTransportProtocol(m_transportProtocol) << "&";
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
        authenticationOptionsSs << location <<  ".AuthenticationOptions." << authenticationOptionsIdx++;
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
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
