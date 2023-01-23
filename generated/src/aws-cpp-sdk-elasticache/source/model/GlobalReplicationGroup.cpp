/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/GlobalReplicationGroup.h>
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

GlobalReplicationGroup::GlobalReplicationGroup() : 
    m_globalReplicationGroupIdHasBeenSet(false),
    m_globalReplicationGroupDescriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cacheNodeTypeHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_membersHasBeenSet(false),
    m_clusterEnabled(false),
    m_clusterEnabledHasBeenSet(false),
    m_globalNodeGroupsHasBeenSet(false),
    m_authTokenEnabled(false),
    m_authTokenEnabledHasBeenSet(false),
    m_transitEncryptionEnabled(false),
    m_transitEncryptionEnabledHasBeenSet(false),
    m_atRestEncryptionEnabled(false),
    m_atRestEncryptionEnabledHasBeenSet(false),
    m_aRNHasBeenSet(false)
{
}

GlobalReplicationGroup::GlobalReplicationGroup(const XmlNode& xmlNode) : 
    m_globalReplicationGroupIdHasBeenSet(false),
    m_globalReplicationGroupDescriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cacheNodeTypeHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_membersHasBeenSet(false),
    m_clusterEnabled(false),
    m_clusterEnabledHasBeenSet(false),
    m_globalNodeGroupsHasBeenSet(false),
    m_authTokenEnabled(false),
    m_authTokenEnabledHasBeenSet(false),
    m_transitEncryptionEnabled(false),
    m_transitEncryptionEnabledHasBeenSet(false),
    m_atRestEncryptionEnabled(false),
    m_atRestEncryptionEnabledHasBeenSet(false),
    m_aRNHasBeenSet(false)
{
  *this = xmlNode;
}

GlobalReplicationGroup& GlobalReplicationGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode globalReplicationGroupIdNode = resultNode.FirstChild("GlobalReplicationGroupId");
    if(!globalReplicationGroupIdNode.IsNull())
    {
      m_globalReplicationGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(globalReplicationGroupIdNode.GetText());
      m_globalReplicationGroupIdHasBeenSet = true;
    }
    XmlNode globalReplicationGroupDescriptionNode = resultNode.FirstChild("GlobalReplicationGroupDescription");
    if(!globalReplicationGroupDescriptionNode.IsNull())
    {
      m_globalReplicationGroupDescription = Aws::Utils::Xml::DecodeEscapedXmlText(globalReplicationGroupDescriptionNode.GetText());
      m_globalReplicationGroupDescriptionHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode cacheNodeTypeNode = resultNode.FirstChild("CacheNodeType");
    if(!cacheNodeTypeNode.IsNull())
    {
      m_cacheNodeType = Aws::Utils::Xml::DecodeEscapedXmlText(cacheNodeTypeNode.GetText());
      m_cacheNodeTypeHasBeenSet = true;
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
    XmlNode membersNode = resultNode.FirstChild("Members");
    if(!membersNode.IsNull())
    {
      XmlNode membersMember = membersNode.FirstChild("GlobalReplicationGroupMember");
      while(!membersMember.IsNull())
      {
        m_members.push_back(membersMember);
        membersMember = membersMember.NextNode("GlobalReplicationGroupMember");
      }

      m_membersHasBeenSet = true;
    }
    XmlNode clusterEnabledNode = resultNode.FirstChild("ClusterEnabled");
    if(!clusterEnabledNode.IsNull())
    {
      m_clusterEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(clusterEnabledNode.GetText()).c_str()).c_str());
      m_clusterEnabledHasBeenSet = true;
    }
    XmlNode globalNodeGroupsNode = resultNode.FirstChild("GlobalNodeGroups");
    if(!globalNodeGroupsNode.IsNull())
    {
      XmlNode globalNodeGroupsMember = globalNodeGroupsNode.FirstChild("GlobalNodeGroup");
      while(!globalNodeGroupsMember.IsNull())
      {
        m_globalNodeGroups.push_back(globalNodeGroupsMember);
        globalNodeGroupsMember = globalNodeGroupsMember.NextNode("GlobalNodeGroup");
      }

      m_globalNodeGroupsHasBeenSet = true;
    }
    XmlNode authTokenEnabledNode = resultNode.FirstChild("AuthTokenEnabled");
    if(!authTokenEnabledNode.IsNull())
    {
      m_authTokenEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(authTokenEnabledNode.GetText()).c_str()).c_str());
      m_authTokenEnabledHasBeenSet = true;
    }
    XmlNode transitEncryptionEnabledNode = resultNode.FirstChild("TransitEncryptionEnabled");
    if(!transitEncryptionEnabledNode.IsNull())
    {
      m_transitEncryptionEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(transitEncryptionEnabledNode.GetText()).c_str()).c_str());
      m_transitEncryptionEnabledHasBeenSet = true;
    }
    XmlNode atRestEncryptionEnabledNode = resultNode.FirstChild("AtRestEncryptionEnabled");
    if(!atRestEncryptionEnabledNode.IsNull())
    {
      m_atRestEncryptionEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(atRestEncryptionEnabledNode.GetText()).c_str()).c_str());
      m_atRestEncryptionEnabledHasBeenSet = true;
    }
    XmlNode aRNNode = resultNode.FirstChild("ARN");
    if(!aRNNode.IsNull())
    {
      m_aRN = Aws::Utils::Xml::DecodeEscapedXmlText(aRNNode.GetText());
      m_aRNHasBeenSet = true;
    }
  }

  return *this;
}

void GlobalReplicationGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_globalReplicationGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".GlobalReplicationGroupId=" << StringUtils::URLEncode(m_globalReplicationGroupId.c_str()) << "&";
  }

  if(m_globalReplicationGroupDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".GlobalReplicationGroupDescription=" << StringUtils::URLEncode(m_globalReplicationGroupDescription.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_cacheNodeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheNodeType=" << StringUtils::URLEncode(m_cacheNodeType.c_str()) << "&";
  }

  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_membersHasBeenSet)
  {
      unsigned membersIdx = 1;
      for(auto& item : m_members)
      {
        Aws::StringStream membersSs;
        membersSs << location << index << locationValue << ".GlobalReplicationGroupMember." << membersIdx++;
        item.OutputToStream(oStream, membersSs.str().c_str());
      }
  }

  if(m_clusterEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterEnabled=" << std::boolalpha << m_clusterEnabled << "&";
  }

  if(m_globalNodeGroupsHasBeenSet)
  {
      unsigned globalNodeGroupsIdx = 1;
      for(auto& item : m_globalNodeGroups)
      {
        Aws::StringStream globalNodeGroupsSs;
        globalNodeGroupsSs << location << index << locationValue << ".GlobalNodeGroup." << globalNodeGroupsIdx++;
        item.OutputToStream(oStream, globalNodeGroupsSs.str().c_str());
      }
  }

  if(m_authTokenEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".AuthTokenEnabled=" << std::boolalpha << m_authTokenEnabled << "&";
  }

  if(m_transitEncryptionEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitEncryptionEnabled=" << std::boolalpha << m_transitEncryptionEnabled << "&";
  }

  if(m_atRestEncryptionEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".AtRestEncryptionEnabled=" << std::boolalpha << m_atRestEncryptionEnabled << "&";
  }

  if(m_aRNHasBeenSet)
  {
      oStream << location << index << locationValue << ".ARN=" << StringUtils::URLEncode(m_aRN.c_str()) << "&";
  }

}

void GlobalReplicationGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_globalReplicationGroupIdHasBeenSet)
  {
      oStream << location << ".GlobalReplicationGroupId=" << StringUtils::URLEncode(m_globalReplicationGroupId.c_str()) << "&";
  }
  if(m_globalReplicationGroupDescriptionHasBeenSet)
  {
      oStream << location << ".GlobalReplicationGroupDescription=" << StringUtils::URLEncode(m_globalReplicationGroupDescription.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_cacheNodeTypeHasBeenSet)
  {
      oStream << location << ".CacheNodeType=" << StringUtils::URLEncode(m_cacheNodeType.c_str()) << "&";
  }
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_membersHasBeenSet)
  {
      unsigned membersIdx = 1;
      for(auto& item : m_members)
      {
        Aws::StringStream membersSs;
        membersSs << location <<  ".GlobalReplicationGroupMember." << membersIdx++;
        item.OutputToStream(oStream, membersSs.str().c_str());
      }
  }
  if(m_clusterEnabledHasBeenSet)
  {
      oStream << location << ".ClusterEnabled=" << std::boolalpha << m_clusterEnabled << "&";
  }
  if(m_globalNodeGroupsHasBeenSet)
  {
      unsigned globalNodeGroupsIdx = 1;
      for(auto& item : m_globalNodeGroups)
      {
        Aws::StringStream globalNodeGroupsSs;
        globalNodeGroupsSs << location <<  ".GlobalNodeGroup." << globalNodeGroupsIdx++;
        item.OutputToStream(oStream, globalNodeGroupsSs.str().c_str());
      }
  }
  if(m_authTokenEnabledHasBeenSet)
  {
      oStream << location << ".AuthTokenEnabled=" << std::boolalpha << m_authTokenEnabled << "&";
  }
  if(m_transitEncryptionEnabledHasBeenSet)
  {
      oStream << location << ".TransitEncryptionEnabled=" << std::boolalpha << m_transitEncryptionEnabled << "&";
  }
  if(m_atRestEncryptionEnabledHasBeenSet)
  {
      oStream << location << ".AtRestEncryptionEnabled=" << std::boolalpha << m_atRestEncryptionEnabled << "&";
  }
  if(m_aRNHasBeenSet)
  {
      oStream << location << ".ARN=" << StringUtils::URLEncode(m_aRN.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
