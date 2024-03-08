/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeCapacityBlockOfferingsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeCapacityBlockOfferingsRequest::DescribeCapacityBlockOfferingsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_startDateRangeHasBeenSet(false),
    m_endDateRangeHasBeenSet(false),
    m_capacityDurationHours(0),
    m_capacityDurationHoursHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeCapacityBlockOfferingsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeCapacityBlockOfferings&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
    ss << "InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if(m_instanceCountHasBeenSet)
  {
    ss << "InstanceCount=" << m_instanceCount << "&";
  }

  if(m_startDateRangeHasBeenSet)
  {
    ss << "StartDateRange=" << StringUtils::URLEncode(m_startDateRange.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endDateRangeHasBeenSet)
  {
    ss << "EndDateRange=" << StringUtils::URLEncode(m_endDateRange.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_capacityDurationHoursHasBeenSet)
  {
    ss << "CapacityDurationHours=" << m_capacityDurationHours << "&";
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


void  DescribeCapacityBlockOfferingsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
