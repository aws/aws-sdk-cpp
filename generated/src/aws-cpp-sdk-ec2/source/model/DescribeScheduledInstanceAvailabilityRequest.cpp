/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeScheduledInstanceAvailabilityRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeScheduledInstanceAvailabilityRequest::DescribeScheduledInstanceAvailabilityRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_firstSlotStartTimeRangeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_maxSlotDurationInHours(0),
    m_maxSlotDurationInHoursHasBeenSet(false),
    m_minSlotDurationInHours(0),
    m_minSlotDurationInHoursHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_recurrenceHasBeenSet(false)
{
}

Aws::String DescribeScheduledInstanceAvailabilityRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeScheduledInstanceAvailability&";
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

  if(m_firstSlotStartTimeRangeHasBeenSet)
  {
    m_firstSlotStartTimeRange.OutputToStream(ss, "FirstSlotStartTimeRange");
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if(m_maxSlotDurationInHoursHasBeenSet)
  {
    ss << "MaxSlotDurationInHours=" << m_maxSlotDurationInHours << "&";
  }

  if(m_minSlotDurationInHoursHasBeenSet)
  {
    ss << "MinSlotDurationInHours=" << m_minSlotDurationInHours << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_recurrenceHasBeenSet)
  {
    m_recurrence.OutputToStream(ss, "Recurrence");
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeScheduledInstanceAvailabilityRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
