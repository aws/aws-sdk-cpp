/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/FirewallPolicyMetadata.h>
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
namespace NetworkFirewall
{
namespace Model
{
  class ListFirewallPoliciesResult
  {
  public:
    AWS_NETWORKFIREWALL_API ListFirewallPoliciesResult();
    AWS_NETWORKFIREWALL_API ListFirewallPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API ListFirewallPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline ListFirewallPoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline ListFirewallPoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline ListFirewallPoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The metadata for the firewall policies. Depending on your setting for max
     * results and the number of firewall policies that you have, this might not be the
     * full list. </p>
     */
    inline const Aws::Vector<FirewallPolicyMetadata>& GetFirewallPolicies() const{ return m_firewallPolicies; }

    /**
     * <p>The metadata for the firewall policies. Depending on your setting for max
     * results and the number of firewall policies that you have, this might not be the
     * full list. </p>
     */
    inline void SetFirewallPolicies(const Aws::Vector<FirewallPolicyMetadata>& value) { m_firewallPolicies = value; }

    /**
     * <p>The metadata for the firewall policies. Depending on your setting for max
     * results and the number of firewall policies that you have, this might not be the
     * full list. </p>
     */
    inline void SetFirewallPolicies(Aws::Vector<FirewallPolicyMetadata>&& value) { m_firewallPolicies = std::move(value); }

    /**
     * <p>The metadata for the firewall policies. Depending on your setting for max
     * results and the number of firewall policies that you have, this might not be the
     * full list. </p>
     */
    inline ListFirewallPoliciesResult& WithFirewallPolicies(const Aws::Vector<FirewallPolicyMetadata>& value) { SetFirewallPolicies(value); return *this;}

    /**
     * <p>The metadata for the firewall policies. Depending on your setting for max
     * results and the number of firewall policies that you have, this might not be the
     * full list. </p>
     */
    inline ListFirewallPoliciesResult& WithFirewallPolicies(Aws::Vector<FirewallPolicyMetadata>&& value) { SetFirewallPolicies(std::move(value)); return *this;}

    /**
     * <p>The metadata for the firewall policies. Depending on your setting for max
     * results and the number of firewall policies that you have, this might not be the
     * full list. </p>
     */
    inline ListFirewallPoliciesResult& AddFirewallPolicies(const FirewallPolicyMetadata& value) { m_firewallPolicies.push_back(value); return *this; }

    /**
     * <p>The metadata for the firewall policies. Depending on your setting for max
     * results and the number of firewall policies that you have, this might not be the
     * full list. </p>
     */
    inline ListFirewallPoliciesResult& AddFirewallPolicies(FirewallPolicyMetadata&& value) { m_firewallPolicies.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<FirewallPolicyMetadata> m_firewallPolicies;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
