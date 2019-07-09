/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_preferredAvailabilityZonesHasBeenSet(false)
{
}

ConfigureShard::ConfigureShard(const XmlNode& xmlNode) : 
    m_nodeGroupIdHasBeenSet(false),
    m_newReplicaCount(0),
    m_newReplicaCountHasBeenSet(false),
    m_preferredAvailabilityZonesHasBeenSet(false)
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
      m_nodeGroupId = nodeGroupIdNode.GetText();
      m_nodeGroupIdHasBeenSet = true;
    }
    XmlNode newReplicaCountNode = resultNode.FirstChild("NewReplicaCount");
    if(!newReplicaCountNode.IsNull())
    {
      m_newReplicaCount = StringUtils::ConvertToInt32(StringUtils::Trim(newReplicaCountNode.GetText().c_str()).c_str());
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
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
