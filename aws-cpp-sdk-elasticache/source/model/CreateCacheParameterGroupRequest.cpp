/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/CreateCacheParameterGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

CreateCacheParameterGroupRequest::CreateCacheParameterGroupRequest() : 
    m_cacheParameterGroupNameHasBeenSet(false),
    m_cacheParameterGroupFamilyHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String CreateCacheParameterGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateCacheParameterGroup&";
  if(m_cacheParameterGroupNameHasBeenSet)
  {
    ss << "CacheParameterGroupName=" << StringUtils::URLEncode(m_cacheParameterGroupName.c_str()) << "&";
  }

  if(m_cacheParameterGroupFamilyHasBeenSet)
  {
    ss << "CacheParameterGroupFamily=" << StringUtils::URLEncode(m_cacheParameterGroupFamily.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  CreateCacheParameterGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
