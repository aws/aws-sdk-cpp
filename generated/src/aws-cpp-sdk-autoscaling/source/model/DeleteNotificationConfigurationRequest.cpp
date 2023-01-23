/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DeleteNotificationConfigurationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

DeleteNotificationConfigurationRequest::DeleteNotificationConfigurationRequest() : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_topicARNHasBeenSet(false)
{
}

Aws::String DeleteNotificationConfigurationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteNotificationConfiguration&";
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_topicARNHasBeenSet)
  {
    ss << "TopicARN=" << StringUtils::URLEncode(m_topicARN.c_str()) << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  DeleteNotificationConfigurationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
