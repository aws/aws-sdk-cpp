/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeFlowLogsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeFlowLogsRequest::DescribeFlowLogsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_flowLogIdsHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeFlowLogsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeFlowLogs&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_filterHasBeenSet)
  {
    unsigned filterCount = 1;
    for(auto& item : m_filter)
    {
      item.OutputToStream(ss, "Filter.", filterCount, "");
      filterCount++;
    }
  }

  if(m_flowLogIdsHasBeenSet)
  {
    unsigned flowLogIdsCount = 1;
    for(auto& item : m_flowLogIds)
    {
      ss << "FlowLogId." << flowLogIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      flowLogIdsCount++;
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

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeFlowLogsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
