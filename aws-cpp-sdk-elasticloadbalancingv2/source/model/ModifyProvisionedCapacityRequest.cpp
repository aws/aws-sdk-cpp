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

#include <aws/elasticloadbalancingv2/model/ModifyProvisionedCapacityRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

ModifyProvisionedCapacityRequest::ModifyProvisionedCapacityRequest() : 
    m_loadBalancerArnHasBeenSet(false),
    m_minimumLBCapacityUnits(0),
    m_minimumLBCapacityUnitsHasBeenSet(false)
{
}

Aws::String ModifyProvisionedCapacityRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyProvisionedCapacity&";
  if(m_loadBalancerArnHasBeenSet)
  {
    ss << "LoadBalancerArn=" << StringUtils::URLEncode(m_loadBalancerArn.c_str()) << "&";
  }

  if(m_minimumLBCapacityUnitsHasBeenSet)
  {
    ss << "MinimumLBCapacityUnits=" << m_minimumLBCapacityUnits << "&";
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  ModifyProvisionedCapacityRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
