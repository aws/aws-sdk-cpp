/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/CreateUserRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

CreateUserRequest::CreateUserRequest() : 
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_passwordsHasBeenSet(false),
    m_accessStringHasBeenSet(false),
    m_noPasswordRequired(false),
    m_noPasswordRequiredHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_authenticationModeHasBeenSet(false)
{
}

Aws::String CreateUserRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateUser&";
  if(m_userIdHasBeenSet)
  {
    ss << "UserId=" << StringUtils::URLEncode(m_userId.c_str()) << "&";
  }

  if(m_userNameHasBeenSet)
  {
    ss << "UserName=" << StringUtils::URLEncode(m_userName.c_str()) << "&";
  }

  if(m_engineHasBeenSet)
  {
    ss << "Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_passwordsHasBeenSet)
  {
    unsigned passwordsCount = 1;
    for(auto& item : m_passwords)
    {
      ss << "Passwords.member." << passwordsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      passwordsCount++;
    }
  }

  if(m_accessStringHasBeenSet)
  {
    ss << "AccessString=" << StringUtils::URLEncode(m_accessString.c_str()) << "&";
  }

  if(m_noPasswordRequiredHasBeenSet)
  {
    ss << "NoPasswordRequired=" << std::boolalpha << m_noPasswordRequired << "&";
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  if(m_authenticationModeHasBeenSet)
  {
    m_authenticationMode.OutputToStream(ss, "AuthenticationMode");
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  CreateUserRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
