/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/ModifyIpPoolsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

Aws::String ModifyIpPoolsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyIpPools&";
  if(m_loadBalancerArnHasBeenSet)
  {
    ss << "LoadBalancerArn=" << StringUtils::URLEncode(m_loadBalancerArn.c_str()) << "&";
  }

  if(m_ipamPoolsHasBeenSet)
  {
    m_ipamPools.OutputToStream(ss, "IpamPools");
  }

  if(m_removeIpamPoolsHasBeenSet)
  {
    if (m_removeIpamPools.empty())
    {
      ss << "RemoveIpamPools=&";
    }
    else
    {
      unsigned removeIpamPoolsCount = 1;
      for(auto& item : m_removeIpamPools)
      {
        ss << "RemoveIpamPools.member." << removeIpamPoolsCount << "="
            << StringUtils::URLEncode(RemoveIpamPoolEnumMapper::GetNameForRemoveIpamPoolEnum(item)) << "&";
        removeIpamPoolsCount++;
      }
    }
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  ModifyIpPoolsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
