/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RouteServerAssociation.h>
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

RouteServerAssociation::RouteServerAssociation(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

RouteServerAssociation& RouteServerAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
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
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = RouteServerAssociationStateMapper::GetRouteServerAssociationStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
  }

  return *this;
}

void RouteServerAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_routeServerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RouteServerId=" << StringUtils::URLEncode(m_routeServerId.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(RouteServerAssociationStateMapper::GetNameForRouteServerAssociationState(m_state)) << "&";
  }

}

void RouteServerAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_routeServerIdHasBeenSet)
  {
      oStream << location << ".RouteServerId=" << StringUtils::URLEncode(m_routeServerId.c_str()) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(RouteServerAssociationStateMapper::GetNameForRouteServerAssociationState(m_state)) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
