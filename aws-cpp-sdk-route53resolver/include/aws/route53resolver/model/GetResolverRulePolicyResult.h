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
     * <p>Information about the resolver rule policy that you specified in a
     * <code>GetResolverRulePolicy</code> request.</p>
     */
    inline const Aws::String& GetResolverRulePolicy() const{ return m_resolverRulePolicy; }

    /**
     * <p>Information about the resolver rule policy that you specified in a
     * <code>GetResolverRulePolicy</code> request.</p>
     */
    inline void SetResolverRulePolicy(const Aws::String& value) { m_resolverRulePolicy = value; }

    /**
     * <p>Information about the resolver rule policy that you specified in a
     * <code>GetResolverRulePolicy</code> request.</p>
     */
    inline void SetResolverRulePolicy(Aws::String&& value) { m_resolverRulePolicy = std::move(value); }

    /**
     * <p>Information about the resolver rule policy that you specified in a
     * <code>GetResolverRulePolicy</code> request.</p>
     */
    inline void SetResolverRulePolicy(const char* value) { m_resolverRulePolicy.assign(value); }

    /**
     * <p>Information about the resolver rule policy that you specified in a
     * <code>GetResolverRulePolicy</code> request.</p>
     */
    inline GetResolverRulePolicyResult& WithResolverRulePolicy(const Aws::String& value) { SetResolverRulePolicy(value); return *this;}

    /**
     * <p>Information about the resolver rule policy that you specified in a
     * <code>GetResolverRulePolicy</code> request.</p>
     */
    inline GetResolverRulePolicyResult& WithResolverRulePolicy(Aws::String&& value) { SetResolverRulePolicy(std::move(value)); return *this;}

    /**
     * <p>Information about the resolver rule policy that you specified in a
     * <code>GetResolverRulePolicy</code> request.</p>
     */
    inline GetResolverRulePolicyResult& WithResolverRulePolicy(const char* value) { SetResolverRulePolicy(value); return *this;}

  private:

    Aws::String m_resolverRulePolicy;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
