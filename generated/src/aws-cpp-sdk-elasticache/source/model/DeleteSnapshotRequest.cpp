/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DeleteSnapshotRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

DeleteSnapshotRequest::DeleteSnapshotRequest() : 
    m_snapshotNameHasBeenSet(false)
{
}

Aws::String DeleteSnapshotRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteSnapshot&";
  if(m_snapshotNameHasBeenSet)
  {
    ss << "SnapshotName=" << StringUtils::URLEncode(m_snapshotName.c_str()) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  DeleteSnapshotRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
