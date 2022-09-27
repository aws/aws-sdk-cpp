/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/model/DBClusterSnapshot.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace DocDB
{
namespace Model
{

DBClusterSnapshot::DBClusterSnapshot() : 
    m_availabilityZonesHasBeenSet(false),
    m_dBClusterSnapshotIdentifierHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_snapshotCreateTimeHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_clusterCreateTimeHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_snapshotTypeHasBeenSet(false),
    m_percentProgress(0),
    m_percentProgressHasBeenSet(false),
    m_storageEncrypted(false),
    m_storageEncryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_dBClusterSnapshotArnHasBeenSet(false),
    m_sourceDBClusterSnapshotArnHasBeenSet(false)
{
}

DBClusterSnapshot::DBClusterSnapshot(const XmlNode& xmlNode) : 
    m_availabilityZonesHasBeenSet(false),
    m_dBClusterSnapshotIdentifierHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_snapshotCreateTimeHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_clusterCreateTimeHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_snapshotTypeHasBeenSet(false),
    m_percentProgress(0),
    m_percentProgressHasBeenSet(false),
    m_storageEncrypted(false),
    m_storageEncryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_dBClusterSnapshotArnHasBeenSet(false),
    m_sourceDBClusterSnapshotArnHasBeenSet(false)
{
  *this = xmlNode;
}

DBClusterSnapshot& DBClusterSnapshot::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode availabilityZonesNode = resultNode.FirstChild("AvailabilityZones");
    if(!availabilityZonesNode.IsNull())
    {
      XmlNode availabilityZonesMember = availabilityZonesNode.FirstChild("AvailabilityZone");
      while(!availabilityZonesMember.IsNull())
      {
        m_availabilityZones.push_back(availabilityZonesMember.GetText());
        availabilityZonesMember = availabilityZonesMember.NextNode("AvailabilityZone");
      }

      m_availabilityZonesHasBeenSet = true;
    }
    XmlNode dBClusterSnapshotIdentifierNode = resultNode.FirstChild("DBClusterSnapshotIdentifier");
    if(!dBClusterSnapshotIdentifierNode.IsNull())
    {
      m_dBClusterSnapshotIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterSnapshotIdentifierNode.GetText());
      m_dBClusterSnapshotIdentifierHasBeenSet = true;
    }
    XmlNode dBClusterIdentifierNode = resultNode.FirstChild("DBClusterIdentifier");
    if(!dBClusterIdentifierNode.IsNull())
    {
      m_dBClusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterIdentifierNode.GetText());
      m_dBClusterIdentifierHasBeenSet = true;
    }
    XmlNode snapshotCreateTimeNode = resultNode.FirstChild("SnapshotCreateTime");
    if(!snapshotCreateTimeNode.IsNull())
    {
      m_snapshotCreateTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(snapshotCreateTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_snapshotCreateTimeHasBeenSet = true;
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(portNode.GetText()).c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("VpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode clusterCreateTimeNode = resultNode.FirstChild("ClusterCreateTime");
    if(!clusterCreateTimeNode.IsNull())
    {
      m_clusterCreateTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(clusterCreateTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_clusterCreateTimeHasBeenSet = true;
    }
    XmlNode masterUsernameNode = resultNode.FirstChild("MasterUsername");
    if(!masterUsernameNode.IsNull())
    {
      m_masterUsername = Aws::Utils::Xml::DecodeEscapedXmlText(masterUsernameNode.GetText());
      m_masterUsernameHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(engineVersionNode.GetText());
      m_engineVersionHasBeenSet = true;
    }
    XmlNode snapshotTypeNode = resultNode.FirstChild("SnapshotType");
    if(!snapshotTypeNode.IsNull())
    {
      m_snapshotType = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotTypeNode.GetText());
      m_snapshotTypeHasBeenSet = true;
    }
    XmlNode percentProgressNode = resultNode.FirstChild("PercentProgress");
    if(!percentProgressNode.IsNull())
    {
      m_percentProgress = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(percentProgressNode.GetText()).c_str()).c_str());
      m_percentProgressHasBeenSet = true;
    }
    XmlNode storageEncryptedNode = resultNode.FirstChild("StorageEncrypted");
    if(!storageEncryptedNode.IsNull())
    {
      m_storageEncrypted = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(storageEncryptedNode.GetText()).c_str()).c_str());
      m_storageEncryptedHasBeenSet = true;
    }
    XmlNode kmsKeyIdNode = resultNode.FirstChild("KmsKeyId");
    if(!kmsKeyIdNode.IsNull())
    {
      m_kmsKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(kmsKeyIdNode.GetText());
      m_kmsKeyIdHasBeenSet = true;
    }
    XmlNode dBClusterSnapshotArnNode = resultNode.FirstChild("DBClusterSnapshotArn");
    if(!dBClusterSnapshotArnNode.IsNull())
    {
      m_dBClusterSnapshotArn = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterSnapshotArnNode.GetText());
      m_dBClusterSnapshotArnHasBeenSet = true;
    }
    XmlNode sourceDBClusterSnapshotArnNode = resultNode.FirstChild("SourceDBClusterSnapshotArn");
    if(!sourceDBClusterSnapshotArnNode.IsNull())
    {
      m_sourceDBClusterSnapshotArn = Aws::Utils::Xml::DecodeEscapedXmlText(sourceDBClusterSnapshotArnNode.GetText());
      m_sourceDBClusterSnapshotArnHasBeenSet = true;
    }
  }

  return *this;
}

void DBClusterSnapshot::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        oStream << location << index << locationValue << ".AvailabilityZone." << availabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_dBClusterSnapshotIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterSnapshotIdentifier=" << StringUtils::URLEncode(m_dBClusterSnapshotIdentifier.c_str()) << "&";
  }

  if(m_dBClusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_snapshotCreateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotCreateTime=" << StringUtils::URLEncode(m_snapshotCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_clusterCreateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterCreateTime=" << StringUtils::URLEncode(m_clusterCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_masterUsernameHasBeenSet)
  {
      oStream << location << index << locationValue << ".MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_snapshotTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotType=" << StringUtils::URLEncode(m_snapshotType.c_str()) << "&";
  }

  if(m_percentProgressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PercentProgress=" << m_percentProgress << "&";
  }

  if(m_storageEncryptedHasBeenSet)
  {
      oStream << location << index << locationValue << ".StorageEncrypted=" << std::boolalpha << m_storageEncrypted << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_dBClusterSnapshotArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterSnapshotArn=" << StringUtils::URLEncode(m_dBClusterSnapshotArn.c_str()) << "&";
  }

  if(m_sourceDBClusterSnapshotArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceDBClusterSnapshotArn=" << StringUtils::URLEncode(m_sourceDBClusterSnapshotArn.c_str()) << "&";
  }

}

void DBClusterSnapshot::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        oStream << location << ".AvailabilityZone." << availabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_dBClusterSnapshotIdentifierHasBeenSet)
  {
      oStream << location << ".DBClusterSnapshotIdentifier=" << StringUtils::URLEncode(m_dBClusterSnapshotIdentifier.c_str()) << "&";
  }
  if(m_dBClusterIdentifierHasBeenSet)
  {
      oStream << location << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }
  if(m_snapshotCreateTimeHasBeenSet)
  {
      oStream << location << ".SnapshotCreateTime=" << StringUtils::URLEncode(m_snapshotCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_clusterCreateTimeHasBeenSet)
  {
      oStream << location << ".ClusterCreateTime=" << StringUtils::URLEncode(m_clusterCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_masterUsernameHasBeenSet)
  {
      oStream << location << ".MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_snapshotTypeHasBeenSet)
  {
      oStream << location << ".SnapshotType=" << StringUtils::URLEncode(m_snapshotType.c_str()) << "&";
  }
  if(m_percentProgressHasBeenSet)
  {
      oStream << location << ".PercentProgress=" << m_percentProgress << "&";
  }
  if(m_storageEncryptedHasBeenSet)
  {
      oStream << location << ".StorageEncrypted=" << std::boolalpha << m_storageEncrypted << "&";
  }
  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }
  if(m_dBClusterSnapshotArnHasBeenSet)
  {
      oStream << location << ".DBClusterSnapshotArn=" << StringUtils::URLEncode(m_dBClusterSnapshotArn.c_str()) << "&";
  }
  if(m_sourceDBClusterSnapshotArnHasBeenSet)
  {
      oStream << location << ".SourceDBClusterSnapshotArn=" << StringUtils::URLEncode(m_sourceDBClusterSnapshotArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace DocDB
} // namespace Aws
