/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DeleteScheduledActionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

DeleteScheduledActionRequest::DeleteScheduledActionRequest() : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_scheduledActionNameHasBeenSet(false)
{
}

Aws::String DeleteScheduledActionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteScheduledAction&";
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_scheduledActionNameHasBeenSet)
  {
    ss << "ScheduledActionName=" << StringUtils::URLEncode(m_scheduledActionName.c_str()) << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  DeleteScheduledActionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
