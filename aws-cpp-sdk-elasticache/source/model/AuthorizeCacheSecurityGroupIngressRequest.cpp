/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/AuthorizeCacheSecurityGroupIngressRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

AuthorizeCacheSecurityGroupIngressRequest::AuthorizeCacheSecurityGroupIngressRequest() : 
    m_cacheSecurityGroupNameHasBeenSet(false),
    m_eC2SecurityGroupNameHasBeenSet(false),
    m_eC2SecurityGroupOwnerIdHasBeenSet(false)
{
}

Aws::String AuthorizeCacheSecurityGroupIngressRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AuthorizeCacheSecurityGroupIngress&";
  if(m_cacheSecurityGroupNameHasBeenSet)
  {
    ss << "CacheSecurityGroupName=" << StringUtils::URLEncode(m_cacheSecurityGroupName.c_str()) << "&";
  }

  if(m_eC2SecurityGroupNameHasBeenSet)
  {
    ss << "EC2SecurityGroupName=" << StringUtils::URLEncode(m_eC2SecurityGroupName.c_str()) << "&";
  }

  if(m_eC2SecurityGroupOwnerIdHasBeenSet)
  {
    ss << "EC2SecurityGroupOwnerId=" << StringUtils::URLEncode(m_eC2SecurityGroupOwnerId.c_str()) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  AuthorizeCacheSecurityGroupIngressRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
