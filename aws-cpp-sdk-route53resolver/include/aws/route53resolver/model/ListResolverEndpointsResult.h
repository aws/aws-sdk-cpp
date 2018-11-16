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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_ROUTE53RESOLVER_API ListResolverEndpointsResult
  {
  public:
    ListResolverEndpointsResult();
    ListResolverEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListResolverEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If more than <code>MaxResults</code> IP addresses match the specified
     * criteria, you can submit another <code>ListResolverEndpoint</code> request to
     * get the next group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If more than <code>MaxResults</code> IP addresses match the specified
     * criteria, you can submit another <code>ListResolverEndpoint</code> request to
     * get the next group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If more than <code>MaxResults</code> IP addresses match the specified
     * criteria, you can submit another <code>ListResolverEndpoint</code> request to
     * get the next group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If more than <code>MaxResults</code> IP addresses match the specified
     * criteria, you can submit another <code>ListResolverEndpoint</code> request to
     * get the next group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If more than <code>MaxResults</code> IP addresses match the specified
     * criteria, you can submit another <code>ListResolverEndpoint</code> request to
     * get the next group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline ListResolverEndpointsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If more than <code>MaxResults</code> IP addresses match the specified
     * criteria, you can submit another <code>ListResolverEndpoint</code> request to
     * get the next group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline ListResolverEndpointsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If more than <code>MaxResults</code> IP addresses match the specified
     * criteria, you can submit another <code>ListResolverEndpoint</code> request to
     * get the next group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline ListResolverEndpointsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListResolverEndpointsResult& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The resolver endpoints that were created by using the current AWS account,
     * and that match the specified filters, if any.</p>
     */
    inline const Aws::Vector<ResolverEndpoint>& GetResolverEndpoints() const{ return m_resolverEndpoints; }

    /**
     * <p>The resolver endpoints that were created by using the current AWS account,
     * and that match the specified filters, if any.</p>
     */
    inline void SetResolverEndpoints(const Aws::Vector<ResolverEndpoint>& value) { m_resolverEndpoints = value; }

    /**
     * <p>The resolver endpoints that were created by using the current AWS account,
     * and that match the specified filters, if any.</p>
     */
    inline void SetResolverEndpoints(Aws::Vector<ResolverEndpoint>&& value) { m_resolverEndpoints = std::move(value); }

    /**
     * <p>The resolver endpoints that were created by using the current AWS account,
     * and that match the specified filters, if any.</p>
     */
    inline ListResolverEndpointsResult& WithResolverEndpoints(const Aws::Vector<ResolverEndpoint>& value) { SetResolverEndpoints(value); return *this;}

    /**
     * <p>The resolver endpoints that were created by using the current AWS account,
     * and that match the specified filters, if any.</p>
     */
    inline ListResolverEndpointsResult& WithResolverEndpoints(Aws::Vector<ResolverEndpoint>&& value) { SetResolverEndpoints(std::move(value)); return *this;}

    /**
     * <p>The resolver endpoints that were created by using the current AWS account,
     * and that match the specified filters, if any.</p>
     */
    inline ListResolverEndpointsResult& AddResolverEndpoints(const ResolverEndpoint& value) { m_resolverEndpoints.push_back(value); return *this; }

    /**
     * <p>The resolver endpoints that were created by using the current AWS account,
     * and that match the specified filters, if any.</p>
     */
    inline ListResolverEndpointsResult& AddResolverEndpoints(ResolverEndpoint&& value) { m_resolverEndpoints.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    int m_maxResults;

    Aws::Vector<ResolverEndpoint> m_resolverEndpoints;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
