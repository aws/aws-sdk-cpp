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
#include <aws/monitoring/model/DeleteAlarmsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

DeleteAlarmsRequest::DeleteAlarmsRequest() : 
    m_alarmNamesHasBeenSet(false)
{
}

Aws::String DeleteAlarmsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteAlarms&";
  if(m_alarmNamesHasBeenSet)
  {
    unsigned alarmNamesCount = 1;
    for(auto& item : m_alarmNames)
    {
      ss << "AlarmNames.member." << alarmNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      alarmNamesCount++;
    }
  }

  ss << "Version=2010-08-01";
  return ss.str();
}

