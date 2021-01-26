/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class AWS_WAFV2_API GetRateBasedStatementManagedKeysRequest : public WAFV2Request
  {
  public:
    GetRateBasedStatementManagedKeysRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRateBasedStatementManagedKeys"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline GetRateBasedStatementManagedKeysRequest& WithScope(const Scope& value) { SetScope(value); return *this;}

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an API Gateway REST API, or an AppSync GraphQL API. </p> <p>To work with
     * CloudFront, you must also specify the Region US East (N. Virginia) as follows:
     * </p> <ul> <li> <p>CLI - Specify the Region when you use the CloudFront scope:
     * <code>--scope=CLOUDFRONT --region=us-east-1</code>. </p> </li> <li> <p>API and
     * SDKs - For all calls, use the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline GetRateBasedStatementManagedKeysRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}


    /**
     * <p>The name of the Web ACL. You cannot change the name of a Web ACL after you
     * create it.</p>
     */
    inline const Aws::String& GetWebACLName() const{ return m_webACLName; }

    /**
     * <p>The name of the Web ACL. You cannot change the name of a Web ACL after you
     * create it.</p>
     */
    inline bool WebACLNameHasBeenSet() const { return m_webACLNameHasBeenSet; }

    /**
     * <p>The name of the Web ACL. You cannot change the name of a Web ACL after you
     * create it.</p>
     */
    inline void SetWebACLName(const Aws::String& value) { m_webACLNameHasBeenSet = true; m_webACLName = value; }

    /**
     * <p>The name of the Web ACL. You cannot change the name of a Web ACL after you
     * create it.</p>
     */
    inline void SetWebACLName(Aws::String&& value) { m_webACLNameHasBeenSet = true; m_webACLName = std::move(value); }

    /**
     * <p>The name of the Web ACL. You cannot change the name of a Web ACL after you
     * create it.</p>
     */
    inline void SetWebACLName(const char* value) { m_webACLNameHasBeenSet = true; m_webACLName.assign(value); }

    /**
     * <p>The name of the Web ACL. You cannot change the name of a Web ACL after you
     * create it.</p>
     */
    inline GetRateBasedStatementManagedKeysRequest& WithWebACLName(const Aws::String& value) { SetWebACLName(value); return *this;}

    /**
     * <p>The name of the Web ACL. You cannot change the name of a Web ACL after you
     * create it.</p>
     */
    inline GetRateBasedStatementManagedKeysRequest& WithWebACLName(Aws::String&& value) { SetWebACLName(std::move(value)); return *this;}

    /**
     * <p>The name of the Web ACL. You cannot change the name of a Web ACL after you
     * create it.</p>
     */
    inline GetRateBasedStatementManagedKeysRequest& WithWebACLName(const char* value) { SetWebACLName(value); return *this;}


    /**
     * <p>The unique identifier for the Web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline const Aws::String& GetWebACLId() const{ return m_webACLId; }

    /**
     * <p>The unique identifier for the Web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline bool WebACLIdHasBeenSet() const { return m_webACLIdHasBeenSet; }

    /**
     * <p>The unique identifier for the Web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline void SetWebACLId(const Aws::String& value) { m_webACLIdHasBeenSet = true; m_webACLId = value; }

    /**
     * <p>The unique identifier for the Web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline void SetWebACLId(Aws::String&& value) { m_webACLIdHasBeenSet = true; m_webACLId = std::move(value); }

    /**
     * <p>The unique identifier for the Web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline void SetWebACLId(const char* value) { m_webACLIdHasBeenSet = true; m_webACLId.assign(value); }

    /**
     * <p>The unique identifier for the Web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline GetRateBasedStatementManagedKeysRequest& WithWebACLId(const Aws::String& value) { SetWebACLId(value); return *this;}

    /**
     * <p>The unique identifier for the Web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline GetRateBasedStatementManagedKeysRequest& WithWebACLId(Aws::String&& value) { SetWebACLId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline GetRateBasedStatementManagedKeysRequest& WithWebACLId(const char* value) { SetWebACLId(value); return *this;}


    /**
     * <p>The name of the rate-based rule to get the keys for.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p>The name of the rate-based rule to get the keys for.</p>
     */
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }

    /**
     * <p>The name of the rate-based rule to get the keys for.</p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>The name of the rate-based rule to get the keys for.</p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }

    /**
     * <p>The name of the rate-based rule to get the keys for.</p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p>The name of the rate-based rule to get the keys for.</p>
     */
    inline GetRateBasedStatementManagedKeysRequest& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p>The name of the rate-based rule to get the keys for.</p>
     */
    inline GetRateBasedStatementManagedKeysRequest& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the rate-based rule to get the keys for.</p>
     */
    inline GetRateBasedStatementManagedKeysRequest& WithRuleName(const char* value) { SetRuleName(value); return *this;}

  private:

    Scope m_scope;
    bool m_scopeHasBeenSet;

    Aws::String m_webACLName;
    bool m_webACLNameHasBeenSet;

    Aws::String m_webACLId;
    bool m_webACLIdHasBeenSet;

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
