/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RouteServerPeer.h>
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

RouteServerPeer::RouteServerPeer(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

RouteServerPeer& RouteServerPeer::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode routeServerPeerIdNode = resultNode.FirstChild("routeServerPeerId");
    if(!routeServerPeerIdNode.IsNull())
    {
      m_routeServerPeerId = Aws::Utils::Xml::DecodeEscapedXmlText(routeServerPeerIdNode.GetText());
      m_routeServerPeerIdHasBeenSet = true;
    }
    XmlNode routeServerEndpointIdNode = resultNode.FirstChild("routeServerEndpointId");
    if(!routeServerEndpointIdNode.IsNull())
    {
      m_routeServerEndpointId = Aws::Utils::Xml::DecodeEscapedXmlText(routeServerEndpointIdNode.GetText());
      m_routeServerEndpointIdHasBeenSet = true;
    }
    XmlNode routeServerIdNode = resultNode.FirstChild("routeServerId");
    if(!routeServerIdNode.IsNull())
    {
      m_routeServerId = Aws::Utils::Xml::DecodeEscapedXmlText(routeServerIdNode.GetText());
      m_routeServerIdHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode subnetIdNode = resultNode.FirstChild("subnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = Aws::Utils::Xml::DecodeEscapedXmlText(subnetIdNode.GetText());
      m_subnetIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = RouteServerPeerStateMapper::GetRouteServerPeerStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode failureReasonNode = resultNode.FirstChild("failureReason");
    if(!failureReasonNode.IsNull())
    {
      m_failureReason = Aws::Utils::Xml::DecodeEscapedXmlText(failureReasonNode.GetText());
      m_failureReasonHasBeenSet = true;
    }
    XmlNode endpointEniIdNode = resultNode.FirstChild("endpointEniId");
    if(!endpointEniIdNode.IsNull())
    {
      m_endpointEniId = Aws::Utils::Xml::DecodeEscapedXmlText(endpointEniIdNode.GetText());
      m_endpointEniIdHasBeenSet = true;
    }
    XmlNode endpointEniAddressNode = resultNode.FirstChild("endpointEniAddress");
    if(!endpointEniAddressNode.IsNull())
    {
      m_endpointEniAddress = Aws::Utils::Xml::DecodeEscapedXmlText(endpointEniAddressNode.GetText());
      m_endpointEniAddressHasBeenSet = true;
    }
    XmlNode peerAddressNode = resultNode.FirstChild("peerAddress");
    if(!peerAddressNode.IsNull())
    {
      m_peerAddress = Aws::Utils::Xml::DecodeEscapedXmlText(peerAddressNode.GetText());
      m_peerAddressHasBeenSet = true;
    }
    XmlNode bgpOptionsNode = resultNode.FirstChild("bgpOptions");
    if(!bgpOptionsNode.IsNull())
    {
      m_bgpOptions = bgpOptionsNode;
      m_bgpOptionsHasBeenSet = true;
    }
    XmlNode bgpStatusNode = resultNode.FirstChild("bgpStatus");
    if(!bgpStatusNode.IsNull())
    {
      m_bgpStatus = bgpStatusNode;
      m_bgpStatusHasBeenSet = true;
    }
    XmlNode bfdStatusNode = resultNode.FirstChild("bfdStatus");
    if(!bfdStatusNode.IsNull())
    {
      m_bfdStatus = bfdStatusNode;
      m_bfdStatusHasBeenSet = true;
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
  }

  return *this;
}

void RouteServerPeer::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_routeServerPeerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RouteServerPeerId=" << StringUtils::URLEncode(m_routeServerPeerId.c_str()) << "&";
  }

  if(m_routeServerEndpointIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RouteServerEndpointId=" << StringUtils::URLEncode(m_routeServerEndpointId.c_str()) << "&";
  }

  if(m_routeServerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RouteServerId=" << StringUtils::URLEncode(m_routeServerId.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(RouteServerPeerStateMapper::GetNameForRouteServerPeerState(m_state)) << "&";
  }

  if(m_failureReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".FailureReason=" << StringUtils::URLEncode(m_failureReason.c_str()) << "&";
  }

  if(m_endpointEniIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndpointEniId=" << StringUtils::URLEncode(m_endpointEniId.c_str()) << "&";
  }

  if(m_endpointEniAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndpointEniAddress=" << StringUtils::URLEncode(m_endpointEniAddress.c_str()) << "&";
  }

  if(m_peerAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PeerAddress=" << StringUtils::URLEncode(m_peerAddress.c_str()) << "&";
  }

  if(m_bgpOptionsHasBeenSet)
  {
      Aws::StringStream bgpOptionsLocationAndMemberSs;
      bgpOptionsLocationAndMemberSs << location << index << locationValue << ".BgpOptions";
      m_bgpOptions.OutputToStream(oStream, bgpOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_bgpStatusHasBeenSet)
  {
      Aws::StringStream bgpStatusLocationAndMemberSs;
      bgpStatusLocationAndMemberSs << location << index << locationValue << ".BgpStatus";
      m_bgpStatus.OutputToStream(oStream, bgpStatusLocationAndMemberSs.str().c_str());
  }

  if(m_bfdStatusHasBeenSet)
  {
      Aws::StringStream bfdStatusLocationAndMemberSs;
      bfdStatusLocationAndMemberSs << location << index << locationValue << ".BfdStatus";
      m_bfdStatus.OutputToStream(oStream, bfdStatusLocationAndMemberSs.str().c_str());
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

void RouteServerPeer::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_routeServerPeerIdHasBeenSet)
  {
      oStream << location << ".RouteServerPeerId=" << StringUtils::URLEncode(m_routeServerPeerId.c_str()) << "&";
  }
  if(m_routeServerEndpointIdHasBeenSet)
  {
      oStream << location << ".RouteServerEndpointId=" << StringUtils::URLEncode(m_routeServerEndpointId.c_str()) << "&";
  }
  if(m_routeServerIdHasBeenSet)
  {
      oStream << location << ".RouteServerId=" << StringUtils::URLEncode(m_routeServerId.c_str()) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(RouteServerPeerStateMapper::GetNameForRouteServerPeerState(m_state)) << "&";
  }
  if(m_failureReasonHasBeenSet)
  {
      oStream << location << ".FailureReason=" << StringUtils::URLEncode(m_failureReason.c_str()) << "&";
  }
  if(m_endpointEniIdHasBeenSet)
  {
      oStream << location << ".EndpointEniId=" << StringUtils::URLEncode(m_endpointEniId.c_str()) << "&";
  }
  if(m_endpointEniAddressHasBeenSet)
  {
      oStream << location << ".EndpointEniAddress=" << StringUtils::URLEncode(m_endpointEniAddress.c_str()) << "&";
  }
  if(m_peerAddressHasBeenSet)
  {
      oStream << location << ".PeerAddress=" << StringUtils::URLEncode(m_peerAddress.c_str()) << "&";
  }
  if(m_bgpOptionsHasBeenSet)
  {
      Aws::String bgpOptionsLocationAndMember(location);
      bgpOptionsLocationAndMember += ".BgpOptions";
      m_bgpOptions.OutputToStream(oStream, bgpOptionsLocationAndMember.c_str());
  }
  if(m_bgpStatusHasBeenSet)
  {
      Aws::String bgpStatusLocationAndMember(location);
      bgpStatusLocationAndMember += ".BgpStatus";
      m_bgpStatus.OutputToStream(oStream, bgpStatusLocationAndMember.c_str());
  }
  if(m_bfdStatusHasBeenSet)
  {
      Aws::String bfdStatusLocationAndMember(location);
      bfdStatusLocationAndMember += ".BfdStatus";
      m_bfdStatus.OutputToStream(oStream, bfdStatusLocationAndMember.c_str());
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
}

} // namespace Model
} // namespace EC2
} // namespace Aws
