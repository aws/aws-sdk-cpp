/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DeleteServerlessCacheRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

DeleteServerlessCacheRequest::DeleteServerlessCacheRequest() : 
    m_serverlessCacheNameHasBeenSet(false),
    m_finalSnapshotNameHasBeenSet(false)
{
}

Aws::String DeleteServerlessCacheRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteServerlessCache&";
  if(m_serverlessCacheNameHasBeenSet)
  {
    ss << "ServerlessCacheName=" << StringUtils::URLEncode(m_serverlessCacheName.c_str()) << "&";
  }

  if(m_finalSnapshotNameHasBeenSet)
  {
    ss << "FinalSnapshotName=" << StringUtils::URLEncode(m_finalSnapshotName.c_str()) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  DeleteServerlessCacheRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
