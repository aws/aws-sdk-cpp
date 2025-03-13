/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ModifyUserGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

Aws::String ModifyUserGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyUserGroup&";
  if(m_userGroupIdHasBeenSet)
  {
    ss << "UserGroupId=" << StringUtils::URLEncode(m_userGroupId.c_str()) << "&";
  }

  if(m_userIdsToAddHasBeenSet)
  {
    if (m_userIdsToAdd.empty())
    {
      ss << "UserIdsToAdd=&";
    }
    else
    {
      unsigned userIdsToAddCount = 1;
      for(auto& item : m_userIdsToAdd)
      {
        ss << "UserIdsToAdd.member." << userIdsToAddCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        userIdsToAddCount++;
      }
    }
  }

  if(m_userIdsToRemoveHasBeenSet)
  {
    if (m_userIdsToRemove.empty())
    {
      ss << "UserIdsToRemove=&";
    }
    else
    {
      unsigned userIdsToRemoveCount = 1;
      for(auto& item : m_userIdsToRemove)
      {
        ss << "UserIdsToRemove.member." << userIdsToRemoveCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        userIdsToRemoveCount++;
      }
    }
  }

  if(m_engineHasBeenSet)
  {
    ss << "Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  ModifyUserGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
