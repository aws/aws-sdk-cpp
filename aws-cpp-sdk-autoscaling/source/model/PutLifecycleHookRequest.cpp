/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/PutLifecycleHookRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

PutLifecycleHookRequest::PutLifecycleHookRequest() : 
    m_lifecycleHookNameHasBeenSet(false),
    m_autoScalingGroupNameHasBeenSet(false),
    m_lifecycleTransitionHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_notificationTargetARNHasBeenSet(false),
    m_notificationMetadataHasBeenSet(false),
    m_heartbeatTimeout(0),
    m_heartbeatTimeoutHasBeenSet(false),
    m_defaultResultHasBeenSet(false)
{
}

Aws::String PutLifecycleHookRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PutLifecycleHook&";
  if(m_lifecycleHookNameHasBeenSet)
  {
    ss << "LifecycleHookName=" << StringUtils::URLEncode(m_lifecycleHookName.c_str()) << "&";
  }

  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_lifecycleTransitionHasBeenSet)
  {
    ss << "LifecycleTransition=" << StringUtils::URLEncode(m_lifecycleTransition.c_str()) << "&";
  }

  if(m_roleARNHasBeenSet)
  {
    ss << "RoleARN=" << StringUtils::URLEncode(m_roleARN.c_str()) << "&";
  }

  if(m_notificationTargetARNHasBeenSet)
  {
    ss << "NotificationTargetARN=" << StringUtils::URLEncode(m_notificationTargetARN.c_str()) << "&";
  }

  if(m_notificationMetadataHasBeenSet)
  {
    ss << "NotificationMetadata=" << StringUtils::URLEncode(m_notificationMetadata.c_str()) << "&";
  }

  if(m_heartbeatTimeoutHasBeenSet)
  {
    ss << "HeartbeatTimeout=" << m_heartbeatTimeout << "&";
  }

  if(m_defaultResultHasBeenSet)
  {
    ss << "DefaultResult=" << StringUtils::URLEncode(m_defaultResult.c_str()) << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  PutLifecycleHookRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
