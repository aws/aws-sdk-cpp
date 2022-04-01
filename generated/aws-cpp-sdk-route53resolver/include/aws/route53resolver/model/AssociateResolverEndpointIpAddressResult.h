﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/ResolverEndpoint.h>
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
  class AWS_ROUTE53RESOLVER_API AssociateResolverEndpointIpAddressResult
  {
  public:
    AssociateResolverEndpointIpAddressResult();
    AssociateResolverEndpointIpAddressResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AssociateResolverEndpointIpAddressResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The response to an <code>AssociateResolverEndpointIpAddress</code>
     * request.</p>
     */
    inline const ResolverEndpoint& GetResolverEndpoint() const{ return m_resolverEndpoint; }

    /**
     * <p>The response to an <code>AssociateResolverEndpointIpAddress</code>
     * request.</p>
     */
    inline void SetResolverEndpoint(const ResolverEndpoint& value) { m_resolverEndpoint = value; }

    /**
     * <p>The response to an <code>AssociateResolverEndpointIpAddress</code>
     * request.</p>
     */
    inline void SetResolverEndpoint(ResolverEndpoint&& value) { m_resolverEndpoint = std::move(value); }

    /**
     * <p>The response to an <code>AssociateResolverEndpointIpAddress</code>
     * request.</p>
     */
    inline AssociateResolverEndpointIpAddressResult& WithResolverEndpoint(const ResolverEndpoint& value) { SetResolverEndpoint(value); return *this;}

    /**
     * <p>The response to an <code>AssociateResolverEndpointIpAddress</code>
     * request.</p>
     */
    inline AssociateResolverEndpointIpAddressResult& WithResolverEndpoint(ResolverEndpoint&& value) { SetResolverEndpoint(std::move(value)); return *this;}

  private:

    ResolverEndpoint m_resolverEndpoint;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
