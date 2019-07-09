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

#include <aws/ec2/model/VpnConnection.h>
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

VpnConnection::VpnConnection() : 
    m_customerGatewayConfigurationHasBeenSet(false),
    m_customerGatewayIdHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_state(VpnState::NOT_SET),
    m_stateHasBeenSet(false),
    m_type(GatewayType::NOT_SET),
    m_typeHasBeenSet(false),
    m_vpnConnectionIdHasBeenSet(false),
    m_vpnGatewayIdHasBeenSet(false),
    m_transitGatewayIdHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_routesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vgwTelemetryHasBeenSet(false)
{
}

VpnConnection::VpnConnection(const XmlNode& xmlNode) : 
    m_customerGatewayConfigurationHasBeenSet(false),
    m_customerGatewayIdHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_state(VpnState::NOT_SET),
    m_stateHasBeenSet(false),
    m_type(GatewayType::NOT_SET),
    m_typeHasBeenSet(false),
    m_vpnConnectionIdHasBeenSet(false),
    m_vpnGatewayIdHasBeenSet(false),
    m_transitGatewayIdHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_routesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vgwTelemetryHasBeenSet(false)
{
  *this = xmlNode;
}

VpnConnection& VpnConnection::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode customerGatewayConfigurationNode = resultNode.FirstChild("customerGatewayConfiguration");
    if(!customerGatewayConfigurationNode.IsNull())
    {
      m_customerGatewayConfiguration = customerGatewayConfigurationNode.GetText();
      m_customerGatewayConfigurationHasBeenSet = true;
    }
    XmlNode customerGatewayIdNode = resultNode.FirstChild("customerGatewayId");
    if(!customerGatewayIdNode.IsNull())
    {
      m_customerGatewayId = customerGatewayIdNode.GetText();
      m_customerGatewayIdHasBeenSet = true;
    }
    XmlNode categoryNode = resultNode.FirstChild("category");
    if(!categoryNode.IsNull())
    {
      m_category = categoryNode.GetText();
      m_categoryHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = VpnStateMapper::GetVpnStateForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("type");
    if(!typeNode.IsNull())
    {
      m_type = GatewayTypeMapper::GetGatewayTypeForName(StringUtils::Trim(typeNode.GetText().c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode vpnConnectionIdNode = resultNode.FirstChild("vpnConnectionId");
    if(!vpnConnectionIdNode.IsNull())
    {
      m_vpnConnectionId = vpnConnectionIdNode.GetText();
      m_vpnConnectionIdHasBeenSet = true;
    }
    XmlNode vpnGatewayIdNode = resultNode.FirstChild("vpnGatewayId");
    if(!vpnGatewayIdNode.IsNull())
    {
      m_vpnGatewayId = vpnGatewayIdNode.GetText();
      m_vpnGatewayIdHasBeenSet = true;
    }
    XmlNode transitGatewayIdNode = resultNode.FirstChild("transitGatewayId");
    if(!transitGatewayIdNode.IsNull())
    {
      m_transitGatewayId = transitGatewayIdNode.GetText();
      m_transitGatewayIdHasBeenSet = true;
    }
    XmlNode optionsNode = resultNode.FirstChild("options");
    if(!optionsNode.IsNull())
    {
      m_options = optionsNode;
      m_optionsHasBeenSet = true;
    }
    XmlNode routesNode = resultNode.FirstChild("routes");
    if(!routesNode.IsNull())
    {
      XmlNode routesMember = routesNode.FirstChild("item");
      while(!routesMember.IsNull())
      {
        m_routes.push_back(routesMember);
        routesMember = routesMember.NextNode("item");
      }

      m_routesHasBeenSet = true;
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
    XmlNode vgwTelemetryNode = resultNode.FirstChild("vgwTelemetry");
    if(!vgwTelemetryNode.IsNull())
    {
      XmlNode vgwTelemetryMember = vgwTelemetryNode.FirstChild("item");
      while(!vgwTelemetryMember.IsNull())
      {
        m_vgwTelemetry.push_back(vgwTelemetryMember);
        vgwTelemetryMember = vgwTelemetryMember.NextNode("item");
      }

      m_vgwTelemetryHasBeenSet = true;
    }
  }

  return *this;
}

void VpnConnection::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_customerGatewayConfigurationHasBeenSet)
  {
      oStream << location << index << locationValue << ".CustomerGatewayConfiguration=" << StringUtils::URLEncode(m_customerGatewayConfiguration.c_str()) << "&";
  }

  if(m_customerGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CustomerGatewayId=" << StringUtils::URLEncode(m_customerGatewayId.c_str()) << "&";
  }

  if(m_categoryHasBeenSet)
  {
      oStream << location << index << locationValue << ".Category=" << StringUtils::URLEncode(m_category.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << VpnStateMapper::GetNameForVpnState(m_state) << "&";
  }

  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << GatewayTypeMapper::GetNameForGatewayType(m_type) << "&";
  }

  if(m_vpnConnectionIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpnConnectionId=" << StringUtils::URLEncode(m_vpnConnectionId.c_str()) << "&";
  }

  if(m_vpnGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpnGatewayId=" << StringUtils::URLEncode(m_vpnGatewayId.c_str()) << "&";
  }

  if(m_transitGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }

  if(m_optionsHasBeenSet)
  {
      Aws::StringStream optionsLocationAndMemberSs;
      optionsLocationAndMemberSs << location << index << locationValue << ".Options";
      m_options.OutputToStream(oStream, optionsLocationAndMemberSs.str().c_str());
  }

  if(m_routesHasBeenSet)
  {
      unsigned routesIdx = 1;
      for(auto& item : m_routes)
      {
        Aws::StringStream routesSs;
        routesSs << location << index << locationValue << ".Routes." << routesIdx++;
        item.OutputToStream(oStream, routesSs.str().c_str());
      }
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

  if(m_vgwTelemetryHasBeenSet)
  {
      unsigned vgwTelemetryIdx = 1;
      for(auto& item : m_vgwTelemetry)
      {
        Aws::StringStream vgwTelemetrySs;
        vgwTelemetrySs << location << index << locationValue << ".VgwTelemetry." << vgwTelemetryIdx++;
        item.OutputToStream(oStream, vgwTelemetrySs.str().c_str());
      }
  }

}

void VpnConnection::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_customerGatewayConfigurationHasBeenSet)
  {
      oStream << location << ".CustomerGatewayConfiguration=" << StringUtils::URLEncode(m_customerGatewayConfiguration.c_str()) << "&";
  }
  if(m_customerGatewayIdHasBeenSet)
  {
      oStream << location << ".CustomerGatewayId=" << StringUtils::URLEncode(m_customerGatewayId.c_str()) << "&";
  }
  if(m_categoryHasBeenSet)
  {
      oStream << location << ".Category=" << StringUtils::URLEncode(m_category.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << VpnStateMapper::GetNameForVpnState(m_state) << "&";
  }
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << GatewayTypeMapper::GetNameForGatewayType(m_type) << "&";
  }
  if(m_vpnConnectionIdHasBeenSet)
  {
      oStream << location << ".VpnConnectionId=" << StringUtils::URLEncode(m_vpnConnectionId.c_str()) << "&";
  }
  if(m_vpnGatewayIdHasBeenSet)
  {
      oStream << location << ".VpnGatewayId=" << StringUtils::URLEncode(m_vpnGatewayId.c_str()) << "&";
  }
  if(m_transitGatewayIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }
  if(m_optionsHasBeenSet)
  {
      Aws::String optionsLocationAndMember(location);
      optionsLocationAndMember += ".Options";
      m_options.OutputToStream(oStream, optionsLocationAndMember.c_str());
  }
  if(m_routesHasBeenSet)
  {
      unsigned routesIdx = 1;
      for(auto& item : m_routes)
      {
        Aws::StringStream routesSs;
        routesSs << location <<  ".Routes." << routesIdx++;
        item.OutputToStream(oStream, routesSs.str().c_str());
      }
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
  if(m_vgwTelemetryHasBeenSet)
  {
      unsigned vgwTelemetryIdx = 1;
      for(auto& item : m_vgwTelemetry)
      {
        Aws::StringStream vgwTelemetrySs;
        vgwTelemetrySs << location <<  ".VgwTelemetry." << vgwTelemetryIdx++;
        item.OutputToStream(oStream, vgwTelemetrySs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
