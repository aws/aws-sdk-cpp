﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/ResourceManagedStatus.h>
#include <utility>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

  /**
   */
  class AWS_NETWORKFIREWALL_API ListRuleGroupsRequest : public NetworkFirewallRequest
  {
  public:
    ListRuleGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRuleGroups"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline ListRuleGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline ListRuleGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline ListRuleGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of objects that you want Network Firewall to return for
     * this request. If more objects are available, in the response, Network Firewall
     * provides a <code>NextToken</code> value that you can use in a subsequent call to
     * get the next batch of objects.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of objects that you want Network Firewall to return for
     * this request. If more objects are available, in the response, Network Firewall
     * provides a <code>NextToken</code> value that you can use in a subsequent call to
     * get the next batch of objects.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of objects that you want Network Firewall to return for
     * this request. If more objects are available, in the response, Network Firewall
     * provides a <code>NextToken</code> value that you can use in a subsequent call to
     * get the next batch of objects.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of objects that you want Network Firewall to return for
     * this request. If more objects are available, in the response, Network Firewall
     * provides a <code>NextToken</code> value that you can use in a subsequent call to
     * get the next batch of objects.</p>
     */
    inline ListRuleGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The scope of the request. The default setting of <code>ACCOUNT</code> or a
     * setting of <code>NULL</code> returns all of the rule groups in your account. A
     * setting of <code>MANAGED</code> returns all available managed rule groups.</p>
     */
    inline const ResourceManagedStatus& GetScope() const{ return m_scope; }

    /**
     * <p>The scope of the request. The default setting of <code>ACCOUNT</code> or a
     * setting of <code>NULL</code> returns all of the rule groups in your account. A
     * setting of <code>MANAGED</code> returns all available managed rule groups.</p>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>The scope of the request. The default setting of <code>ACCOUNT</code> or a
     * setting of <code>NULL</code> returns all of the rule groups in your account. A
     * setting of <code>MANAGED</code> returns all available managed rule groups.</p>
     */
    inline void SetScope(const ResourceManagedStatus& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>The scope of the request. The default setting of <code>ACCOUNT</code> or a
     * setting of <code>NULL</code> returns all of the rule groups in your account. A
     * setting of <code>MANAGED</code> returns all available managed rule groups.</p>
     */
    inline void SetScope(ResourceManagedStatus&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>The scope of the request. The default setting of <code>ACCOUNT</code> or a
     * setting of <code>NULL</code> returns all of the rule groups in your account. A
     * setting of <code>MANAGED</code> returns all available managed rule groups.</p>
     */
    inline ListRuleGroupsRequest& WithScope(const ResourceManagedStatus& value) { SetScope(value); return *this;}

    /**
     * <p>The scope of the request. The default setting of <code>ACCOUNT</code> or a
     * setting of <code>NULL</code> returns all of the rule groups in your account. A
     * setting of <code>MANAGED</code> returns all available managed rule groups.</p>
     */
    inline ListRuleGroupsRequest& WithScope(ResourceManagedStatus&& value) { SetScope(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    ResourceManagedStatus m_scope;
    bool m_scopeHasBeenSet;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
