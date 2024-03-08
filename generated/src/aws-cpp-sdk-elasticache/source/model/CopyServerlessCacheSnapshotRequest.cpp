/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/CopyServerlessCacheSnapshotRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

CopyServerlessCacheSnapshotRequest::CopyServerlessCacheSnapshotRequest() : 
    m_sourceServerlessCacheSnapshotNameHasBeenSet(false),
    m_targetServerlessCacheSnapshotNameHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CopyServerlessCacheSnapshotRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CopyServerlessCacheSnapshot&";
  if(m_sourceServerlessCacheSnapshotNameHasBeenSet)
  {
    ss << "SourceServerlessCacheSnapshotName=" << StringUtils::URLEncode(m_sourceServerlessCacheSnapshotName.c_str()) << "&";
  }

  if(m_targetServerlessCacheSnapshotNameHasBeenSet)
  {
    ss << "TargetServerlessCacheSnapshotName=" << StringUtils::URLEncode(m_targetServerlessCacheSnapshotName.c_str()) << "&";
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


void  CopyServerlessCacheSnapshotRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
