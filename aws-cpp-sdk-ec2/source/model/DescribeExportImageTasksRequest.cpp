/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeExportImageTasksRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeExportImageTasksRequest::DescribeExportImageTasksRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_exportImageTaskIdsHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeExportImageTasksRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeExportImageTasks&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
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

  if(m_exportImageTaskIdsHasBeenSet)
  {
    unsigned exportImageTaskIdsCount = 1;
    for(auto& item : m_exportImageTaskIds)
    {
      ss << "ExportImageTaskId." << exportImageTaskIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      exportImageTaskIdsCount++;
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


void  DescribeExportImageTasksRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
