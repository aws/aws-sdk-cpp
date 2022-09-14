/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CoipCidr.h>
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

CoipCidr::CoipCidr() : 
    m_cidrHasBeenSet(false),
    m_coipPoolIdHasBeenSet(false),
    m_localGatewayRouteTableIdHasBeenSet(false)
{
}

CoipCidr::CoipCidr(const XmlNode& xmlNode) : 
    m_cidrHasBeenSet(false),
    m_coipPoolIdHasBeenSet(false),
    m_localGatewayRouteTableIdHasBeenSet(false)
{
  *this = xmlNode;
}

CoipCidr& CoipCidr::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cidrNode = resultNode.FirstChild("cidr");
    if(!cidrNode.IsNull())
    {
      m_cidr = Aws::Utils::Xml::DecodeEscapedXmlText(cidrNode.GetText());
      m_cidrHasBeenSet = true;
    }
    XmlNode coipPoolIdNode = resultNode.FirstChild("coipPoolId");
    if(!coipPoolIdNode.IsNull())
    {
      m_coipPoolId = Aws::Utils::Xml::DecodeEscapedXmlText(coipPoolIdNode.GetText());
      m_coipPoolIdHasBeenSet = true;
    }
    XmlNode localGatewayRouteTableIdNode = resultNode.FirstChild("localGatewayRouteTableId");
    if(!localGatewayRouteTableIdNode.IsNull())
    {
      m_localGatewayRouteTableId = Aws::Utils::Xml::DecodeEscapedXmlText(localGatewayRouteTableIdNode.GetText());
      m_localGatewayRouteTableIdHasBeenSet = true;
    }
  }

  return *this;
}

void CoipCidr::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cidrHasBeenSet)
  {
      oStream << location << index << locationValue << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }

  if(m_coipPoolIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CoipPoolId=" << StringUtils::URLEncode(m_coipPoolId.c_str()) << "&";
  }

  if(m_localGatewayRouteTableIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalGatewayRouteTableId=" << StringUtils::URLEncode(m_localGatewayRouteTableId.c_str()) << "&";
  }

}

void CoipCidr::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cidrHasBeenSet)
  {
      oStream << location << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }
  if(m_coipPoolIdHasBeenSet)
  {
      oStream << location << ".CoipPoolId=" << StringUtils::URLEncode(m_coipPoolId.c_str()) << "&";
  }
  if(m_localGatewayRouteTableIdHasBeenSet)
  {
      oStream << location << ".LocalGatewayRouteTableId=" << StringUtils::URLEncode(m_localGatewayRouteTableId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
