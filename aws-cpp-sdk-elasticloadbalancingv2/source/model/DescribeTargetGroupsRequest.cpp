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
#include <aws/elasticloadbalancingv2/model/DescribeTargetGroupsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

DescribeTargetGroupsRequest::DescribeTargetGroupsRequest() : 
    m_loadBalancerArnHasBeenSet(false),
    m_targetGroupArnsHasBeenSet(false),
    m_namesHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_pageSize(0),
    m_pageSizeHasBeenSet(false)
{
}

Aws::String DescribeTargetGroupsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeTargetGroups&";
  if(m_loadBalancerArnHasBeenSet)
  {
    ss << "LoadBalancerArn=" << StringUtils::URLEncode(m_loadBalancerArn.c_str()) << "&";
  }

  if(m_targetGroupArnsHasBeenSet)
  {
    unsigned targetGroupArnsCount = 1;
    for(auto& item : m_targetGroupArns)
    {
      ss << "TargetGroupArns.member." << targetGroupArnsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      targetGroupArnsCount++;
    }
  }

  if(m_namesHasBeenSet)
  {
    unsigned namesCount = 1;
    for(auto& item : m_names)
    {
      ss << "Names.member." << namesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      namesCount++;
    }
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  if(m_pageSizeHasBeenSet)
  {
    ss << "PageSize=" << m_pageSize << "&";
  }

  ss << "Version=2015-12-01";
  return ss.str();
}

