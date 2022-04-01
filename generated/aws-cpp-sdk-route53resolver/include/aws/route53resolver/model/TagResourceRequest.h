﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class AWS_ROUTE53RESOLVER_API TagResourceRequest : public Route53ResolverRequest
  {
  public:
    TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) for the resource that you want to add tags to.
     * To get the ARN for a resource, use the applicable <code>Get</code> or
     * <code>List</code> command: </p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverRule.html">GetResolverRule</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverRuleAssociation.html">GetResolverRuleAssociation</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverEndpoints.html">ListResolverEndpoints</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRuleAssociations.html">ListResolverRuleAssociations</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the resource that you want to add tags to.
     * To get the ARN for a resource, use the applicable <code>Get</code> or
     * <code>List</code> command: </p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverRule.html">GetResolverRule</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverRuleAssociation.html">GetResolverRuleAssociation</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverEndpoints.html">ListResolverEndpoints</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRuleAssociations.html">ListResolverRuleAssociations</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>
     * </p> </li> </ul>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the resource that you want to add tags to.
     * To get the ARN for a resource, use the applicable <code>Get</code> or
     * <code>List</code> command: </p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverRule.html">GetResolverRule</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverRuleAssociation.html">GetResolverRuleAssociation</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverEndpoints.html">ListResolverEndpoints</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRuleAssociations.html">ListResolverRuleAssociations</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>
     * </p> </li> </ul>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the resource that you want to add tags to.
     * To get the ARN for a resource, use the applicable <code>Get</code> or
     * <code>List</code> command: </p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverRule.html">GetResolverRule</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverRuleAssociation.html">GetResolverRuleAssociation</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverEndpoints.html">ListResolverEndpoints</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRuleAssociations.html">ListResolverRuleAssociations</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>
     * </p> </li> </ul>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the resource that you want to add tags to.
     * To get the ARN for a resource, use the applicable <code>Get</code> or
     * <code>List</code> command: </p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverRule.html">GetResolverRule</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverRuleAssociation.html">GetResolverRuleAssociation</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverEndpoints.html">ListResolverEndpoints</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRuleAssociations.html">ListResolverRuleAssociations</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>
     * </p> </li> </ul>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the resource that you want to add tags to.
     * To get the ARN for a resource, use the applicable <code>Get</code> or
     * <code>List</code> command: </p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverRule.html">GetResolverRule</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverRuleAssociation.html">GetResolverRuleAssociation</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverEndpoints.html">ListResolverEndpoints</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRuleAssociations.html">ListResolverRuleAssociations</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>
     * </p> </li> </ul>
     */
    inline TagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the resource that you want to add tags to.
     * To get the ARN for a resource, use the applicable <code>Get</code> or
     * <code>List</code> command: </p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverRule.html">GetResolverRule</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverRuleAssociation.html">GetResolverRuleAssociation</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverEndpoints.html">ListResolverEndpoints</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRuleAssociations.html">ListResolverRuleAssociations</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>
     * </p> </li> </ul>
     */
    inline TagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the resource that you want to add tags to.
     * To get the ARN for a resource, use the applicable <code>Get</code> or
     * <code>List</code> command: </p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverRule.html">GetResolverRule</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverRuleAssociation.html">GetResolverRuleAssociation</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverEndpoints.html">ListResolverEndpoints</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRuleAssociations.html">ListResolverRuleAssociations</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>
     * </p> </li> </ul>
     */
    inline TagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The tags that you want to add to the specified resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags that you want to add to the specified resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags that you want to add to the specified resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags that you want to add to the specified resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags that you want to add to the specified resource.</p>
     */
    inline TagResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags that you want to add to the specified resource.</p>
     */
    inline TagResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags that you want to add to the specified resource.</p>
     */
    inline TagResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags that you want to add to the specified resource.</p>
     */
    inline TagResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
