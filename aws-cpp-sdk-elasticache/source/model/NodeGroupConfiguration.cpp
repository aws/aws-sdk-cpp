/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_slotsHasBeenSet(false),
    m_replicaCount(0),
    m_replicaCountHasBeenSet(false),
    m_primaryAvailabilityZoneHasBeenSet(false),
    m_replicaAvailabilityZonesHasBeenSet(false)
{
}

NodeGroupConfiguration::NodeGroupConfiguration(const XmlNode& xmlNode) : 
    m_slotsHasBeenSet(false),
    m_replicaCount(0),
    m_replicaCountHasBeenSet(false),
    m_primaryAvailabilityZoneHasBeenSet(false),
    m_replicaAvailabilityZonesHasBeenSet(false)
{
  *this = xmlNode;
}

NodeGroupConfiguration& NodeGroupConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode slotsNode = resultNode.FirstChild("Slots");
    if(!slotsNode.IsNull())
    {
      m_slots = StringUtils::Trim(slotsNode.GetText().c_str());
      m_slotsHasBeenSet = true;
    }
    XmlNode replicaCountNode = resultNode.FirstChild("ReplicaCount");
    if(!replicaCountNode.IsNull())
    {
      m_replicaCount = StringUtils::ConvertToInt32(StringUtils::Trim(replicaCountNode.GetText().c_str()).c_str());
      m_replicaCountHasBeenSet = true;
    }
    XmlNode primaryAvailabilityZoneNode = resultNode.FirstChild("PrimaryAvailabilityZone");
    if(!primaryAvailabilityZoneNode.IsNull())
    {
      m_primaryAvailabilityZone = StringUtils::Trim(primaryAvailabilityZoneNode.GetText().c_str());
      m_primaryAvailabilityZoneHasBeenSet = true;
    }
    XmlNode replicaAvailabilityZonesNode = resultNode.FirstChild("ReplicaAvailabilityZones");
    if(!replicaAvailabilityZonesNode.IsNull())
    {
      XmlNode replicaAvailabilityZonesMember = replicaAvailabilityZonesNode.FirstChild("AvailabilityZone");
      while(!replicaAvailabilityZonesMember.IsNull())
      {
        m_replicaAvailabilityZones.push_back(StringUtils::Trim(replicaAvailabilityZonesMember.GetText().c_str()));
        replicaAvailabilityZonesMember = replicaAvailabilityZonesMember.NextNode("AvailabilityZone");
      }

      m_replicaAvailabilityZonesHasBeenSet = true;
    }
  }

  return *this;
}

void NodeGroupConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
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

}

void NodeGroupConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
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
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
