/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/DescribeLoadBalancerPolicyTypesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils;

DescribeLoadBalancerPolicyTypesRequest::DescribeLoadBalancerPolicyTypesRequest() : 
    m_policyTypeNamesHasBeenSet(false)
{
}

Aws::String DescribeLoadBalancerPolicyTypesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeLoadBalancerPolicyTypes&";
  if(m_policyTypeNamesHasBeenSet)
  {
    unsigned policyTypeNamesCount = 1;
    for(auto& item : m_policyTypeNames)
    {
      ss << "PolicyTypeNames.member." << policyTypeNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      policyTypeNamesCount++;
    }
  }

  ss << "Version=2012-06-01";
  return ss.str();
}


void  DescribeLoadBalancerPolicyTypesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
