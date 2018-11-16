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
#include <aws/route53resolver/model/ResolverRule.h>
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
  class AWS_ROUTE53RESOLVER_API DeleteResolverRuleResult
  {
  public:
    DeleteResolverRuleResult();
    DeleteResolverRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteResolverRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the <code>DeleteResolverRule</code> request, including the
     * status of the request.</p>
     */
    inline const ResolverRule& GetResolverRule() const{ return m_resolverRule; }

    /**
     * <p>Information about the <code>DeleteResolverRule</code> request, including the
     * status of the request.</p>
     */
    inline void SetResolverRule(const ResolverRule& value) { m_resolverRule = value; }

    /**
     * <p>Information about the <code>DeleteResolverRule</code> request, including the
     * status of the request.</p>
     */
    inline void SetResolverRule(ResolverRule&& value) { m_resolverRule = std::move(value); }

    /**
     * <p>Information about the <code>DeleteResolverRule</code> request, including the
     * status of the request.</p>
     */
    inline DeleteResolverRuleResult& WithResolverRule(const ResolverRule& value) { SetResolverRule(value); return *this;}

    /**
     * <p>Information about the <code>DeleteResolverRule</code> request, including the
     * status of the request.</p>
     */
    inline DeleteResolverRuleResult& WithResolverRule(ResolverRule&& value) { SetResolverRule(std::move(value)); return *this;}

  private:

    ResolverRule m_resolverRule;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
