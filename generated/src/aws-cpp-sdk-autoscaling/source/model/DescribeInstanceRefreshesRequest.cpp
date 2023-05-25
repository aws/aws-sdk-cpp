/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DescribeInstanceRefreshesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

DescribeInstanceRefreshesRequest::DescribeInstanceRefreshesRequest() : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_instanceRefreshIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false)
{
}

Aws::String DescribeInstanceRefreshesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeInstanceRefreshes&";
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_instanceRefreshIdsHasBeenSet)
  {
    unsigned instanceRefreshIdsCount = 1;
    for(auto& item : m_instanceRefreshIds)
    {
      ss << "InstanceRefreshIds.member." << instanceRefreshIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      instanceRefreshIdsCount++;
    }
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  DescribeInstanceRefreshesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
