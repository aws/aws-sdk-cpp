﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wafv2/model/VersionToPublish.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class AWS_WAFV2_API PutManagedRuleSetVersionsRequest : public WAFV2Request
  {
  public:
    PutManagedRuleSetVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutManagedRuleSetVersions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline PutManagedRuleSetVersionsRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline PutManagedRuleSetVersionsRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline PutManagedRuleSetVersionsRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, or an AppSync GraphQL API. </p> <p>To
     * work with CloudFront, you must also specify the Region US East (N. Virginia) as
     * follows: </p> <ul> <li> <p>CLI - Specify the Region when you use the CloudFront
     * scope: <code>--scope=CLOUDFRONT --region=us-east-1</code>. </p> </li> <li>
     * <p>API and SDKs - For all calls, use the Region endpoint us-east-1. </p> </li>
     * </ul>
     */
    inline const Scope& GetScope() const{ return m_scope; }

    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, or an AppSync GraphQL API. </p> <p>To
     * work with CloudFront, you must also specify the Region US East (N. Virginia) as
     * follows: </p> <ul> <li> <p>CLI - Specify the Region when you use the CloudFront
     * scope: <code>--scope=CLOUDFRONT --region=us-east-1</code>. </p> </li> <li>
     * <p>API and SDKs - For all calls, use the Region endpoint us-east-1. </p> </li>
     * </ul>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, or an AppSync GraphQL API. </p> <p>To
     * work with CloudFront, you must also specify the Region US East (N. Virginia) as
     * follows: </p> <ul> <li> <p>CLI - Specify the Region when you use the CloudFront
     * scope: <code>--scope=CLOUDFRONT --region=us-east-1</code>. </p> </li> <li>
     * <p>API and SDKs - For all calls, use the Region endpoint us-east-1. </p> </li>
     * </ul>
     */
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, or an AppSync GraphQL API. </p> <p>To
     * work with CloudFront, you must also specify the Region US East (N. Virginia) as
     * follows: </p> <ul> <li> <p>CLI - Specify the Region when you use the CloudFront
     * scope: <code>--scope=CLOUDFRONT --region=us-east-1</code>. </p> </li> <li>
     * <p>API and SDKs - For all calls, use the Region endpoint us-east-1. </p> </li>
     * </ul>
     */
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, or an AppSync GraphQL API. </p> <p>To
     * work with CloudFront, you must also specify the Region US East (N. Virginia) as
     * follows: </p> <ul> <li> <p>CLI - Specify the Region when you use the CloudFront
     * scope: <code>--scope=CLOUDFRONT --region=us-east-1</code>. </p> </li> <li>
     * <p>API and SDKs - For all calls, use the Region endpoint us-east-1. </p> </li>
     * </ul>
     */
    inline PutManagedRuleSetVersionsRequest& WithScope(const Scope& value) { SetScope(value); return *this;}

    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, or an AppSync GraphQL API. </p> <p>To
     * work with CloudFront, you must also specify the Region US East (N. Virginia) as
     * follows: </p> <ul> <li> <p>CLI - Specify the Region when you use the CloudFront
     * scope: <code>--scope=CLOUDFRONT --region=us-east-1</code>. </p> </li> <li>
     * <p>API and SDKs - For all calls, use the Region endpoint us-east-1. </p> </li>
     * </ul>
     */
    inline PutManagedRuleSetVersionsRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}


    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline PutManagedRuleSetVersionsRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline PutManagedRuleSetVersionsRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline PutManagedRuleSetVersionsRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A token used for optimistic locking. WAF returns a token to your
     * <code>get</code> and <code>list</code> requests, to mark the state of the entity
     * at the time of the request. To make changes to the entity associated with the
     * token, you provide the token to operations like <code>update</code> and
     * <code>delete</code>. WAF uses the token to ensure that no changes have been made
     * to the entity since you last retrieved it. If a change has been made, the update
     * fails with a <code>WAFOptimisticLockException</code>. If this happens, perform
     * another <code>get</code>, and use the new token returned by that operation. </p>
     */
    inline const Aws::String& GetLockToken() const{ return m_lockToken; }

    /**
     * <p>A token used for optimistic locking. WAF returns a token to your
     * <code>get</code> and <code>list</code> requests, to mark the state of the entity
     * at the time of the request. To make changes to the entity associated with the
     * token, you provide the token to operations like <code>update</code> and
     * <code>delete</code>. WAF uses the token to ensure that no changes have been made
     * to the entity since you last retrieved it. If a change has been made, the update
     * fails with a <code>WAFOptimisticLockException</code>. If this happens, perform
     * another <code>get</code>, and use the new token returned by that operation. </p>
     */
    inline bool LockTokenHasBeenSet() const { return m_lockTokenHasBeenSet; }

    /**
     * <p>A token used for optimistic locking. WAF returns a token to your
     * <code>get</code> and <code>list</code> requests, to mark the state of the entity
     * at the time of the request. To make changes to the entity associated with the
     * token, you provide the token to operations like <code>update</code> and
     * <code>delete</code>. WAF uses the token to ensure that no changes have been made
     * to the entity since you last retrieved it. If a change has been made, the update
     * fails with a <code>WAFOptimisticLockException</code>. If this happens, perform
     * another <code>get</code>, and use the new token returned by that operation. </p>
     */
    inline void SetLockToken(const Aws::String& value) { m_lockTokenHasBeenSet = true; m_lockToken = value; }

    /**
     * <p>A token used for optimistic locking. WAF returns a token to your
     * <code>get</code> and <code>list</code> requests, to mark the state of the entity
     * at the time of the request. To make changes to the entity associated with the
     * token, you provide the token to operations like <code>update</code> and
     * <code>delete</code>. WAF uses the token to ensure that no changes have been made
     * to the entity since you last retrieved it. If a change has been made, the update
     * fails with a <code>WAFOptimisticLockException</code>. If this happens, perform
     * another <code>get</code>, and use the new token returned by that operation. </p>
     */
    inline void SetLockToken(Aws::String&& value) { m_lockTokenHasBeenSet = true; m_lockToken = std::move(value); }

    /**
     * <p>A token used for optimistic locking. WAF returns a token to your
     * <code>get</code> and <code>list</code> requests, to mark the state of the entity
     * at the time of the request. To make changes to the entity associated with the
     * token, you provide the token to operations like <code>update</code> and
     * <code>delete</code>. WAF uses the token to ensure that no changes have been made
     * to the entity since you last retrieved it. If a change has been made, the update
     * fails with a <code>WAFOptimisticLockException</code>. If this happens, perform
     * another <code>get</code>, and use the new token returned by that operation. </p>
     */
    inline void SetLockToken(const char* value) { m_lockTokenHasBeenSet = true; m_lockToken.assign(value); }

    /**
     * <p>A token used for optimistic locking. WAF returns a token to your
     * <code>get</code> and <code>list</code> requests, to mark the state of the entity
     * at the time of the request. To make changes to the entity associated with the
     * token, you provide the token to operations like <code>update</code> and
     * <code>delete</code>. WAF uses the token to ensure that no changes have been made
     * to the entity since you last retrieved it. If a change has been made, the update
     * fails with a <code>WAFOptimisticLockException</code>. If this happens, perform
     * another <code>get</code>, and use the new token returned by that operation. </p>
     */
    inline PutManagedRuleSetVersionsRequest& WithLockToken(const Aws::String& value) { SetLockToken(value); return *this;}

    /**
     * <p>A token used for optimistic locking. WAF returns a token to your
     * <code>get</code> and <code>list</code> requests, to mark the state of the entity
     * at the time of the request. To make changes to the entity associated with the
     * token, you provide the token to operations like <code>update</code> and
     * <code>delete</code>. WAF uses the token to ensure that no changes have been made
     * to the entity since you last retrieved it. If a change has been made, the update
     * fails with a <code>WAFOptimisticLockException</code>. If this happens, perform
     * another <code>get</code>, and use the new token returned by that operation. </p>
     */
    inline PutManagedRuleSetVersionsRequest& WithLockToken(Aws::String&& value) { SetLockToken(std::move(value)); return *this;}

    /**
     * <p>A token used for optimistic locking. WAF returns a token to your
     * <code>get</code> and <code>list</code> requests, to mark the state of the entity
     * at the time of the request. To make changes to the entity associated with the
     * token, you provide the token to operations like <code>update</code> and
     * <code>delete</code>. WAF uses the token to ensure that no changes have been made
     * to the entity since you last retrieved it. If a change has been made, the update
     * fails with a <code>WAFOptimisticLockException</code>. If this happens, perform
     * another <code>get</code>, and use the new token returned by that operation. </p>
     */
    inline PutManagedRuleSetVersionsRequest& WithLockToken(const char* value) { SetLockToken(value); return *this;}


    /**
     * <p>The version of the named managed rule group that you'd like your customers to
     * choose, from among your version offerings. </p>
     */
    inline const Aws::String& GetRecommendedVersion() const{ return m_recommendedVersion; }

    /**
     * <p>The version of the named managed rule group that you'd like your customers to
     * choose, from among your version offerings. </p>
     */
    inline bool RecommendedVersionHasBeenSet() const { return m_recommendedVersionHasBeenSet; }

    /**
     * <p>The version of the named managed rule group that you'd like your customers to
     * choose, from among your version offerings. </p>
     */
    inline void SetRecommendedVersion(const Aws::String& value) { m_recommendedVersionHasBeenSet = true; m_recommendedVersion = value; }

    /**
     * <p>The version of the named managed rule group that you'd like your customers to
     * choose, from among your version offerings. </p>
     */
    inline void SetRecommendedVersion(Aws::String&& value) { m_recommendedVersionHasBeenSet = true; m_recommendedVersion = std::move(value); }

    /**
     * <p>The version of the named managed rule group that you'd like your customers to
     * choose, from among your version offerings. </p>
     */
    inline void SetRecommendedVersion(const char* value) { m_recommendedVersionHasBeenSet = true; m_recommendedVersion.assign(value); }

    /**
     * <p>The version of the named managed rule group that you'd like your customers to
     * choose, from among your version offerings. </p>
     */
    inline PutManagedRuleSetVersionsRequest& WithRecommendedVersion(const Aws::String& value) { SetRecommendedVersion(value); return *this;}

    /**
     * <p>The version of the named managed rule group that you'd like your customers to
     * choose, from among your version offerings. </p>
     */
    inline PutManagedRuleSetVersionsRequest& WithRecommendedVersion(Aws::String&& value) { SetRecommendedVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the named managed rule group that you'd like your customers to
     * choose, from among your version offerings. </p>
     */
    inline PutManagedRuleSetVersionsRequest& WithRecommendedVersion(const char* value) { SetRecommendedVersion(value); return *this;}


    /**
     * <p>The versions of the named managed rule group that you want to offer to your
     * customers. </p>
     */
    inline const Aws::Map<Aws::String, VersionToPublish>& GetVersionsToPublish() const{ return m_versionsToPublish; }

    /**
     * <p>The versions of the named managed rule group that you want to offer to your
     * customers. </p>
     */
    inline bool VersionsToPublishHasBeenSet() const { return m_versionsToPublishHasBeenSet; }

    /**
     * <p>The versions of the named managed rule group that you want to offer to your
     * customers. </p>
     */
    inline void SetVersionsToPublish(const Aws::Map<Aws::String, VersionToPublish>& value) { m_versionsToPublishHasBeenSet = true; m_versionsToPublish = value; }

    /**
     * <p>The versions of the named managed rule group that you want to offer to your
     * customers. </p>
     */
    inline void SetVersionsToPublish(Aws::Map<Aws::String, VersionToPublish>&& value) { m_versionsToPublishHasBeenSet = true; m_versionsToPublish = std::move(value); }

    /**
     * <p>The versions of the named managed rule group that you want to offer to your
     * customers. </p>
     */
    inline PutManagedRuleSetVersionsRequest& WithVersionsToPublish(const Aws::Map<Aws::String, VersionToPublish>& value) { SetVersionsToPublish(value); return *this;}

    /**
     * <p>The versions of the named managed rule group that you want to offer to your
     * customers. </p>
     */
    inline PutManagedRuleSetVersionsRequest& WithVersionsToPublish(Aws::Map<Aws::String, VersionToPublish>&& value) { SetVersionsToPublish(std::move(value)); return *this;}

    /**
     * <p>The versions of the named managed rule group that you want to offer to your
     * customers. </p>
     */
    inline PutManagedRuleSetVersionsRequest& AddVersionsToPublish(const Aws::String& key, const VersionToPublish& value) { m_versionsToPublishHasBeenSet = true; m_versionsToPublish.emplace(key, value); return *this; }

    /**
     * <p>The versions of the named managed rule group that you want to offer to your
     * customers. </p>
     */
    inline PutManagedRuleSetVersionsRequest& AddVersionsToPublish(Aws::String&& key, const VersionToPublish& value) { m_versionsToPublishHasBeenSet = true; m_versionsToPublish.emplace(std::move(key), value); return *this; }

    /**
     * <p>The versions of the named managed rule group that you want to offer to your
     * customers. </p>
     */
    inline PutManagedRuleSetVersionsRequest& AddVersionsToPublish(const Aws::String& key, VersionToPublish&& value) { m_versionsToPublishHasBeenSet = true; m_versionsToPublish.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The versions of the named managed rule group that you want to offer to your
     * customers. </p>
     */
    inline PutManagedRuleSetVersionsRequest& AddVersionsToPublish(Aws::String&& key, VersionToPublish&& value) { m_versionsToPublishHasBeenSet = true; m_versionsToPublish.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The versions of the named managed rule group that you want to offer to your
     * customers. </p>
     */
    inline PutManagedRuleSetVersionsRequest& AddVersionsToPublish(const char* key, VersionToPublish&& value) { m_versionsToPublishHasBeenSet = true; m_versionsToPublish.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The versions of the named managed rule group that you want to offer to your
     * customers. </p>
     */
    inline PutManagedRuleSetVersionsRequest& AddVersionsToPublish(const char* key, const VersionToPublish& value) { m_versionsToPublishHasBeenSet = true; m_versionsToPublish.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Scope m_scope;
    bool m_scopeHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_lockToken;
    bool m_lockTokenHasBeenSet;

    Aws::String m_recommendedVersion;
    bool m_recommendedVersionHasBeenSet;

    Aws::Map<Aws::String, VersionToPublish> m_versionsToPublish;
    bool m_versionsToPublishHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
