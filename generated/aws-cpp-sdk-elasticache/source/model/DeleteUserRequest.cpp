/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DeleteUserRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

DeleteUserRequest::DeleteUserRequest() : 
    m_userIdHasBeenSet(false)
{
}

Aws::String DeleteUserRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteUser&";
  if(m_userIdHasBeenSet)
  {
    ss << "UserId=" << StringUtils::URLEncode(m_userId.c_str()) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  DeleteUserRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
