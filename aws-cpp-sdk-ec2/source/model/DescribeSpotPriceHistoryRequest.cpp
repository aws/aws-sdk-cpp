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
#include <aws/ec2/model/DescribeSpotPriceHistoryRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeSpotPriceHistoryRequest::DescribeSpotPriceHistoryRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_instanceTypesHasBeenSet(false),
    m_productDescriptionsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeSpotPriceHistoryRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeSpotPriceHistory&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << m_dryRun << "&";
  }

  if(m_startTimeHasBeenSet)
  {
    ss << "StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endTimeHasBeenSet)
  {
    ss << "EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
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

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2015-10-01";
  return ss.str();
}

