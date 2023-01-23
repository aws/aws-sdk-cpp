/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/DescribeLoadBalancerPoliciesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils;

DescribeLoadBalancerPoliciesRequest::DescribeLoadBalancerPoliciesRequest() : 
    m_loadBalancerNameHasBeenSet(false),
    m_policyNamesHasBeenSet(false)
{
}

Aws::String DescribeLoadBalancerPoliciesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeLoadBalancerPolicies&";
  if(m_loadBalancerNameHasBeenSet)
  {
    ss << "LoadBalancerName=" << StringUtils::URLEncode(m_loadBalancerName.c_str()) << "&";
  }

  if(m_policyNamesHasBeenSet)
  {
    unsigned policyNamesCount = 1;
    for(auto& item : m_policyNames)
    {
      ss << "PolicyNames.member." << policyNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      policyNamesCount++;
    }
  }

  ss << "Version=2012-06-01";
  return ss.str();
}


void  DescribeLoadBalancerPoliciesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
