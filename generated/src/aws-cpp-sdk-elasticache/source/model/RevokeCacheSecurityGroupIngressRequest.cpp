﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/RevokeCacheSecurityGroupIngressRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

Aws::String RevokeCacheSecurityGroupIngressRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RevokeCacheSecurityGroupIngress&";
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


void  RevokeCacheSecurityGroupIngressRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
