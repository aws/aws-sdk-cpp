/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayMulticastRegisteredGroupSources.h>
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

TransitGatewayMulticastRegisteredGroupSources::TransitGatewayMulticastRegisteredGroupSources() : 
    m_transitGatewayMulticastDomainIdHasBeenSet(false),
    m_registeredNetworkInterfaceIdsHasBeenSet(false),
    m_groupIpAddressHasBeenSet(false)
{
}

TransitGatewayMulticastRegisteredGroupSources::TransitGatewayMulticastRegisteredGroupSources(const XmlNode& xmlNode) : 
    m_transitGatewayMulticastDomainIdHasBeenSet(false),
    m_registeredNetworkInterfaceIdsHasBeenSet(false),
    m_groupIpAddressHasBeenSet(false)
{
  *this = xmlNode;
}

TransitGatewayMulticastRegisteredGroupSources& TransitGatewayMulticastRegisteredGroupSources::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode transitGatewayMulticastDomainIdNode = resultNode.FirstChild("transitGatewayMulticastDomainId");
    if(!transitGatewayMulticastDomainIdNode.IsNull())
    {
      m_transitGatewayMulticastDomainId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayMulticastDomainIdNode.GetText());
      m_transitGatewayMulticastDomainIdHasBeenSet = true;
    }
    XmlNode registeredNetworkInterfaceIdsNode = resultNode.FirstChild("registeredNetworkInterfaceIds");
    if(!registeredNetworkInterfaceIdsNode.IsNull())
    {
      XmlNode registeredNetworkInterfaceIdsMember = registeredNetworkInterfaceIdsNode.FirstChild("item");
      while(!registeredNetworkInterfaceIdsMember.IsNull())
      {
        m_registeredNetworkInterfaceIds.push_back(registeredNetworkInterfaceIdsMember.GetText());
        registeredNetworkInterfaceIdsMember = registeredNetworkInterfaceIdsMember.NextNode("item");
      }

      m_registeredNetworkInterfaceIdsHasBeenSet = true;
    }
    XmlNode groupIpAddressNode = resultNode.FirstChild("groupIpAddress");
    if(!groupIpAddressNode.IsNull())
    {
      m_groupIpAddress = Aws::Utils::Xml::DecodeEscapedXmlText(groupIpAddressNode.GetText());
      m_groupIpAddressHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayMulticastRegisteredGroupSources::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_transitGatewayMulticastDomainIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayMulticastDomainId=" << StringUtils::URLEncode(m_transitGatewayMulticastDomainId.c_str()) << "&";
  }

  if(m_registeredNetworkInterfaceIdsHasBeenSet)
  {
      unsigned registeredNetworkInterfaceIdsIdx = 1;
      for(auto& item : m_registeredNetworkInterfaceIds)
      {
        oStream << location << index << locationValue << ".RegisteredNetworkInterfaceIds." << registeredNetworkInterfaceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_groupIpAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupIpAddress=" << StringUtils::URLEncode(m_groupIpAddress.c_str()) << "&";
  }

}

void TransitGatewayMulticastRegisteredGroupSources::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_transitGatewayMulticastDomainIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayMulticastDomainId=" << StringUtils::URLEncode(m_transitGatewayMulticastDomainId.c_str()) << "&";
  }
  if(m_registeredNetworkInterfaceIdsHasBeenSet)
  {
      unsigned registeredNetworkInterfaceIdsIdx = 1;
      for(auto& item : m_registeredNetworkInterfaceIds)
      {
        oStream << location << ".RegisteredNetworkInterfaceIds." << registeredNetworkInterfaceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_groupIpAddressHasBeenSet)
  {
      oStream << location << ".GroupIpAddress=" << StringUtils::URLEncode(m_groupIpAddress.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
