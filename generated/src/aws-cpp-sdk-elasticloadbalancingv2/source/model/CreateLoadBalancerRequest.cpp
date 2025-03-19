/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/CreateLoadBalancerRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

Aws::String CreateLoadBalancerRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateLoadBalancer&";
  if(m_nameHasBeenSet)
  {
    ss << "Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
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

  if(m_securityGroupsHasBeenSet)
  {
    if (m_securityGroups.empty())
    {
      ss << "SecurityGroups=&";
    }
    else
    {
      unsigned securityGroupsCount = 1;
      for(auto& item : m_securityGroups)
      {
        ss << "SecurityGroups.member." << securityGroupsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        securityGroupsCount++;
      }
    }
  }

  if(m_schemeHasBeenSet)
  {
    ss << "Scheme=" << StringUtils::URLEncode(LoadBalancerSchemeEnumMapper::GetNameForLoadBalancerSchemeEnum(m_scheme)) << "&";
  }

  if(m_tagsHasBeenSet)
  {
    if (m_tags.empty())
    {
      ss << "Tags=&";
    }
    else
    {
      unsigned tagsCount = 1;
      for(auto& item : m_tags)
      {
        item.OutputToStream(ss, "Tags.member.", tagsCount, "");
        tagsCount++;
      }
    }
  }

  if(m_typeHasBeenSet)
  {
    ss << "Type=" << StringUtils::URLEncode(LoadBalancerTypeEnumMapper::GetNameForLoadBalancerTypeEnum(m_type)) << "&";
  }

  if(m_ipAddressTypeHasBeenSet)
  {
    ss << "IpAddressType=" << StringUtils::URLEncode(IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType)) << "&";
  }

  if(m_customerOwnedIpv4PoolHasBeenSet)
  {
    ss << "CustomerOwnedIpv4Pool=" << StringUtils::URLEncode(m_customerOwnedIpv4Pool.c_str()) << "&";
  }

  if(m_enablePrefixForIpv6SourceNatHasBeenSet)
  {
    ss << "EnablePrefixForIpv6SourceNat=" << StringUtils::URLEncode(EnablePrefixForIpv6SourceNatEnumMapper::GetNameForEnablePrefixForIpv6SourceNatEnum(m_enablePrefixForIpv6SourceNat)) << "&";
  }

  if(m_ipamPoolsHasBeenSet)
  {
    m_ipamPools.OutputToStream(ss, "IpamPools");
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  CreateLoadBalancerRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
