/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/ec2/model/DescribeSnapshotsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeSnapshotsRequest::DescribeSnapshotsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_snapshotIdsHasBeenSet(false),
    m_ownerIdsHasBeenSet(false),
    m_restorableByUserIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeSnapshotsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeSnapshots&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << m_dryRun << "&";
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

  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filter.", filtersCount, "");
      filtersCount++;
    }
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  ss << "Version=2015-10-01";
  return ss.str();
}

