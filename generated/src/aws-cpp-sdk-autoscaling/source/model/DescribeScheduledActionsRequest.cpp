﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DescribeScheduledActionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

Aws::String DescribeScheduledActionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeScheduledActions&";
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_scheduledActionNamesHasBeenSet)
  {
    if (m_scheduledActionNames.empty())
    {
      ss << "ScheduledActionNames=&";
    }
    else
    {
      unsigned scheduledActionNamesCount = 1;
      for(auto& item : m_scheduledActionNames)
      {
        ss << "ScheduledActionNames.member." << scheduledActionNamesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        scheduledActionNamesCount++;
      }
    }
  }

  if(m_startTimeHasBeenSet)
  {
    ss << "StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endTimeHasBeenSet)
  {
    ss << "EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  DescribeScheduledActionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
