/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/BatchPutScheduledUpdateGroupActionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

BatchPutScheduledUpdateGroupActionRequest::BatchPutScheduledUpdateGroupActionRequest() : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_scheduledUpdateGroupActionsHasBeenSet(false)
{
}

Aws::String BatchPutScheduledUpdateGroupActionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=BatchPutScheduledUpdateGroupAction&";
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_scheduledUpdateGroupActionsHasBeenSet)
  {
    unsigned scheduledUpdateGroupActionsCount = 1;
    for(auto& item : m_scheduledUpdateGroupActions)
    {
      item.OutputToStream(ss, "ScheduledUpdateGroupActions.member.", scheduledUpdateGroupActionsCount, "");
      scheduledUpdateGroupActionsCount++;
    }
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  BatchPutScheduledUpdateGroupActionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
