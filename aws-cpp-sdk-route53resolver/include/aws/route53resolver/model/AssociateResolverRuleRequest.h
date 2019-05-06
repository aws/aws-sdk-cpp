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
  class AWS_ROUTE53RESOLVER_API AssociateResolverRuleRequest : public Route53ResolverRequest
  {
  public:
    AssociateResolverRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateResolverRule"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the resolver rule that you want to associate with the VPC. To list
     * the existing resolver rules, use <a>ListResolverRules</a>.</p>
     */
    inline const Aws::String& GetResolverRuleId() const{ return m_resolverRuleId; }

    /**
     * <p>The ID of the resolver rule that you want to associate with the VPC. To list
     * the existing resolver rules, use <a>ListResolverRules</a>.</p>
     */
    inline bool ResolverRuleIdHasBeenSet() const { return m_resolverRuleIdHasBeenSet; }

    /**
     * <p>The ID of the resolver rule that you want to associate with the VPC. To list
     * the existing resolver rules, use <a>ListResolverRules</a>.</p>
     */
    inline void SetResolverRuleId(const Aws::String& value) { m_resolverRuleIdHasBeenSet = true; m_resolverRuleId = value; }

    /**
     * <p>The ID of the resolver rule that you want to associate with the VPC. To list
     * the existing resolver rules, use <a>ListResolverRules</a>.</p>
     */
    inline void SetResolverRuleId(Aws::String&& value) { m_resolverRuleIdHasBeenSet = true; m_resolverRuleId = std::move(value); }

    /**
     * <p>The ID of the resolver rule that you want to associate with the VPC. To list
     * the existing resolver rules, use <a>ListResolverRules</a>.</p>
     */
    inline void SetResolverRuleId(const char* value) { m_resolverRuleIdHasBeenSet = true; m_resolverRuleId.assign(value); }

    /**
     * <p>The ID of the resolver rule that you want to associate with the VPC. To list
     * the existing resolver rules, use <a>ListResolverRules</a>.</p>
     */
    inline AssociateResolverRuleRequest& WithResolverRuleId(const Aws::String& value) { SetResolverRuleId(value); return *this;}

    /**
     * <p>The ID of the resolver rule that you want to associate with the VPC. To list
     * the existing resolver rules, use <a>ListResolverRules</a>.</p>
     */
    inline AssociateResolverRuleRequest& WithResolverRuleId(Aws::String&& value) { SetResolverRuleId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resolver rule that you want to associate with the VPC. To list
     * the existing resolver rules, use <a>ListResolverRules</a>.</p>
     */
    inline AssociateResolverRuleRequest& WithResolverRuleId(const char* value) { SetResolverRuleId(value); return *this;}


    /**
     * <p>A name for the association that you're creating between a resolver rule and a
     * VPC.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the association that you're creating between a resolver rule and a
     * VPC.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the association that you're creating between a resolver rule and a
     * VPC.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the association that you're creating between a resolver rule and a
     * VPC.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the association that you're creating between a resolver rule and a
     * VPC.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the association that you're creating between a resolver rule and a
     * VPC.</p>
     */
    inline AssociateResolverRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the association that you're creating between a resolver rule and a
     * VPC.</p>
     */
    inline AssociateResolverRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the association that you're creating between a resolver rule and a
     * VPC.</p>
     */
    inline AssociateResolverRuleRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the VPC that you want to associate the resolver rule with.</p>
     */
    inline const Aws::String& GetVPCId() const{ return m_vPCId; }

    /**
     * <p>The ID of the VPC that you want to associate the resolver rule with.</p>
     */
    inline bool VPCIdHasBeenSet() const { return m_vPCIdHasBeenSet; }

    /**
     * <p>The ID of the VPC that you want to associate the resolver rule with.</p>
     */
    inline void SetVPCId(const Aws::String& value) { m_vPCIdHasBeenSet = true; m_vPCId = value; }

    /**
     * <p>The ID of the VPC that you want to associate the resolver rule with.</p>
     */
    inline void SetVPCId(Aws::String&& value) { m_vPCIdHasBeenSet = true; m_vPCId = std::move(value); }

    /**
     * <p>The ID of the VPC that you want to associate the resolver rule with.</p>
     */
    inline void SetVPCId(const char* value) { m_vPCIdHasBeenSet = true; m_vPCId.assign(value); }

    /**
     * <p>The ID of the VPC that you want to associate the resolver rule with.</p>
     */
    inline AssociateResolverRuleRequest& WithVPCId(const Aws::String& value) { SetVPCId(value); return *this;}

    /**
     * <p>The ID of the VPC that you want to associate the resolver rule with.</p>
     */
    inline AssociateResolverRuleRequest& WithVPCId(Aws::String&& value) { SetVPCId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC that you want to associate the resolver rule with.</p>
     */
    inline AssociateResolverRuleRequest& WithVPCId(const char* value) { SetVPCId(value); return *this;}

  private:

    Aws::String m_resolverRuleId;
    bool m_resolverRuleIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_vPCId;
    bool m_vPCIdHasBeenSet;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
