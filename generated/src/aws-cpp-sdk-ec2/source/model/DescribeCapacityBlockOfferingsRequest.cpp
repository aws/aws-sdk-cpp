/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeCapacityBlockOfferingsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

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

  if(m_ultraserverTypeHasBeenSet)
  {
    ss << "UltraserverType=" << StringUtils::URLEncode(m_ultraserverType.c_str()) << "&";
  }

  if(m_ultraserverCountHasBeenSet)
  {
    ss << "UltraserverCount=" << m_ultraserverCount << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeCapacityBlockOfferingsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
