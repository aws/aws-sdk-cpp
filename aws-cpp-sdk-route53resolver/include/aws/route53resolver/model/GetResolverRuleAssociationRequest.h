/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class GetResolverRuleAssociationRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API GetResolverRuleAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResolverRuleAssociation"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Resolver rule association that you want to get information
     * about.</p>
     */
    inline const Aws::String& GetResolverRuleAssociationId() const{ return m_resolverRuleAssociationId; }

    /**
     * <p>The ID of the Resolver rule association that you want to get information
     * about.</p>
     */
    inline bool ResolverRuleAssociationIdHasBeenSet() const { return m_resolverRuleAssociationIdHasBeenSet; }

    /**
     * <p>The ID of the Resolver rule association that you want to get information
     * about.</p>
     */
    inline void SetResolverRuleAssociationId(const Aws::String& value) { m_resolverRuleAssociationIdHasBeenSet = true; m_resolverRuleAssociationId = value; }

    /**
     * <p>The ID of the Resolver rule association that you want to get information
     * about.</p>
     */
    inline void SetResolverRuleAssociationId(Aws::String&& value) { m_resolverRuleAssociationIdHasBeenSet = true; m_resolverRuleAssociationId = std::move(value); }

    /**
     * <p>The ID of the Resolver rule association that you want to get information
     * about.</p>
     */
    inline void SetResolverRuleAssociationId(const char* value) { m_resolverRuleAssociationIdHasBeenSet = true; m_resolverRuleAssociationId.assign(value); }

    /**
     * <p>The ID of the Resolver rule association that you want to get information
     * about.</p>
     */
    inline GetResolverRuleAssociationRequest& WithResolverRuleAssociationId(const Aws::String& value) { SetResolverRuleAssociationId(value); return *this;}

    /**
     * <p>The ID of the Resolver rule association that you want to get information
     * about.</p>
     */
    inline GetResolverRuleAssociationRequest& WithResolverRuleAssociationId(Aws::String&& value) { SetResolverRuleAssociationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Resolver rule association that you want to get information
     * about.</p>
     */
    inline GetResolverRuleAssociationRequest& WithResolverRuleAssociationId(const char* value) { SetResolverRuleAssociationId(value); return *this;}

  private:

    Aws::String m_resolverRuleAssociationId;
    bool m_resolverRuleAssociationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
