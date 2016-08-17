/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/ec2/model/DescribeScheduledInstanceAvailabilityRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeScheduledInstanceAvailabilityRequest::DescribeScheduledInstanceAvailabilityRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_recurrenceHasBeenSet(false),
    m_firstSlotStartTimeRangeHasBeenSet(false),
    m_minSlotDurationInHours(0),
    m_minSlotDurationInHoursHasBeenSet(false),
    m_maxSlotDurationInHours(0),
    m_maxSlotDurationInHoursHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

Aws::String DescribeScheduledInstanceAvailabilityRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeScheduledInstanceAvailability&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << m_dryRun << "&";
  }

  if(m_recurrenceHasBeenSet)
  {
    m_recurrence.OutputToStream(ss, "Recurrence");
  }

  if(m_firstSlotStartTimeRangeHasBeenSet)
  {
    m_firstSlotStartTimeRange.OutputToStream(ss, "FirstSlotStartTimeRange");
  }

  if(m_minSlotDurationInHoursHasBeenSet)
  {
    ss << "MinSlotDurationInHours=" << m_minSlotDurationInHours << "&";
  }

  if(m_maxSlotDurationInHoursHasBeenSet)
  {
    ss << "MaxSlotDurationInHours=" << m_maxSlotDurationInHours << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
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

  ss << "Version=2015-10-01";
  return ss.str();
}

