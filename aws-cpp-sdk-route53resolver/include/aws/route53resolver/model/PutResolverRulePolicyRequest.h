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
  class AWS_ROUTE53RESOLVER_API PutResolverRulePolicyRequest : public Route53ResolverRequest
  {
  public:
    PutResolverRulePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResolverRulePolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to share rules
     * with.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to share rules
     * with.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to share rules
     * with.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to share rules
     * with.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to share rules
     * with.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to share rules
     * with.</p>
     */
    inline PutResolverRulePolicyRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to share rules
     * with.</p>
     */
    inline PutResolverRulePolicyRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to share rules
     * with.</p>
     */
    inline PutResolverRulePolicyRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>An AWS Identity and Access Management policy statement that lists the rules
     * that you want to share with another AWS account and the operations that you want
     * the account to be able to perform. You can specify the following operations in
     * the <code>Actions</code> section of the statement:</p> <ul> <li> <p>
     * <code>route53resolver:GetResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:AssociateResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:DisassociateResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:ListResolverRules</code> </p> </li> <li> <p>
     * <code>route53resolver:ListResolverRuleAssociations</code> </p> </li> </ul> <p>In
     * the <code>Resource</code> section of the statement, you specify the ARNs for the
     * rules that you want to share with the account that you specified in
     * <code>Arn</code>. </p>
     */
    inline const Aws::String& GetResolverRulePolicy() const{ return m_resolverRulePolicy; }

    /**
     * <p>An AWS Identity and Access Management policy statement that lists the rules
     * that you want to share with another AWS account and the operations that you want
     * the account to be able to perform. You can specify the following operations in
     * the <code>Actions</code> section of the statement:</p> <ul> <li> <p>
     * <code>route53resolver:GetResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:AssociateResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:DisassociateResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:ListResolverRules</code> </p> </li> <li> <p>
     * <code>route53resolver:ListResolverRuleAssociations</code> </p> </li> </ul> <p>In
     * the <code>Resource</code> section of the statement, you specify the ARNs for the
     * rules that you want to share with the account that you specified in
     * <code>Arn</code>. </p>
     */
    inline bool ResolverRulePolicyHasBeenSet() const { return m_resolverRulePolicyHasBeenSet; }

    /**
     * <p>An AWS Identity and Access Management policy statement that lists the rules
     * that you want to share with another AWS account and the operations that you want
     * the account to be able to perform. You can specify the following operations in
     * the <code>Actions</code> section of the statement:</p> <ul> <li> <p>
     * <code>route53resolver:GetResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:AssociateResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:DisassociateResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:ListResolverRules</code> </p> </li> <li> <p>
     * <code>route53resolver:ListResolverRuleAssociations</code> </p> </li> </ul> <p>In
     * the <code>Resource</code> section of the statement, you specify the ARNs for the
     * rules that you want to share with the account that you specified in
     * <code>Arn</code>. </p>
     */
    inline void SetResolverRulePolicy(const Aws::String& value) { m_resolverRulePolicyHasBeenSet = true; m_resolverRulePolicy = value; }

    /**
     * <p>An AWS Identity and Access Management policy statement that lists the rules
     * that you want to share with another AWS account and the operations that you want
     * the account to be able to perform. You can specify the following operations in
     * the <code>Actions</code> section of the statement:</p> <ul> <li> <p>
     * <code>route53resolver:GetResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:AssociateResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:DisassociateResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:ListResolverRules</code> </p> </li> <li> <p>
     * <code>route53resolver:ListResolverRuleAssociations</code> </p> </li> </ul> <p>In
     * the <code>Resource</code> section of the statement, you specify the ARNs for the
     * rules that you want to share with the account that you specified in
     * <code>Arn</code>. </p>
     */
    inline void SetResolverRulePolicy(Aws::String&& value) { m_resolverRulePolicyHasBeenSet = true; m_resolverRulePolicy = std::move(value); }

    /**
     * <p>An AWS Identity and Access Management policy statement that lists the rules
     * that you want to share with another AWS account and the operations that you want
     * the account to be able to perform. You can specify the following operations in
     * the <code>Actions</code> section of the statement:</p> <ul> <li> <p>
     * <code>route53resolver:GetResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:AssociateResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:DisassociateResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:ListResolverRules</code> </p> </li> <li> <p>
     * <code>route53resolver:ListResolverRuleAssociations</code> </p> </li> </ul> <p>In
     * the <code>Resource</code> section of the statement, you specify the ARNs for the
     * rules that you want to share with the account that you specified in
     * <code>Arn</code>. </p>
     */
    inline void SetResolverRulePolicy(const char* value) { m_resolverRulePolicyHasBeenSet = true; m_resolverRulePolicy.assign(value); }

    /**
     * <p>An AWS Identity and Access Management policy statement that lists the rules
     * that you want to share with another AWS account and the operations that you want
     * the account to be able to perform. You can specify the following operations in
     * the <code>Actions</code> section of the statement:</p> <ul> <li> <p>
     * <code>route53resolver:GetResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:AssociateResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:DisassociateResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:ListResolverRules</code> </p> </li> <li> <p>
     * <code>route53resolver:ListResolverRuleAssociations</code> </p> </li> </ul> <p>In
     * the <code>Resource</code> section of the statement, you specify the ARNs for the
     * rules that you want to share with the account that you specified in
     * <code>Arn</code>. </p>
     */
    inline PutResolverRulePolicyRequest& WithResolverRulePolicy(const Aws::String& value) { SetResolverRulePolicy(value); return *this;}

    /**
     * <p>An AWS Identity and Access Management policy statement that lists the rules
     * that you want to share with another AWS account and the operations that you want
     * the account to be able to perform. You can specify the following operations in
     * the <code>Actions</code> section of the statement:</p> <ul> <li> <p>
     * <code>route53resolver:GetResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:AssociateResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:DisassociateResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:ListResolverRules</code> </p> </li> <li> <p>
     * <code>route53resolver:ListResolverRuleAssociations</code> </p> </li> </ul> <p>In
     * the <code>Resource</code> section of the statement, you specify the ARNs for the
     * rules that you want to share with the account that you specified in
     * <code>Arn</code>. </p>
     */
    inline PutResolverRulePolicyRequest& WithResolverRulePolicy(Aws::String&& value) { SetResolverRulePolicy(std::move(value)); return *this;}

    /**
     * <p>An AWS Identity and Access Management policy statement that lists the rules
     * that you want to share with another AWS account and the operations that you want
     * the account to be able to perform. You can specify the following operations in
     * the <code>Actions</code> section of the statement:</p> <ul> <li> <p>
     * <code>route53resolver:GetResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:AssociateResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:DisassociateResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:ListResolverRules</code> </p> </li> <li> <p>
     * <code>route53resolver:ListResolverRuleAssociations</code> </p> </li> </ul> <p>In
     * the <code>Resource</code> section of the statement, you specify the ARNs for the
     * rules that you want to share with the account that you specified in
     * <code>Arn</code>. </p>
     */
    inline PutResolverRulePolicyRequest& WithResolverRulePolicy(const char* value) { SetResolverRulePolicy(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_resolverRulePolicy;
    bool m_resolverRulePolicyHasBeenSet;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
