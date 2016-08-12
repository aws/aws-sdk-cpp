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
#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeLoadBalancerPolicyTypes.</p>
   */
  class AWS_ELASTICLOADBALANCING_API DescribeLoadBalancerPolicyTypesRequest : public ElasticLoadBalancingRequest
  {
  public:
    DescribeLoadBalancerPolicyTypesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The names of the policy types. If no names are specified, describes all
     * policy types defined by Elastic Load Balancing.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyTypeNames() const{ return m_policyTypeNames; }

    /**
     * <p>The names of the policy types. If no names are specified, describes all
     * policy types defined by Elastic Load Balancing.</p>
     */
    inline void SetPolicyTypeNames(const Aws::Vector<Aws::String>& value) { m_policyTypeNamesHasBeenSet = true; m_policyTypeNames = value; }

    /**
     * <p>The names of the policy types. If no names are specified, describes all
     * policy types defined by Elastic Load Balancing.</p>
     */
    inline void SetPolicyTypeNames(Aws::Vector<Aws::String>&& value) { m_policyTypeNamesHasBeenSet = true; m_policyTypeNames = value; }

    /**
     * <p>The names of the policy types. If no names are specified, describes all
     * policy types defined by Elastic Load Balancing.</p>
     */
    inline DescribeLoadBalancerPolicyTypesRequest& WithPolicyTypeNames(const Aws::Vector<Aws::String>& value) { SetPolicyTypeNames(value); return *this;}

    /**
     * <p>The names of the policy types. If no names are specified, describes all
     * policy types defined by Elastic Load Balancing.</p>
     */
    inline DescribeLoadBalancerPolicyTypesRequest& WithPolicyTypeNames(Aws::Vector<Aws::String>&& value) { SetPolicyTypeNames(value); return *this;}

    /**
     * <p>The names of the policy types. If no names are specified, describes all
     * policy types defined by Elastic Load Balancing.</p>
     */
    inline DescribeLoadBalancerPolicyTypesRequest& AddPolicyTypeNames(const Aws::String& value) { m_policyTypeNamesHasBeenSet = true; m_policyTypeNames.push_back(value); return *this; }

    /**
     * <p>The names of the policy types. If no names are specified, describes all
     * policy types defined by Elastic Load Balancing.</p>
     */
    inline DescribeLoadBalancerPolicyTypesRequest& AddPolicyTypeNames(Aws::String&& value) { m_policyTypeNamesHasBeenSet = true; m_policyTypeNames.push_back(value); return *this; }

    /**
     * <p>The names of the policy types. If no names are specified, describes all
     * policy types defined by Elastic Load Balancing.</p>
     */
    inline DescribeLoadBalancerPolicyTypesRequest& AddPolicyTypeNames(const char* value) { m_policyTypeNamesHasBeenSet = true; m_policyTypeNames.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_policyTypeNames;
    bool m_policyTypeNamesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
