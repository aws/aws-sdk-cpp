/**
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
#include <aws/wafv2/model/Rule.h>
#include <aws/wafv2/model/Tag.h>
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
     * <p>The name of the Web ACL. You cannot change the name of a Web ACL after you
     * create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Web ACL. You cannot change the name of a Web ACL after you
     * create it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Web ACL. You cannot change the name of a Web ACL after you
     * create it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Web ACL. You cannot change the name of a Web ACL after you
     * create it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Web ACL. You cannot change the name of a Web ACL after you
     * create it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Web ACL. You cannot change the name of a Web ACL after you
     * create it.</p>
     */
    inline CreateWebACLRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Web ACL. You cannot change the name of a Web ACL after you
     * create it.</p>
     */
    inline CreateWebACLRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Web ACL. You cannot change the name of a Web ACL after you
     * create it.</p>
     */
    inline CreateWebACLRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an API Gateway REST API, or an AppSync GraphQL API. </p> <p>To work with
     * CloudFront, you must also specify the Region US East (N. Virginia) as follows:
     * </p> <ul> <li> <p>CLI - Specify the Region when you use the CloudFront scope:
     * <code>--scope=CLOUDFRONT --region=us-east-1</code>. </p> </li> <li> <p>API and
     * SDKs - For all calls, use the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline const Scope& GetScope() const{ return m_scope; }

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an API Gateway REST API, or an AppSync GraphQL API. </p> <p>To work with
     * CloudFront, you must also specify the Region US East (N. Virginia) as follows:
     * </p> <ul> <li> <p>CLI - Specify the Region when you use the CloudFront scope:
     * <code>--scope=CLOUDFRONT --region=us-east-1</code>. </p> </li> <li> <p>API and
     * SDKs - For all calls, use the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an API Gateway REST API, or an AppSync GraphQL API. </p> <p>To work with
     * CloudFront, you must also specify the Region US East (N. Virginia) as follows:
     * </p> <ul> <li> <p>CLI - Specify the Region when you use the CloudFront scope:
     * <code>--scope=CLOUDFRONT --region=us-east-1</code>. </p> </li> <li> <p>API and
     * SDKs - For all calls, use the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an API Gateway REST API, or an AppSync GraphQL API. </p> <p>To work with
     * CloudFront, you must also specify the Region US East (N. Virginia) as follows:
     * </p> <ul> <li> <p>CLI - Specify the Region when you use the CloudFront scope:
     * <code>--scope=CLOUDFRONT --region=us-east-1</code>. </p> </li> <li> <p>API and
     * SDKs - For all calls, use the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an API Gateway REST API, or an AppSync GraphQL API. </p> <p>To work with
     * CloudFront, you must also specify the Region US East (N. Virginia) as follows:
     * </p> <ul> <li> <p>CLI - Specify the Region when you use the CloudFront scope:
     * <code>--scope=CLOUDFRONT --region=us-east-1</code>. </p> </li> <li> <p>API and
     * SDKs - For all calls, use the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline CreateWebACLRequest& WithScope(const Scope& value) { SetScope(value); return *this;}

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an API Gateway REST API, or an AppSync GraphQL API. </p> <p>To work with
     * CloudFront, you must also specify the Region US East (N. Virginia) as follows:
     * </p> <ul> <li> <p>CLI - Specify the Region when you use the CloudFront scope:
     * <code>--scope=CLOUDFRONT --region=us-east-1</code>. </p> </li> <li> <p>API and
     * SDKs - For all calls, use the Region endpoint us-east-1. </p> </li> </ul>
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
     * <p>A description of the Web ACL that helps with identification. You cannot
     * change the description of a Web ACL after you create it.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the Web ACL that helps with identification. You cannot
     * change the description of a Web ACL after you create it.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the Web ACL that helps with identification. You cannot
     * change the description of a Web ACL after you create it.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the Web ACL that helps with identification. You cannot
     * change the description of a Web ACL after you create it.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the Web ACL that helps with identification. You cannot
     * change the description of a Web ACL after you create it.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the Web ACL that helps with identification. You cannot
     * change the description of a Web ACL after you create it.</p>
     */
    inline CreateWebACLRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the Web ACL that helps with identification. You cannot
     * change the description of a Web ACL after you create it.</p>
     */
    inline CreateWebACLRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the Web ACL that helps with identification. You cannot
     * change the description of a Web ACL after you create it.</p>
     */
    inline CreateWebACLRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that AWS WAF
     * uses to identify matching web requests, and parameters that govern how AWS WAF
     * handles them. </p>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }

    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that AWS WAF
     * uses to identify matching web requests, and parameters that govern how AWS WAF
     * handles them. </p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that AWS WAF
     * uses to identify matching web requests, and parameters that govern how AWS WAF
     * handles them. </p>
     */
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that AWS WAF
     * uses to identify matching web requests, and parameters that govern how AWS WAF
     * handles them. </p>
     */
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that AWS WAF
     * uses to identify matching web requests, and parameters that govern how AWS WAF
     * handles them. </p>
     */
    inline CreateWebACLRequest& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}

    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that AWS WAF
     * uses to identify matching web requests, and parameters that govern how AWS WAF
     * handles them. </p>
     */
    inline CreateWebACLRequest& WithRules(Aws::Vector<Rule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that AWS WAF
     * uses to identify matching web requests, and parameters that govern how AWS WAF
     * handles them. </p>
     */
    inline CreateWebACLRequest& AddRules(const Rule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * allow, block, or count. Each rule includes one top-level statement that AWS WAF
     * uses to identify matching web requests, and parameters that govern how AWS WAF
     * handles them. </p>
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
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
