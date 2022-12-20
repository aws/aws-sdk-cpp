/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeImagesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeImagesRequest::DescribeImagesRequest() : 
    m_executableUsersHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_imageIdsHasBeenSet(false),
    m_ownersHasBeenSet(false),
    m_includeDeprecated(false),
    m_includeDeprecatedHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeImagesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeImages&";
  if(m_executableUsersHasBeenSet)
  {
    unsigned executableUsersCount = 1;
    for(auto& item : m_executableUsers)
    {
      ss << "ExecutableBy." << executableUsersCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      executableUsersCount++;
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

  if(m_ownersHasBeenSet)
  {
    unsigned ownersCount = 1;
    for(auto& item : m_owners)
    {
      ss << "Owner." << ownersCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      ownersCount++;
    }
  }

  if(m_includeDeprecatedHasBeenSet)
  {
    ss << "IncludeDeprecated=" << std::boolalpha << m_includeDeprecated << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
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


void  DescribeImagesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
