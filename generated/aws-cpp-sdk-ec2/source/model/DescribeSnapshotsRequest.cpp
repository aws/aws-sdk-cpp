/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeSnapshotsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeSnapshotsRequest::DescribeSnapshotsRequest() : 
    m_filtersHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_ownerIdsHasBeenSet(false),
    m_restorableByUserIdsHasBeenSet(false),
    m_snapshotIdsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DescribeSnapshotsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeSnapshots&";
  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filter.", filtersCount, "");
      filtersCount++;
    }
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_ownerIdsHasBeenSet)
  {
    unsigned ownerIdsCount = 1;
    for(auto& item : m_ownerIds)
    {
      ss << "Owner." << ownerIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      ownerIdsCount++;
    }
  }

  if(m_restorableByUserIdsHasBeenSet)
  {
    unsigned restorableByUserIdsCount = 1;
    for(auto& item : m_restorableByUserIds)
    {
      ss << "RestorableBy." << restorableByUserIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      restorableByUserIdsCount++;
    }
  }

  if(m_snapshotIdsHasBeenSet)
  {
    unsigned snapshotIdsCount = 1;
    for(auto& item : m_snapshotIds)
    {
      ss << "SnapshotId." << snapshotIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      snapshotIdsCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeSnapshotsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
