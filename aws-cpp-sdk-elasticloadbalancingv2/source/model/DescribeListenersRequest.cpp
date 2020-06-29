/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/DescribeListenersRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

DescribeListenersRequest::DescribeListenersRequest() : 
    m_loadBalancerArnHasBeenSet(false),
    m_listenerArnsHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_pageSize(0),
    m_pageSizeHasBeenSet(false)
{
}

Aws::String DescribeListenersRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeListeners&";
  if(m_loadBalancerArnHasBeenSet)
  {
    ss << "LoadBalancerArn=" << StringUtils::URLEncode(m_loadBalancerArn.c_str()) << "&";
  }

  if(m_listenerArnsHasBeenSet)
  {
    unsigned listenerArnsCount = 1;
    for(auto& item : m_listenerArns)
    {
      ss << "ListenerArns.member." << listenerArnsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      listenerArnsCount++;
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


void  DescribeListenersRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
