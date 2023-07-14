/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/DisableAlarmActionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

DisableAlarmActionsRequest::DisableAlarmActionsRequest() : 
    m_alarmNamesHasBeenSet(false)
{
}

Aws::String DisableAlarmActionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DisableAlarmActions&";
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


void  DisableAlarmActionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
