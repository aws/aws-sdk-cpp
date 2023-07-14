﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/IpAddressResponse.h>
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
  class AWS_ROUTE53RESOLVER_API ListResolverEndpointIpAddressesResult
  {
  public:
    ListResolverEndpointIpAddressesResult();
    ListResolverEndpointIpAddressesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListResolverEndpointIpAddressesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If the specified endpoint has more than <code>MaxResults</code> IP addresses,
     * you can submit another <code>ListResolverEndpointIpAddresses</code> request to
     * get the next group of IP addresses. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the specified endpoint has more than <code>MaxResults</code> IP addresses,
     * you can submit another <code>ListResolverEndpointIpAddresses</code> request to
     * get the next group of IP addresses. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the specified endpoint has more than <code>MaxResults</code> IP addresses,
     * you can submit another <code>ListResolverEndpointIpAddresses</code> request to
     * get the next group of IP addresses. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the specified endpoint has more than <code>MaxResults</code> IP addresses,
     * you can submit another <code>ListResolverEndpointIpAddresses</code> request to
     * get the next group of IP addresses. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the specified endpoint has more than <code>MaxResults</code> IP addresses,
     * you can submit another <code>ListResolverEndpointIpAddresses</code> request to
     * get the next group of IP addresses. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline ListResolverEndpointIpAddressesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the specified endpoint has more than <code>MaxResults</code> IP addresses,
     * you can submit another <code>ListResolverEndpointIpAddresses</code> request to
     * get the next group of IP addresses. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline ListResolverEndpointIpAddressesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the specified endpoint has more than <code>MaxResults</code> IP addresses,
     * you can submit another <code>ListResolverEndpointIpAddresses</code> request to
     * get the next group of IP addresses. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline ListResolverEndpointIpAddressesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The value that you specified for <code>MaxResults</code> in the request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The value that you specified for <code>MaxResults</code> in the request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResults = value; }

    /**
     * <p>The value that you specified for <code>MaxResults</code> in the request.</p>
     */
    inline ListResolverEndpointIpAddressesResult& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Information about the IP addresses in your VPC that DNS queries originate
     * from (for outbound endpoints) or that you forward DNS queries to (for inbound
     * endpoints).</p>
     */
    inline const Aws::Vector<IpAddressResponse>& GetIpAddresses() const{ return m_ipAddresses; }

    /**
     * <p>Information about the IP addresses in your VPC that DNS queries originate
     * from (for outbound endpoints) or that you forward DNS queries to (for inbound
     * endpoints).</p>
     */
    inline void SetIpAddresses(const Aws::Vector<IpAddressResponse>& value) { m_ipAddresses = value; }

    /**
     * <p>Information about the IP addresses in your VPC that DNS queries originate
     * from (for outbound endpoints) or that you forward DNS queries to (for inbound
     * endpoints).</p>
     */
    inline void SetIpAddresses(Aws::Vector<IpAddressResponse>&& value) { m_ipAddresses = std::move(value); }

    /**
     * <p>Information about the IP addresses in your VPC that DNS queries originate
     * from (for outbound endpoints) or that you forward DNS queries to (for inbound
     * endpoints).</p>
     */
    inline ListResolverEndpointIpAddressesResult& WithIpAddresses(const Aws::Vector<IpAddressResponse>& value) { SetIpAddresses(value); return *this;}

    /**
     * <p>Information about the IP addresses in your VPC that DNS queries originate
     * from (for outbound endpoints) or that you forward DNS queries to (for inbound
     * endpoints).</p>
     */
    inline ListResolverEndpointIpAddressesResult& WithIpAddresses(Aws::Vector<IpAddressResponse>&& value) { SetIpAddresses(std::move(value)); return *this;}

    /**
     * <p>Information about the IP addresses in your VPC that DNS queries originate
     * from (for outbound endpoints) or that you forward DNS queries to (for inbound
     * endpoints).</p>
     */
    inline ListResolverEndpointIpAddressesResult& AddIpAddresses(const IpAddressResponse& value) { m_ipAddresses.push_back(value); return *this; }

    /**
     * <p>Information about the IP addresses in your VPC that DNS queries originate
     * from (for outbound endpoints) or that you forward DNS queries to (for inbound
     * endpoints).</p>
     */
    inline ListResolverEndpointIpAddressesResult& AddIpAddresses(IpAddressResponse&& value) { m_ipAddresses.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    int m_maxResults;

    Aws::Vector<IpAddressResponse> m_ipAddresses;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
