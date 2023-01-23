/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/TerminateInstanceInAutoScalingGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

TerminateInstanceInAutoScalingGroupRequest::TerminateInstanceInAutoScalingGroupRequest() : 
    m_instanceIdHasBeenSet(false),
    m_shouldDecrementDesiredCapacity(false),
    m_shouldDecrementDesiredCapacityHasBeenSet(false)
{
}

Aws::String TerminateInstanceInAutoScalingGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=TerminateInstanceInAutoScalingGroup&";
  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_shouldDecrementDesiredCapacityHasBeenSet)
  {
    ss << "ShouldDecrementDesiredCapacity=" << std::boolalpha << m_shouldDecrementDesiredCapacity << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  TerminateInstanceInAutoScalingGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
