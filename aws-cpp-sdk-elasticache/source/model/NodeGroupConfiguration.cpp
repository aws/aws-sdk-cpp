/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/NodeGroupConfiguration.h>
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

NodeGroupConfiguration::NodeGroupConfiguration() : 
    m_nodeGroupIdHasBeenSet(false),
    m_slotsHasBeenSet(false),
    m_replicaCount(0),
    m_replicaCountHasBeenSet(false),
    m_primaryAvailabilityZoneHasBeenSet(false),
    m_replicaAvailabilityZonesHasBeenSet(false),
    m_primaryOutpostArnHasBeenSet(false),
    m_replicaOutpostArnsHasBeenSet(false)
{
}

NodeGroupConfiguration::NodeGroupConfiguration(const XmlNode& xmlNode) : 
    m_nodeGroupIdHasBeenSet(false),
    m_slotsHasBeenSet(false),
    m_replicaCount(0),
    m_replicaCountHasBeenSet(false),
    m_primaryAvailabilityZoneHasBeenSet(false),
    m_replicaAvailabilityZonesHasBeenSet(false),
    m_primaryOutpostArnHasBeenSet(false),
    m_replicaOutpostArnsHasBeenSet(false)
{
  *this = xmlNode;
}

NodeGroupConfiguration& NodeGroupConfiguration::operator =(const XmlNode& xmlNode)
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
    XmlNode slotsNode = resultNode.FirstChild("Slots");
    if(!slotsNode.IsNull())
    {
      m_slots = Aws::Utils::Xml::DecodeEscapedXmlText(slotsNode.GetText());
      m_slotsHasBeenSet = true;
    }
    XmlNode replicaCountNode = resultNode.FirstChild("ReplicaCount");
    if(!replicaCountNode.IsNull())
    {
      m_replicaCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(replicaCountNode.GetText()).c_str()).c_str());
      m_replicaCountHasBeenSet = true;
    }
    XmlNode primaryAvailabilityZoneNode = resultNode.FirstChild("PrimaryAvailabilityZone");
    if(!primaryAvailabilityZoneNode.IsNull())
    {
      m_primaryAvailabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(primaryAvailabilityZoneNode.GetText());
      m_primaryAvailabilityZoneHasBeenSet = true;
    }
    XmlNode replicaAvailabilityZonesNode = resultNode.FirstChild("ReplicaAvailabilityZones");
    if(!replicaAvailabilityZonesNode.IsNull())
    {
      XmlNode replicaAvailabilityZonesMember = replicaAvailabilityZonesNode.FirstChild("AvailabilityZone");
      while(!replicaAvailabilityZonesMember.IsNull())
      {
        m_replicaAvailabilityZones.push_back(replicaAvailabilityZonesMember.GetText());
        replicaAvailabilityZonesMember = replicaAvailabilityZonesMember.NextNode("AvailabilityZone");
      }

      m_replicaAvailabilityZonesHasBeenSet = true;
    }
    XmlNode primaryOutpostArnNode = resultNode.FirstChild("PrimaryOutpostArn");
    if(!primaryOutpostArnNode.IsNull())
    {
      m_primaryOutpostArn = Aws::Utils::Xml::DecodeEscapedXmlText(primaryOutpostArnNode.GetText());
      m_primaryOutpostArnHasBeenSet = true;
    }
    XmlNode replicaOutpostArnsNode = resultNode.FirstChild("ReplicaOutpostArns");
    if(!replicaOutpostArnsNode.IsNull())
    {
      XmlNode replicaOutpostArnsMember = replicaOutpostArnsNode.FirstChild("OutpostArn");
      while(!replicaOutpostArnsMember.IsNull())
      {
        m_replicaOutpostArns.push_back(replicaOutpostArnsMember.GetText());
        replicaOutpostArnsMember = replicaOutpostArnsMember.NextNode("OutpostArn");
      }

      m_replicaOutpostArnsHasBeenSet = true;
    }
  }

  return *this;
}

void NodeGroupConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nodeGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeGroupId=" << StringUtils::URLEncode(m_nodeGroupId.c_str()) << "&";
  }

  if(m_slotsHasBeenSet)
  {
      oStream << location << index << locationValue << ".Slots=" << StringUtils::URLEncode(m_slots.c_str()) << "&";
  }

  if(m_replicaCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReplicaCount=" << m_replicaCount << "&";
  }

  if(m_primaryAvailabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrimaryAvailabilityZone=" << StringUtils::URLEncode(m_primaryAvailabilityZone.c_str()) << "&";
  }

  if(m_replicaAvailabilityZonesHasBeenSet)
  {
      unsigned replicaAvailabilityZonesIdx = 1;
      for(auto& item : m_replicaAvailabilityZones)
      {
        oStream << location << index << locationValue << ".AvailabilityZone." << replicaAvailabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_primaryOutpostArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrimaryOutpostArn=" << StringUtils::URLEncode(m_primaryOutpostArn.c_str()) << "&";
  }

  if(m_replicaOutpostArnsHasBeenSet)
  {
      unsigned replicaOutpostArnsIdx = 1;
      for(auto& item : m_replicaOutpostArns)
      {
        oStream << location << index << locationValue << ".OutpostArn." << replicaOutpostArnsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void NodeGroupConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nodeGroupIdHasBeenSet)
  {
      oStream << location << ".NodeGroupId=" << StringUtils::URLEncode(m_nodeGroupId.c_str()) << "&";
  }
  if(m_slotsHasBeenSet)
  {
      oStream << location << ".Slots=" << StringUtils::URLEncode(m_slots.c_str()) << "&";
  }
  if(m_replicaCountHasBeenSet)
  {
      oStream << location << ".ReplicaCount=" << m_replicaCount << "&";
  }
  if(m_primaryAvailabilityZoneHasBeenSet)
  {
      oStream << location << ".PrimaryAvailabilityZone=" << StringUtils::URLEncode(m_primaryAvailabilityZone.c_str()) << "&";
  }
  if(m_replicaAvailabilityZonesHasBeenSet)
  {
      unsigned replicaAvailabilityZonesIdx = 1;
      for(auto& item : m_replicaAvailabilityZones)
      {
        oStream << location << ".AvailabilityZone." << replicaAvailabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_primaryOutpostArnHasBeenSet)
  {
      oStream << location << ".PrimaryOutpostArn=" << StringUtils::URLEncode(m_primaryOutpostArn.c_str()) << "&";
  }
  if(m_replicaOutpostArnsHasBeenSet)
  {
      unsigned replicaOutpostArnsIdx = 1;
      for(auto& item : m_replicaOutpostArns)
      {
        oStream << location << ".OutpostArn." << replicaOutpostArnsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
