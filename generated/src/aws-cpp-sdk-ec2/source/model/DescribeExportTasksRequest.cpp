/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeExportTasksRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeExportTasksRequest::DescribeExportTasksRequest() : 
    m_exportTaskIdsHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

Aws::String DescribeExportTasksRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeExportTasks&";
  if(m_exportTaskIdsHasBeenSet)
  {
    unsigned exportTaskIdsCount = 1;
    for(auto& item : m_exportTaskIds)
    {
      ss << "ExportTaskId." << exportTaskIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      exportTaskIdsCount++;
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

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeExportTasksRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
