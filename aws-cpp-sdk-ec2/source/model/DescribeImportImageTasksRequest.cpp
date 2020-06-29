/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeImportImageTasksRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeImportImageTasksRequest::DescribeImportImageTasksRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_importTaskIdsHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeImportImageTasksRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeImportImageTasks&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filters.", filtersCount, "");
      filtersCount++;
    }
  }

  if(m_importTaskIdsHasBeenSet)
  {
    unsigned importTaskIdsCount = 1;
    for(auto& item : m_importTaskIds)
    {
      ss << "ImportTaskId." << importTaskIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      importTaskIdsCount++;
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


void  DescribeImportImageTasksRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
