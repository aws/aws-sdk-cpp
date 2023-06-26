/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/DeleteLoadBalancerListenersRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils;

DeleteLoadBalancerListenersRequest::DeleteLoadBalancerListenersRequest() : 
    m_loadBalancerNameHasBeenSet(false),
    m_loadBalancerPortsHasBeenSet(false)
{
}

Aws::String DeleteLoadBalancerListenersRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteLoadBalancerListeners&";
  if(m_loadBalancerNameHasBeenSet)
  {
    ss << "LoadBalancerName=" << StringUtils::URLEncode(m_loadBalancerName.c_str()) << "&";
  }

  if(m_loadBalancerPortsHasBeenSet)
  {
    unsigned loadBalancerPortsCount = 1;
    for(auto& item : m_loadBalancerPorts)
    {
      ss << "LoadBalancerPorts.member." << loadBalancerPortsCount << "="
          << item << "&";
      loadBalancerPortsCount++;
    }
  }

  ss << "Version=2012-06-01";
  return ss.str();
}


void  DeleteLoadBalancerListenersRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
