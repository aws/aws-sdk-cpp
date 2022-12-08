/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/FirewallDomainUpdateOperation.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class UpdateFirewallDomainsRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API UpdateFirewallDomainsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFirewallDomains"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the domain list whose domains you want to update. </p>
     */
    inline const Aws::String& GetFirewallDomainListId() const{ return m_firewallDomainListId; }

    /**
     * <p>The ID of the domain list whose domains you want to update. </p>
     */
    inline bool FirewallDomainListIdHasBeenSet() const { return m_firewallDomainListIdHasBeenSet; }

    /**
     * <p>The ID of the domain list whose domains you want to update. </p>
     */
    inline void SetFirewallDomainListId(const Aws::String& value) { m_firewallDomainListIdHasBeenSet = true; m_firewallDomainListId = value; }

    /**
     * <p>The ID of the domain list whose domains you want to update. </p>
     */
    inline void SetFirewallDomainListId(Aws::String&& value) { m_firewallDomainListIdHasBeenSet = true; m_firewallDomainListId = std::move(value); }

    /**
     * <p>The ID of the domain list whose domains you want to update. </p>
     */
    inline void SetFirewallDomainListId(const char* value) { m_firewallDomainListIdHasBeenSet = true; m_firewallDomainListId.assign(value); }

    /**
     * <p>The ID of the domain list whose domains you want to update. </p>
     */
    inline UpdateFirewallDomainsRequest& WithFirewallDomainListId(const Aws::String& value) { SetFirewallDomainListId(value); return *this;}

    /**
     * <p>The ID of the domain list whose domains you want to update. </p>
     */
    inline UpdateFirewallDomainsRequest& WithFirewallDomainListId(Aws::String&& value) { SetFirewallDomainListId(std::move(value)); return *this;}

    /**
     * <p>The ID of the domain list whose domains you want to update. </p>
     */
    inline UpdateFirewallDomainsRequest& WithFirewallDomainListId(const char* value) { SetFirewallDomainListId(value); return *this;}


    /**
     * <p>What you want DNS Firewall to do with the domains that you are providing:
     * </p> <ul> <li> <p> <code>ADD</code> - Add the domains to the ones that are
     * already in the domain list. </p> </li> <li> <p> <code>REMOVE</code> - Search the
     * domain list for the domains and remove them from the list.</p> </li> <li> <p>
     * <code>REPLACE</code> - Update the domain list to exactly match the list that you
     * are providing. </p> </li> </ul>
     */
    inline const FirewallDomainUpdateOperation& GetOperation() const{ return m_operation; }

    /**
     * <p>What you want DNS Firewall to do with the domains that you are providing:
     * </p> <ul> <li> <p> <code>ADD</code> - Add the domains to the ones that are
     * already in the domain list. </p> </li> <li> <p> <code>REMOVE</code> - Search the
     * domain list for the domains and remove them from the list.</p> </li> <li> <p>
     * <code>REPLACE</code> - Update the domain list to exactly match the list that you
     * are providing. </p> </li> </ul>
     */
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }

    /**
     * <p>What you want DNS Firewall to do with the domains that you are providing:
     * </p> <ul> <li> <p> <code>ADD</code> - Add the domains to the ones that are
     * already in the domain list. </p> </li> <li> <p> <code>REMOVE</code> - Search the
     * domain list for the domains and remove them from the list.</p> </li> <li> <p>
     * <code>REPLACE</code> - Update the domain list to exactly match the list that you
     * are providing. </p> </li> </ul>
     */
    inline void SetOperation(const FirewallDomainUpdateOperation& value) { m_operationHasBeenSet = true; m_operation = value; }

    /**
     * <p>What you want DNS Firewall to do with the domains that you are providing:
     * </p> <ul> <li> <p> <code>ADD</code> - Add the domains to the ones that are
     * already in the domain list. </p> </li> <li> <p> <code>REMOVE</code> - Search the
     * domain list for the domains and remove them from the list.</p> </li> <li> <p>
     * <code>REPLACE</code> - Update the domain list to exactly match the list that you
     * are providing. </p> </li> </ul>
     */
    inline void SetOperation(FirewallDomainUpdateOperation&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }

    /**
     * <p>What you want DNS Firewall to do with the domains that you are providing:
     * </p> <ul> <li> <p> <code>ADD</code> - Add the domains to the ones that are
     * already in the domain list. </p> </li> <li> <p> <code>REMOVE</code> - Search the
     * domain list for the domains and remove them from the list.</p> </li> <li> <p>
     * <code>REPLACE</code> - Update the domain list to exactly match the list that you
     * are providing. </p> </li> </ul>
     */
    inline UpdateFirewallDomainsRequest& WithOperation(const FirewallDomainUpdateOperation& value) { SetOperation(value); return *this;}

    /**
     * <p>What you want DNS Firewall to do with the domains that you are providing:
     * </p> <ul> <li> <p> <code>ADD</code> - Add the domains to the ones that are
     * already in the domain list. </p> </li> <li> <p> <code>REMOVE</code> - Search the
     * domain list for the domains and remove them from the list.</p> </li> <li> <p>
     * <code>REPLACE</code> - Update the domain list to exactly match the list that you
     * are providing. </p> </li> </ul>
     */
    inline UpdateFirewallDomainsRequest& WithOperation(FirewallDomainUpdateOperation&& value) { SetOperation(std::move(value)); return *this;}


    /**
     * <p>A list of domains to use in the update operation.</p> <p>Each domain
     * specification in your domain list must satisfy the following requirements: </p>
     * <ul> <li> <p>It can optionally start with <code>*</code> (asterisk).</p> </li>
     * <li> <p>With the exception of the optional starting asterisk, it must only
     * contain the following characters: <code>A-Z</code>, <code>a-z</code>,
     * <code>0-9</code>, <code>-</code> (hyphen).</p> </li> <li> <p>It must be from
     * 1-255 characters in length. </p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetDomains() const{ return m_domains; }

    /**
     * <p>A list of domains to use in the update operation.</p> <p>Each domain
     * specification in your domain list must satisfy the following requirements: </p>
     * <ul> <li> <p>It can optionally start with <code>*</code> (asterisk).</p> </li>
     * <li> <p>With the exception of the optional starting asterisk, it must only
     * contain the following characters: <code>A-Z</code>, <code>a-z</code>,
     * <code>0-9</code>, <code>-</code> (hyphen).</p> </li> <li> <p>It must be from
     * 1-255 characters in length. </p> </li> </ul>
     */
    inline bool DomainsHasBeenSet() const { return m_domainsHasBeenSet; }

    /**
     * <p>A list of domains to use in the update operation.</p> <p>Each domain
     * specification in your domain list must satisfy the following requirements: </p>
     * <ul> <li> <p>It can optionally start with <code>*</code> (asterisk).</p> </li>
     * <li> <p>With the exception of the optional starting asterisk, it must only
     * contain the following characters: <code>A-Z</code>, <code>a-z</code>,
     * <code>0-9</code>, <code>-</code> (hyphen).</p> </li> <li> <p>It must be from
     * 1-255 characters in length. </p> </li> </ul>
     */
    inline void SetDomains(const Aws::Vector<Aws::String>& value) { m_domainsHasBeenSet = true; m_domains = value; }

    /**
     * <p>A list of domains to use in the update operation.</p> <p>Each domain
     * specification in your domain list must satisfy the following requirements: </p>
     * <ul> <li> <p>It can optionally start with <code>*</code> (asterisk).</p> </li>
     * <li> <p>With the exception of the optional starting asterisk, it must only
     * contain the following characters: <code>A-Z</code>, <code>a-z</code>,
     * <code>0-9</code>, <code>-</code> (hyphen).</p> </li> <li> <p>It must be from
     * 1-255 characters in length. </p> </li> </ul>
     */
    inline void SetDomains(Aws::Vector<Aws::String>&& value) { m_domainsHasBeenSet = true; m_domains = std::move(value); }

    /**
     * <p>A list of domains to use in the update operation.</p> <p>Each domain
     * specification in your domain list must satisfy the following requirements: </p>
     * <ul> <li> <p>It can optionally start with <code>*</code> (asterisk).</p> </li>
     * <li> <p>With the exception of the optional starting asterisk, it must only
     * contain the following characters: <code>A-Z</code>, <code>a-z</code>,
     * <code>0-9</code>, <code>-</code> (hyphen).</p> </li> <li> <p>It must be from
     * 1-255 characters in length. </p> </li> </ul>
     */
    inline UpdateFirewallDomainsRequest& WithDomains(const Aws::Vector<Aws::String>& value) { SetDomains(value); return *this;}

    /**
     * <p>A list of domains to use in the update operation.</p> <p>Each domain
     * specification in your domain list must satisfy the following requirements: </p>
     * <ul> <li> <p>It can optionally start with <code>*</code> (asterisk).</p> </li>
     * <li> <p>With the exception of the optional starting asterisk, it must only
     * contain the following characters: <code>A-Z</code>, <code>a-z</code>,
     * <code>0-9</code>, <code>-</code> (hyphen).</p> </li> <li> <p>It must be from
     * 1-255 characters in length. </p> </li> </ul>
     */
    inline UpdateFirewallDomainsRequest& WithDomains(Aws::Vector<Aws::String>&& value) { SetDomains(std::move(value)); return *this;}

    /**
     * <p>A list of domains to use in the update operation.</p> <p>Each domain
     * specification in your domain list must satisfy the following requirements: </p>
     * <ul> <li> <p>It can optionally start with <code>*</code> (asterisk).</p> </li>
     * <li> <p>With the exception of the optional starting asterisk, it must only
     * contain the following characters: <code>A-Z</code>, <code>a-z</code>,
     * <code>0-9</code>, <code>-</code> (hyphen).</p> </li> <li> <p>It must be from
     * 1-255 characters in length. </p> </li> </ul>
     */
    inline UpdateFirewallDomainsRequest& AddDomains(const Aws::String& value) { m_domainsHasBeenSet = true; m_domains.push_back(value); return *this; }

    /**
     * <p>A list of domains to use in the update operation.</p> <p>Each domain
     * specification in your domain list must satisfy the following requirements: </p>
     * <ul> <li> <p>It can optionally start with <code>*</code> (asterisk).</p> </li>
     * <li> <p>With the exception of the optional starting asterisk, it must only
     * contain the following characters: <code>A-Z</code>, <code>a-z</code>,
     * <code>0-9</code>, <code>-</code> (hyphen).</p> </li> <li> <p>It must be from
     * 1-255 characters in length. </p> </li> </ul>
     */
    inline UpdateFirewallDomainsRequest& AddDomains(Aws::String&& value) { m_domainsHasBeenSet = true; m_domains.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of domains to use in the update operation.</p> <p>Each domain
     * specification in your domain list must satisfy the following requirements: </p>
     * <ul> <li> <p>It can optionally start with <code>*</code> (asterisk).</p> </li>
     * <li> <p>With the exception of the optional starting asterisk, it must only
     * contain the following characters: <code>A-Z</code>, <code>a-z</code>,
     * <code>0-9</code>, <code>-</code> (hyphen).</p> </li> <li> <p>It must be from
     * 1-255 characters in length. </p> </li> </ul>
     */
    inline UpdateFirewallDomainsRequest& AddDomains(const char* value) { m_domainsHasBeenSet = true; m_domains.push_back(value); return *this; }

  private:

    Aws::String m_firewallDomainListId;
    bool m_firewallDomainListIdHasBeenSet = false;

    FirewallDomainUpdateOperation m_operation;
    bool m_operationHasBeenSet = false;

    Aws::Vector<Aws::String> m_domains;
    bool m_domainsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
