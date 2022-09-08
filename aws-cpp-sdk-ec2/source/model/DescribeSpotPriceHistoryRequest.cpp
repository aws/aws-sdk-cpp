/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeSpotPriceHistoryRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeSpotPriceHistoryRequest::DescribeSpotPriceHistoryRequest() : 
    m_filtersHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_instanceTypesHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_productDescriptionsHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

Aws::String DescribeSpotPriceHistoryRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeSpotPriceHistory&";
  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filter.", filtersCount, "");
      filtersCount++;
    }
  }

  if(m_availabilityZoneHasBeenSet)
  {
    ss << "AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_endTimeHasBeenSet)
  {
    ss << "EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_instanceTypesHasBeenSet)
  {
    unsigned instanceTypesCount = 1;
    for(auto& item : m_instanceTypes)
    {
      ss << "InstanceType." << instanceTypesCount << "="
          << StringUtils::URLEncode(InstanceTypeMapper::GetNameForInstanceType(item).c_str()) << "&";
      instanceTypesCount++;
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

  if(m_productDescriptionsHasBeenSet)
  {
    unsigned productDescriptionsCount = 1;
    for(auto& item : m_productDescriptions)
    {
      ss << "ProductDescription." << productDescriptionsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      productDescriptionsCount++;
    }
  }

  if(m_startTimeHasBeenSet)
  {
    ss << "StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeSpotPriceHistoryRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
