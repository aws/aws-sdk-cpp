/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/PutCompositeAlarmRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

PutCompositeAlarmRequest::PutCompositeAlarmRequest() : 
    m_actionsEnabled(false),
    m_actionsEnabledHasBeenSet(false),
    m_alarmActionsHasBeenSet(false),
    m_alarmDescriptionHasBeenSet(false),
    m_alarmNameHasBeenSet(false),
    m_alarmRuleHasBeenSet(false),
    m_insufficientDataActionsHasBeenSet(false),
    m_oKActionsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String PutCompositeAlarmRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PutCompositeAlarm&";
  if(m_actionsEnabledHasBeenSet)
  {
    ss << "ActionsEnabled=" << std::boolalpha << m_actionsEnabled << "&";
  }

  if(m_alarmActionsHasBeenSet)
  {
    unsigned alarmActionsCount = 1;
    for(auto& item : m_alarmActions)
    {
      ss << "AlarmActions.member." << alarmActionsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      alarmActionsCount++;
    }
  }

  if(m_alarmDescriptionHasBeenSet)
  {
    ss << "AlarmDescription=" << StringUtils::URLEncode(m_alarmDescription.c_str()) << "&";
  }

  if(m_alarmNameHasBeenSet)
  {
    ss << "AlarmName=" << StringUtils::URLEncode(m_alarmName.c_str()) << "&";
  }

  if(m_alarmRuleHasBeenSet)
  {
    ss << "AlarmRule=" << StringUtils::URLEncode(m_alarmRule.c_str()) << "&";
  }

  if(m_insufficientDataActionsHasBeenSet)
  {
    unsigned insufficientDataActionsCount = 1;
    for(auto& item : m_insufficientDataActions)
    {
      ss << "InsufficientDataActions.member." << insufficientDataActionsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      insufficientDataActionsCount++;
    }
  }

  if(m_oKActionsHasBeenSet)
  {
    unsigned oKActionsCount = 1;
    for(auto& item : m_oKActions)
    {
      ss << "OKActions.member." << oKActionsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      oKActionsCount++;
    }
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  PutCompositeAlarmRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
