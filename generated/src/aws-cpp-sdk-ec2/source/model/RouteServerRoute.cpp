/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RouteServerRoute.h>
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

RouteServerRoute::RouteServerRoute(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

RouteServerRoute& RouteServerRoute::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode routeServerEndpointIdNode = resultNode.FirstChild("routeServerEndpointId");
    if(!routeServerEndpointIdNode.IsNull())
    {
      m_routeServerEndpointId = Aws::Utils::Xml::DecodeEscapedXmlText(routeServerEndpointIdNode.GetText());
      m_routeServerEndpointIdHasBeenSet = true;
    }
    XmlNode routeServerPeerIdNode = resultNode.FirstChild("routeServerPeerId");
    if(!routeServerPeerIdNode.IsNull())
    {
      m_routeServerPeerId = Aws::Utils::Xml::DecodeEscapedXmlText(routeServerPeerIdNode.GetText());
      m_routeServerPeerIdHasBeenSet = true;
    }
    XmlNode routeInstallationDetailsNode = resultNode.FirstChild("routeInstallationDetailSet");
    if(!routeInstallationDetailsNode.IsNull())
    {
      XmlNode routeInstallationDetailsMember = routeInstallationDetailsNode.FirstChild("item");
      m_routeInstallationDetailsHasBeenSet = !routeInstallationDetailsMember.IsNull();
      while(!routeInstallationDetailsMember.IsNull())
      {
        m_routeInstallationDetails.push_back(routeInstallationDetailsMember);
        routeInstallationDetailsMember = routeInstallationDetailsMember.NextNode("item");
      }

      m_routeInstallationDetailsHasBeenSet = true;
    }
    XmlNode routeStatusNode = resultNode.FirstChild("routeStatus");
    if(!routeStatusNode.IsNull())
    {
      m_routeStatus = RouteServerRouteStatusMapper::GetRouteServerRouteStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(routeStatusNode.GetText()).c_str()));
      m_routeStatusHasBeenSet = true;
    }
    XmlNode prefixNode = resultNode.FirstChild("prefix");
    if(!prefixNode.IsNull())
    {
      m_prefix = Aws::Utils::Xml::DecodeEscapedXmlText(prefixNode.GetText());
      m_prefixHasBeenSet = true;
    }
    XmlNode asPathsNode = resultNode.FirstChild("asPathSet");
    if(!asPathsNode.IsNull())
    {
      XmlNode asPathsMember = asPathsNode.FirstChild("item");
      m_asPathsHasBeenSet = !asPathsMember.IsNull();
      while(!asPathsMember.IsNull())
      {
        m_asPaths.push_back(asPathsMember.GetText());
        asPathsMember = asPathsMember.NextNode("item");
      }

      m_asPathsHasBeenSet = true;
    }
    XmlNode medNode = resultNode.FirstChild("med");
    if(!medNode.IsNull())
    {
      m_med = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(medNode.GetText()).c_str()).c_str());
      m_medHasBeenSet = true;
    }
    XmlNode nextHopIpNode = resultNode.FirstChild("nextHopIp");
    if(!nextHopIpNode.IsNull())
    {
      m_nextHopIp = Aws::Utils::Xml::DecodeEscapedXmlText(nextHopIpNode.GetText());
      m_nextHopIpHasBeenSet = true;
    }
  }

  return *this;
}

void RouteServerRoute::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_routeServerEndpointIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RouteServerEndpointId=" << StringUtils::URLEncode(m_routeServerEndpointId.c_str()) << "&";
  }

  if(m_routeServerPeerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RouteServerPeerId=" << StringUtils::URLEncode(m_routeServerPeerId.c_str()) << "&";
  }

  if(m_routeInstallationDetailsHasBeenSet)
  {
      unsigned routeInstallationDetailsIdx = 1;
      for(auto& item : m_routeInstallationDetails)
      {
        Aws::StringStream routeInstallationDetailsSs;
        routeInstallationDetailsSs << location << index << locationValue << ".RouteInstallationDetailSet." << routeInstallationDetailsIdx++;
        item.OutputToStream(oStream, routeInstallationDetailsSs.str().c_str());
      }
  }

  if(m_routeStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".RouteStatus=" << StringUtils::URLEncode(RouteServerRouteStatusMapper::GetNameForRouteServerRouteStatus(m_routeStatus)) << "&";
  }

  if(m_prefixHasBeenSet)
  {
      oStream << location << index << locationValue << ".Prefix=" << StringUtils::URLEncode(m_prefix.c_str()) << "&";
  }

  if(m_asPathsHasBeenSet)
  {
      unsigned asPathsIdx = 1;
      for(auto& item : m_asPaths)
      {
        oStream << location << index << locationValue << ".AsPathSet." << asPathsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_medHasBeenSet)
  {
      oStream << location << index << locationValue << ".Med=" << m_med << "&";
  }

  if(m_nextHopIpHasBeenSet)
  {
      oStream << location << index << locationValue << ".NextHopIp=" << StringUtils::URLEncode(m_nextHopIp.c_str()) << "&";
  }

}

void RouteServerRoute::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_routeServerEndpointIdHasBeenSet)
  {
      oStream << location << ".RouteServerEndpointId=" << StringUtils::URLEncode(m_routeServerEndpointId.c_str()) << "&";
  }
  if(m_routeServerPeerIdHasBeenSet)
  {
      oStream << location << ".RouteServerPeerId=" << StringUtils::URLEncode(m_routeServerPeerId.c_str()) << "&";
  }
  if(m_routeInstallationDetailsHasBeenSet)
  {
      unsigned routeInstallationDetailsIdx = 1;
      for(auto& item : m_routeInstallationDetails)
      {
        Aws::StringStream routeInstallationDetailsSs;
        routeInstallationDetailsSs << location << ".RouteInstallationDetailSet." << routeInstallationDetailsIdx++;
        item.OutputToStream(oStream, routeInstallationDetailsSs.str().c_str());
      }
  }
  if(m_routeStatusHasBeenSet)
  {
      oStream << location << ".RouteStatus=" << StringUtils::URLEncode(RouteServerRouteStatusMapper::GetNameForRouteServerRouteStatus(m_routeStatus)) << "&";
  }
  if(m_prefixHasBeenSet)
  {
      oStream << location << ".Prefix=" << StringUtils::URLEncode(m_prefix.c_str()) << "&";
  }
  if(m_asPathsHasBeenSet)
  {
      unsigned asPathsIdx = 1;
      for(auto& item : m_asPaths)
      {
        oStream << location << ".AsPathSet." << asPathsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_medHasBeenSet)
  {
      oStream << location << ".Med=" << m_med << "&";
  }
  if(m_nextHopIpHasBeenSet)
  {
      oStream << location << ".NextHopIp=" << StringUtils::URLEncode(m_nextHopIp.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
