/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RouteTableAssociation.h>
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

RouteTableAssociation::RouteTableAssociation() : 
    m_main(false),
    m_mainHasBeenSet(false),
    m_routeTableAssociationIdHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_associationStateHasBeenSet(false)
{
}

RouteTableAssociation::RouteTableAssociation(const XmlNode& xmlNode) : 
    m_main(false),
    m_mainHasBeenSet(false),
    m_routeTableAssociationIdHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_associationStateHasBeenSet(false)
{
  *this = xmlNode;
}

RouteTableAssociation& RouteTableAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode mainNode = resultNode.FirstChild("main");
    if(!mainNode.IsNull())
    {
      m_main = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(mainNode.GetText()).c_str()).c_str());
      m_mainHasBeenSet = true;
    }
    XmlNode routeTableAssociationIdNode = resultNode.FirstChild("routeTableAssociationId");
    if(!routeTableAssociationIdNode.IsNull())
    {
      m_routeTableAssociationId = Aws::Utils::Xml::DecodeEscapedXmlText(routeTableAssociationIdNode.GetText());
      m_routeTableAssociationIdHasBeenSet = true;
    }
    XmlNode routeTableIdNode = resultNode.FirstChild("routeTableId");
    if(!routeTableIdNode.IsNull())
    {
      m_routeTableId = Aws::Utils::Xml::DecodeEscapedXmlText(routeTableIdNode.GetText());
      m_routeTableIdHasBeenSet = true;
    }
    XmlNode subnetIdNode = resultNode.FirstChild("subnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = Aws::Utils::Xml::DecodeEscapedXmlText(subnetIdNode.GetText());
      m_subnetIdHasBeenSet = true;
    }
    XmlNode gatewayIdNode = resultNode.FirstChild("gatewayId");
    if(!gatewayIdNode.IsNull())
    {
      m_gatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(gatewayIdNode.GetText());
      m_gatewayIdHasBeenSet = true;
    }
    XmlNode associationStateNode = resultNode.FirstChild("associationState");
    if(!associationStateNode.IsNull())
    {
      m_associationState = associationStateNode;
      m_associationStateHasBeenSet = true;
    }
  }

  return *this;
}

void RouteTableAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_mainHasBeenSet)
  {
      oStream << location << index << locationValue << ".Main=" << std::boolalpha << m_main << "&";
  }

  if(m_routeTableAssociationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RouteTableAssociationId=" << StringUtils::URLEncode(m_routeTableAssociationId.c_str()) << "&";
  }

  if(m_routeTableIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RouteTableId=" << StringUtils::URLEncode(m_routeTableId.c_str()) << "&";
  }

  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_gatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".GatewayId=" << StringUtils::URLEncode(m_gatewayId.c_str()) << "&";
  }

  if(m_associationStateHasBeenSet)
  {
      Aws::StringStream associationStateLocationAndMemberSs;
      associationStateLocationAndMemberSs << location << index << locationValue << ".AssociationState";
      m_associationState.OutputToStream(oStream, associationStateLocationAndMemberSs.str().c_str());
  }

}

void RouteTableAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_mainHasBeenSet)
  {
      oStream << location << ".Main=" << std::boolalpha << m_main << "&";
  }
  if(m_routeTableAssociationIdHasBeenSet)
  {
      oStream << location << ".RouteTableAssociationId=" << StringUtils::URLEncode(m_routeTableAssociationId.c_str()) << "&";
  }
  if(m_routeTableIdHasBeenSet)
  {
      oStream << location << ".RouteTableId=" << StringUtils::URLEncode(m_routeTableId.c_str()) << "&";
  }
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_gatewayIdHasBeenSet)
  {
      oStream << location << ".GatewayId=" << StringUtils::URLEncode(m_gatewayId.c_str()) << "&";
  }
  if(m_associationStateHasBeenSet)
  {
      Aws::String associationStateLocationAndMember(location);
      associationStateLocationAndMember += ".AssociationState";
      m_associationState.OutputToStream(oStream, associationStateLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
