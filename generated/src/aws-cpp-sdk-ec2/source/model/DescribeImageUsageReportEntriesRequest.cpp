/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeImageUsageReportEntriesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String DescribeImageUsageReportEntriesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeImageUsageReportEntries&";
  if(m_imageIdsHasBeenSet)
  {
    unsigned imageIdsCount = 1;
    for(auto& item : m_imageIds)
    {
      ss << "ImageId." << imageIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      imageIdsCount++;
    }
  }

  if(m_reportIdsHasBeenSet)
  {
    unsigned reportIdsCount = 1;
    for(auto& item : m_reportIds)
    {
      ss << "ReportId." << reportIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      reportIdsCount++;
    }
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
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

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeImageUsageReportEntriesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
