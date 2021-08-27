/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ConfigureShard.h>
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

ConfigureShard::ConfigureShard() : 
    m_nodeGroupIdHasBeenSet(false),
    m_newReplicaCount(0),
    m_newReplicaCountHasBeenSet(false),
    m_preferredAvailabilityZonesHasBeenSet(false),
    m_preferredOutpostArnsHasBeenSet(false)
{
}

ConfigureShard::ConfigureShard(const XmlNode& xmlNode) : 
    m_nodeGroupIdHasBeenSet(false),
    m_newReplicaCount(0),
    m_newReplicaCountHasBeenSet(false),
    m_preferredAvailabilityZonesHasBeenSet(false),
    m_preferredOutpostArnsHasBeenSet(false)
{
  *this = xmlNode;
}

ConfigureShard& ConfigureShard::operator =(const XmlNode& xmlNode)
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
    XmlNode newReplicaCountNode = resultNode.FirstChild("NewReplicaCount");
    if(!newReplicaCountNode.IsNull())
    {
      m_newReplicaCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(newReplicaCountNode.GetText()).c_str()).c_str());
      m_newReplicaCountHasBeenSet = true;
    }
    XmlNode preferredAvailabilityZonesNode = resultNode.FirstChild("PreferredAvailabilityZones");
    if(!preferredAvailabilityZonesNode.IsNull())
    {
      XmlNode preferredAvailabilityZonesMember = preferredAvailabilityZonesNode.FirstChild("PreferredAvailabilityZone");
      while(!preferredAvailabilityZonesMember.IsNull())
      {
        m_preferredAvailabilityZones.push_back(preferredAvailabilityZonesMember.GetText());
        preferredAvailabilityZonesMember = preferredAvailabilityZonesMember.NextNode("PreferredAvailabilityZone");
      }

      m_preferredAvailabilityZonesHasBeenSet = true;
    }
    XmlNode preferredOutpostArnsNode = resultNode.FirstChild("PreferredOutpostArns");
    if(!preferredOutpostArnsNode.IsNull())
    {
      XmlNode preferredOutpostArnsMember = preferredOutpostArnsNode.FirstChild("PreferredOutpostArn");
      while(!preferredOutpostArnsMember.IsNull())
      {
        m_preferredOutpostArns.push_back(preferredOutpostArnsMember.GetText());
        preferredOutpostArnsMember = preferredOutpostArnsMember.NextNode("PreferredOutpostArn");
      }

      m_preferredOutpostArnsHasBeenSet = true;
    }
  }

  return *this;
}

void ConfigureShard::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nodeGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeGroupId=" << StringUtils::URLEncode(m_nodeGroupId.c_str()) << "&";
  }

  if(m_newReplicaCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".NewReplicaCount=" << m_newReplicaCount << "&";
  }

  if(m_preferredAvailabilityZonesHasBeenSet)
  {
      unsigned preferredAvailabilityZonesIdx = 1;
      for(auto& item : m_preferredAvailabilityZones)
      {
        oStream << location << index << locationValue << ".PreferredAvailabilityZone." << preferredAvailabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_preferredOutpostArnsHasBeenSet)
  {
      unsigned preferredOutpostArnsIdx = 1;
      for(auto& item : m_preferredOutpostArns)
      {
        oStream << location << index << locationValue << ".PreferredOutpostArn." << preferredOutpostArnsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void ConfigureShard::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nodeGroupIdHasBeenSet)
  {
      oStream << location << ".NodeGroupId=" << StringUtils::URLEncode(m_nodeGroupId.c_str()) << "&";
  }
  if(m_newReplicaCountHasBeenSet)
  {
      oStream << location << ".NewReplicaCount=" << m_newReplicaCount << "&";
  }
  if(m_preferredAvailabilityZonesHasBeenSet)
  {
      unsigned preferredAvailabilityZonesIdx = 1;
      for(auto& item : m_preferredAvailabilityZones)
      {
        oStream << location << ".PreferredAvailabilityZone." << preferredAvailabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_preferredOutpostArnsHasBeenSet)
  {
      unsigned preferredOutpostArnsIdx = 1;
      for(auto& item : m_preferredOutpostArns)
      {
        oStream << location << ".PreferredOutpostArn." << preferredOutpostArnsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
