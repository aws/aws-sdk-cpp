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

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateAppCookieStickinessPolicy.</p>
   */
  class AWS_ELASTICLOADBALANCING_API CreateAppCookieStickinessPolicyRequest : public ElasticLoadBalancingRequest
  {
  public:
    CreateAppCookieStickinessPolicyRequest();
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
    inline CreateAppCookieStickinessPolicyRequest& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline CreateAppCookieStickinessPolicyRequest& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline CreateAppCookieStickinessPolicyRequest& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the policy being created. Policy names must consist of
     * alphanumeric characters and dashes (-). This name must be unique within the set
     * of policies for this load balancer.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the policy being created. Policy names must consist of
     * alphanumeric characters and dashes (-). This name must be unique within the set
     * of policies for this load balancer.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the policy being created. Policy names must consist of
     * alphanumeric characters and dashes (-). This name must be unique within the set
     * of policies for this load balancer.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the policy being created. Policy names must consist of
     * alphanumeric characters and dashes (-). This name must be unique within the set
     * of policies for this load balancer.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the policy being created. Policy names must consist of
     * alphanumeric characters and dashes (-). This name must be unique within the set
     * of policies for this load balancer.</p>
     */
    inline CreateAppCookieStickinessPolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy being created. Policy names must consist of
     * alphanumeric characters and dashes (-). This name must be unique within the set
     * of policies for this load balancer.</p>
     */
    inline CreateAppCookieStickinessPolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy being created. Policy names must consist of
     * alphanumeric characters and dashes (-). This name must be unique within the set
     * of policies for this load balancer.</p>
     */
    inline CreateAppCookieStickinessPolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the application cookie used for stickiness.</p>
     */
    inline const Aws::String& GetCookieName() const{ return m_cookieName; }

    /**
     * <p>The name of the application cookie used for stickiness.</p>
     */
    inline void SetCookieName(const Aws::String& value) { m_cookieNameHasBeenSet = true; m_cookieName = value; }

    /**
     * <p>The name of the application cookie used for stickiness.</p>
     */
    inline void SetCookieName(Aws::String&& value) { m_cookieNameHasBeenSet = true; m_cookieName = value; }

    /**
     * <p>The name of the application cookie used for stickiness.</p>
     */
    inline void SetCookieName(const char* value) { m_cookieNameHasBeenSet = true; m_cookieName.assign(value); }

    /**
     * <p>The name of the application cookie used for stickiness.</p>
     */
    inline CreateAppCookieStickinessPolicyRequest& WithCookieName(const Aws::String& value) { SetCookieName(value); return *this;}

    /**
     * <p>The name of the application cookie used for stickiness.</p>
     */
    inline CreateAppCookieStickinessPolicyRequest& WithCookieName(Aws::String&& value) { SetCookieName(value); return *this;}

    /**
     * <p>The name of the application cookie used for stickiness.</p>
     */
    inline CreateAppCookieStickinessPolicyRequest& WithCookieName(const char* value) { SetCookieName(value); return *this;}

  private:
    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet;
    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;
    Aws::String m_cookieName;
    bool m_cookieNameHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
