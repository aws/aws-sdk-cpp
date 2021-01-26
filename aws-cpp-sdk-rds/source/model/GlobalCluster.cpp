/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/GlobalCluster.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

GlobalCluster::GlobalCluster() : 
    m_globalClusterIdentifierHasBeenSet(false),
    m_globalClusterResourceIdHasBeenSet(false),
    m_globalClusterArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_storageEncrypted(false),
    m_storageEncryptedHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false),
    m_globalClusterMembersHasBeenSet(false)
{
}

GlobalCluster::GlobalCluster(const XmlNode& xmlNode) : 
    m_globalClusterIdentifierHasBeenSet(false),
    m_globalClusterResourceIdHasBeenSet(false),
    m_globalClusterArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_storageEncrypted(false),
    m_storageEncryptedHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false),
    m_globalClusterMembersHasBeenSet(false)
{
  *this = xmlNode;
}

GlobalCluster& GlobalCluster::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode globalClusterIdentifierNode = resultNode.FirstChild("GlobalClusterIdentifier");
    if(!globalClusterIdentifierNode.IsNull())
    {
      m_globalClusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(globalClusterIdentifierNode.GetText());
      m_globalClusterIdentifierHasBeenSet = true;
    }
    XmlNode globalClusterResourceIdNode = resultNode.FirstChild("GlobalClusterResourceId");
    if(!globalClusterResourceIdNode.IsNull())
    {
      m_globalClusterResourceId = Aws::Utils::Xml::DecodeEscapedXmlText(globalClusterResourceIdNode.GetText());
      m_globalClusterResourceIdHasBeenSet = true;
    }
    XmlNode globalClusterArnNode = resultNode.FirstChild("GlobalClusterArn");
    if(!globalClusterArnNode.IsNull())
    {
      m_globalClusterArn = Aws::Utils::Xml::DecodeEscapedXmlText(globalClusterArnNode.GetText());
      m_globalClusterArnHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(engineVersionNode.GetText());
      m_engineVersionHasBeenSet = true;
    }
    XmlNode databaseNameNode = resultNode.FirstChild("DatabaseName");
    if(!databaseNameNode.IsNull())
    {
      m_databaseName = Aws::Utils::Xml::DecodeEscapedXmlText(databaseNameNode.GetText());
      m_databaseNameHasBeenSet = true;
    }
    XmlNode storageEncryptedNode = resultNode.FirstChild("StorageEncrypted");
    if(!storageEncryptedNode.IsNull())
    {
      m_storageEncrypted = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(storageEncryptedNode.GetText()).c_str()).c_str());
      m_storageEncryptedHasBeenSet = true;
    }
    XmlNode deletionProtectionNode = resultNode.FirstChild("DeletionProtection");
    if(!deletionProtectionNode.IsNull())
    {
      m_deletionProtection = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deletionProtectionNode.GetText()).c_str()).c_str());
      m_deletionProtectionHasBeenSet = true;
    }
    XmlNode globalClusterMembersNode = resultNode.FirstChild("GlobalClusterMembers");
    if(!globalClusterMembersNode.IsNull())
    {
      XmlNode globalClusterMembersMember = globalClusterMembersNode.FirstChild("GlobalClusterMember");
      while(!globalClusterMembersMember.IsNull())
      {
        m_globalClusterMembers.push_back(globalClusterMembersMember);
        globalClusterMembersMember = globalClusterMembersMember.NextNode("GlobalClusterMember");
      }

      m_globalClusterMembersHasBeenSet = true;
    }
  }

  return *this;
}

void GlobalCluster::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_globalClusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".GlobalClusterIdentifier=" << StringUtils::URLEncode(m_globalClusterIdentifier.c_str()) << "&";
  }

  if(m_globalClusterResourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".GlobalClusterResourceId=" << StringUtils::URLEncode(m_globalClusterResourceId.c_str()) << "&";
  }

  if(m_globalClusterArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".GlobalClusterArn=" << StringUtils::URLEncode(m_globalClusterArn.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_databaseNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DatabaseName=" << StringUtils::URLEncode(m_databaseName.c_str()) << "&";
  }

  if(m_storageEncryptedHasBeenSet)
  {
      oStream << location << index << locationValue << ".StorageEncrypted=" << std::boolalpha << m_storageEncrypted << "&";
  }

  if(m_deletionProtectionHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeletionProtection=" << std::boolalpha << m_deletionProtection << "&";
  }

  if(m_globalClusterMembersHasBeenSet)
  {
      unsigned globalClusterMembersIdx = 1;
      for(auto& item : m_globalClusterMembers)
      {
        Aws::StringStream globalClusterMembersSs;
        globalClusterMembersSs << location << index << locationValue << ".GlobalClusterMember." << globalClusterMembersIdx++;
        item.OutputToStream(oStream, globalClusterMembersSs.str().c_str());
      }
  }

}

void GlobalCluster::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_globalClusterIdentifierHasBeenSet)
  {
      oStream << location << ".GlobalClusterIdentifier=" << StringUtils::URLEncode(m_globalClusterIdentifier.c_str()) << "&";
  }
  if(m_globalClusterResourceIdHasBeenSet)
  {
      oStream << location << ".GlobalClusterResourceId=" << StringUtils::URLEncode(m_globalClusterResourceId.c_str()) << "&";
  }
  if(m_globalClusterArnHasBeenSet)
  {
      oStream << location << ".GlobalClusterArn=" << StringUtils::URLEncode(m_globalClusterArn.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_databaseNameHasBeenSet)
  {
      oStream << location << ".DatabaseName=" << StringUtils::URLEncode(m_databaseName.c_str()) << "&";
  }
  if(m_storageEncryptedHasBeenSet)
  {
      oStream << location << ".StorageEncrypted=" << std::boolalpha << m_storageEncrypted << "&";
  }
  if(m_deletionProtectionHasBeenSet)
  {
      oStream << location << ".DeletionProtection=" << std::boolalpha << m_deletionProtection << "&";
  }
  if(m_globalClusterMembersHasBeenSet)
  {
      unsigned globalClusterMembersIdx = 1;
      for(auto& item : m_globalClusterMembers)
      {
        Aws::StringStream globalClusterMembersSs;
        globalClusterMembersSs << location <<  ".GlobalClusterMember." << globalClusterMembersIdx++;
        item.OutputToStream(oStream, globalClusterMembersSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
