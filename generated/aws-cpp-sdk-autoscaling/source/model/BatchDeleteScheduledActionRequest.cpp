/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/BatchDeleteScheduledActionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

BatchDeleteScheduledActionRequest::BatchDeleteScheduledActionRequest() : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_scheduledActionNamesHasBeenSet(false)
{
}

Aws::String BatchDeleteScheduledActionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=BatchDeleteScheduledAction&";
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_scheduledActionNamesHasBeenSet)
  {
    unsigned scheduledActionNamesCount = 1;
    for(auto& item : m_scheduledActionNames)
    {
      ss << "ScheduledActionNames.member." << scheduledActionNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      scheduledActionNamesCount++;
    }
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  BatchDeleteScheduledActionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
