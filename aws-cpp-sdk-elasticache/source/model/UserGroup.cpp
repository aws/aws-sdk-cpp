/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/UserGroup.h>
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

UserGroup::UserGroup() : 
    m_userGroupIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_userIdsHasBeenSet(false),
    m_pendingChangesHasBeenSet(false),
    m_replicationGroupsHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
}

UserGroup::UserGroup(const XmlNode& xmlNode) : 
    m_userGroupIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_userIdsHasBeenSet(false),
    m_pendingChangesHasBeenSet(false),
    m_replicationGroupsHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
  *this = xmlNode;
}

UserGroup& UserGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode userGroupIdNode = resultNode.FirstChild("UserGroupId");
    if(!userGroupIdNode.IsNull())
    {
      m_userGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(userGroupIdNode.GetText());
      m_userGroupIdHasBeenSet = true;
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
    XmlNode userIdsNode = resultNode.FirstChild("UserIds");
    if(!userIdsNode.IsNull())
    {
      XmlNode userIdsMember = userIdsNode.FirstChild("member");
      while(!userIdsMember.IsNull())
      {
        m_userIds.push_back(userIdsMember.GetText());
        userIdsMember = userIdsMember.NextNode("member");
      }

      m_userIdsHasBeenSet = true;
    }
    XmlNode pendingChangesNode = resultNode.FirstChild("PendingChanges");
    if(!pendingChangesNode.IsNull())
    {
      m_pendingChanges = pendingChangesNode;
      m_pendingChangesHasBeenSet = true;
    }
    XmlNode replicationGroupsNode = resultNode.FirstChild("ReplicationGroups");
    if(!replicationGroupsNode.IsNull())
    {
      XmlNode replicationGroupsMember = replicationGroupsNode.FirstChild("member");
      while(!replicationGroupsMember.IsNull())
      {
        m_replicationGroups.push_back(replicationGroupsMember.GetText());
        replicationGroupsMember = replicationGroupsMember.NextNode("member");
      }

      m_replicationGroupsHasBeenSet = true;
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

void UserGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_userGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".UserGroupId=" << StringUtils::URLEncode(m_userGroupId.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_userIdsHasBeenSet)
  {
      unsigned userIdsIdx = 1;
      for(auto& item : m_userIds)
      {
        oStream << location << index << locationValue << ".UserIds.member." << userIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_pendingChangesHasBeenSet)
  {
      Aws::StringStream pendingChangesLocationAndMemberSs;
      pendingChangesLocationAndMemberSs << location << index << locationValue << ".PendingChanges";
      m_pendingChanges.OutputToStream(oStream, pendingChangesLocationAndMemberSs.str().c_str());
  }

  if(m_replicationGroupsHasBeenSet)
  {
      unsigned replicationGroupsIdx = 1;
      for(auto& item : m_replicationGroups)
      {
        oStream << location << index << locationValue << ".ReplicationGroups.member." << replicationGroupsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_aRNHasBeenSet)
  {
      oStream << location << index << locationValue << ".ARN=" << StringUtils::URLEncode(m_aRN.c_str()) << "&";
  }

  if(m_responseMetadataHasBeenSet)
  {
      Aws::StringStream responseMetadataLocationAndMemberSs;
      responseMetadataLocationAndMemberSs << location << index << locationValue << ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMemberSs.str().c_str());
  }

}

void UserGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_userGroupIdHasBeenSet)
  {
      oStream << location << ".UserGroupId=" << StringUtils::URLEncode(m_userGroupId.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_userIdsHasBeenSet)
  {
      unsigned userIdsIdx = 1;
      for(auto& item : m_userIds)
      {
        oStream << location << ".UserIds.member." << userIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_pendingChangesHasBeenSet)
  {
      Aws::String pendingChangesLocationAndMember(location);
      pendingChangesLocationAndMember += ".PendingChanges";
      m_pendingChanges.OutputToStream(oStream, pendingChangesLocationAndMember.c_str());
  }
  if(m_replicationGroupsHasBeenSet)
  {
      unsigned replicationGroupsIdx = 1;
      for(auto& item : m_replicationGroups)
      {
        oStream << location << ".ReplicationGroups.member." << replicationGroupsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_aRNHasBeenSet)
  {
      oStream << location << ".ARN=" << StringUtils::URLEncode(m_aRN.c_str()) << "&";
  }
  if(m_responseMetadataHasBeenSet)
  {
      Aws::String responseMetadataLocationAndMember(location);
      responseMetadataLocationAndMember += ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
