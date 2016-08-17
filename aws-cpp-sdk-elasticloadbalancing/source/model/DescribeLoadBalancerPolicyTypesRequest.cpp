/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticloadbalancing/model/DescribeLoadBalancerPolicyTypesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils;

DescribeLoadBalancerPolicyTypesRequest::DescribeLoadBalancerPolicyTypesRequest() : 
    m_policyTypeNamesHasBeenSet(false)
{
}

Aws::String DescribeLoadBalancerPolicyTypesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeLoadBalancerPolicyTypes&";
  if(m_policyTypeNamesHasBeenSet)
  {
    unsigned policyTypeNamesCount = 1;
    for(auto& item : m_policyTypeNames)
    {
      ss << "PolicyTypeNames.member." << policyTypeNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      policyTypeNamesCount++;
    }
  }

  ss << "Version=2012-06-01";
  return ss.str();
}

