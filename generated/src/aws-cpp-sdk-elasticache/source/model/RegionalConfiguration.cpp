/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/RegionalConfiguration.h>
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

RegionalConfiguration::RegionalConfiguration() : 
    m_replicationGroupIdHasBeenSet(false),
    m_replicationGroupRegionHasBeenSet(false),
    m_reshardingConfigurationHasBeenSet(false)
{
}

RegionalConfiguration::RegionalConfiguration(const XmlNode& xmlNode) : 
    m_replicationGroupIdHasBeenSet(false),
    m_replicationGroupRegionHasBeenSet(false),
    m_reshardingConfigurationHasBeenSet(false)
{
  *this = xmlNode;
}

RegionalConfiguration& RegionalConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode replicationGroupIdNode = resultNode.FirstChild("ReplicationGroupId");
    if(!replicationGroupIdNode.IsNull())
    {
      m_replicationGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(replicationGroupIdNode.GetText());
      m_replicationGroupIdHasBeenSet = true;
    }
    XmlNode replicationGroupRegionNode = resultNode.FirstChild("ReplicationGroupRegion");
    if(!replicationGroupRegionNode.IsNull())
    {
      m_replicationGroupRegion = Aws::Utils::Xml::DecodeEscapedXmlText(replicationGroupRegionNode.GetText());
      m_replicationGroupRegionHasBeenSet = true;
    }
    XmlNode reshardingConfigurationNode = resultNode.FirstChild("ReshardingConfiguration");
    if(!reshardingConfigurationNode.IsNull())
    {
      XmlNode reshardingConfigurationMember = reshardingConfigurationNode.FirstChild("ReshardingConfiguration");
      while(!reshardingConfigurationMember.IsNull())
      {
        m_reshardingConfiguration.push_back(reshardingConfigurationMember);
        reshardingConfigurationMember = reshardingConfigurationMember.NextNode("ReshardingConfiguration");
      }

      m_reshardingConfigurationHasBeenSet = true;
    }
  }

  return *this;
}

void RegionalConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_replicationGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReplicationGroupId=" << StringUtils::URLEncode(m_replicationGroupId.c_str()) << "&";
  }

  if(m_replicationGroupRegionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReplicationGroupRegion=" << StringUtils::URLEncode(m_replicationGroupRegion.c_str()) << "&";
  }

  if(m_reshardingConfigurationHasBeenSet)
  {
      unsigned reshardingConfigurationIdx = 1;
      for(auto& item : m_reshardingConfiguration)
      {
        Aws::StringStream reshardingConfigurationSs;
        reshardingConfigurationSs << location << index << locationValue << ".ReshardingConfiguration." << reshardingConfigurationIdx++;
        item.OutputToStream(oStream, reshardingConfigurationSs.str().c_str());
      }
  }

}

void RegionalConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_replicationGroupIdHasBeenSet)
  {
      oStream << location << ".ReplicationGroupId=" << StringUtils::URLEncode(m_replicationGroupId.c_str()) << "&";
  }
  if(m_replicationGroupRegionHasBeenSet)
  {
      oStream << location << ".ReplicationGroupRegion=" << StringUtils::URLEncode(m_replicationGroupRegion.c_str()) << "&";
  }
  if(m_reshardingConfigurationHasBeenSet)
  {
      unsigned reshardingConfigurationIdx = 1;
      for(auto& item : m_reshardingConfiguration)
      {
        Aws::StringStream reshardingConfigurationSs;
        reshardingConfigurationSs << location <<  ".ReshardingConfiguration." << reshardingConfigurationIdx++;
        item.OutputToStream(oStream, reshardingConfigurationSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
