/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/UserGroupPendingChanges.h>
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

UserGroupPendingChanges::UserGroupPendingChanges() : 
    m_userIdsToRemoveHasBeenSet(false),
    m_userIdsToAddHasBeenSet(false)
{
}

UserGroupPendingChanges::UserGroupPendingChanges(const XmlNode& xmlNode) : 
    m_userIdsToRemoveHasBeenSet(false),
    m_userIdsToAddHasBeenSet(false)
{
  *this = xmlNode;
}

UserGroupPendingChanges& UserGroupPendingChanges::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode userIdsToRemoveNode = resultNode.FirstChild("UserIdsToRemove");
    if(!userIdsToRemoveNode.IsNull())
    {
      XmlNode userIdsToRemoveMember = userIdsToRemoveNode.FirstChild("member");
      while(!userIdsToRemoveMember.IsNull())
      {
        m_userIdsToRemove.push_back(userIdsToRemoveMember.GetText());
        userIdsToRemoveMember = userIdsToRemoveMember.NextNode("member");
      }

      m_userIdsToRemoveHasBeenSet = true;
    }
    XmlNode userIdsToAddNode = resultNode.FirstChild("UserIdsToAdd");
    if(!userIdsToAddNode.IsNull())
    {
      XmlNode userIdsToAddMember = userIdsToAddNode.FirstChild("member");
      while(!userIdsToAddMember.IsNull())
      {
        m_userIdsToAdd.push_back(userIdsToAddMember.GetText());
        userIdsToAddMember = userIdsToAddMember.NextNode("member");
      }

      m_userIdsToAddHasBeenSet = true;
    }
  }

  return *this;
}

void UserGroupPendingChanges::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_userIdsToRemoveHasBeenSet)
  {
      unsigned userIdsToRemoveIdx = 1;
      for(auto& item : m_userIdsToRemove)
      {
        oStream << location << index << locationValue << ".UserIdsToRemove.member." << userIdsToRemoveIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_userIdsToAddHasBeenSet)
  {
      unsigned userIdsToAddIdx = 1;
      for(auto& item : m_userIdsToAdd)
      {
        oStream << location << index << locationValue << ".UserIdsToAdd.member." << userIdsToAddIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void UserGroupPendingChanges::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_userIdsToRemoveHasBeenSet)
  {
      unsigned userIdsToRemoveIdx = 1;
      for(auto& item : m_userIdsToRemove)
      {
        oStream << location << ".UserIdsToRemove.member." << userIdsToRemoveIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_userIdsToAddHasBeenSet)
  {
      unsigned userIdsToAddIdx = 1;
      for(auto& item : m_userIdsToAdd)
      {
        oStream << location << ".UserIdsToAdd.member." << userIdsToAddIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
