/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DescribeLifecycleHooksRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

DescribeLifecycleHooksRequest::DescribeLifecycleHooksRequest() : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_lifecycleHookNamesHasBeenSet(false)
{
}

Aws::String DescribeLifecycleHooksRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeLifecycleHooks&";
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_lifecycleHookNamesHasBeenSet)
  {
    unsigned lifecycleHookNamesCount = 1;
    for(auto& item : m_lifecycleHookNames)
    {
      ss << "LifecycleHookNames.member." << lifecycleHookNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      lifecycleHookNamesCount++;
    }
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  DescribeLifecycleHooksRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
