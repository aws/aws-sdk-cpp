/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/ModifyLoadBalancerAttributesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils;

ModifyLoadBalancerAttributesRequest::ModifyLoadBalancerAttributesRequest() : 
    m_loadBalancerNameHasBeenSet(false),
    m_loadBalancerAttributesHasBeenSet(false)
{
}

Aws::String ModifyLoadBalancerAttributesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyLoadBalancerAttributes&";
  if(m_loadBalancerNameHasBeenSet)
  {
    ss << "LoadBalancerName=" << StringUtils::URLEncode(m_loadBalancerName.c_str()) << "&";
  }

  if(m_loadBalancerAttributesHasBeenSet)
  {
    m_loadBalancerAttributes.OutputToStream(ss, "LoadBalancerAttributes");
  }

  ss << "Version=2012-06-01";
  return ss.str();
}


void  ModifyLoadBalancerAttributesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
