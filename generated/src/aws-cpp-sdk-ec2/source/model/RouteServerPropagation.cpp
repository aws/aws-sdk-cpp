/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RouteServerPropagation.h>
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

RouteServerPropagation::RouteServerPropagation(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

RouteServerPropagation& RouteServerPropagation::operator =(const XmlNode& xmlNode)
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
    XmlNode routeTableIdNode = resultNode.FirstChild("routeTableId");
    if(!routeTableIdNode.IsNull())
    {
      m_routeTableId = Aws::Utils::Xml::DecodeEscapedXmlText(routeTableIdNode.GetText());
      m_routeTableIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = RouteServerPropagationStateMapper::GetRouteServerPropagationStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
  }

  return *this;
}

void RouteServerPropagation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_routeServerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RouteServerId=" << StringUtils::URLEncode(m_routeServerId.c_str()) << "&";
  }

  if(m_routeTableIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RouteTableId=" << StringUtils::URLEncode(m_routeTableId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(RouteServerPropagationStateMapper::GetNameForRouteServerPropagationState(m_state)) << "&";
  }

}

void RouteServerPropagation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_routeServerIdHasBeenSet)
  {
      oStream << location << ".RouteServerId=" << StringUtils::URLEncode(m_routeServerId.c_str()) << "&";
  }
  if(m_routeTableIdHasBeenSet)
  {
      oStream << location << ".RouteTableId=" << StringUtils::URLEncode(m_routeTableId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(RouteServerPropagationStateMapper::GetNameForRouteServerPropagationState(m_state)) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
