﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/ResolverQueryLogConfigAssociation.h>
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
  class AWS_ROUTE53RESOLVER_API AssociateResolverQueryLogConfigResult
  {
  public:
    AssociateResolverQueryLogConfigResult();
    AssociateResolverQueryLogConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AssociateResolverQueryLogConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A complex type that contains settings for a specified association between an
     * Amazon VPC and a query logging configuration.</p>
     */
    inline const ResolverQueryLogConfigAssociation& GetResolverQueryLogConfigAssociation() const{ return m_resolverQueryLogConfigAssociation; }

    /**
     * <p>A complex type that contains settings for a specified association between an
     * Amazon VPC and a query logging configuration.</p>
     */
    inline void SetResolverQueryLogConfigAssociation(const ResolverQueryLogConfigAssociation& value) { m_resolverQueryLogConfigAssociation = value; }

    /**
     * <p>A complex type that contains settings for a specified association between an
     * Amazon VPC and a query logging configuration.</p>
     */
    inline void SetResolverQueryLogConfigAssociation(ResolverQueryLogConfigAssociation&& value) { m_resolverQueryLogConfigAssociation = std::move(value); }

    /**
     * <p>A complex type that contains settings for a specified association between an
     * Amazon VPC and a query logging configuration.</p>
     */
    inline AssociateResolverQueryLogConfigResult& WithResolverQueryLogConfigAssociation(const ResolverQueryLogConfigAssociation& value) { SetResolverQueryLogConfigAssociation(value); return *this;}

    /**
     * <p>A complex type that contains settings for a specified association between an
     * Amazon VPC and a query logging configuration.</p>
     */
    inline AssociateResolverQueryLogConfigResult& WithResolverQueryLogConfigAssociation(ResolverQueryLogConfigAssociation&& value) { SetResolverQueryLogConfigAssociation(std::move(value)); return *this;}

  private:

    ResolverQueryLogConfigAssociation m_resolverQueryLogConfigAssociation;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
