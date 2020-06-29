/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeSnapshotSchedulesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DescribeSnapshotSchedulesRequest::DescribeSnapshotSchedulesRequest() : 
    m_clusterIdentifierHasBeenSet(false),
    m_scheduleIdentifierHasBeenSet(false),
    m_tagKeysHasBeenSet(false),
    m_tagValuesHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false)
{
}

Aws::String DescribeSnapshotSchedulesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeSnapshotSchedules&";
  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_scheduleIdentifierHasBeenSet)
  {
    ss << "ScheduleIdentifier=" << StringUtils::URLEncode(m_scheduleIdentifier.c_str()) << "&";
  }

  if(m_tagKeysHasBeenSet)
  {
    unsigned tagKeysCount = 1;
    for(auto& item : m_tagKeys)
    {
      ss << "TagKeys.member." << tagKeysCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      tagKeysCount++;
    }
  }

  if(m_tagValuesHasBeenSet)
  {
    unsigned tagValuesCount = 1;
    for(auto& item : m_tagValues)
    {
      ss << "TagValues.member." << tagValuesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      tagValuesCount++;
    }
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DescribeSnapshotSchedulesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
