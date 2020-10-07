/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ModifyUserGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

ModifyUserGroupRequest::ModifyUserGroupRequest() : 
    m_userGroupIdHasBeenSet(false),
    m_userIdsToAddHasBeenSet(false),
    m_userIdsToRemoveHasBeenSet(false)
{
}

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
    unsigned userIdsToAddCount = 1;
    for(auto& item : m_userIdsToAdd)
    {
      ss << "UserIdsToAdd.member." << userIdsToAddCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      userIdsToAddCount++;
    }
  }

  if(m_userIdsToRemoveHasBeenSet)
  {
    unsigned userIdsToRemoveCount = 1;
    for(auto& item : m_userIdsToRemove)
    {
      ss << "UserIdsToRemove.member." << userIdsToRemoveCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      userIdsToRemoveCount++;
    }
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  ModifyUserGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
