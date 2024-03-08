/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ExportServerlessCacheSnapshotRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

ExportServerlessCacheSnapshotRequest::ExportServerlessCacheSnapshotRequest() : 
    m_serverlessCacheSnapshotNameHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false)
{
}

Aws::String ExportServerlessCacheSnapshotRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ExportServerlessCacheSnapshot&";
  if(m_serverlessCacheSnapshotNameHasBeenSet)
  {
    ss << "ServerlessCacheSnapshotName=" << StringUtils::URLEncode(m_serverlessCacheSnapshotName.c_str()) << "&";
  }

  if(m_s3BucketNameHasBeenSet)
  {
    ss << "S3BucketName=" << StringUtils::URLEncode(m_s3BucketName.c_str()) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  ExportServerlessCacheSnapshotRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
