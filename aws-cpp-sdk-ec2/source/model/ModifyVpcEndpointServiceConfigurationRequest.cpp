/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ec2/model/ModifyVpcEndpointServiceConfigurationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyVpcEndpointServiceConfigurationRequest::ModifyVpcEndpointServiceConfigurationRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_privateDnsNameHasBeenSet(false),
    m_removePrivateDnsName(false),
    m_removePrivateDnsNameHasBeenSet(false),
    m_acceptanceRequired(false),
    m_acceptanceRequiredHasBeenSet(false),
    m_addNetworkLoadBalancerArnsHasBeenSet(false),
    m_removeNetworkLoadBalancerArnsHasBeenSet(false)
{
}

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

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyVpcEndpointServiceConfigurationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
