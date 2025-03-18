/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/PutNotificationConfigurationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

Aws::String PutNotificationConfigurationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PutNotificationConfiguration&";
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_topicARNHasBeenSet)
  {
    ss << "TopicARN=" << StringUtils::URLEncode(m_topicARN.c_str()) << "&";
  }

  if(m_notificationTypesHasBeenSet)
  {
    if (m_notificationTypes.empty())
    {
      ss << "NotificationTypes=&";
    }
    else
    {
      unsigned notificationTypesCount = 1;
      for(auto& item : m_notificationTypes)
      {
        ss << "NotificationTypes.member." << notificationTypesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        notificationTypesCount++;
      }
    }
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  PutNotificationConfigurationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
