/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53Resolver
{
namespace Model
{
  class AWS_ROUTE53RESOLVER_API GetFirewallRuleGroupPolicyResult
  {
  public:
    GetFirewallRuleGroupPolicyResult();
    GetFirewallRuleGroupPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetFirewallRuleGroupPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The AWS Identity and Access Management (AWS IAM) policy for sharing the
     * specified rule group. You can use the policy to share the rule group using AWS
     * Resource Access Manager (RAM). </p>
     */
    inline const Aws::String& GetFirewallRuleGroupPolicy() const{ return m_firewallRuleGroupPolicy; }

    /**
     * <p>The AWS Identity and Access Management (AWS IAM) policy for sharing the
     * specified rule group. You can use the policy to share the rule group using AWS
     * Resource Access Manager (RAM). </p>
     */
    inline void SetFirewallRuleGroupPolicy(const Aws::String& value) { m_firewallRuleGroupPolicy = value; }

    /**
     * <p>The AWS Identity and Access Management (AWS IAM) policy for sharing the
     * specified rule group. You can use the policy to share the rule group using AWS
     * Resource Access Manager (RAM). </p>
     */
    inline void SetFirewallRuleGroupPolicy(Aws::String&& value) { m_firewallRuleGroupPolicy = std::move(value); }

    /**
     * <p>The AWS Identity and Access Management (AWS IAM) policy for sharing the
     * specified rule group. You can use the policy to share the rule group using AWS
     * Resource Access Manager (RAM). </p>
     */
    inline void SetFirewallRuleGroupPolicy(const char* value) { m_firewallRuleGroupPolicy.assign(value); }

    /**
     * <p>The AWS Identity and Access Management (AWS IAM) policy for sharing the
     * specified rule group. You can use the policy to share the rule group using AWS
     * Resource Access Manager (RAM). </p>
     */
    inline GetFirewallRuleGroupPolicyResult& WithFirewallRuleGroupPolicy(const Aws::String& value) { SetFirewallRuleGroupPolicy(value); return *this;}

    /**
     * <p>The AWS Identity and Access Management (AWS IAM) policy for sharing the
     * specified rule group. You can use the policy to share the rule group using AWS
     * Resource Access Manager (RAM). </p>
     */
    inline GetFirewallRuleGroupPolicyResult& WithFirewallRuleGroupPolicy(Aws::String&& value) { SetFirewallRuleGroupPolicy(std::move(value)); return *this;}

    /**
     * <p>The AWS Identity and Access Management (AWS IAM) policy for sharing the
     * specified rule group. You can use the policy to share the rule group using AWS
     * Resource Access Manager (RAM). </p>
     */
    inline GetFirewallRuleGroupPolicyResult& WithFirewallRuleGroupPolicy(const char* value) { SetFirewallRuleGroupPolicy(value); return *this;}

  private:

    Aws::String m_firewallRuleGroupPolicy;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
