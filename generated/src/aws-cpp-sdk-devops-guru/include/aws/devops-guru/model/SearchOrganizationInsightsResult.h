/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/ProactiveInsightSummary.h>
#include <aws/devops-guru/model/ReactiveInsightSummary.h>
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
namespace DevOpsGuru
{
namespace Model
{
  class SearchOrganizationInsightsResult
  {
  public:
    AWS_DEVOPSGURU_API SearchOrganizationInsightsResult();
    AWS_DEVOPSGURU_API SearchOrganizationInsightsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API SearchOrganizationInsightsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account.</p>
     */
    inline const Aws::Vector<ProactiveInsightSummary>& GetProactiveInsights() const{ return m_proactiveInsights; }

    /**
     * <p>An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account.</p>
     */
    inline void SetProactiveInsights(const Aws::Vector<ProactiveInsightSummary>& value) { m_proactiveInsights = value; }

    /**
     * <p>An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account.</p>
     */
    inline void SetProactiveInsights(Aws::Vector<ProactiveInsightSummary>&& value) { m_proactiveInsights = std::move(value); }

    /**
     * <p>An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account.</p>
     */
    inline SearchOrganizationInsightsResult& WithProactiveInsights(const Aws::Vector<ProactiveInsightSummary>& value) { SetProactiveInsights(value); return *this;}

    /**
     * <p>An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account.</p>
     */
    inline SearchOrganizationInsightsResult& WithProactiveInsights(Aws::Vector<ProactiveInsightSummary>&& value) { SetProactiveInsights(std::move(value)); return *this;}

    /**
     * <p>An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account.</p>
     */
    inline SearchOrganizationInsightsResult& AddProactiveInsights(const ProactiveInsightSummary& value) { m_proactiveInsights.push_back(value); return *this; }

    /**
     * <p>An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account.</p>
     */
    inline SearchOrganizationInsightsResult& AddProactiveInsights(ProactiveInsightSummary&& value) { m_proactiveInsights.push_back(std::move(value)); return *this; }


    /**
     * <p>An integer that specifies the number of open reactive insights in your Amazon
     * Web Services account.</p>
     */
    inline const Aws::Vector<ReactiveInsightSummary>& GetReactiveInsights() const{ return m_reactiveInsights; }

    /**
     * <p>An integer that specifies the number of open reactive insights in your Amazon
     * Web Services account.</p>
     */
    inline void SetReactiveInsights(const Aws::Vector<ReactiveInsightSummary>& value) { m_reactiveInsights = value; }

    /**
     * <p>An integer that specifies the number of open reactive insights in your Amazon
     * Web Services account.</p>
     */
    inline void SetReactiveInsights(Aws::Vector<ReactiveInsightSummary>&& value) { m_reactiveInsights = std::move(value); }

    /**
     * <p>An integer that specifies the number of open reactive insights in your Amazon
     * Web Services account.</p>
     */
    inline SearchOrganizationInsightsResult& WithReactiveInsights(const Aws::Vector<ReactiveInsightSummary>& value) { SetReactiveInsights(value); return *this;}

    /**
     * <p>An integer that specifies the number of open reactive insights in your Amazon
     * Web Services account.</p>
     */
    inline SearchOrganizationInsightsResult& WithReactiveInsights(Aws::Vector<ReactiveInsightSummary>&& value) { SetReactiveInsights(std::move(value)); return *this;}

    /**
     * <p>An integer that specifies the number of open reactive insights in your Amazon
     * Web Services account.</p>
     */
    inline SearchOrganizationInsightsResult& AddReactiveInsights(const ReactiveInsightSummary& value) { m_reactiveInsights.push_back(value); return *this; }

    /**
     * <p>An integer that specifies the number of open reactive insights in your Amazon
     * Web Services account.</p>
     */
    inline SearchOrganizationInsightsResult& AddReactiveInsights(ReactiveInsightSummary&& value) { m_reactiveInsights.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline SearchOrganizationInsightsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline SearchOrganizationInsightsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline SearchOrganizationInsightsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ProactiveInsightSummary> m_proactiveInsights;

    Aws::Vector<ReactiveInsightSummary> m_reactiveInsights;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
