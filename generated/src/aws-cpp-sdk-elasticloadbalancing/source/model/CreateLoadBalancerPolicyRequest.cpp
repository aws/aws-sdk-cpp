/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/CreateLoadBalancerPolicyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils;

CreateLoadBalancerPolicyRequest::CreateLoadBalancerPolicyRequest() : 
    m_loadBalancerNameHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_policyTypeNameHasBeenSet(false),
    m_policyAttributesHasBeenSet(false)
{
}

Aws::String CreateLoadBalancerPolicyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateLoadBalancerPolicy&";
  if(m_loadBalancerNameHasBeenSet)
  {
    ss << "LoadBalancerName=" << StringUtils::URLEncode(m_loadBalancerName.c_str()) << "&";
  }

  if(m_policyNameHasBeenSet)
  {
    ss << "PolicyName=" << StringUtils::URLEncode(m_policyName.c_str()) << "&";
  }

  if(m_policyTypeNameHasBeenSet)
  {
    ss << "PolicyTypeName=" << StringUtils::URLEncode(m_policyTypeName.c_str()) << "&";
  }

  if(m_policyAttributesHasBeenSet)
  {
    unsigned policyAttributesCount = 1;
    for(auto& item : m_policyAttributes)
    {
      item.OutputToStream(ss, "PolicyAttributes.member.", policyAttributesCount, "");
      policyAttributesCount++;
    }
  }

  ss << "Version=2012-06-01";
  return ss.str();
}


void  CreateLoadBalancerPolicyRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
