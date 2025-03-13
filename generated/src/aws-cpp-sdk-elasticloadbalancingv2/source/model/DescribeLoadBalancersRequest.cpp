/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/DescribeLoadBalancersRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

Aws::String DescribeLoadBalancersRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeLoadBalancers&";
  if(m_loadBalancerArnsHasBeenSet)
  {
    if (m_loadBalancerArns.empty())
    {
      ss << "LoadBalancerArns=&";
    }
    else
    {
      unsigned loadBalancerArnsCount = 1;
      for(auto& item : m_loadBalancerArns)
      {
        ss << "LoadBalancerArns.member." << loadBalancerArnsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        loadBalancerArnsCount++;
      }
    }
  }

  if(m_namesHasBeenSet)
  {
    if (m_names.empty())
    {
      ss << "Names=&";
    }
    else
    {
      unsigned namesCount = 1;
      for(auto& item : m_names)
      {
        ss << "Names.member." << namesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        namesCount++;
      }
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


void  DescribeLoadBalancersRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
