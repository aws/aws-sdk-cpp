/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/CopySnapshotRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

CopySnapshotRequest::CopySnapshotRequest() : 
    m_sourceSnapshotNameHasBeenSet(false),
    m_targetSnapshotNameHasBeenSet(false),
    m_targetBucketHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

Aws::String CopySnapshotRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CopySnapshot&";
  if(m_sourceSnapshotNameHasBeenSet)
  {
    ss << "SourceSnapshotName=" << StringUtils::URLEncode(m_sourceSnapshotName.c_str()) << "&";
  }

  if(m_targetSnapshotNameHasBeenSet)
  {
    ss << "TargetSnapshotName=" << StringUtils::URLEncode(m_targetSnapshotName.c_str()) << "&";
  }

  if(m_targetBucketHasBeenSet)
  {
    ss << "TargetBucket=" << StringUtils::URLEncode(m_targetBucket.c_str()) << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  CopySnapshotRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
