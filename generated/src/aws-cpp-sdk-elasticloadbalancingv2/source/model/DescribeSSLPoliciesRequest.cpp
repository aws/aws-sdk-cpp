/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/DescribeSSLPoliciesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

Aws::String DescribeSSLPoliciesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeSSLPolicies&";
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

  if(m_loadBalancerTypeHasBeenSet)
  {
    ss << "LoadBalancerType=" << StringUtils::URLEncode(LoadBalancerTypeEnumMapper::GetNameForLoadBalancerTypeEnum(m_loadBalancerType)) << "&";
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  DescribeSSLPoliciesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
