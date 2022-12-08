/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/ResolverDnssecConfig.h>
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
  class ListResolverDnssecConfigsResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListResolverDnssecConfigsResult();
    AWS_ROUTE53RESOLVER_API ListResolverDnssecConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListResolverDnssecConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If a response includes the last of the DNSSEC configurations that are
     * associated with the current Amazon Web Services account, <code>NextToken</code>
     * doesn't appear in the response.</p> <p>If a response doesn't include the last of
     * the configurations, you can get more configurations by submitting another <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListResolverDnssecConfigs.html">ListResolverDnssecConfigs</a>
     * request. Get the value of <code>NextToken</code> that Amazon Route 53 returned
     * in the previous response and include it in <code>NextToken</code> in the next
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If a response includes the last of the DNSSEC configurations that are
     * associated with the current Amazon Web Services account, <code>NextToken</code>
     * doesn't appear in the response.</p> <p>If a response doesn't include the last of
     * the configurations, you can get more configurations by submitting another <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListResolverDnssecConfigs.html">ListResolverDnssecConfigs</a>
     * request. Get the value of <code>NextToken</code> that Amazon Route 53 returned
     * in the previous response and include it in <code>NextToken</code> in the next
     * request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If a response includes the last of the DNSSEC configurations that are
     * associated with the current Amazon Web Services account, <code>NextToken</code>
     * doesn't appear in the response.</p> <p>If a response doesn't include the last of
     * the configurations, you can get more configurations by submitting another <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListResolverDnssecConfigs.html">ListResolverDnssecConfigs</a>
     * request. Get the value of <code>NextToken</code> that Amazon Route 53 returned
     * in the previous response and include it in <code>NextToken</code> in the next
     * request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If a response includes the last of the DNSSEC configurations that are
     * associated with the current Amazon Web Services account, <code>NextToken</code>
     * doesn't appear in the response.</p> <p>If a response doesn't include the last of
     * the configurations, you can get more configurations by submitting another <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListResolverDnssecConfigs.html">ListResolverDnssecConfigs</a>
     * request. Get the value of <code>NextToken</code> that Amazon Route 53 returned
     * in the previous response and include it in <code>NextToken</code> in the next
     * request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If a response includes the last of the DNSSEC configurations that are
     * associated with the current Amazon Web Services account, <code>NextToken</code>
     * doesn't appear in the response.</p> <p>If a response doesn't include the last of
     * the configurations, you can get more configurations by submitting another <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListResolverDnssecConfigs.html">ListResolverDnssecConfigs</a>
     * request. Get the value of <code>NextToken</code> that Amazon Route 53 returned
     * in the previous response and include it in <code>NextToken</code> in the next
     * request.</p>
     */
    inline ListResolverDnssecConfigsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If a response includes the last of the DNSSEC configurations that are
     * associated with the current Amazon Web Services account, <code>NextToken</code>
     * doesn't appear in the response.</p> <p>If a response doesn't include the last of
     * the configurations, you can get more configurations by submitting another <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListResolverDnssecConfigs.html">ListResolverDnssecConfigs</a>
     * request. Get the value of <code>NextToken</code> that Amazon Route 53 returned
     * in the previous response and include it in <code>NextToken</code> in the next
     * request.</p>
     */
    inline ListResolverDnssecConfigsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If a response includes the last of the DNSSEC configurations that are
     * associated with the current Amazon Web Services account, <code>NextToken</code>
     * doesn't appear in the response.</p> <p>If a response doesn't include the last of
     * the configurations, you can get more configurations by submitting another <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListResolverDnssecConfigs.html">ListResolverDnssecConfigs</a>
     * request. Get the value of <code>NextToken</code> that Amazon Route 53 returned
     * in the previous response and include it in <code>NextToken</code> in the next
     * request.</p>
     */
    inline ListResolverDnssecConfigsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array that contains one <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ResolverDnssecConfig.html">ResolverDnssecConfig</a>
     * element for each configuration for DNSSEC validation that is associated with the
     * current Amazon Web Services account.</p>
     */
    inline const Aws::Vector<ResolverDnssecConfig>& GetResolverDnssecConfigs() const{ return m_resolverDnssecConfigs; }

    /**
     * <p>An array that contains one <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ResolverDnssecConfig.html">ResolverDnssecConfig</a>
     * element for each configuration for DNSSEC validation that is associated with the
     * current Amazon Web Services account.</p>
     */
    inline void SetResolverDnssecConfigs(const Aws::Vector<ResolverDnssecConfig>& value) { m_resolverDnssecConfigs = value; }

    /**
     * <p>An array that contains one <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ResolverDnssecConfig.html">ResolverDnssecConfig</a>
     * element for each configuration for DNSSEC validation that is associated with the
     * current Amazon Web Services account.</p>
     */
    inline void SetResolverDnssecConfigs(Aws::Vector<ResolverDnssecConfig>&& value) { m_resolverDnssecConfigs = std::move(value); }

    /**
     * <p>An array that contains one <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ResolverDnssecConfig.html">ResolverDnssecConfig</a>
     * element for each configuration for DNSSEC validation that is associated with the
     * current Amazon Web Services account.</p>
     */
    inline ListResolverDnssecConfigsResult& WithResolverDnssecConfigs(const Aws::Vector<ResolverDnssecConfig>& value) { SetResolverDnssecConfigs(value); return *this;}

    /**
     * <p>An array that contains one <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ResolverDnssecConfig.html">ResolverDnssecConfig</a>
     * element for each configuration for DNSSEC validation that is associated with the
     * current Amazon Web Services account.</p>
     */
    inline ListResolverDnssecConfigsResult& WithResolverDnssecConfigs(Aws::Vector<ResolverDnssecConfig>&& value) { SetResolverDnssecConfigs(std::move(value)); return *this;}

    /**
     * <p>An array that contains one <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ResolverDnssecConfig.html">ResolverDnssecConfig</a>
     * element for each configuration for DNSSEC validation that is associated with the
     * current Amazon Web Services account.</p>
     */
    inline ListResolverDnssecConfigsResult& AddResolverDnssecConfigs(const ResolverDnssecConfig& value) { m_resolverDnssecConfigs.push_back(value); return *this; }

    /**
     * <p>An array that contains one <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ResolverDnssecConfig.html">ResolverDnssecConfig</a>
     * element for each configuration for DNSSEC validation that is associated with the
     * current Amazon Web Services account.</p>
     */
    inline ListResolverDnssecConfigsResult& AddResolverDnssecConfigs(ResolverDnssecConfig&& value) { m_resolverDnssecConfigs.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ResolverDnssecConfig> m_resolverDnssecConfigs;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
