/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyVerifiedAccessEndpointLoadBalancerOptions.h>
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

ModifyVerifiedAccessEndpointLoadBalancerOptions::ModifyVerifiedAccessEndpointLoadBalancerOptions() : 
    m_subnetIdsHasBeenSet(false),
    m_protocol(VerifiedAccessEndpointProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false)
{
}

ModifyVerifiedAccessEndpointLoadBalancerOptions::ModifyVerifiedAccessEndpointLoadBalancerOptions(const XmlNode& xmlNode) : 
    m_subnetIdsHasBeenSet(false),
    m_protocol(VerifiedAccessEndpointProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false)
{
  *this = xmlNode;
}

ModifyVerifiedAccessEndpointLoadBalancerOptions& ModifyVerifiedAccessEndpointLoadBalancerOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode subnetIdsNode = resultNode.FirstChild("SubnetId");
    if(!subnetIdsNode.IsNull())
    {
      XmlNode subnetIdsMember = subnetIdsNode.FirstChild("item");
      while(!subnetIdsMember.IsNull())
      {
        m_subnetIds.push_back(subnetIdsMember.GetText());
        subnetIdsMember = subnetIdsMember.NextNode("item");
      }

      m_subnetIdsHasBeenSet = true;
    }
    XmlNode protocolNode = resultNode.FirstChild("Protocol");
    if(!protocolNode.IsNull())
    {
      m_protocol = VerifiedAccessEndpointProtocolMapper::GetVerifiedAccessEndpointProtocolForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(protocolNode.GetText()).c_str()).c_str());
      m_protocolHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(portNode.GetText()).c_str()).c_str());
      m_portHasBeenSet = true;
    }
  }

  return *this;
}

void ModifyVerifiedAccessEndpointLoadBalancerOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_subnetIdsHasBeenSet)
  {
      unsigned subnetIdsIdx = 1;
      for(auto& item : m_subnetIds)
      {
        oStream << location << index << locationValue << ".SubnetId." << subnetIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_protocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".Protocol=" << VerifiedAccessEndpointProtocolMapper::GetNameForVerifiedAccessEndpointProtocol(m_protocol) << "&";
  }

  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

}

void ModifyVerifiedAccessEndpointLoadBalancerOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_subnetIdsHasBeenSet)
  {
      unsigned subnetIdsIdx = 1;
      for(auto& item : m_subnetIds)
      {
        oStream << location << ".SubnetId." << subnetIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_protocolHasBeenSet)
  {
      oStream << location << ".Protocol=" << VerifiedAccessEndpointProtocolMapper::GetNameForVerifiedAccessEndpointProtocol(m_protocol) << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
