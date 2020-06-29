/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/PendingModifiedValues.h>
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

PendingModifiedValues::PendingModifiedValues() : 
    m_masterUserPasswordHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_numberOfNodes(0),
    m_numberOfNodesHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_automatedSnapshotRetentionPeriod(0),
    m_automatedSnapshotRetentionPeriodHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_enhancedVpcRouting(false),
    m_enhancedVpcRoutingHasBeenSet(false),
    m_maintenanceTrackNameHasBeenSet(false),
    m_encryptionTypeHasBeenSet(false)
{
}

PendingModifiedValues::PendingModifiedValues(const XmlNode& xmlNode) : 
    m_masterUserPasswordHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_numberOfNodes(0),
    m_numberOfNodesHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_automatedSnapshotRetentionPeriod(0),
    m_automatedSnapshotRetentionPeriodHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_enhancedVpcRouting(false),
    m_enhancedVpcRoutingHasBeenSet(false),
    m_maintenanceTrackNameHasBeenSet(false),
    m_encryptionTypeHasBeenSet(false)
{
  *this = xmlNode;
}

PendingModifiedValues& PendingModifiedValues::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode masterUserPasswordNode = resultNode.FirstChild("MasterUserPassword");
    if(!masterUserPasswordNode.IsNull())
    {
      m_masterUserPassword = Aws::Utils::Xml::DecodeEscapedXmlText(masterUserPasswordNode.GetText());
      m_masterUserPasswordHasBeenSet = true;
    }
    XmlNode nodeTypeNode = resultNode.FirstChild("NodeType");
    if(!nodeTypeNode.IsNull())
    {
      m_nodeType = Aws::Utils::Xml::DecodeEscapedXmlText(nodeTypeNode.GetText());
      m_nodeTypeHasBeenSet = true;
    }
    XmlNode numberOfNodesNode = resultNode.FirstChild("NumberOfNodes");
    if(!numberOfNodesNode.IsNull())
    {
      m_numberOfNodes = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(numberOfNodesNode.GetText()).c_str()).c_str());
      m_numberOfNodesHasBeenSet = true;
    }
    XmlNode clusterTypeNode = resultNode.FirstChild("ClusterType");
    if(!clusterTypeNode.IsNull())
    {
      m_clusterType = Aws::Utils::Xml::DecodeEscapedXmlText(clusterTypeNode.GetText());
      m_clusterTypeHasBeenSet = true;
    }
    XmlNode clusterVersionNode = resultNode.FirstChild("ClusterVersion");
    if(!clusterVersionNode.IsNull())
    {
      m_clusterVersion = Aws::Utils::Xml::DecodeEscapedXmlText(clusterVersionNode.GetText());
      m_clusterVersionHasBeenSet = true;
    }
    XmlNode automatedSnapshotRetentionPeriodNode = resultNode.FirstChild("AutomatedSnapshotRetentionPeriod");
    if(!automatedSnapshotRetentionPeriodNode.IsNull())
    {
      m_automatedSnapshotRetentionPeriod = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(automatedSnapshotRetentionPeriodNode.GetText()).c_str()).c_str());
      m_automatedSnapshotRetentionPeriodHasBeenSet = true;
    }
    XmlNode clusterIdentifierNode = resultNode.FirstChild("ClusterIdentifier");
    if(!clusterIdentifierNode.IsNull())
    {
      m_clusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(clusterIdentifierNode.GetText());
      m_clusterIdentifierHasBeenSet = true;
    }
    XmlNode publiclyAccessibleNode = resultNode.FirstChild("PubliclyAccessible");
    if(!publiclyAccessibleNode.IsNull())
    {
      m_publiclyAccessible = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(publiclyAccessibleNode.GetText()).c_str()).c_str());
      m_publiclyAccessibleHasBeenSet = true;
    }
    XmlNode enhancedVpcRoutingNode = resultNode.FirstChild("EnhancedVpcRouting");
    if(!enhancedVpcRoutingNode.IsNull())
    {
      m_enhancedVpcRouting = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enhancedVpcRoutingNode.GetText()).c_str()).c_str());
      m_enhancedVpcRoutingHasBeenSet = true;
    }
    XmlNode maintenanceTrackNameNode = resultNode.FirstChild("MaintenanceTrackName");
    if(!maintenanceTrackNameNode.IsNull())
    {
      m_maintenanceTrackName = Aws::Utils::Xml::DecodeEscapedXmlText(maintenanceTrackNameNode.GetText());
      m_maintenanceTrackNameHasBeenSet = true;
    }
    XmlNode encryptionTypeNode = resultNode.FirstChild("EncryptionType");
    if(!encryptionTypeNode.IsNull())
    {
      m_encryptionType = Aws::Utils::Xml::DecodeEscapedXmlText(encryptionTypeNode.GetText());
      m_encryptionTypeHasBeenSet = true;
    }
  }

  return *this;
}

void PendingModifiedValues::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_masterUserPasswordHasBeenSet)
  {
      oStream << location << index << locationValue << ".MasterUserPassword=" << StringUtils::URLEncode(m_masterUserPassword.c_str()) << "&";
  }

  if(m_nodeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeType=" << StringUtils::URLEncode(m_nodeType.c_str()) << "&";
  }

  if(m_numberOfNodesHasBeenSet)
  {
      oStream << location << index << locationValue << ".NumberOfNodes=" << m_numberOfNodes << "&";
  }

  if(m_clusterTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterType=" << StringUtils::URLEncode(m_clusterType.c_str()) << "&";
  }

  if(m_clusterVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterVersion=" << StringUtils::URLEncode(m_clusterVersion.c_str()) << "&";
  }

  if(m_automatedSnapshotRetentionPeriodHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutomatedSnapshotRetentionPeriod=" << m_automatedSnapshotRetentionPeriod << "&";
  }

  if(m_clusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_publiclyAccessibleHasBeenSet)
  {
      oStream << location << index << locationValue << ".PubliclyAccessible=" << std::boolalpha << m_publiclyAccessible << "&";
  }

  if(m_enhancedVpcRoutingHasBeenSet)
  {
      oStream << location << index << locationValue << ".EnhancedVpcRouting=" << std::boolalpha << m_enhancedVpcRouting << "&";
  }

  if(m_maintenanceTrackNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaintenanceTrackName=" << StringUtils::URLEncode(m_maintenanceTrackName.c_str()) << "&";
  }

  if(m_encryptionTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EncryptionType=" << StringUtils::URLEncode(m_encryptionType.c_str()) << "&";
  }

}

void PendingModifiedValues::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_masterUserPasswordHasBeenSet)
  {
      oStream << location << ".MasterUserPassword=" << StringUtils::URLEncode(m_masterUserPassword.c_str()) << "&";
  }
  if(m_nodeTypeHasBeenSet)
  {
      oStream << location << ".NodeType=" << StringUtils::URLEncode(m_nodeType.c_str()) << "&";
  }
  if(m_numberOfNodesHasBeenSet)
  {
      oStream << location << ".NumberOfNodes=" << m_numberOfNodes << "&";
  }
  if(m_clusterTypeHasBeenSet)
  {
      oStream << location << ".ClusterType=" << StringUtils::URLEncode(m_clusterType.c_str()) << "&";
  }
  if(m_clusterVersionHasBeenSet)
  {
      oStream << location << ".ClusterVersion=" << StringUtils::URLEncode(m_clusterVersion.c_str()) << "&";
  }
  if(m_automatedSnapshotRetentionPeriodHasBeenSet)
  {
      oStream << location << ".AutomatedSnapshotRetentionPeriod=" << m_automatedSnapshotRetentionPeriod << "&";
  }
  if(m_clusterIdentifierHasBeenSet)
  {
      oStream << location << ".ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }
  if(m_publiclyAccessibleHasBeenSet)
  {
      oStream << location << ".PubliclyAccessible=" << std::boolalpha << m_publiclyAccessible << "&";
  }
  if(m_enhancedVpcRoutingHasBeenSet)
  {
      oStream << location << ".EnhancedVpcRouting=" << std::boolalpha << m_enhancedVpcRouting << "&";
  }
  if(m_maintenanceTrackNameHasBeenSet)
  {
      oStream << location << ".MaintenanceTrackName=" << StringUtils::URLEncode(m_maintenanceTrackName.c_str()) << "&";
  }
  if(m_encryptionTypeHasBeenSet)
  {
      oStream << location << ".EncryptionType=" << StringUtils::URLEncode(m_encryptionType.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
