﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/FirewallRuleGroupAssociation.h>
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
  class AWS_ROUTE53RESOLVER_API GetFirewallRuleGroupAssociationResult
  {
  public:
    GetFirewallRuleGroupAssociationResult();
    GetFirewallRuleGroupAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetFirewallRuleGroupAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The association that you requested. </p>
     */
    inline const FirewallRuleGroupAssociation& GetFirewallRuleGroupAssociation() const{ return m_firewallRuleGroupAssociation; }

    /**
     * <p>The association that you requested. </p>
     */
    inline void SetFirewallRuleGroupAssociation(const FirewallRuleGroupAssociation& value) { m_firewallRuleGroupAssociation = value; }

    /**
     * <p>The association that you requested. </p>
     */
    inline void SetFirewallRuleGroupAssociation(FirewallRuleGroupAssociation&& value) { m_firewallRuleGroupAssociation = std::move(value); }

    /**
     * <p>The association that you requested. </p>
     */
    inline GetFirewallRuleGroupAssociationResult& WithFirewallRuleGroupAssociation(const FirewallRuleGroupAssociation& value) { SetFirewallRuleGroupAssociation(value); return *this;}

    /**
     * <p>The association that you requested. </p>
     */
    inline GetFirewallRuleGroupAssociationResult& WithFirewallRuleGroupAssociation(FirewallRuleGroupAssociation&& value) { SetFirewallRuleGroupAssociation(std::move(value)); return *this;}

  private:

    FirewallRuleGroupAssociation m_firewallRuleGroupAssociation;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
