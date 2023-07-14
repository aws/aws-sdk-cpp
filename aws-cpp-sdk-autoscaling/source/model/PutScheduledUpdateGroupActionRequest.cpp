/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/PutScheduledUpdateGroupActionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

PutScheduledUpdateGroupActionRequest::PutScheduledUpdateGroupActionRequest() : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_scheduledActionNameHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_recurrenceHasBeenSet(false),
    m_minSize(0),
    m_minSizeHasBeenSet(false),
    m_maxSize(0),
    m_maxSizeHasBeenSet(false),
    m_desiredCapacity(0),
    m_desiredCapacityHasBeenSet(false),
    m_timeZoneHasBeenSet(false)
{
}

Aws::String PutScheduledUpdateGroupActionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PutScheduledUpdateGroupAction&";
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_scheduledActionNameHasBeenSet)
  {
    ss << "ScheduledActionName=" << StringUtils::URLEncode(m_scheduledActionName.c_str()) << "&";
  }

  if(m_timeHasBeenSet)
  {
    ss << "Time=" << StringUtils::URLEncode(m_time.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_startTimeHasBeenSet)
  {
    ss << "StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endTimeHasBeenSet)
  {
    ss << "EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_recurrenceHasBeenSet)
  {
    ss << "Recurrence=" << StringUtils::URLEncode(m_recurrence.c_str()) << "&";
  }

  if(m_minSizeHasBeenSet)
  {
    ss << "MinSize=" << m_minSize << "&";
  }

  if(m_maxSizeHasBeenSet)
  {
    ss << "MaxSize=" << m_maxSize << "&";
  }

  if(m_desiredCapacityHasBeenSet)
  {
    ss << "DesiredCapacity=" << m_desiredCapacity << "&";
  }

  if(m_timeZoneHasBeenSet)
  {
    ss << "TimeZone=" << StringUtils::URLEncode(m_timeZone.c_str()) << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  PutScheduledUpdateGroupActionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
