/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/SetSubnetsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

SetSubnetsRequest::SetSubnetsRequest() : 
    m_loadBalancerArnHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_subnetMappingsHasBeenSet(false),
    m_ipAddressType(IpAddressType::NOT_SET),
    m_ipAddressTypeHasBeenSet(false)
{
}

Aws::String SetSubnetsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SetSubnets&";
  if(m_loadBalancerArnHasBeenSet)
  {
    ss << "LoadBalancerArn=" << StringUtils::URLEncode(m_loadBalancerArn.c_str()) << "&";
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

  if(m_subnetMappingsHasBeenSet)
  {
    unsigned subnetMappingsCount = 1;
    for(auto& item : m_subnetMappings)
    {
      item.OutputToStream(ss, "SubnetMappings.member.", subnetMappingsCount, "");
      subnetMappingsCount++;
    }
  }

  if(m_ipAddressTypeHasBeenSet)
  {
    ss << "IpAddressType=" << IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType) << "&";
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  SetSubnetsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
