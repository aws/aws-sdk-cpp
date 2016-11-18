/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/autoscaling/model/AttachLoadBalancerTargetGroupsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

AttachLoadBalancerTargetGroupsRequest::AttachLoadBalancerTargetGroupsRequest() : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_targetGroupARNsHasBeenSet(false)
{
}

Aws::String AttachLoadBalancerTargetGroupsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AttachLoadBalancerTargetGroups&";
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_targetGroupARNsHasBeenSet)
  {
    unsigned targetGroupARNsCount = 1;
    for(auto& item : m_targetGroupARNs)
    {
      ss << "TargetGroupARNs.member." << targetGroupARNsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      targetGroupARNsCount++;
    }
  }

  ss << "Version=2011-01-01";
  return ss.str();
}

