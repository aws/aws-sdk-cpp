/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/ResolverRuleConfig.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class UpdateResolverRuleRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API UpdateResolverRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResolverRule"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Resolver rule that you want to update.</p>
     */
    inline const Aws::String& GetResolverRuleId() const{ return m_resolverRuleId; }

    /**
     * <p>The ID of the Resolver rule that you want to update.</p>
     */
    inline bool ResolverRuleIdHasBeenSet() const { return m_resolverRuleIdHasBeenSet; }

    /**
     * <p>The ID of the Resolver rule that you want to update.</p>
     */
    inline void SetResolverRuleId(const Aws::String& value) { m_resolverRuleIdHasBeenSet = true; m_resolverRuleId = value; }

    /**
     * <p>The ID of the Resolver rule that you want to update.</p>
     */
    inline void SetResolverRuleId(Aws::String&& value) { m_resolverRuleIdHasBeenSet = true; m_resolverRuleId = std::move(value); }

    /**
     * <p>The ID of the Resolver rule that you want to update.</p>
     */
    inline void SetResolverRuleId(const char* value) { m_resolverRuleIdHasBeenSet = true; m_resolverRuleId.assign(value); }

    /**
     * <p>The ID of the Resolver rule that you want to update.</p>
     */
    inline UpdateResolverRuleRequest& WithResolverRuleId(const Aws::String& value) { SetResolverRuleId(value); return *this;}

    /**
     * <p>The ID of the Resolver rule that you want to update.</p>
     */
    inline UpdateResolverRuleRequest& WithResolverRuleId(Aws::String&& value) { SetResolverRuleId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Resolver rule that you want to update.</p>
     */
    inline UpdateResolverRuleRequest& WithResolverRuleId(const char* value) { SetResolverRuleId(value); return *this;}


    /**
     * <p>The new settings for the Resolver rule.</p>
     */
    inline const ResolverRuleConfig& GetConfig() const{ return m_config; }

    /**
     * <p>The new settings for the Resolver rule.</p>
     */
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }

    /**
     * <p>The new settings for the Resolver rule.</p>
     */
    inline void SetConfig(const ResolverRuleConfig& value) { m_configHasBeenSet = true; m_config = value; }

    /**
     * <p>The new settings for the Resolver rule.</p>
     */
    inline void SetConfig(ResolverRuleConfig&& value) { m_configHasBeenSet = true; m_config = std::move(value); }

    /**
     * <p>The new settings for the Resolver rule.</p>
     */
    inline UpdateResolverRuleRequest& WithConfig(const ResolverRuleConfig& value) { SetConfig(value); return *this;}

    /**
     * <p>The new settings for the Resolver rule.</p>
     */
    inline UpdateResolverRuleRequest& WithConfig(ResolverRuleConfig&& value) { SetConfig(std::move(value)); return *this;}

  private:

    Aws::String m_resolverRuleId;
    bool m_resolverRuleIdHasBeenSet = false;

    ResolverRuleConfig m_config;
    bool m_configHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
