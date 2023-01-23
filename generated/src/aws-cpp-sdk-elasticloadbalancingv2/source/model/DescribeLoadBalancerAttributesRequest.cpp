/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/DescribeLoadBalancerAttributesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

DescribeLoadBalancerAttributesRequest::DescribeLoadBalancerAttributesRequest() : 
    m_loadBalancerArnHasBeenSet(false)
{
}

Aws::String DescribeLoadBalancerAttributesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeLoadBalancerAttributes&";
  if(m_loadBalancerArnHasBeenSet)
  {
    ss << "LoadBalancerArn=" << StringUtils::URLEncode(m_loadBalancerArn.c_str()) << "&";
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  DescribeLoadBalancerAttributesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
