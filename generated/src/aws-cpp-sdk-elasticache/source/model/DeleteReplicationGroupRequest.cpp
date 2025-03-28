﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DeleteReplicationGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

Aws::String DeleteReplicationGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteReplicationGroup&";
  if(m_replicationGroupIdHasBeenSet)
  {
    ss << "ReplicationGroupId=" << StringUtils::URLEncode(m_replicationGroupId.c_str()) << "&";
  }

  if(m_retainPrimaryClusterHasBeenSet)
  {
    ss << "RetainPrimaryCluster=" << std::boolalpha << m_retainPrimaryCluster << "&";
  }

  if(m_finalSnapshotIdentifierHasBeenSet)
  {
    ss << "FinalSnapshotIdentifier=" << StringUtils::URLEncode(m_finalSnapshotIdentifier.c_str()) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  DeleteReplicationGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
