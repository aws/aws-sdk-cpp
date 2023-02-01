/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeVolumesModificationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeVolumesModificationsRequest::DescribeVolumesModificationsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_volumeIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeVolumesModificationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeVolumesModifications&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_volumeIdsHasBeenSet)
  {
    unsigned volumeIdsCount = 1;
    for(auto& item : m_volumeIds)
    {
      ss << "VolumeId." << volumeIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      volumeIdsCount++;
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

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeVolumesModificationsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
