/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/monitoring/model/SetAlarmStateRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

SetAlarmStateRequest::SetAlarmStateRequest() : 
    m_stateReasonDataHasBeenSet(false)
{
}

Aws::String SetAlarmStateRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SetAlarmState&";
  ss << "AlarmName=" << StringUtils::URLEncode(m_alarmName.c_str()) << "&";
  ss << "StateValue=" << StateValueMapper::GetNameForStateValue(m_stateValue) << "&";
  ss << "StateReason=" << StringUtils::URLEncode(m_stateReason.c_str()) << "&";
  if(m_stateReasonDataHasBeenSet)
  {
    ss << "StateReasonData=" << StringUtils::URLEncode(m_stateReasonData.c_str()) << "&";
  }
  ss << "Version=2010-08-01";
  return ss.str();
}

