/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/ResolverQueryLogConfig.h>
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
  class ListResolverQueryLogConfigsResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListResolverQueryLogConfigsResult();
    AWS_ROUTE53RESOLVER_API ListResolverQueryLogConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListResolverQueryLogConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If there are more than <code>MaxResults</code> query logging configurations,
     * you can submit another <code>ListResolverQueryLogConfigs</code> request to get
     * the next group of configurations. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more than <code>MaxResults</code> query logging configurations,
     * you can submit another <code>ListResolverQueryLogConfigs</code> request to get
     * the next group of configurations. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more than <code>MaxResults</code> query logging configurations,
     * you can submit another <code>ListResolverQueryLogConfigs</code> request to get
     * the next group of configurations. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more than <code>MaxResults</code> query logging configurations,
     * you can submit another <code>ListResolverQueryLogConfigs</code> request to get
     * the next group of configurations. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more than <code>MaxResults</code> query logging configurations,
     * you can submit another <code>ListResolverQueryLogConfigs</code> request to get
     * the next group of configurations. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline ListResolverQueryLogConfigsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more than <code>MaxResults</code> query logging configurations,
     * you can submit another <code>ListResolverQueryLogConfigs</code> request to get
     * the next group of configurations. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline ListResolverQueryLogConfigsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more than <code>MaxResults</code> query logging configurations,
     * you can submit another <code>ListResolverQueryLogConfigs</code> request to get
     * the next group of configurations. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline ListResolverQueryLogConfigsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The total number of query logging configurations that were created by the
     * current account in the specified Region. This count can differ from the number
     * of query logging configurations that are returned in a
     * <code>ListResolverQueryLogConfigs</code> response, depending on the values that
     * you specify in the request.</p>
     */
    inline int GetTotalCount() const{ return m_totalCount; }

    /**
     * <p>The total number of query logging configurations that were created by the
     * current account in the specified Region. This count can differ from the number
     * of query logging configurations that are returned in a
     * <code>ListResolverQueryLogConfigs</code> response, depending on the values that
     * you specify in the request.</p>
     */
    inline void SetTotalCount(int value) { m_totalCount = value; }

    /**
     * <p>The total number of query logging configurations that were created by the
     * current account in the specified Region. This count can differ from the number
     * of query logging configurations that are returned in a
     * <code>ListResolverQueryLogConfigs</code> response, depending on the values that
     * you specify in the request.</p>
     */
    inline ListResolverQueryLogConfigsResult& WithTotalCount(int value) { SetTotalCount(value); return *this;}


    /**
     * <p>The total number of query logging configurations that were created by the
     * current account in the specified Region and that match the filters that were
     * specified in the <code>ListResolverQueryLogConfigs</code> request. For the total
     * number of query logging configurations that were created by the current account
     * in the specified Region, see <code>TotalCount</code>.</p>
     */
    inline int GetTotalFilteredCount() const{ return m_totalFilteredCount; }

    /**
     * <p>The total number of query logging configurations that were created by the
     * current account in the specified Region and that match the filters that were
     * specified in the <code>ListResolverQueryLogConfigs</code> request. For the total
     * number of query logging configurations that were created by the current account
     * in the specified Region, see <code>TotalCount</code>.</p>
     */
    inline void SetTotalFilteredCount(int value) { m_totalFilteredCount = value; }

    /**
     * <p>The total number of query logging configurations that were created by the
     * current account in the specified Region and that match the filters that were
     * specified in the <code>ListResolverQueryLogConfigs</code> request. For the total
     * number of query logging configurations that were created by the current account
     * in the specified Region, see <code>TotalCount</code>.</p>
     */
    inline ListResolverQueryLogConfigsResult& WithTotalFilteredCount(int value) { SetTotalFilteredCount(value); return *this;}


    /**
     * <p>A list that contains one <code>ResolverQueryLogConfig</code> element for each
     * query logging configuration that matches the values that you specified for
     * <code>Filter</code>.</p>
     */
    inline const Aws::Vector<ResolverQueryLogConfig>& GetResolverQueryLogConfigs() const{ return m_resolverQueryLogConfigs; }

    /**
     * <p>A list that contains one <code>ResolverQueryLogConfig</code> element for each
     * query logging configuration that matches the values that you specified for
     * <code>Filter</code>.</p>
     */
    inline void SetResolverQueryLogConfigs(const Aws::Vector<ResolverQueryLogConfig>& value) { m_resolverQueryLogConfigs = value; }

    /**
     * <p>A list that contains one <code>ResolverQueryLogConfig</code> element for each
     * query logging configuration that matches the values that you specified for
     * <code>Filter</code>.</p>
     */
    inline void SetResolverQueryLogConfigs(Aws::Vector<ResolverQueryLogConfig>&& value) { m_resolverQueryLogConfigs = std::move(value); }

    /**
     * <p>A list that contains one <code>ResolverQueryLogConfig</code> element for each
     * query logging configuration that matches the values that you specified for
     * <code>Filter</code>.</p>
     */
    inline ListResolverQueryLogConfigsResult& WithResolverQueryLogConfigs(const Aws::Vector<ResolverQueryLogConfig>& value) { SetResolverQueryLogConfigs(value); return *this;}

    /**
     * <p>A list that contains one <code>ResolverQueryLogConfig</code> element for each
     * query logging configuration that matches the values that you specified for
     * <code>Filter</code>.</p>
     */
    inline ListResolverQueryLogConfigsResult& WithResolverQueryLogConfigs(Aws::Vector<ResolverQueryLogConfig>&& value) { SetResolverQueryLogConfigs(std::move(value)); return *this;}

    /**
     * <p>A list that contains one <code>ResolverQueryLogConfig</code> element for each
     * query logging configuration that matches the values that you specified for
     * <code>Filter</code>.</p>
     */
    inline ListResolverQueryLogConfigsResult& AddResolverQueryLogConfigs(const ResolverQueryLogConfig& value) { m_resolverQueryLogConfigs.push_back(value); return *this; }

    /**
     * <p>A list that contains one <code>ResolverQueryLogConfig</code> element for each
     * query logging configuration that matches the values that you specified for
     * <code>Filter</code>.</p>
     */
    inline ListResolverQueryLogConfigsResult& AddResolverQueryLogConfigs(ResolverQueryLogConfig&& value) { m_resolverQueryLogConfigs.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    int m_totalCount;

    int m_totalFilteredCount;

    Aws::Vector<ResolverQueryLogConfig> m_resolverQueryLogConfigs;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
