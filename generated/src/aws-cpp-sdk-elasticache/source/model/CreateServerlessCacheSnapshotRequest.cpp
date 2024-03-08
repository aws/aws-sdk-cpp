/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/CreateServerlessCacheSnapshotRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

CreateServerlessCacheSnapshotRequest::CreateServerlessCacheSnapshotRequest() : 
    m_serverlessCacheSnapshotNameHasBeenSet(false),
    m_serverlessCacheNameHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateServerlessCacheSnapshotRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateServerlessCacheSnapshot&";
  if(m_serverlessCacheSnapshotNameHasBeenSet)
  {
    ss << "ServerlessCacheSnapshotName=" << StringUtils::URLEncode(m_serverlessCacheSnapshotName.c_str()) << "&";
  }

  if(m_serverlessCacheNameHasBeenSet)
  {
    ss << "ServerlessCacheName=" << StringUtils::URLEncode(m_serverlessCacheName.c_str()) << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
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

  ss << "Version=2015-02-02";
  return ss.str();
}


void  CreateServerlessCacheSnapshotRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
