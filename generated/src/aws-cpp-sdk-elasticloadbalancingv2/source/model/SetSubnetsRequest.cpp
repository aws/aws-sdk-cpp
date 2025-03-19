/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/SetSubnetsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

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
    if (m_subnets.empty())
    {
      ss << "Subnets=&";
    }
    else
    {
      unsigned subnetsCount = 1;
      for(auto& item : m_subnets)
      {
        ss << "Subnets.member." << subnetsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        subnetsCount++;
      }
    }
  }

  if(m_subnetMappingsHasBeenSet)
  {
    if (m_subnetMappings.empty())
    {
      ss << "SubnetMappings=&";
    }
    else
    {
      unsigned subnetMappingsCount = 1;
      for(auto& item : m_subnetMappings)
      {
        item.OutputToStream(ss, "SubnetMappings.member.", subnetMappingsCount, "");
        subnetMappingsCount++;
      }
    }
  }

  if(m_ipAddressTypeHasBeenSet)
  {
    ss << "IpAddressType=" << StringUtils::URLEncode(IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType)) << "&";
  }

  if(m_enablePrefixForIpv6SourceNatHasBeenSet)
  {
    ss << "EnablePrefixForIpv6SourceNat=" << StringUtils::URLEncode(EnablePrefixForIpv6SourceNatEnumMapper::GetNameForEnablePrefixForIpv6SourceNatEnum(m_enablePrefixForIpv6SourceNat)) << "&";
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  SetSubnetsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
