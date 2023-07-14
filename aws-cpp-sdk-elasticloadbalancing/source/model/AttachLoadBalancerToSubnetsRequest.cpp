/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/AttachLoadBalancerToSubnetsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils;

AttachLoadBalancerToSubnetsRequest::AttachLoadBalancerToSubnetsRequest() : 
    m_loadBalancerNameHasBeenSet(false),
    m_subnetsHasBeenSet(false)
{
}

Aws::String AttachLoadBalancerToSubnetsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AttachLoadBalancerToSubnets&";
  if(m_loadBalancerNameHasBeenSet)
  {
    ss << "LoadBalancerName=" << StringUtils::URLEncode(m_loadBalancerName.c_str()) << "&";
  }

  if(m_subnetsHasBeenSet)
  {
    unsigned subnetsCount = 1;
    for(auto& item : m_subnets)
    {
      ss << "Subnets.member." << subnetsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      subnetsCount++;
    }
  }

  ss << "Version=2012-06-01";
  return ss.str();
}


void  AttachLoadBalancerToSubnetsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
