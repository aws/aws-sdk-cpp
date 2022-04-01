/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/CreateLoadBalancerListenersRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils;

CreateLoadBalancerListenersRequest::CreateLoadBalancerListenersRequest() : 
    m_loadBalancerNameHasBeenSet(false),
    m_listenersHasBeenSet(false)
{
}

Aws::String CreateLoadBalancerListenersRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateLoadBalancerListeners&";
  if(m_loadBalancerNameHasBeenSet)
  {
    ss << "LoadBalancerName=" << StringUtils::URLEncode(m_loadBalancerName.c_str()) << "&";
  }

  if(m_listenersHasBeenSet)
  {
    unsigned listenersCount = 1;
    for(auto& item : m_listeners)
    {
      item.OutputToStream(ss, "Listeners.member.", listenersCount, "");
      listenersCount++;
    }
  }

  ss << "Version=2012-06-01";
  return ss.str();
}


void  CreateLoadBalancerListenersRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
