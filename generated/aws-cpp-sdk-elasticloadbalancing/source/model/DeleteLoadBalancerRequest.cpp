/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/DeleteLoadBalancerRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils;

DeleteLoadBalancerRequest::DeleteLoadBalancerRequest() : 
    m_loadBalancerNameHasBeenSet(false)
{
}

Aws::String DeleteLoadBalancerRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteLoadBalancer&";
  if(m_loadBalancerNameHasBeenSet)
  {
    ss << "LoadBalancerName=" << StringUtils::URLEncode(m_loadBalancerName.c_str()) << "&";
  }

  ss << "Version=2012-06-01";
  return ss.str();
}


void  DeleteLoadBalancerRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
