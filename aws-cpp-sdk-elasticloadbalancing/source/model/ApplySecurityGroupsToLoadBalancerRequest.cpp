/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/ApplySecurityGroupsToLoadBalancerRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils;

ApplySecurityGroupsToLoadBalancerRequest::ApplySecurityGroupsToLoadBalancerRequest() : 
    m_loadBalancerNameHasBeenSet(false),
    m_securityGroupsHasBeenSet(false)
{
}

Aws::String ApplySecurityGroupsToLoadBalancerRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ApplySecurityGroupsToLoadBalancer&";
  if(m_loadBalancerNameHasBeenSet)
  {
    ss << "LoadBalancerName=" << StringUtils::URLEncode(m_loadBalancerName.c_str()) << "&";
  }

  if(m_securityGroupsHasBeenSet)
  {
    unsigned securityGroupsCount = 1;
    for(auto& item : m_securityGroups)
    {
      ss << "SecurityGroups.member." << securityGroupsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      securityGroupsCount++;
    }
  }

  ss << "Version=2012-06-01";
  return ss.str();
}


void  ApplySecurityGroupsToLoadBalancerRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
