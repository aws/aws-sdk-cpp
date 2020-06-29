/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayMulticastDeregisteredGroupMembers.h>
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

TransitGatewayMulticastDeregisteredGroupMembers::TransitGatewayMulticastDeregisteredGroupMembers() : 
    m_transitGatewayMulticastDomainIdHasBeenSet(false),
    m_deregisteredNetworkInterfaceIdsHasBeenSet(false),
    m_groupIpAddressHasBeenSet(false)
{
}

TransitGatewayMulticastDeregisteredGroupMembers::TransitGatewayMulticastDeregisteredGroupMembers(const XmlNode& xmlNode) : 
    m_transitGatewayMulticastDomainIdHasBeenSet(false),
    m_deregisteredNetworkInterfaceIdsHasBeenSet(false),
    m_groupIpAddressHasBeenSet(false)
{
  *this = xmlNode;
}

TransitGatewayMulticastDeregisteredGroupMembers& TransitGatewayMulticastDeregisteredGroupMembers::operator =(const XmlNode& xmlNode)
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
    XmlNode deregisteredNetworkInterfaceIdsNode = resultNode.FirstChild("deregisteredNetworkInterfaceIds");
    if(!deregisteredNetworkInterfaceIdsNode.IsNull())
    {
      XmlNode deregisteredNetworkInterfaceIdsMember = deregisteredNetworkInterfaceIdsNode.FirstChild("item");
      while(!deregisteredNetworkInterfaceIdsMember.IsNull())
      {
        m_deregisteredNetworkInterfaceIds.push_back(deregisteredNetworkInterfaceIdsMember.GetText());
        deregisteredNetworkInterfaceIdsMember = deregisteredNetworkInterfaceIdsMember.NextNode("item");
      }

      m_deregisteredNetworkInterfaceIdsHasBeenSet = true;
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

void TransitGatewayMulticastDeregisteredGroupMembers::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_transitGatewayMulticastDomainIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayMulticastDomainId=" << StringUtils::URLEncode(m_transitGatewayMulticastDomainId.c_str()) << "&";
  }

  if(m_deregisteredNetworkInterfaceIdsHasBeenSet)
  {
      unsigned deregisteredNetworkInterfaceIdsIdx = 1;
      for(auto& item : m_deregisteredNetworkInterfaceIds)
      {
        oStream << location << index << locationValue << ".DeregisteredNetworkInterfaceIds." << deregisteredNetworkInterfaceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_groupIpAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupIpAddress=" << StringUtils::URLEncode(m_groupIpAddress.c_str()) << "&";
  }

}

void TransitGatewayMulticastDeregisteredGroupMembers::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_transitGatewayMulticastDomainIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayMulticastDomainId=" << StringUtils::URLEncode(m_transitGatewayMulticastDomainId.c_str()) << "&";
  }
  if(m_deregisteredNetworkInterfaceIdsHasBeenSet)
  {
      unsigned deregisteredNetworkInterfaceIdsIdx = 1;
      for(auto& item : m_deregisteredNetworkInterfaceIds)
      {
        oStream << location << ".DeregisteredNetworkInterfaceIds." << deregisteredNetworkInterfaceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
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
