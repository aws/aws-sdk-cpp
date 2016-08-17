/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

