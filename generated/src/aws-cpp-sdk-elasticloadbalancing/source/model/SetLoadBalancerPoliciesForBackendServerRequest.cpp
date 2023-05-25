/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/SetLoadBalancerPoliciesForBackendServerRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils;

SetLoadBalancerPoliciesForBackendServerRequest::SetLoadBalancerPoliciesForBackendServerRequest() : 
    m_loadBalancerNameHasBeenSet(false),
    m_instancePort(0),
    m_instancePortHasBeenSet(false),
    m_policyNamesHasBeenSet(false)
{
}

Aws::String SetLoadBalancerPoliciesForBackendServerRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SetLoadBalancerPoliciesForBackendServer&";
  if(m_loadBalancerNameHasBeenSet)
  {
    ss << "LoadBalancerName=" << StringUtils::URLEncode(m_loadBalancerName.c_str()) << "&";
  }

  if(m_instancePortHasBeenSet)
  {
    ss << "InstancePort=" << m_instancePort << "&";
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


void  SetLoadBalancerPoliciesForBackendServerRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
