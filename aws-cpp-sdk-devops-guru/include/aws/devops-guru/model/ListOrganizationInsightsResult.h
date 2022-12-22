/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/ProactiveOrganizationInsightSummary.h>
#include <aws/devops-guru/model/ReactiveOrganizationInsightSummary.h>
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
  class ListOrganizationInsightsResult
  {
  public:
    AWS_DEVOPSGURU_API ListOrganizationInsightsResult();
    AWS_DEVOPSGURU_API ListOrganizationInsightsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API ListOrganizationInsightsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account.</p>
     */
    inline const Aws::Vector<ProactiveOrganizationInsightSummary>& GetProactiveInsights() const{ return m_proactiveInsights; }

    /**
     * <p>An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account.</p>
     */
    inline void SetProactiveInsights(const Aws::Vector<ProactiveOrganizationInsightSummary>& value) { m_proactiveInsights = value; }

    /**
     * <p>An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account.</p>
     */
    inline void SetProactiveInsights(Aws::Vector<ProactiveOrganizationInsightSummary>&& value) { m_proactiveInsights = std::move(value); }

    /**
     * <p>An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account.</p>
     */
    inline ListOrganizationInsightsResult& WithProactiveInsights(const Aws::Vector<ProactiveOrganizationInsightSummary>& value) { SetProactiveInsights(value); return *this;}

    /**
     * <p>An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account.</p>
     */
    inline ListOrganizationInsightsResult& WithProactiveInsights(Aws::Vector<ProactiveOrganizationInsightSummary>&& value) { SetProactiveInsights(std::move(value)); return *this;}

    /**
     * <p>An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account.</p>
     */
    inline ListOrganizationInsightsResult& AddProactiveInsights(const ProactiveOrganizationInsightSummary& value) { m_proactiveInsights.push_back(value); return *this; }

    /**
     * <p>An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account.</p>
     */
    inline ListOrganizationInsightsResult& AddProactiveInsights(ProactiveOrganizationInsightSummary&& value) { m_proactiveInsights.push_back(std::move(value)); return *this; }


    /**
     * <p>An integer that specifies the number of open reactive insights in your Amazon
     * Web Services account.</p>
     */
    inline const Aws::Vector<ReactiveOrganizationInsightSummary>& GetReactiveInsights() const{ return m_reactiveInsights; }

    /**
     * <p>An integer that specifies the number of open reactive insights in your Amazon
     * Web Services account.</p>
     */
    inline void SetReactiveInsights(const Aws::Vector<ReactiveOrganizationInsightSummary>& value) { m_reactiveInsights = value; }

    /**
     * <p>An integer that specifies the number of open reactive insights in your Amazon
     * Web Services account.</p>
     */
    inline void SetReactiveInsights(Aws::Vector<ReactiveOrganizationInsightSummary>&& value) { m_reactiveInsights = std::move(value); }

    /**
     * <p>An integer that specifies the number of open reactive insights in your Amazon
     * Web Services account.</p>
     */
    inline ListOrganizationInsightsResult& WithReactiveInsights(const Aws::Vector<ReactiveOrganizationInsightSummary>& value) { SetReactiveInsights(value); return *this;}

    /**
     * <p>An integer that specifies the number of open reactive insights in your Amazon
     * Web Services account.</p>
     */
    inline ListOrganizationInsightsResult& WithReactiveInsights(Aws::Vector<ReactiveOrganizationInsightSummary>&& value) { SetReactiveInsights(std::move(value)); return *this;}

    /**
     * <p>An integer that specifies the number of open reactive insights in your Amazon
     * Web Services account.</p>
     */
    inline ListOrganizationInsightsResult& AddReactiveInsights(const ReactiveOrganizationInsightSummary& value) { m_reactiveInsights.push_back(value); return *this; }

    /**
     * <p>An integer that specifies the number of open reactive insights in your Amazon
     * Web Services account.</p>
     */
    inline ListOrganizationInsightsResult& AddReactiveInsights(ReactiveOrganizationInsightSummary&& value) { m_reactiveInsights.push_back(std::move(value)); return *this; }


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
    inline ListOrganizationInsightsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListOrganizationInsightsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListOrganizationInsightsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ProactiveOrganizationInsightSummary> m_proactiveInsights;

    Aws::Vector<ReactiveOrganizationInsightSummary> m_reactiveInsights;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
