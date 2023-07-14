/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/CompleteLifecycleActionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

CompleteLifecycleActionRequest::CompleteLifecycleActionRequest() : 
    m_lifecycleHookNameHasBeenSet(false),
    m_autoScalingGroupNameHasBeenSet(false),
    m_lifecycleActionTokenHasBeenSet(false),
    m_lifecycleActionResultHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

Aws::String CompleteLifecycleActionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CompleteLifecycleAction&";
  if(m_lifecycleHookNameHasBeenSet)
  {
    ss << "LifecycleHookName=" << StringUtils::URLEncode(m_lifecycleHookName.c_str()) << "&";
  }

  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_lifecycleActionTokenHasBeenSet)
  {
    ss << "LifecycleActionToken=" << StringUtils::URLEncode(m_lifecycleActionToken.c_str()) << "&";
  }

  if(m_lifecycleActionResultHasBeenSet)
  {
    ss << "LifecycleActionResult=" << StringUtils::URLEncode(m_lifecycleActionResult.c_str()) << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  CompleteLifecycleActionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
