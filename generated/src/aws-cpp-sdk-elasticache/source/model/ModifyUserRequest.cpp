﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ModifyUserRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

Aws::String ModifyUserRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyUser&";
  if(m_userIdHasBeenSet)
  {
    ss << "UserId=" << StringUtils::URLEncode(m_userId.c_str()) << "&";
  }

  if(m_accessStringHasBeenSet)
  {
    ss << "AccessString=" << StringUtils::URLEncode(m_accessString.c_str()) << "&";
  }

  if(m_appendAccessStringHasBeenSet)
  {
    ss << "AppendAccessString=" << StringUtils::URLEncode(m_appendAccessString.c_str()) << "&";
  }

  if(m_passwordsHasBeenSet)
  {
    if (m_passwords.empty())
    {
      ss << "Passwords=&";
    }
    else
    {
      unsigned passwordsCount = 1;
      for(auto& item : m_passwords)
      {
        ss << "Passwords.member." << passwordsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        passwordsCount++;
      }
    }
  }

  if(m_noPasswordRequiredHasBeenSet)
  {
    ss << "NoPasswordRequired=" << std::boolalpha << m_noPasswordRequired << "&";
  }

  if(m_authenticationModeHasBeenSet)
  {
    m_authenticationMode.OutputToStream(ss, "AuthenticationMode");
  }

  if(m_engineHasBeenSet)
  {
    ss << "Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  ModifyUserRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
