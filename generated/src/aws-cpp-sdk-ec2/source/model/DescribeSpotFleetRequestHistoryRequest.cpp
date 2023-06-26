/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeSpotFleetRequestHistoryRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeSpotFleetRequestHistoryRequest::DescribeSpotFleetRequestHistoryRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_eventType(EventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_spotFleetRequestIdHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

Aws::String DescribeSpotFleetRequestHistoryRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeSpotFleetRequestHistory&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_eventTypeHasBeenSet)
  {
    ss << "EventType=" << EventTypeMapper::GetNameForEventType(m_eventType) << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_spotFleetRequestIdHasBeenSet)
  {
    ss << "SpotFleetRequestId=" << StringUtils::URLEncode(m_spotFleetRequestId.c_str()) << "&";
  }

  if(m_startTimeHasBeenSet)
  {
    ss << "StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeSpotFleetRequestHistoryRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
