/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/CreateLoadBalancerRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

CreateLoadBalancerRequest::CreateLoadBalancerRequest() : 
    m_nameHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_subnetMappingsHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_scheme(LoadBalancerSchemeEnum::NOT_SET),
    m_schemeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(LoadBalancerTypeEnum::NOT_SET),
    m_typeHasBeenSet(false),
    m_ipAddressType(IpAddressType::NOT_SET),
    m_ipAddressTypeHasBeenSet(false),
    m_customerOwnedIpv4PoolHasBeenSet(false)
{
}

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

  if(m_securityGroupsHasBeenSet)
  {
    unsigned securityGroupsCount = 1;
    for(auto& item : m_securityGroups)
    {
      ss << "SecurityGroups.member." << securityGroupsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      securityGroupsCount++;
    }
  }

  if(m_schemeHasBeenSet)
  {
    ss << "Scheme=" << LoadBalancerSchemeEnumMapper::GetNameForLoadBalancerSchemeEnum(m_scheme) << "&";
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  if(m_typeHasBeenSet)
  {
    ss << "Type=" << LoadBalancerTypeEnumMapper::GetNameForLoadBalancerTypeEnum(m_type) << "&";
  }

  if(m_ipAddressTypeHasBeenSet)
  {
    ss << "IpAddressType=" << IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType) << "&";
  }

  if(m_customerOwnedIpv4PoolHasBeenSet)
  {
    ss << "CustomerOwnedIpv4Pool=" << StringUtils::URLEncode(m_customerOwnedIpv4Pool.c_str()) << "&";
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  CreateLoadBalancerRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
