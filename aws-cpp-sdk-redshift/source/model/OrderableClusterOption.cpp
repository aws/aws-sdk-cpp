/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/OrderableClusterOption.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

OrderableClusterOption::OrderableClusterOption() : 
    m_clusterVersionHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false)
{
}

OrderableClusterOption::OrderableClusterOption(const XmlNode& xmlNode) : 
    m_clusterVersionHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false)
{
  *this = xmlNode;
}

OrderableClusterOption& OrderableClusterOption::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode clusterVersionNode = resultNode.FirstChild("ClusterVersion");
    if(!clusterVersionNode.IsNull())
    {
      m_clusterVersion = Aws::Utils::Xml::DecodeEscapedXmlText(clusterVersionNode.GetText());
      m_clusterVersionHasBeenSet = true;
    }
    XmlNode clusterTypeNode = resultNode.FirstChild("ClusterType");
    if(!clusterTypeNode.IsNull())
    {
      m_clusterType = Aws::Utils::Xml::DecodeEscapedXmlText(clusterTypeNode.GetText());
      m_clusterTypeHasBeenSet = true;
    }
    XmlNode nodeTypeNode = resultNode.FirstChild("NodeType");
    if(!nodeTypeNode.IsNull())
    {
      m_nodeType = Aws::Utils::Xml::DecodeEscapedXmlText(nodeTypeNode.GetText());
      m_nodeTypeHasBeenSet = true;
    }
    XmlNode availabilityZonesNode = resultNode.FirstChild("AvailabilityZones");
    if(!availabilityZonesNode.IsNull())
    {
      XmlNode availabilityZonesMember = availabilityZonesNode.FirstChild("AvailabilityZone");
      while(!availabilityZonesMember.IsNull())
      {
        m_availabilityZones.push_back(availabilityZonesMember);
        availabilityZonesMember = availabilityZonesMember.NextNode("AvailabilityZone");
      }

      m_availabilityZonesHasBeenSet = true;
    }
  }

  return *this;
}

void OrderableClusterOption::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_clusterVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterVersion=" << StringUtils::URLEncode(m_clusterVersion.c_str()) << "&";
  }

  if(m_clusterTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterType=" << StringUtils::URLEncode(m_clusterType.c_str()) << "&";
  }

  if(m_nodeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeType=" << StringUtils::URLEncode(m_nodeType.c_str()) << "&";
  }

  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        Aws::StringStream availabilityZonesSs;
        availabilityZonesSs << location << index << locationValue << ".AvailabilityZone." << availabilityZonesIdx++;
        item.OutputToStream(oStream, availabilityZonesSs.str().c_str());
      }
  }

}

void OrderableClusterOption::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_clusterVersionHasBeenSet)
  {
      oStream << location << ".ClusterVersion=" << StringUtils::URLEncode(m_clusterVersion.c_str()) << "&";
  }
  if(m_clusterTypeHasBeenSet)
  {
      oStream << location << ".ClusterType=" << StringUtils::URLEncode(m_clusterType.c_str()) << "&";
  }
  if(m_nodeTypeHasBeenSet)
  {
      oStream << location << ".NodeType=" << StringUtils::URLEncode(m_nodeType.c_str()) << "&";
  }
  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        Aws::StringStream availabilityZonesSs;
        availabilityZonesSs << location <<  ".AvailabilityZone." << availabilityZonesIdx++;
        item.OutputToStream(oStream, availabilityZonesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
