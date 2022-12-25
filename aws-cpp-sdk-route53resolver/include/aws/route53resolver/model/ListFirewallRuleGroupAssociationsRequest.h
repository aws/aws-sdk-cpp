/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/FirewallRuleGroupAssociationStatus.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class ListFirewallRuleGroupAssociationsRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API ListFirewallRuleGroupAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFirewallRuleGroupAssociations"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier of the firewall rule group that you want to retrieve
     * the associations for. Leave this blank to retrieve associations for any rule
     * group. </p>
     */
    inline const Aws::String& GetFirewallRuleGroupId() const{ return m_firewallRuleGroupId; }

    /**
     * <p>The unique identifier of the firewall rule group that you want to retrieve
     * the associations for. Leave this blank to retrieve associations for any rule
     * group. </p>
     */
    inline bool FirewallRuleGroupIdHasBeenSet() const { return m_firewallRuleGroupIdHasBeenSet; }

    /**
     * <p>The unique identifier of the firewall rule group that you want to retrieve
     * the associations for. Leave this blank to retrieve associations for any rule
     * group. </p>
     */
    inline void SetFirewallRuleGroupId(const Aws::String& value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId = value; }

    /**
     * <p>The unique identifier of the firewall rule group that you want to retrieve
     * the associations for. Leave this blank to retrieve associations for any rule
     * group. </p>
     */
    inline void SetFirewallRuleGroupId(Aws::String&& value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId = std::move(value); }

    /**
     * <p>The unique identifier of the firewall rule group that you want to retrieve
     * the associations for. Leave this blank to retrieve associations for any rule
     * group. </p>
     */
    inline void SetFirewallRuleGroupId(const char* value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId.assign(value); }

    /**
     * <p>The unique identifier of the firewall rule group that you want to retrieve
     * the associations for. Leave this blank to retrieve associations for any rule
     * group. </p>
     */
    inline ListFirewallRuleGroupAssociationsRequest& WithFirewallRuleGroupId(const Aws::String& value) { SetFirewallRuleGroupId(value); return *this;}

    /**
     * <p>The unique identifier of the firewall rule group that you want to retrieve
     * the associations for. Leave this blank to retrieve associations for any rule
     * group. </p>
     */
    inline ListFirewallRuleGroupAssociationsRequest& WithFirewallRuleGroupId(Aws::String&& value) { SetFirewallRuleGroupId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the firewall rule group that you want to retrieve
     * the associations for. Leave this blank to retrieve associations for any rule
     * group. </p>
     */
    inline ListFirewallRuleGroupAssociationsRequest& WithFirewallRuleGroupId(const char* value) { SetFirewallRuleGroupId(value); return *this;}


    /**
     * <p>The unique identifier of the VPC that you want to retrieve the associations
     * for. Leave this blank to retrieve associations for any VPC. </p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The unique identifier of the VPC that you want to retrieve the associations
     * for. Leave this blank to retrieve associations for any VPC. </p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The unique identifier of the VPC that you want to retrieve the associations
     * for. Leave this blank to retrieve associations for any VPC. </p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The unique identifier of the VPC that you want to retrieve the associations
     * for. Leave this blank to retrieve associations for any VPC. </p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The unique identifier of the VPC that you want to retrieve the associations
     * for. Leave this blank to retrieve associations for any VPC. </p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The unique identifier of the VPC that you want to retrieve the associations
     * for. Leave this blank to retrieve associations for any VPC. </p>
     */
    inline ListFirewallRuleGroupAssociationsRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The unique identifier of the VPC that you want to retrieve the associations
     * for. Leave this blank to retrieve associations for any VPC. </p>
     */
    inline ListFirewallRuleGroupAssociationsRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the VPC that you want to retrieve the associations
     * for. Leave this blank to retrieve associations for any VPC. </p>
     */
    inline ListFirewallRuleGroupAssociationsRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The setting that determines the processing order of the rule group among the
     * rule groups that are associated with a single VPC. DNS Firewall filters VPC
     * traffic starting from the rule group with the lowest numeric priority setting.
     * </p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The setting that determines the processing order of the rule group among the
     * rule groups that are associated with a single VPC. DNS Firewall filters VPC
     * traffic starting from the rule group with the lowest numeric priority setting.
     * </p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The setting that determines the processing order of the rule group among the
     * rule groups that are associated with a single VPC. DNS Firewall filters VPC
     * traffic starting from the rule group with the lowest numeric priority setting.
     * </p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The setting that determines the processing order of the rule group among the
     * rule groups that are associated with a single VPC. DNS Firewall filters VPC
     * traffic starting from the rule group with the lowest numeric priority setting.
     * </p>
     */
    inline ListFirewallRuleGroupAssociationsRequest& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The association <code>Status</code> setting that you want DNS Firewall to
     * filter on for the list. If you don't specify this, then DNS Firewall returns all
     * associations, regardless of status.</p>
     */
    inline const FirewallRuleGroupAssociationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The association <code>Status</code> setting that you want DNS Firewall to
     * filter on for the list. If you don't specify this, then DNS Firewall returns all
     * associations, regardless of status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The association <code>Status</code> setting that you want DNS Firewall to
     * filter on for the list. If you don't specify this, then DNS Firewall returns all
     * associations, regardless of status.</p>
     */
    inline void SetStatus(const FirewallRuleGroupAssociationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The association <code>Status</code> setting that you want DNS Firewall to
     * filter on for the list. If you don't specify this, then DNS Firewall returns all
     * associations, regardless of status.</p>
     */
    inline void SetStatus(FirewallRuleGroupAssociationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The association <code>Status</code> setting that you want DNS Firewall to
     * filter on for the list. If you don't specify this, then DNS Firewall returns all
     * associations, regardless of status.</p>
     */
    inline ListFirewallRuleGroupAssociationsRequest& WithStatus(const FirewallRuleGroupAssociationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The association <code>Status</code> setting that you want DNS Firewall to
     * filter on for the list. If you don't specify this, then DNS Firewall returns all
     * associations, regardless of status.</p>
     */
    inline ListFirewallRuleGroupAssociationsRequest& WithStatus(FirewallRuleGroupAssociationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The maximum number of objects that you want Resolver to return for this
     * request. If more objects are available, in the response, Resolver provides a
     * <code>NextToken</code> value that you can use in a subsequent call to get the
     * next batch of objects.</p> <p>If you don't specify a value for
     * <code>MaxResults</code>, Resolver returns up to 100 objects. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of objects that you want Resolver to return for this
     * request. If more objects are available, in the response, Resolver provides a
     * <code>NextToken</code> value that you can use in a subsequent call to get the
     * next batch of objects.</p> <p>If you don't specify a value for
     * <code>MaxResults</code>, Resolver returns up to 100 objects. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of objects that you want Resolver to return for this
     * request. If more objects are available, in the response, Resolver provides a
     * <code>NextToken</code> value that you can use in a subsequent call to get the
     * next batch of objects.</p> <p>If you don't specify a value for
     * <code>MaxResults</code>, Resolver returns up to 100 objects. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of objects that you want Resolver to return for this
     * request. If more objects are available, in the response, Resolver provides a
     * <code>NextToken</code> value that you can use in a subsequent call to get the
     * next batch of objects.</p> <p>If you don't specify a value for
     * <code>MaxResults</code>, Resolver returns up to 100 objects. </p>
     */
    inline ListFirewallRuleGroupAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>For the first call to this list request, omit this value.</p> <p>When you
     * request a list of objects, Resolver returns at most the number of objects
     * specified in <code>MaxResults</code>. If more objects are available for
     * retrieval, Resolver returns a <code>NextToken</code> value in the response. To
     * retrieve the next batch of objects, use the token that was returned for the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>For the first call to this list request, omit this value.</p> <p>When you
     * request a list of objects, Resolver returns at most the number of objects
     * specified in <code>MaxResults</code>. If more objects are available for
     * retrieval, Resolver returns a <code>NextToken</code> value in the response. To
     * retrieve the next batch of objects, use the token that was returned for the
     * prior request in your next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>For the first call to this list request, omit this value.</p> <p>When you
     * request a list of objects, Resolver returns at most the number of objects
     * specified in <code>MaxResults</code>. If more objects are available for
     * retrieval, Resolver returns a <code>NextToken</code> value in the response. To
     * retrieve the next batch of objects, use the token that was returned for the
     * prior request in your next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>For the first call to this list request, omit this value.</p> <p>When you
     * request a list of objects, Resolver returns at most the number of objects
     * specified in <code>MaxResults</code>. If more objects are available for
     * retrieval, Resolver returns a <code>NextToken</code> value in the response. To
     * retrieve the next batch of objects, use the token that was returned for the
     * prior request in your next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>For the first call to this list request, omit this value.</p> <p>When you
     * request a list of objects, Resolver returns at most the number of objects
     * specified in <code>MaxResults</code>. If more objects are available for
     * retrieval, Resolver returns a <code>NextToken</code> value in the response. To
     * retrieve the next batch of objects, use the token that was returned for the
     * prior request in your next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>For the first call to this list request, omit this value.</p> <p>When you
     * request a list of objects, Resolver returns at most the number of objects
     * specified in <code>MaxResults</code>. If more objects are available for
     * retrieval, Resolver returns a <code>NextToken</code> value in the response. To
     * retrieve the next batch of objects, use the token that was returned for the
     * prior request in your next request.</p>
     */
    inline ListFirewallRuleGroupAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>For the first call to this list request, omit this value.</p> <p>When you
     * request a list of objects, Resolver returns at most the number of objects
     * specified in <code>MaxResults</code>. If more objects are available for
     * retrieval, Resolver returns a <code>NextToken</code> value in the response. To
     * retrieve the next batch of objects, use the token that was returned for the
     * prior request in your next request.</p>
     */
    inline ListFirewallRuleGroupAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>For the first call to this list request, omit this value.</p> <p>When you
     * request a list of objects, Resolver returns at most the number of objects
     * specified in <code>MaxResults</code>. If more objects are available for
     * retrieval, Resolver returns a <code>NextToken</code> value in the response. To
     * retrieve the next batch of objects, use the token that was returned for the
     * prior request in your next request.</p>
     */
    inline ListFirewallRuleGroupAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_firewallRuleGroupId;
    bool m_firewallRuleGroupIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    FirewallRuleGroupAssociationStatus m_status;
    bool m_statusHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
