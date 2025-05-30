﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyVpcEndpointServiceConfigurationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifyVpcEndpointServiceConfigurationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyVpcEndpointServiceConfiguration&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_serviceIdHasBeenSet)
  {
    ss << "ServiceId=" << StringUtils::URLEncode(m_serviceId.c_str()) << "&";
  }

  if(m_privateDnsNameHasBeenSet)
  {
    ss << "PrivateDnsName=" << StringUtils::URLEncode(m_privateDnsName.c_str()) << "&";
  }

  if(m_removePrivateDnsNameHasBeenSet)
  {
    ss << "RemovePrivateDnsName=" << std::boolalpha << m_removePrivateDnsName << "&";
  }

  if(m_acceptanceRequiredHasBeenSet)
  {
    ss << "AcceptanceRequired=" << std::boolalpha << m_acceptanceRequired << "&";
  }

  if(m_addNetworkLoadBalancerArnsHasBeenSet)
  {
    unsigned addNetworkLoadBalancerArnsCount = 1;
    for(auto& item : m_addNetworkLoadBalancerArns)
    {
      ss << "AddNetworkLoadBalancerArn." << addNetworkLoadBalancerArnsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      addNetworkLoadBalancerArnsCount++;
    }
  }

  if(m_removeNetworkLoadBalancerArnsHasBeenSet)
  {
    unsigned removeNetworkLoadBalancerArnsCount = 1;
    for(auto& item : m_removeNetworkLoadBalancerArns)
    {
      ss << "RemoveNetworkLoadBalancerArn." << removeNetworkLoadBalancerArnsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      removeNetworkLoadBalancerArnsCount++;
    }
  }

  if(m_addGatewayLoadBalancerArnsHasBeenSet)
  {
    unsigned addGatewayLoadBalancerArnsCount = 1;
    for(auto& item : m_addGatewayLoadBalancerArns)
    {
      ss << "AddGatewayLoadBalancerArn." << addGatewayLoadBalancerArnsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      addGatewayLoadBalancerArnsCount++;
    }
  }

  if(m_removeGatewayLoadBalancerArnsHasBeenSet)
  {
    unsigned removeGatewayLoadBalancerArnsCount = 1;
    for(auto& item : m_removeGatewayLoadBalancerArns)
    {
      ss << "RemoveGatewayLoadBalancerArn." << removeGatewayLoadBalancerArnsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      removeGatewayLoadBalancerArnsCount++;
    }
  }

  if(m_addSupportedIpAddressTypesHasBeenSet)
  {
    unsigned addSupportedIpAddressTypesCount = 1;
    for(auto& item : m_addSupportedIpAddressTypes)
    {
      ss << "AddSupportedIpAddressType." << addSupportedIpAddressTypesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      addSupportedIpAddressTypesCount++;
    }
  }

  if(m_removeSupportedIpAddressTypesHasBeenSet)
  {
    unsigned removeSupportedIpAddressTypesCount = 1;
    for(auto& item : m_removeSupportedIpAddressTypes)
    {
      ss << "RemoveSupportedIpAddressType." << removeSupportedIpAddressTypesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      removeSupportedIpAddressTypesCount++;
    }
  }

  if(m_addSupportedRegionsHasBeenSet)
  {
    unsigned addSupportedRegionsCount = 1;
    for(auto& item : m_addSupportedRegions)
    {
      ss << "AddSupportedRegion." << addSupportedRegionsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      addSupportedRegionsCount++;
    }
  }

  if(m_removeSupportedRegionsHasBeenSet)
  {
    unsigned removeSupportedRegionsCount = 1;
    for(auto& item : m_removeSupportedRegions)
    {
      ss << "RemoveSupportedRegion." << removeSupportedRegionsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      removeSupportedRegionsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyVpcEndpointServiceConfigurationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
