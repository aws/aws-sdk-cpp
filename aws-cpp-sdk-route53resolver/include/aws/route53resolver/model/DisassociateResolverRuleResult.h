﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/ResolverRuleAssociation.h>
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
  class AWS_ROUTE53RESOLVER_API DisassociateResolverRuleResult
  {
  public:
    DisassociateResolverRuleResult();
    DisassociateResolverRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DisassociateResolverRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the <code>DisassociateResolverRule</code> request,
     * including the status of the request.</p>
     */
    inline const ResolverRuleAssociation& GetResolverRuleAssociation() const{ return m_resolverRuleAssociation; }

    /**
     * <p>Information about the <code>DisassociateResolverRule</code> request,
     * including the status of the request.</p>
     */
    inline void SetResolverRuleAssociation(const ResolverRuleAssociation& value) { m_resolverRuleAssociation = value; }

    /**
     * <p>Information about the <code>DisassociateResolverRule</code> request,
     * including the status of the request.</p>
     */
    inline void SetResolverRuleAssociation(ResolverRuleAssociation&& value) { m_resolverRuleAssociation = std::move(value); }

    /**
     * <p>Information about the <code>DisassociateResolverRule</code> request,
     * including the status of the request.</p>
     */
    inline DisassociateResolverRuleResult& WithResolverRuleAssociation(const ResolverRuleAssociation& value) { SetResolverRuleAssociation(value); return *this;}

    /**
     * <p>Information about the <code>DisassociateResolverRule</code> request,
     * including the status of the request.</p>
     */
    inline DisassociateResolverRuleResult& WithResolverRuleAssociation(ResolverRuleAssociation&& value) { SetResolverRuleAssociation(std::move(value)); return *this;}

  private:

    ResolverRuleAssociation m_resolverRuleAssociation;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
