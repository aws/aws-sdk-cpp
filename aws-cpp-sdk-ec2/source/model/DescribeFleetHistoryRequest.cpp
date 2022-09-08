/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeFleetHistoryRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeFleetHistoryRequest::DescribeFleetHistoryRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_eventType(FleetEventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

Aws::String DescribeFleetHistoryRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeFleetHistory&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_eventTypeHasBeenSet)
  {
    ss << "EventType=" << FleetEventTypeMapper::GetNameForFleetEventType(m_eventType) << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_fleetIdHasBeenSet)
  {
    ss << "FleetId=" << StringUtils::URLEncode(m_fleetId.c_str()) << "&";
  }

  if(m_startTimeHasBeenSet)
  {
    ss << "StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeFleetHistoryRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
