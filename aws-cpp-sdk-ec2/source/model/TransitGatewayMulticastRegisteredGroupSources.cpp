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
