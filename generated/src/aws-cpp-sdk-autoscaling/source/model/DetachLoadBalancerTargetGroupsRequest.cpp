/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DetachLoadBalancerTargetGroupsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

Aws::String DetachLoadBalancerTargetGroupsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DetachLoadBalancerTargetGroups&";
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_targetGroupARNsHasBeenSet)
  {
    if (m_targetGroupARNs.empty())
    {
      ss << "TargetGroupARNs=&";
    }
    else
    {
      unsigned targetGroupARNsCount = 1;
      for(auto& item : m_targetGroupARNs)
      {
        ss << "TargetGroupARNs.member." << targetGroupARNsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        targetGroupARNsCount++;
      }
    }
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  DetachLoadBalancerTargetGroupsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
