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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancing/model/PolicyAttribute.h>

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateLoadBalancerPolicy.</p>
   */
  class AWS_ELASTICLOADBALANCING_API CreateLoadBalancerPolicyRequest : public ElasticLoadBalancingRequest
  {
  public:
    CreateLoadBalancerPolicyRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline CreateLoadBalancerPolicyRequest& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline CreateLoadBalancerPolicyRequest& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline CreateLoadBalancerPolicyRequest& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer policy to be created. This name must be unique
     * within the set of policies for this load balancer.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the load balancer policy to be created. This name must be unique
     * within the set of policies for this load balancer.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the load balancer policy to be created. This name must be unique
     * within the set of policies for this load balancer.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the load balancer policy to be created. This name must be unique
     * within the set of policies for this load balancer.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the load balancer policy to be created. This name must be unique
     * within the set of policies for this load balancer.</p>
     */
    inline CreateLoadBalancerPolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the load balancer policy to be created. This name must be unique
     * within the set of policies for this load balancer.</p>
     */
    inline CreateLoadBalancerPolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the load balancer policy to be created. This name must be unique
     * within the set of policies for this load balancer.</p>
     */
    inline CreateLoadBalancerPolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the base policy type. To get the list of policy types, use
     * <a>DescribeLoadBalancerPolicyTypes</a>.</p>
     */
    inline const Aws::String& GetPolicyTypeName() const{ return m_policyTypeName; }

    /**
     * <p>The name of the base policy type. To get the list of policy types, use
     * <a>DescribeLoadBalancerPolicyTypes</a>.</p>
     */
    inline void SetPolicyTypeName(const Aws::String& value) { m_policyTypeNameHasBeenSet = true; m_policyTypeName = value; }

    /**
     * <p>The name of the base policy type. To get the list of policy types, use
     * <a>DescribeLoadBalancerPolicyTypes</a>.</p>
     */
    inline void SetPolicyTypeName(Aws::String&& value) { m_policyTypeNameHasBeenSet = true; m_policyTypeName = value; }

    /**
     * <p>The name of the base policy type. To get the list of policy types, use
     * <a>DescribeLoadBalancerPolicyTypes</a>.</p>
     */
    inline void SetPolicyTypeName(const char* value) { m_policyTypeNameHasBeenSet = true; m_policyTypeName.assign(value); }

    /**
     * <p>The name of the base policy type. To get the list of policy types, use
     * <a>DescribeLoadBalancerPolicyTypes</a>.</p>
     */
    inline CreateLoadBalancerPolicyRequest& WithPolicyTypeName(const Aws::String& value) { SetPolicyTypeName(value); return *this;}

    /**
     * <p>The name of the base policy type. To get the list of policy types, use
     * <a>DescribeLoadBalancerPolicyTypes</a>.</p>
     */
    inline CreateLoadBalancerPolicyRequest& WithPolicyTypeName(Aws::String&& value) { SetPolicyTypeName(value); return *this;}

    /**
     * <p>The name of the base policy type. To get the list of policy types, use
     * <a>DescribeLoadBalancerPolicyTypes</a>.</p>
     */
    inline CreateLoadBalancerPolicyRequest& WithPolicyTypeName(const char* value) { SetPolicyTypeName(value); return *this;}

    /**
     * <p>The policy attributes.</p>
     */
    inline const Aws::Vector<PolicyAttribute>& GetPolicyAttributes() const{ return m_policyAttributes; }

    /**
     * <p>The policy attributes.</p>
     */
    inline void SetPolicyAttributes(const Aws::Vector<PolicyAttribute>& value) { m_policyAttributesHasBeenSet = true; m_policyAttributes = value; }

    /**
     * <p>The policy attributes.</p>
     */
    inline void SetPolicyAttributes(Aws::Vector<PolicyAttribute>&& value) { m_policyAttributesHasBeenSet = true; m_policyAttributes = value; }

    /**
     * <p>The policy attributes.</p>
     */
    inline CreateLoadBalancerPolicyRequest& WithPolicyAttributes(const Aws::Vector<PolicyAttribute>& value) { SetPolicyAttributes(value); return *this;}

    /**
     * <p>The policy attributes.</p>
     */
    inline CreateLoadBalancerPolicyRequest& WithPolicyAttributes(Aws::Vector<PolicyAttribute>&& value) { SetPolicyAttributes(value); return *this;}

    /**
     * <p>The policy attributes.</p>
     */
    inline CreateLoadBalancerPolicyRequest& AddPolicyAttributes(const PolicyAttribute& value) { m_policyAttributesHasBeenSet = true; m_policyAttributes.push_back(value); return *this; }

    /**
     * <p>The policy attributes.</p>
     */
    inline CreateLoadBalancerPolicyRequest& AddPolicyAttributes(PolicyAttribute&& value) { m_policyAttributesHasBeenSet = true; m_policyAttributes.push_back(value); return *this; }

  private:
    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet;
    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;
    Aws::String m_policyTypeName;
    bool m_policyTypeNameHasBeenSet;
    Aws::Vector<PolicyAttribute> m_policyAttributes;
    bool m_policyAttributesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
