/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VerifiedAccessInstanceOpenVpnClientConfiguration.h>
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

VerifiedAccessInstanceOpenVpnClientConfiguration::VerifiedAccessInstanceOpenVpnClientConfiguration(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

VerifiedAccessInstanceOpenVpnClientConfiguration& VerifiedAccessInstanceOpenVpnClientConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode configNode = resultNode.FirstChild("config");
    if(!configNode.IsNull())
    {
      m_config = Aws::Utils::Xml::DecodeEscapedXmlText(configNode.GetText());
      m_configHasBeenSet = true;
    }
    XmlNode routesNode = resultNode.FirstChild("routeSet");
    if(!routesNode.IsNull())
    {
      XmlNode routesMember = routesNode.FirstChild("item");
      m_routesHasBeenSet = !routesMember.IsNull();
      while(!routesMember.IsNull())
      {
        m_routes.push_back(routesMember);
        routesMember = routesMember.NextNode("item");
      }

      m_routesHasBeenSet = true;
    }
  }

  return *this;
}

void VerifiedAccessInstanceOpenVpnClientConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_configHasBeenSet)
  {
      oStream << location << index << locationValue << ".Config=" << StringUtils::URLEncode(m_config.c_str()) << "&";
  }

  if(m_routesHasBeenSet)
  {
      unsigned routesIdx = 1;
      for(auto& item : m_routes)
      {
        Aws::StringStream routesSs;
        routesSs << location << index << locationValue << ".RouteSet." << routesIdx++;
        item.OutputToStream(oStream, routesSs.str().c_str());
      }
  }

}

void VerifiedAccessInstanceOpenVpnClientConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_configHasBeenSet)
  {
      oStream << location << ".Config=" << StringUtils::URLEncode(m_config.c_str()) << "&";
  }
  if(m_routesHasBeenSet)
  {
      unsigned routesIdx = 1;
      for(auto& item : m_routes)
      {
        Aws::StringStream routesSs;
        routesSs << location << ".RouteSet." << routesIdx++;
        item.OutputToStream(oStream, routesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
