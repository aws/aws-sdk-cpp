/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/UserGroupsUpdateStatus.h>
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

UserGroupsUpdateStatus::UserGroupsUpdateStatus() : 
    m_userGroupIdsToAddHasBeenSet(false),
    m_userGroupIdsToRemoveHasBeenSet(false)
{
}

UserGroupsUpdateStatus::UserGroupsUpdateStatus(const XmlNode& xmlNode) : 
    m_userGroupIdsToAddHasBeenSet(false),
    m_userGroupIdsToRemoveHasBeenSet(false)
{
  *this = xmlNode;
}

UserGroupsUpdateStatus& UserGroupsUpdateStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode userGroupIdsToAddNode = resultNode.FirstChild("UserGroupIdsToAdd");
    if(!userGroupIdsToAddNode.IsNull())
    {
      XmlNode userGroupIdsToAddMember = userGroupIdsToAddNode.FirstChild("member");
      while(!userGroupIdsToAddMember.IsNull())
      {
        m_userGroupIdsToAdd.push_back(userGroupIdsToAddMember.GetText());
        userGroupIdsToAddMember = userGroupIdsToAddMember.NextNode("member");
      }

      m_userGroupIdsToAddHasBeenSet = true;
    }
    XmlNode userGroupIdsToRemoveNode = resultNode.FirstChild("UserGroupIdsToRemove");
    if(!userGroupIdsToRemoveNode.IsNull())
    {
      XmlNode userGroupIdsToRemoveMember = userGroupIdsToRemoveNode.FirstChild("member");
      while(!userGroupIdsToRemoveMember.IsNull())
      {
        m_userGroupIdsToRemove.push_back(userGroupIdsToRemoveMember.GetText());
        userGroupIdsToRemoveMember = userGroupIdsToRemoveMember.NextNode("member");
      }

      m_userGroupIdsToRemoveHasBeenSet = true;
    }
  }

  return *this;
}

void UserGroupsUpdateStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_userGroupIdsToAddHasBeenSet)
  {
      unsigned userGroupIdsToAddIdx = 1;
      for(auto& item : m_userGroupIdsToAdd)
      {
        oStream << location << index << locationValue << ".UserGroupIdsToAdd.member." << userGroupIdsToAddIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_userGroupIdsToRemoveHasBeenSet)
  {
      unsigned userGroupIdsToRemoveIdx = 1;
      for(auto& item : m_userGroupIdsToRemove)
      {
        oStream << location << index << locationValue << ".UserGroupIdsToRemove.member." << userGroupIdsToRemoveIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void UserGroupsUpdateStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_userGroupIdsToAddHasBeenSet)
  {
      unsigned userGroupIdsToAddIdx = 1;
      for(auto& item : m_userGroupIdsToAdd)
      {
        oStream << location << ".UserGroupIdsToAdd.member." << userGroupIdsToAddIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_userGroupIdsToRemoveHasBeenSet)
  {
      unsigned userGroupIdsToRemoveIdx = 1;
      for(auto& item : m_userGroupIdsToRemove)
      {
        oStream << location << ".UserGroupIdsToRemove.member." << userGroupIdsToRemoveIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
