/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/Action.h>
#include <aws/route53resolver/model/BlockResponse.h>
#include <aws/route53resolver/model/BlockOverrideDnsType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class CreateFirewallRuleRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API CreateFirewallRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFirewallRule"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique string that identifies the request and that allows you to retry
     * failed requests without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string that identifies the request and that allows you to retry
     * failed requests without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>A unique string that identifies the request and that allows you to retry
     * failed requests without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>A unique string that identifies the request and that allows you to retry
     * failed requests without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string that identifies the request and that allows you to retry
     * failed requests without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string that identifies the request and that allows you to retry
     * failed requests without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline CreateFirewallRuleRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows you to retry
     * failed requests without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline CreateFirewallRuleRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows you to retry
     * failed requests without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline CreateFirewallRuleRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>The unique identifier of the firewall rule group where you want to create the
     * rule. </p>
     */
    inline const Aws::String& GetFirewallRuleGroupId() const{ return m_firewallRuleGroupId; }

    /**
     * <p>The unique identifier of the firewall rule group where you want to create the
     * rule. </p>
     */
    inline bool FirewallRuleGroupIdHasBeenSet() const { return m_firewallRuleGroupIdHasBeenSet; }

    /**
     * <p>The unique identifier of the firewall rule group where you want to create the
     * rule. </p>
     */
    inline void SetFirewallRuleGroupId(const Aws::String& value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId = value; }

    /**
     * <p>The unique identifier of the firewall rule group where you want to create the
     * rule. </p>
     */
    inline void SetFirewallRuleGroupId(Aws::String&& value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId = std::move(value); }

    /**
     * <p>The unique identifier of the firewall rule group where you want to create the
     * rule. </p>
     */
    inline void SetFirewallRuleGroupId(const char* value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId.assign(value); }

    /**
     * <p>The unique identifier of the firewall rule group where you want to create the
     * rule. </p>
     */
    inline CreateFirewallRuleRequest& WithFirewallRuleGroupId(const Aws::String& value) { SetFirewallRuleGroupId(value); return *this;}

    /**
     * <p>The unique identifier of the firewall rule group where you want to create the
     * rule. </p>
     */
    inline CreateFirewallRuleRequest& WithFirewallRuleGroupId(Aws::String&& value) { SetFirewallRuleGroupId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the firewall rule group where you want to create the
     * rule. </p>
     */
    inline CreateFirewallRuleRequest& WithFirewallRuleGroupId(const char* value) { SetFirewallRuleGroupId(value); return *this;}


    /**
     * <p>The ID of the domain list that you want to use in the rule. </p>
     */
    inline const Aws::String& GetFirewallDomainListId() const{ return m_firewallDomainListId; }

    /**
     * <p>The ID of the domain list that you want to use in the rule. </p>
     */
    inline bool FirewallDomainListIdHasBeenSet() const { return m_firewallDomainListIdHasBeenSet; }

    /**
     * <p>The ID of the domain list that you want to use in the rule. </p>
     */
    inline void SetFirewallDomainListId(const Aws::String& value) { m_firewallDomainListIdHasBeenSet = true; m_firewallDomainListId = value; }

    /**
     * <p>The ID of the domain list that you want to use in the rule. </p>
     */
    inline void SetFirewallDomainListId(Aws::String&& value) { m_firewallDomainListIdHasBeenSet = true; m_firewallDomainListId = std::move(value); }

    /**
     * <p>The ID of the domain list that you want to use in the rule. </p>
     */
    inline void SetFirewallDomainListId(const char* value) { m_firewallDomainListIdHasBeenSet = true; m_firewallDomainListId.assign(value); }

    /**
     * <p>The ID of the domain list that you want to use in the rule. </p>
     */
    inline CreateFirewallRuleRequest& WithFirewallDomainListId(const Aws::String& value) { SetFirewallDomainListId(value); return *this;}

    /**
     * <p>The ID of the domain list that you want to use in the rule. </p>
     */
    inline CreateFirewallRuleRequest& WithFirewallDomainListId(Aws::String&& value) { SetFirewallDomainListId(std::move(value)); return *this;}

    /**
     * <p>The ID of the domain list that you want to use in the rule. </p>
     */
    inline CreateFirewallRuleRequest& WithFirewallDomainListId(const char* value) { SetFirewallDomainListId(value); return *this;}


    /**
     * <p>The setting that determines the processing order of the rule in the rule
     * group. DNS Firewall processes the rules in a rule group by order of priority,
     * starting from the lowest setting.</p> <p>You must specify a unique priority for
     * each rule in a rule group. To make it easier to insert rules later, leave space
     * between the numbers, for example, use 100, 200, and so on. You can change the
     * priority setting for the rules in a rule group at any time.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The setting that determines the processing order of the rule in the rule
     * group. DNS Firewall processes the rules in a rule group by order of priority,
     * starting from the lowest setting.</p> <p>You must specify a unique priority for
     * each rule in a rule group. To make it easier to insert rules later, leave space
     * between the numbers, for example, use 100, 200, and so on. You can change the
     * priority setting for the rules in a rule group at any time.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The setting that determines the processing order of the rule in the rule
     * group. DNS Firewall processes the rules in a rule group by order of priority,
     * starting from the lowest setting.</p> <p>You must specify a unique priority for
     * each rule in a rule group. To make it easier to insert rules later, leave space
     * between the numbers, for example, use 100, 200, and so on. You can change the
     * priority setting for the rules in a rule group at any time.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The setting that determines the processing order of the rule in the rule
     * group. DNS Firewall processes the rules in a rule group by order of priority,
     * starting from the lowest setting.</p> <p>You must specify a unique priority for
     * each rule in a rule group. To make it easier to insert rules later, leave space
     * between the numbers, for example, use 100, 200, and so on. You can change the
     * priority setting for the rules in a rule group at any time.</p>
     */
    inline CreateFirewallRuleRequest& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The action that DNS Firewall should take on a DNS query when it matches one
     * of the domains in the rule's domain list:</p> <ul> <li> <p> <code>ALLOW</code> -
     * Permit the request to go through.</p> </li> <li> <p> <code>ALERT</code> - Permit
     * the request and send metrics and logs to Cloud Watch.</p> </li> <li> <p>
     * <code>BLOCK</code> - Disallow the request. This option requires additional
     * details in the rule's <code>BlockResponse</code>. </p> </li> </ul>
     */
    inline const Action& GetAction() const{ return m_action; }

    /**
     * <p>The action that DNS Firewall should take on a DNS query when it matches one
     * of the domains in the rule's domain list:</p> <ul> <li> <p> <code>ALLOW</code> -
     * Permit the request to go through.</p> </li> <li> <p> <code>ALERT</code> - Permit
     * the request and send metrics and logs to Cloud Watch.</p> </li> <li> <p>
     * <code>BLOCK</code> - Disallow the request. This option requires additional
     * details in the rule's <code>BlockResponse</code>. </p> </li> </ul>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action that DNS Firewall should take on a DNS query when it matches one
     * of the domains in the rule's domain list:</p> <ul> <li> <p> <code>ALLOW</code> -
     * Permit the request to go through.</p> </li> <li> <p> <code>ALERT</code> - Permit
     * the request and send metrics and logs to Cloud Watch.</p> </li> <li> <p>
     * <code>BLOCK</code> - Disallow the request. This option requires additional
     * details in the rule's <code>BlockResponse</code>. </p> </li> </ul>
     */
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action that DNS Firewall should take on a DNS query when it matches one
     * of the domains in the rule's domain list:</p> <ul> <li> <p> <code>ALLOW</code> -
     * Permit the request to go through.</p> </li> <li> <p> <code>ALERT</code> - Permit
     * the request and send metrics and logs to Cloud Watch.</p> </li> <li> <p>
     * <code>BLOCK</code> - Disallow the request. This option requires additional
     * details in the rule's <code>BlockResponse</code>. </p> </li> </ul>
     */
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action that DNS Firewall should take on a DNS query when it matches one
     * of the domains in the rule's domain list:</p> <ul> <li> <p> <code>ALLOW</code> -
     * Permit the request to go through.</p> </li> <li> <p> <code>ALERT</code> - Permit
     * the request and send metrics and logs to Cloud Watch.</p> </li> <li> <p>
     * <code>BLOCK</code> - Disallow the request. This option requires additional
     * details in the rule's <code>BlockResponse</code>. </p> </li> </ul>
     */
    inline CreateFirewallRuleRequest& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * <p>The action that DNS Firewall should take on a DNS query when it matches one
     * of the domains in the rule's domain list:</p> <ul> <li> <p> <code>ALLOW</code> -
     * Permit the request to go through.</p> </li> <li> <p> <code>ALERT</code> - Permit
     * the request and send metrics and logs to Cloud Watch.</p> </li> <li> <p>
     * <code>BLOCK</code> - Disallow the request. This option requires additional
     * details in the rule's <code>BlockResponse</code>. </p> </li> </ul>
     */
    inline CreateFirewallRuleRequest& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The way that you want DNS Firewall to block the request, used with the rule
     * action setting <code>BLOCK</code>. </p> <ul> <li> <p> <code>NODATA</code> -
     * Respond indicating that the query was successful, but no response is available
     * for it.</p> </li> <li> <p> <code>NXDOMAIN</code> - Respond indicating that the
     * domain name that's in the query doesn't exist.</p> </li> <li> <p>
     * <code>OVERRIDE</code> - Provide a custom override in the response. This option
     * requires custom handling details in the rule's <code>BlockOverride*</code>
     * settings. </p> </li> </ul> <p>This setting is required if the rule action
     * setting is <code>BLOCK</code>.</p>
     */
    inline const BlockResponse& GetBlockResponse() const{ return m_blockResponse; }

    /**
     * <p>The way that you want DNS Firewall to block the request, used with the rule
     * action setting <code>BLOCK</code>. </p> <ul> <li> <p> <code>NODATA</code> -
     * Respond indicating that the query was successful, but no response is available
     * for it.</p> </li> <li> <p> <code>NXDOMAIN</code> - Respond indicating that the
     * domain name that's in the query doesn't exist.</p> </li> <li> <p>
     * <code>OVERRIDE</code> - Provide a custom override in the response. This option
     * requires custom handling details in the rule's <code>BlockOverride*</code>
     * settings. </p> </li> </ul> <p>This setting is required if the rule action
     * setting is <code>BLOCK</code>.</p>
     */
    inline bool BlockResponseHasBeenSet() const { return m_blockResponseHasBeenSet; }

    /**
     * <p>The way that you want DNS Firewall to block the request, used with the rule
     * action setting <code>BLOCK</code>. </p> <ul> <li> <p> <code>NODATA</code> -
     * Respond indicating that the query was successful, but no response is available
     * for it.</p> </li> <li> <p> <code>NXDOMAIN</code> - Respond indicating that the
     * domain name that's in the query doesn't exist.</p> </li> <li> <p>
     * <code>OVERRIDE</code> - Provide a custom override in the response. This option
     * requires custom handling details in the rule's <code>BlockOverride*</code>
     * settings. </p> </li> </ul> <p>This setting is required if the rule action
     * setting is <code>BLOCK</code>.</p>
     */
    inline void SetBlockResponse(const BlockResponse& value) { m_blockResponseHasBeenSet = true; m_blockResponse = value; }

    /**
     * <p>The way that you want DNS Firewall to block the request, used with the rule
     * action setting <code>BLOCK</code>. </p> <ul> <li> <p> <code>NODATA</code> -
     * Respond indicating that the query was successful, but no response is available
     * for it.</p> </li> <li> <p> <code>NXDOMAIN</code> - Respond indicating that the
     * domain name that's in the query doesn't exist.</p> </li> <li> <p>
     * <code>OVERRIDE</code> - Provide a custom override in the response. This option
     * requires custom handling details in the rule's <code>BlockOverride*</code>
     * settings. </p> </li> </ul> <p>This setting is required if the rule action
     * setting is <code>BLOCK</code>.</p>
     */
    inline void SetBlockResponse(BlockResponse&& value) { m_blockResponseHasBeenSet = true; m_blockResponse = std::move(value); }

    /**
     * <p>The way that you want DNS Firewall to block the request, used with the rule
     * action setting <code>BLOCK</code>. </p> <ul> <li> <p> <code>NODATA</code> -
     * Respond indicating that the query was successful, but no response is available
     * for it.</p> </li> <li> <p> <code>NXDOMAIN</code> - Respond indicating that the
     * domain name that's in the query doesn't exist.</p> </li> <li> <p>
     * <code>OVERRIDE</code> - Provide a custom override in the response. This option
     * requires custom handling details in the rule's <code>BlockOverride*</code>
     * settings. </p> </li> </ul> <p>This setting is required if the rule action
     * setting is <code>BLOCK</code>.</p>
     */
    inline CreateFirewallRuleRequest& WithBlockResponse(const BlockResponse& value) { SetBlockResponse(value); return *this;}

    /**
     * <p>The way that you want DNS Firewall to block the request, used with the rule
     * action setting <code>BLOCK</code>. </p> <ul> <li> <p> <code>NODATA</code> -
     * Respond indicating that the query was successful, but no response is available
     * for it.</p> </li> <li> <p> <code>NXDOMAIN</code> - Respond indicating that the
     * domain name that's in the query doesn't exist.</p> </li> <li> <p>
     * <code>OVERRIDE</code> - Provide a custom override in the response. This option
     * requires custom handling details in the rule's <code>BlockOverride*</code>
     * settings. </p> </li> </ul> <p>This setting is required if the rule action
     * setting is <code>BLOCK</code>.</p>
     */
    inline CreateFirewallRuleRequest& WithBlockResponse(BlockResponse&& value) { SetBlockResponse(std::move(value)); return *this;}


    /**
     * <p>The custom DNS record to send back in response to the query. Used for the
     * rule action <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p> <p>This setting is required if the
     * <code>BlockResponse</code> setting is <code>OVERRIDE</code>.</p>
     */
    inline const Aws::String& GetBlockOverrideDomain() const{ return m_blockOverrideDomain; }

    /**
     * <p>The custom DNS record to send back in response to the query. Used for the
     * rule action <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p> <p>This setting is required if the
     * <code>BlockResponse</code> setting is <code>OVERRIDE</code>.</p>
     */
    inline bool BlockOverrideDomainHasBeenSet() const { return m_blockOverrideDomainHasBeenSet; }

    /**
     * <p>The custom DNS record to send back in response to the query. Used for the
     * rule action <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p> <p>This setting is required if the
     * <code>BlockResponse</code> setting is <code>OVERRIDE</code>.</p>
     */
    inline void SetBlockOverrideDomain(const Aws::String& value) { m_blockOverrideDomainHasBeenSet = true; m_blockOverrideDomain = value; }

    /**
     * <p>The custom DNS record to send back in response to the query. Used for the
     * rule action <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p> <p>This setting is required if the
     * <code>BlockResponse</code> setting is <code>OVERRIDE</code>.</p>
     */
    inline void SetBlockOverrideDomain(Aws::String&& value) { m_blockOverrideDomainHasBeenSet = true; m_blockOverrideDomain = std::move(value); }

    /**
     * <p>The custom DNS record to send back in response to the query. Used for the
     * rule action <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p> <p>This setting is required if the
     * <code>BlockResponse</code> setting is <code>OVERRIDE</code>.</p>
     */
    inline void SetBlockOverrideDomain(const char* value) { m_blockOverrideDomainHasBeenSet = true; m_blockOverrideDomain.assign(value); }

    /**
     * <p>The custom DNS record to send back in response to the query. Used for the
     * rule action <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p> <p>This setting is required if the
     * <code>BlockResponse</code> setting is <code>OVERRIDE</code>.</p>
     */
    inline CreateFirewallRuleRequest& WithBlockOverrideDomain(const Aws::String& value) { SetBlockOverrideDomain(value); return *this;}

    /**
     * <p>The custom DNS record to send back in response to the query. Used for the
     * rule action <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p> <p>This setting is required if the
     * <code>BlockResponse</code> setting is <code>OVERRIDE</code>.</p>
     */
    inline CreateFirewallRuleRequest& WithBlockOverrideDomain(Aws::String&& value) { SetBlockOverrideDomain(std::move(value)); return *this;}

    /**
     * <p>The custom DNS record to send back in response to the query. Used for the
     * rule action <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p> <p>This setting is required if the
     * <code>BlockResponse</code> setting is <code>OVERRIDE</code>.</p>
     */
    inline CreateFirewallRuleRequest& WithBlockOverrideDomain(const char* value) { SetBlockOverrideDomain(value); return *this;}


    /**
     * <p>The DNS record's type. This determines the format of the record value that
     * you provided in <code>BlockOverrideDomain</code>. Used for the rule action
     * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p> <p>This setting is required if the
     * <code>BlockResponse</code> setting is <code>OVERRIDE</code>.</p>
     */
    inline const BlockOverrideDnsType& GetBlockOverrideDnsType() const{ return m_blockOverrideDnsType; }

    /**
     * <p>The DNS record's type. This determines the format of the record value that
     * you provided in <code>BlockOverrideDomain</code>. Used for the rule action
     * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p> <p>This setting is required if the
     * <code>BlockResponse</code> setting is <code>OVERRIDE</code>.</p>
     */
    inline bool BlockOverrideDnsTypeHasBeenSet() const { return m_blockOverrideDnsTypeHasBeenSet; }

    /**
     * <p>The DNS record's type. This determines the format of the record value that
     * you provided in <code>BlockOverrideDomain</code>. Used for the rule action
     * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p> <p>This setting is required if the
     * <code>BlockResponse</code> setting is <code>OVERRIDE</code>.</p>
     */
    inline void SetBlockOverrideDnsType(const BlockOverrideDnsType& value) { m_blockOverrideDnsTypeHasBeenSet = true; m_blockOverrideDnsType = value; }

    /**
     * <p>The DNS record's type. This determines the format of the record value that
     * you provided in <code>BlockOverrideDomain</code>. Used for the rule action
     * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p> <p>This setting is required if the
     * <code>BlockResponse</code> setting is <code>OVERRIDE</code>.</p>
     */
    inline void SetBlockOverrideDnsType(BlockOverrideDnsType&& value) { m_blockOverrideDnsTypeHasBeenSet = true; m_blockOverrideDnsType = std::move(value); }

    /**
     * <p>The DNS record's type. This determines the format of the record value that
     * you provided in <code>BlockOverrideDomain</code>. Used for the rule action
     * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p> <p>This setting is required if the
     * <code>BlockResponse</code> setting is <code>OVERRIDE</code>.</p>
     */
    inline CreateFirewallRuleRequest& WithBlockOverrideDnsType(const BlockOverrideDnsType& value) { SetBlockOverrideDnsType(value); return *this;}

    /**
     * <p>The DNS record's type. This determines the format of the record value that
     * you provided in <code>BlockOverrideDomain</code>. Used for the rule action
     * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p> <p>This setting is required if the
     * <code>BlockResponse</code> setting is <code>OVERRIDE</code>.</p>
     */
    inline CreateFirewallRuleRequest& WithBlockOverrideDnsType(BlockOverrideDnsType&& value) { SetBlockOverrideDnsType(std::move(value)); return *this;}


    /**
     * <p>The recommended amount of time, in seconds, for the DNS resolver or web
     * browser to cache the provided override record. Used for the rule action
     * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p> <p>This setting is required if the
     * <code>BlockResponse</code> setting is <code>OVERRIDE</code>.</p>
     */
    inline int GetBlockOverrideTtl() const{ return m_blockOverrideTtl; }

    /**
     * <p>The recommended amount of time, in seconds, for the DNS resolver or web
     * browser to cache the provided override record. Used for the rule action
     * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p> <p>This setting is required if the
     * <code>BlockResponse</code> setting is <code>OVERRIDE</code>.</p>
     */
    inline bool BlockOverrideTtlHasBeenSet() const { return m_blockOverrideTtlHasBeenSet; }

    /**
     * <p>The recommended amount of time, in seconds, for the DNS resolver or web
     * browser to cache the provided override record. Used for the rule action
     * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p> <p>This setting is required if the
     * <code>BlockResponse</code> setting is <code>OVERRIDE</code>.</p>
     */
    inline void SetBlockOverrideTtl(int value) { m_blockOverrideTtlHasBeenSet = true; m_blockOverrideTtl = value; }

    /**
     * <p>The recommended amount of time, in seconds, for the DNS resolver or web
     * browser to cache the provided override record. Used for the rule action
     * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p> <p>This setting is required if the
     * <code>BlockResponse</code> setting is <code>OVERRIDE</code>.</p>
     */
    inline CreateFirewallRuleRequest& WithBlockOverrideTtl(int value) { SetBlockOverrideTtl(value); return *this;}


    /**
     * <p>A name that lets you identify the rule in the rule group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name that lets you identify the rule in the rule group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name that lets you identify the rule in the rule group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name that lets you identify the rule in the rule group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name that lets you identify the rule in the rule group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name that lets you identify the rule in the rule group.</p>
     */
    inline CreateFirewallRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name that lets you identify the rule in the rule group.</p>
     */
    inline CreateFirewallRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name that lets you identify the rule in the rule group.</p>
     */
    inline CreateFirewallRuleRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_firewallRuleGroupId;
    bool m_firewallRuleGroupIdHasBeenSet = false;

    Aws::String m_firewallDomainListId;
    bool m_firewallDomainListIdHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Action m_action;
    bool m_actionHasBeenSet = false;

    BlockResponse m_blockResponse;
    bool m_blockResponseHasBeenSet = false;

    Aws::String m_blockOverrideDomain;
    bool m_blockOverrideDomainHasBeenSet = false;

    BlockOverrideDnsType m_blockOverrideDnsType;
    bool m_blockOverrideDnsTypeHasBeenSet = false;

    int m_blockOverrideTtl;
    bool m_blockOverrideTtlHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
