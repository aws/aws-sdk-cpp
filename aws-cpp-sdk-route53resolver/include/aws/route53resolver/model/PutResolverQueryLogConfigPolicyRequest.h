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
  class PutResolverQueryLogConfigPolicyRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API PutResolverQueryLogConfigPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResolverQueryLogConfigPolicy"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline PutResolverQueryLogConfigPolicyRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to share rules
     * with.</p>
     */
    inline PutResolverQueryLogConfigPolicyRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to share rules
     * with.</p>
     */
    inline PutResolverQueryLogConfigPolicyRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>An Identity and Access Management policy statement that lists the query
     * logging configurations that you want to share with another Amazon Web Services
     * account and the operations that you want the account to be able to perform. You
     * can specify the following operations in the <code>Actions</code> section of the
     * statement:</p> <ul> <li> <p>
     * <code>route53resolver:AssociateResolverQueryLogConfig</code> </p> </li> <li> <p>
     * <code>route53resolver:DisassociateResolverQueryLogConfig</code> </p> </li> <li>
     * <p> <code>route53resolver:ListResolverQueryLogConfigAssociations</code> </p>
     * </li> <li> <p> <code>route53resolver:ListResolverQueryLogConfigs</code> </p>
     * </li> </ul> <p>In the <code>Resource</code> section of the statement, you
     * specify the ARNs for the query logging configurations that you want to share
     * with the account that you specified in <code>Arn</code>. </p>
     */
    inline const Aws::String& GetResolverQueryLogConfigPolicy() const{ return m_resolverQueryLogConfigPolicy; }

    /**
     * <p>An Identity and Access Management policy statement that lists the query
     * logging configurations that you want to share with another Amazon Web Services
     * account and the operations that you want the account to be able to perform. You
     * can specify the following operations in the <code>Actions</code> section of the
     * statement:</p> <ul> <li> <p>
     * <code>route53resolver:AssociateResolverQueryLogConfig</code> </p> </li> <li> <p>
     * <code>route53resolver:DisassociateResolverQueryLogConfig</code> </p> </li> <li>
     * <p> <code>route53resolver:ListResolverQueryLogConfigAssociations</code> </p>
     * </li> <li> <p> <code>route53resolver:ListResolverQueryLogConfigs</code> </p>
     * </li> </ul> <p>In the <code>Resource</code> section of the statement, you
     * specify the ARNs for the query logging configurations that you want to share
     * with the account that you specified in <code>Arn</code>. </p>
     */
    inline bool ResolverQueryLogConfigPolicyHasBeenSet() const { return m_resolverQueryLogConfigPolicyHasBeenSet; }

    /**
     * <p>An Identity and Access Management policy statement that lists the query
     * logging configurations that you want to share with another Amazon Web Services
     * account and the operations that you want the account to be able to perform. You
     * can specify the following operations in the <code>Actions</code> section of the
     * statement:</p> <ul> <li> <p>
     * <code>route53resolver:AssociateResolverQueryLogConfig</code> </p> </li> <li> <p>
     * <code>route53resolver:DisassociateResolverQueryLogConfig</code> </p> </li> <li>
     * <p> <code>route53resolver:ListResolverQueryLogConfigAssociations</code> </p>
     * </li> <li> <p> <code>route53resolver:ListResolverQueryLogConfigs</code> </p>
     * </li> </ul> <p>In the <code>Resource</code> section of the statement, you
     * specify the ARNs for the query logging configurations that you want to share
     * with the account that you specified in <code>Arn</code>. </p>
     */
    inline void SetResolverQueryLogConfigPolicy(const Aws::String& value) { m_resolverQueryLogConfigPolicyHasBeenSet = true; m_resolverQueryLogConfigPolicy = value; }

    /**
     * <p>An Identity and Access Management policy statement that lists the query
     * logging configurations that you want to share with another Amazon Web Services
     * account and the operations that you want the account to be able to perform. You
     * can specify the following operations in the <code>Actions</code> section of the
     * statement:</p> <ul> <li> <p>
     * <code>route53resolver:AssociateResolverQueryLogConfig</code> </p> </li> <li> <p>
     * <code>route53resolver:DisassociateResolverQueryLogConfig</code> </p> </li> <li>
     * <p> <code>route53resolver:ListResolverQueryLogConfigAssociations</code> </p>
     * </li> <li> <p> <code>route53resolver:ListResolverQueryLogConfigs</code> </p>
     * </li> </ul> <p>In the <code>Resource</code> section of the statement, you
     * specify the ARNs for the query logging configurations that you want to share
     * with the account that you specified in <code>Arn</code>. </p>
     */
    inline void SetResolverQueryLogConfigPolicy(Aws::String&& value) { m_resolverQueryLogConfigPolicyHasBeenSet = true; m_resolverQueryLogConfigPolicy = std::move(value); }

    /**
     * <p>An Identity and Access Management policy statement that lists the query
     * logging configurations that you want to share with another Amazon Web Services
     * account and the operations that you want the account to be able to perform. You
     * can specify the following operations in the <code>Actions</code> section of the
     * statement:</p> <ul> <li> <p>
     * <code>route53resolver:AssociateResolverQueryLogConfig</code> </p> </li> <li> <p>
     * <code>route53resolver:DisassociateResolverQueryLogConfig</code> </p> </li> <li>
     * <p> <code>route53resolver:ListResolverQueryLogConfigAssociations</code> </p>
     * </li> <li> <p> <code>route53resolver:ListResolverQueryLogConfigs</code> </p>
     * </li> </ul> <p>In the <code>Resource</code> section of the statement, you
     * specify the ARNs for the query logging configurations that you want to share
     * with the account that you specified in <code>Arn</code>. </p>
     */
    inline void SetResolverQueryLogConfigPolicy(const char* value) { m_resolverQueryLogConfigPolicyHasBeenSet = true; m_resolverQueryLogConfigPolicy.assign(value); }

    /**
     * <p>An Identity and Access Management policy statement that lists the query
     * logging configurations that you want to share with another Amazon Web Services
     * account and the operations that you want the account to be able to perform. You
     * can specify the following operations in the <code>Actions</code> section of the
     * statement:</p> <ul> <li> <p>
     * <code>route53resolver:AssociateResolverQueryLogConfig</code> </p> </li> <li> <p>
     * <code>route53resolver:DisassociateResolverQueryLogConfig</code> </p> </li> <li>
     * <p> <code>route53resolver:ListResolverQueryLogConfigAssociations</code> </p>
     * </li> <li> <p> <code>route53resolver:ListResolverQueryLogConfigs</code> </p>
     * </li> </ul> <p>In the <code>Resource</code> section of the statement, you
     * specify the ARNs for the query logging configurations that you want to share
     * with the account that you specified in <code>Arn</code>. </p>
     */
    inline PutResolverQueryLogConfigPolicyRequest& WithResolverQueryLogConfigPolicy(const Aws::String& value) { SetResolverQueryLogConfigPolicy(value); return *this;}

    /**
     * <p>An Identity and Access Management policy statement that lists the query
     * logging configurations that you want to share with another Amazon Web Services
     * account and the operations that you want the account to be able to perform. You
     * can specify the following operations in the <code>Actions</code> section of the
     * statement:</p> <ul> <li> <p>
     * <code>route53resolver:AssociateResolverQueryLogConfig</code> </p> </li> <li> <p>
     * <code>route53resolver:DisassociateResolverQueryLogConfig</code> </p> </li> <li>
     * <p> <code>route53resolver:ListResolverQueryLogConfigAssociations</code> </p>
     * </li> <li> <p> <code>route53resolver:ListResolverQueryLogConfigs</code> </p>
     * </li> </ul> <p>In the <code>Resource</code> section of the statement, you
     * specify the ARNs for the query logging configurations that you want to share
     * with the account that you specified in <code>Arn</code>. </p>
     */
    inline PutResolverQueryLogConfigPolicyRequest& WithResolverQueryLogConfigPolicy(Aws::String&& value) { SetResolverQueryLogConfigPolicy(std::move(value)); return *this;}

    /**
     * <p>An Identity and Access Management policy statement that lists the query
     * logging configurations that you want to share with another Amazon Web Services
     * account and the operations that you want the account to be able to perform. You
     * can specify the following operations in the <code>Actions</code> section of the
     * statement:</p> <ul> <li> <p>
     * <code>route53resolver:AssociateResolverQueryLogConfig</code> </p> </li> <li> <p>
     * <code>route53resolver:DisassociateResolverQueryLogConfig</code> </p> </li> <li>
     * <p> <code>route53resolver:ListResolverQueryLogConfigAssociations</code> </p>
     * </li> <li> <p> <code>route53resolver:ListResolverQueryLogConfigs</code> </p>
     * </li> </ul> <p>In the <code>Resource</code> section of the statement, you
     * specify the ARNs for the query logging configurations that you want to share
     * with the account that you specified in <code>Arn</code>. </p>
     */
    inline PutResolverQueryLogConfigPolicyRequest& WithResolverQueryLogConfigPolicy(const char* value) { SetResolverQueryLogConfigPolicy(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_resolverQueryLogConfigPolicy;
    bool m_resolverQueryLogConfigPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
