/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DescribeStackResourceDriftsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

Aws::String DescribeStackResourceDriftsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeStackResourceDrifts&";
  if(m_stackNameHasBeenSet)
  {
    ss << "StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }

  if(m_stackResourceDriftStatusFiltersHasBeenSet)
  {
    if (m_stackResourceDriftStatusFilters.empty())
    {
      ss << "StackResourceDriftStatusFilters=&";
    }
    else
    {
      unsigned stackResourceDriftStatusFiltersCount = 1;
      for(auto& item : m_stackResourceDriftStatusFilters)
      {
        ss << "StackResourceDriftStatusFilters.member." << stackResourceDriftStatusFiltersCount << "="
            << StringUtils::URLEncode(StackResourceDriftStatusMapper::GetNameForStackResourceDriftStatus(item)) << "&";
        stackResourceDriftStatusFiltersCount++;
      }
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

  ss << "Version=2010-05-15";
  return ss.str();
}


void  DescribeStackResourceDriftsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
