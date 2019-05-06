/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
     * <p>The Amazon Resource Name (ARN) of the account that you want to grant
     * permissions to.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to grant
     * permissions to.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to grant
     * permissions to.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to grant
     * permissions to.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to grant
     * permissions to.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to grant
     * permissions to.</p>
     */
    inline PutResolverRulePolicyRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to grant
     * permissions to.</p>
     */
    inline PutResolverRulePolicyRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to grant
     * permissions to.</p>
     */
    inline PutResolverRulePolicyRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>An AWS Identity and Access Management policy statement that lists the
     * permissions that you want to grant to another AWS account.</p>
     */
    inline const Aws::String& GetResolverRulePolicy() const{ return m_resolverRulePolicy; }

    /**
     * <p>An AWS Identity and Access Management policy statement that lists the
     * permissions that you want to grant to another AWS account.</p>
     */
    inline bool ResolverRulePolicyHasBeenSet() const { return m_resolverRulePolicyHasBeenSet; }

    /**
     * <p>An AWS Identity and Access Management policy statement that lists the
     * permissions that you want to grant to another AWS account.</p>
     */
    inline void SetResolverRulePolicy(const Aws::String& value) { m_resolverRulePolicyHasBeenSet = true; m_resolverRulePolicy = value; }

    /**
     * <p>An AWS Identity and Access Management policy statement that lists the
     * permissions that you want to grant to another AWS account.</p>
     */
    inline void SetResolverRulePolicy(Aws::String&& value) { m_resolverRulePolicyHasBeenSet = true; m_resolverRulePolicy = std::move(value); }

    /**
     * <p>An AWS Identity and Access Management policy statement that lists the
     * permissions that you want to grant to another AWS account.</p>
     */
    inline void SetResolverRulePolicy(const char* value) { m_resolverRulePolicyHasBeenSet = true; m_resolverRulePolicy.assign(value); }

    /**
     * <p>An AWS Identity and Access Management policy statement that lists the
     * permissions that you want to grant to another AWS account.</p>
     */
    inline PutResolverRulePolicyRequest& WithResolverRulePolicy(const Aws::String& value) { SetResolverRulePolicy(value); return *this;}

    /**
     * <p>An AWS Identity and Access Management policy statement that lists the
     * permissions that you want to grant to another AWS account.</p>
     */
    inline PutResolverRulePolicyRequest& WithResolverRulePolicy(Aws::String&& value) { SetResolverRulePolicy(std::move(value)); return *this;}

    /**
     * <p>An AWS Identity and Access Management policy statement that lists the
     * permissions that you want to grant to another AWS account.</p>
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
