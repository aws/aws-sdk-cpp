/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ReshardingConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

ReshardingConfiguration::ReshardingConfiguration() : 
    m_nodeGroupIdHasBeenSet(false),
    m_preferredAvailabilityZonesHasBeenSet(false)
{
}

ReshardingConfiguration::ReshardingConfiguration(const XmlNode& xmlNode) : 
    m_nodeGroupIdHasBeenSet(false),
    m_preferredAvailabilityZonesHasBeenSet(false)
{
  *this = xmlNode;
}

ReshardingConfiguration& ReshardingConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nodeGroupIdNode = resultNode.FirstChild("NodeGroupId");
    if(!nodeGroupIdNode.IsNull())
    {
      m_nodeGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(nodeGroupIdNode.GetText());
      m_nodeGroupIdHasBeenSet = true;
    }
    XmlNode preferredAvailabilityZonesNode = resultNode.FirstChild("PreferredAvailabilityZones");
    if(!preferredAvailabilityZonesNode.IsNull())
    {
      XmlNode preferredAvailabilityZonesMember = preferredAvailabilityZonesNode.FirstChild("AvailabilityZone");
      while(!preferredAvailabilityZonesMember.IsNull())
      {
        m_preferredAvailabilityZones.push_back(preferredAvailabilityZonesMember.GetText());
        preferredAvailabilityZonesMember = preferredAvailabilityZonesMember.NextNode("AvailabilityZone");
      }

      m_preferredAvailabilityZonesHasBeenSet = true;
    }
  }

  return *this;
}

void ReshardingConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nodeGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeGroupId=" << StringUtils::URLEncode(m_nodeGroupId.c_str()) << "&";
  }

  if(m_preferredAvailabilityZonesHasBeenSet)
  {
      unsigned preferredAvailabilityZonesIdx = 1;
      for(auto& item : m_preferredAvailabilityZones)
      {
        oStream << location << index << locationValue << ".AvailabilityZone." << preferredAvailabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void ReshardingConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nodeGroupIdHasBeenSet)
  {
      oStream << location << ".NodeGroupId=" << StringUtils::URLEncode(m_nodeGroupId.c_str()) << "&";
  }
  if(m_preferredAvailabilityZonesHasBeenSet)
  {
      unsigned preferredAvailabilityZonesIdx = 1;
      for(auto& item : m_preferredAvailabilityZones)
      {
        oStream << location << ".AvailabilityZone." << preferredAvailabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
