﻿/*
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
#include <aws/elasticloadbalancingv2/model/DescribeTargetHealthRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

DescribeTargetHealthRequest::DescribeTargetHealthRequest() : 
    m_targetGroupArnHasBeenSet(false),
    m_targetsHasBeenSet(false)
{
}

Aws::String DescribeTargetHealthRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeTargetHealth&";
  if(m_targetGroupArnHasBeenSet)
  {
    ss << "TargetGroupArn=" << StringUtils::URLEncode(m_targetGroupArn.c_str()) << "&";
  }

  if(m_targetsHasBeenSet)
  {
    unsigned targetsCount = 1;
    for(auto& item : m_targets)
    {
      item.OutputToStream(ss, "Targets.member.", targetsCount, "");
      targetsCount++;
    }
  }

  ss << "Version=2015-12-01";
  return ss.str();
}

