/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DescribeUpdateActionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

DescribeUpdateActionsRequest::DescribeUpdateActionsRequest() : 
    m_serviceUpdateNameHasBeenSet(false),
    m_replicationGroupIdsHasBeenSet(false),
    m_cacheClusterIdsHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_serviceUpdateStatusHasBeenSet(false),
    m_serviceUpdateTimeRangeHasBeenSet(false),
    m_updateActionStatusHasBeenSet(false),
    m_showNodeLevelUpdateStatus(false),
    m_showNodeLevelUpdateStatusHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String DescribeUpdateActionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeUpdateActions&";
  if(m_serviceUpdateNameHasBeenSet)
  {
    ss << "ServiceUpdateName=" << StringUtils::URLEncode(m_serviceUpdateName.c_str()) << "&";
  }

  if(m_replicationGroupIdsHasBeenSet)
  {
    unsigned replicationGroupIdsCount = 1;
    for(auto& item : m_replicationGroupIds)
    {
      ss << "ReplicationGroupIds.member." << replicationGroupIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      replicationGroupIdsCount++;
    }
  }

  if(m_cacheClusterIdsHasBeenSet)
  {
    unsigned cacheClusterIdsCount = 1;
    for(auto& item : m_cacheClusterIds)
    {
      ss << "CacheClusterIds.member." << cacheClusterIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      cacheClusterIdsCount++;
    }
  }

  if(m_engineHasBeenSet)
  {
    ss << "Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_serviceUpdateStatusHasBeenSet)
  {
    unsigned serviceUpdateStatusCount = 1;
    for(auto& item : m_serviceUpdateStatus)
    {
      ss << "ServiceUpdateStatus.member." << serviceUpdateStatusCount << "="
          << StringUtils::URLEncode(ServiceUpdateStatusMapper::GetNameForServiceUpdateStatus(item).c_str()) << "&";
      serviceUpdateStatusCount++;
    }
  }

  if(m_serviceUpdateTimeRangeHasBeenSet)
  {
    m_serviceUpdateTimeRange.OutputToStream(ss, "ServiceUpdateTimeRange");
  }

  if(m_updateActionStatusHasBeenSet)
  {
    unsigned updateActionStatusCount = 1;
    for(auto& item : m_updateActionStatus)
    {
      ss << "UpdateActionStatus.member." << updateActionStatusCount << "="
          << StringUtils::URLEncode(UpdateActionStatusMapper::GetNameForUpdateActionStatus(item).c_str()) << "&";
      updateActionStatusCount++;
    }
  }

  if(m_showNodeLevelUpdateStatusHasBeenSet)
  {
    ss << "ShowNodeLevelUpdateStatus=" << std::boolalpha << m_showNodeLevelUpdateStatus << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  DescribeUpdateActionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
