/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53Resolver
{
namespace Model
{
  class AWS_ROUTE53RESOLVER_API GetResolverRulePolicyResult
  {
  public:
    GetResolverRulePolicyResult();
    GetResolverRulePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetResolverRulePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the Resolver rule policy that you specified in a
     * <code>GetResolverRulePolicy</code> request.</p>
     */
    inline const Aws::String& GetResolverRulePolicy() const{ return m_resolverRulePolicy; }

    /**
     * <p>Information about the Resolver rule policy that you specified in a
     * <code>GetResolverRulePolicy</code> request.</p>
     */
    inline void SetResolverRulePolicy(const Aws::String& value) { m_resolverRulePolicy = value; }

    /**
     * <p>Information about the Resolver rule policy that you specified in a
     * <code>GetResolverRulePolicy</code> request.</p>
     */
    inline void SetResolverRulePolicy(Aws::String&& value) { m_resolverRulePolicy = std::move(value); }

    /**
     * <p>Information about the Resolver rule policy that you specified in a
     * <code>GetResolverRulePolicy</code> request.</p>
     */
    inline void SetResolverRulePolicy(const char* value) { m_resolverRulePolicy.assign(value); }

    /**
     * <p>Information about the Resolver rule policy that you specified in a
     * <code>GetResolverRulePolicy</code> request.</p>
     */
    inline GetResolverRulePolicyResult& WithResolverRulePolicy(const Aws::String& value) { SetResolverRulePolicy(value); return *this;}

    /**
     * <p>Information about the Resolver rule policy that you specified in a
     * <code>GetResolverRulePolicy</code> request.</p>
     */
    inline GetResolverRulePolicyResult& WithResolverRulePolicy(Aws::String&& value) { SetResolverRulePolicy(std::move(value)); return *this;}

    /**
     * <p>Information about the Resolver rule policy that you specified in a
     * <code>GetResolverRulePolicy</code> request.</p>
     */
    inline GetResolverRulePolicyResult& WithResolverRulePolicy(const char* value) { SetResolverRulePolicy(value); return *this;}

  private:

    Aws::String m_resolverRulePolicy;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
