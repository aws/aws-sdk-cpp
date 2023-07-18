/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/Endpoint.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

Endpoint::Endpoint() : 
    m_addressHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_vpcEndpointsHasBeenSet(false)
{
}

Endpoint::Endpoint(const XmlNode& xmlNode) : 
    m_addressHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_vpcEndpointsHasBeenSet(false)
{
  *this = xmlNode;
}

Endpoint& Endpoint::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode addressNode = resultNode.FirstChild("Address");
    if(!addressNode.IsNull())
    {
      m_address = Aws::Utils::Xml::DecodeEscapedXmlText(addressNode.GetText());
      m_addressHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(portNode.GetText()).c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode vpcEndpointsNode = resultNode.FirstChild("VpcEndpoints");
    if(!vpcEndpointsNode.IsNull())
    {
      XmlNode vpcEndpointsMember = vpcEndpointsNode.FirstChild("VpcEndpoint");
      while(!vpcEndpointsMember.IsNull())
      {
        m_vpcEndpoints.push_back(vpcEndpointsMember);
        vpcEndpointsMember = vpcEndpointsMember.NextNode("VpcEndpoint");
      }

      m_vpcEndpointsHasBeenSet = true;
    }
  }

  return *this;
}

void Endpoint::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_addressHasBeenSet)
  {
      oStream << location << index << locationValue << ".Address=" << StringUtils::URLEncode(m_address.c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

  if(m_vpcEndpointsHasBeenSet)
  {
      unsigned vpcEndpointsIdx = 1;
      for(auto& item : m_vpcEndpoints)
      {
        Aws::StringStream vpcEndpointsSs;
        vpcEndpointsSs << location << index << locationValue << ".VpcEndpoint." << vpcEndpointsIdx++;
        item.OutputToStream(oStream, vpcEndpointsSs.str().c_str());
      }
  }

}

void Endpoint::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_addressHasBeenSet)
  {
      oStream << location << ".Address=" << StringUtils::URLEncode(m_address.c_str()) << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
  if(m_vpcEndpointsHasBeenSet)
  {
      unsigned vpcEndpointsIdx = 1;
      for(auto& item : m_vpcEndpoints)
      {
        Aws::StringStream vpcEndpointsSs;
        vpcEndpointsSs << location <<  ".VpcEndpoint." << vpcEndpointsIdx++;
        item.OutputToStream(oStream, vpcEndpointsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
