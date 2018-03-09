﻿/*
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

#include <aws/ec2/model/CreateVpcEndpointServiceConfigurationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateVpcEndpointServiceConfigurationRequest::CreateVpcEndpointServiceConfigurationRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_acceptanceRequired(false),
    m_acceptanceRequiredHasBeenSet(false),
    m_networkLoadBalancerArnsHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

Aws::String CreateVpcEndpointServiceConfigurationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateVpcEndpointServiceConfiguration&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_acceptanceRequiredHasBeenSet)
  {
    ss << "AcceptanceRequired=" << std::boolalpha << m_acceptanceRequired << "&";
  }

  if(m_networkLoadBalancerArnsHasBeenSet)
  {
    unsigned networkLoadBalancerArnsCount = 1;
    for(auto& item : m_networkLoadBalancerArns)
    {
      ss << "NetworkLoadBalancerArn." << networkLoadBalancerArnsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      networkLoadBalancerArnsCount++;
    }
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateVpcEndpointServiceConfigurationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
