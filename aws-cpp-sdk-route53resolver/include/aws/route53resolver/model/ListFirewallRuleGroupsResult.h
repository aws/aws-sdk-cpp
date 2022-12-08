/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/FirewallRuleGroupMetadata.h>
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
  class ListFirewallRuleGroupsResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListFirewallRuleGroupsResult();
    AWS_ROUTE53RESOLVER_API ListFirewallRuleGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListFirewallRuleGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline ListFirewallRuleGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline ListFirewallRuleGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline ListFirewallRuleGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of your firewall rule groups.</p> <p>This might be a partial list of
     * the rule groups that you have defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline const Aws::Vector<FirewallRuleGroupMetadata>& GetFirewallRuleGroups() const{ return m_firewallRuleGroups; }

    /**
     * <p>A list of your firewall rule groups.</p> <p>This might be a partial list of
     * the rule groups that you have defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline void SetFirewallRuleGroups(const Aws::Vector<FirewallRuleGroupMetadata>& value) { m_firewallRuleGroups = value; }

    /**
     * <p>A list of your firewall rule groups.</p> <p>This might be a partial list of
     * the rule groups that you have defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline void SetFirewallRuleGroups(Aws::Vector<FirewallRuleGroupMetadata>&& value) { m_firewallRuleGroups = std::move(value); }

    /**
     * <p>A list of your firewall rule groups.</p> <p>This might be a partial list of
     * the rule groups that you have defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline ListFirewallRuleGroupsResult& WithFirewallRuleGroups(const Aws::Vector<FirewallRuleGroupMetadata>& value) { SetFirewallRuleGroups(value); return *this;}

    /**
     * <p>A list of your firewall rule groups.</p> <p>This might be a partial list of
     * the rule groups that you have defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline ListFirewallRuleGroupsResult& WithFirewallRuleGroups(Aws::Vector<FirewallRuleGroupMetadata>&& value) { SetFirewallRuleGroups(std::move(value)); return *this;}

    /**
     * <p>A list of your firewall rule groups.</p> <p>This might be a partial list of
     * the rule groups that you have defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline ListFirewallRuleGroupsResult& AddFirewallRuleGroups(const FirewallRuleGroupMetadata& value) { m_firewallRuleGroups.push_back(value); return *this; }

    /**
     * <p>A list of your firewall rule groups.</p> <p>This might be a partial list of
     * the rule groups that you have defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline ListFirewallRuleGroupsResult& AddFirewallRuleGroups(FirewallRuleGroupMetadata&& value) { m_firewallRuleGroups.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<FirewallRuleGroupMetadata> m_firewallRuleGroups;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
