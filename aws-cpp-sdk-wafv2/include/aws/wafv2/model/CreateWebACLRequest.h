﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/wafv2/model/DefaultAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/VisibilityConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wafv2/model/CaptchaConfig.h>
#include <aws/wafv2/model/Rule.h>
#include <aws/wafv2/model/Tag.h>
#include <aws/wafv2/model/CustomResponseBody.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class AWS_WAFV2_API CreateWebACLRequest : public WAFV2Request
  {
  public:
    CreateWebACLRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWebACL"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline CreateWebACLRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline CreateWebACLRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline CreateWebACLRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline CreateWebACLRequest& WithScope(const Scope& value) { SetScope(value); return *this;}

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
    inline CreateWebACLRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}


    /**
     * <p>The action to perform if none of the <code>Rules</code> contained in the
     * <code>WebACL</code> match. </p>
     */
    inline const DefaultAction& GetDefaultAction() const{ return m_defaultAction; }

    /**
     * <p>The action to perform if none of the <code>Rules</code> contained in the
     * <code>WebACL</code> match. </p>
     */
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }

    /**
     * <p>The action to perform if none of the <code>Rules</code> contained in the
     * <code>WebACL</code> match. </p>
     */
    inline void SetDefaultAction(const DefaultAction& value) { m_defaultActionHasBeenSet = true; m_defaultAction = value; }

    /**
     * <p>The action to perform if none of the <code>Rules</code> contained in the
     * <code>WebACL</code> match. </p>
     */
    inline void SetDefaultAction(DefaultAction&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = std::move(value); }

    /**
     * <p>The action to perform if none of the <code>Rules</code> contained in the
     * <code>WebACL</code> match. </p>
     */
    inline CreateWebACLRequest& WithDefaultAction(const DefaultAction& value) { SetDefaultAction(value); return *this;}

    /**
     * <p>The action to perform if none of the <code>Rules</code> contained in the
     * <code>WebACL</code> match. </p>
     */
    inline CreateWebACLRequest& WithDefaultAction(DefaultAction&& value) { SetDefaultAction(std::move(value)); return *this;}


    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline CreateWebACLRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline CreateWebACLRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline CreateWebACLRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }

    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline CreateWebACLRequest& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}

    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline CreateWebACLRequest& WithRules(Aws::Vector<Rule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline CreateWebACLRequest& AddRules(const Rule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that WAF uses
     * to identify matching web requests, and parameters that govern how WAF handles
     * them. </p>
     */
    inline CreateWebACLRequest& AddRules(Rule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }


    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline const VisibilityConfig& GetVisibilityConfig() const{ return m_visibilityConfig; }

    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline bool VisibilityConfigHasBeenSet() const { return m_visibilityConfigHasBeenSet; }

    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline void SetVisibilityConfig(const VisibilityConfig& value) { m_visibilityConfigHasBeenSet = true; m_visibilityConfig = value; }

    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline void SetVisibilityConfig(VisibilityConfig&& value) { m_visibilityConfigHasBeenSet = true; m_visibilityConfig = std::move(value); }

    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline CreateWebACLRequest& WithVisibilityConfig(const VisibilityConfig& value) { SetVisibilityConfig(value); return *this;}

    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline CreateWebACLRequest& WithVisibilityConfig(VisibilityConfig&& value) { SetVisibilityConfig(std::move(value)); return *this;}


    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline CreateWebACLRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline CreateWebACLRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline CreateWebACLRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline CreateWebACLRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p> <p>For information about the limits on count and size
     * for custom request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline const Aws::Map<Aws::String, CustomResponseBody>& GetCustomResponseBodies() const{ return m_customResponseBodies; }

    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p> <p>For information about the limits on count and size
     * for custom request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline bool CustomResponseBodiesHasBeenSet() const { return m_customResponseBodiesHasBeenSet; }

    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p> <p>For information about the limits on count and size
     * for custom request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline void SetCustomResponseBodies(const Aws::Map<Aws::String, CustomResponseBody>& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies = value; }

    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p> <p>For information about the limits on count and size
     * for custom request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline void SetCustomResponseBodies(Aws::Map<Aws::String, CustomResponseBody>&& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies = std::move(value); }

    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p> <p>For information about the limits on count and size
     * for custom request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline CreateWebACLRequest& WithCustomResponseBodies(const Aws::Map<Aws::String, CustomResponseBody>& value) { SetCustomResponseBodies(value); return *this;}

    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p> <p>For information about the limits on count and size
     * for custom request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline CreateWebACLRequest& WithCustomResponseBodies(Aws::Map<Aws::String, CustomResponseBody>&& value) { SetCustomResponseBodies(std::move(value)); return *this;}

    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p> <p>For information about the limits on count and size
     * for custom request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline CreateWebACLRequest& AddCustomResponseBodies(const Aws::String& key, const CustomResponseBody& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(key, value); return *this; }

    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p> <p>For information about the limits on count and size
     * for custom request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline CreateWebACLRequest& AddCustomResponseBodies(Aws::String&& key, const CustomResponseBody& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p> <p>For information about the limits on count and size
     * for custom request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline CreateWebACLRequest& AddCustomResponseBodies(const Aws::String& key, CustomResponseBody&& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p> <p>For information about the limits on count and size
     * for custom request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline CreateWebACLRequest& AddCustomResponseBodies(Aws::String&& key, CustomResponseBody&& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p> <p>For information about the limits on count and size
     * for custom request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline CreateWebACLRequest& AddCustomResponseBodies(const char* key, CustomResponseBody&& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p> <p>For information about the limits on count and size
     * for custom request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
     * Developer Guide</a>. </p>
     */
    inline CreateWebACLRequest& AddCustomResponseBodies(const char* key, const CustomResponseBody& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(key, value); return *this; }


    /**
     * <p>Specifies how WAF should handle <code>CAPTCHA</code> evaluations for rules
     * that don't have their own <code>CaptchaConfig</code> settings. If you don't
     * specify this, WAF uses its default settings for <code>CaptchaConfig</code>. </p>
     */
    inline const CaptchaConfig& GetCaptchaConfig() const{ return m_captchaConfig; }

    /**
     * <p>Specifies how WAF should handle <code>CAPTCHA</code> evaluations for rules
     * that don't have their own <code>CaptchaConfig</code> settings. If you don't
     * specify this, WAF uses its default settings for <code>CaptchaConfig</code>. </p>
     */
    inline bool CaptchaConfigHasBeenSet() const { return m_captchaConfigHasBeenSet; }

    /**
     * <p>Specifies how WAF should handle <code>CAPTCHA</code> evaluations for rules
     * that don't have their own <code>CaptchaConfig</code> settings. If you don't
     * specify this, WAF uses its default settings for <code>CaptchaConfig</code>. </p>
     */
    inline void SetCaptchaConfig(const CaptchaConfig& value) { m_captchaConfigHasBeenSet = true; m_captchaConfig = value; }

    /**
     * <p>Specifies how WAF should handle <code>CAPTCHA</code> evaluations for rules
     * that don't have their own <code>CaptchaConfig</code> settings. If you don't
     * specify this, WAF uses its default settings for <code>CaptchaConfig</code>. </p>
     */
    inline void SetCaptchaConfig(CaptchaConfig&& value) { m_captchaConfigHasBeenSet = true; m_captchaConfig = std::move(value); }

    /**
     * <p>Specifies how WAF should handle <code>CAPTCHA</code> evaluations for rules
     * that don't have their own <code>CaptchaConfig</code> settings. If you don't
     * specify this, WAF uses its default settings for <code>CaptchaConfig</code>. </p>
     */
    inline CreateWebACLRequest& WithCaptchaConfig(const CaptchaConfig& value) { SetCaptchaConfig(value); return *this;}

    /**
     * <p>Specifies how WAF should handle <code>CAPTCHA</code> evaluations for rules
     * that don't have their own <code>CaptchaConfig</code> settings. If you don't
     * specify this, WAF uses its default settings for <code>CaptchaConfig</code>. </p>
     */
    inline CreateWebACLRequest& WithCaptchaConfig(CaptchaConfig&& value) { SetCaptchaConfig(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Scope m_scope;
    bool m_scopeHasBeenSet;

    DefaultAction m_defaultAction;
    bool m_defaultActionHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet;

    VisibilityConfig m_visibilityConfig;
    bool m_visibilityConfigHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::Map<Aws::String, CustomResponseBody> m_customResponseBodies;
    bool m_customResponseBodiesHasBeenSet;

    CaptchaConfig m_captchaConfig;
    bool m_captchaConfigHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
