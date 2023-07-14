﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ModifyScheduledActionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

ModifyScheduledActionRequest::ModifyScheduledActionRequest() : 
    m_scheduledActionNameHasBeenSet(false),
    m_targetActionHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_iamRoleHasBeenSet(false),
    m_scheduledActionDescriptionHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_enable(false),
    m_enableHasBeenSet(false)
{
}

Aws::String ModifyScheduledActionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyScheduledAction&";
  if(m_scheduledActionNameHasBeenSet)
  {
    ss << "ScheduledActionName=" << StringUtils::URLEncode(m_scheduledActionName.c_str()) << "&";
  }

  if(m_targetActionHasBeenSet)
  {
    m_targetAction.OutputToStream(ss, "TargetAction");
  }

  if(m_scheduleHasBeenSet)
  {
    ss << "Schedule=" << StringUtils::URLEncode(m_schedule.c_str()) << "&";
  }

  if(m_iamRoleHasBeenSet)
  {
    ss << "IamRole=" << StringUtils::URLEncode(m_iamRole.c_str()) << "&";
  }

  if(m_scheduledActionDescriptionHasBeenSet)
  {
    ss << "ScheduledActionDescription=" << StringUtils::URLEncode(m_scheduledActionDescription.c_str()) << "&";
  }

  if(m_startTimeHasBeenSet)
  {
    ss << "StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endTimeHasBeenSet)
  {
    ss << "EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_enableHasBeenSet)
  {
    ss << "Enable=" << std::boolalpha << m_enable << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  ModifyScheduledActionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
