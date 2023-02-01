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
  class ListInsightsResult
  {
  public:
    AWS_DEVOPSGURU_API ListInsightsResult();
    AWS_DEVOPSGURU_API ListInsightsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API ListInsightsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The returned list of proactive insights. </p>
     */
    inline const Aws::Vector<ProactiveInsightSummary>& GetProactiveInsights() const{ return m_proactiveInsights; }

    /**
     * <p> The returned list of proactive insights. </p>
     */
    inline void SetProactiveInsights(const Aws::Vector<ProactiveInsightSummary>& value) { m_proactiveInsights = value; }

    /**
     * <p> The returned list of proactive insights. </p>
     */
    inline void SetProactiveInsights(Aws::Vector<ProactiveInsightSummary>&& value) { m_proactiveInsights = std::move(value); }

    /**
     * <p> The returned list of proactive insights. </p>
     */
    inline ListInsightsResult& WithProactiveInsights(const Aws::Vector<ProactiveInsightSummary>& value) { SetProactiveInsights(value); return *this;}

    /**
     * <p> The returned list of proactive insights. </p>
     */
    inline ListInsightsResult& WithProactiveInsights(Aws::Vector<ProactiveInsightSummary>&& value) { SetProactiveInsights(std::move(value)); return *this;}

    /**
     * <p> The returned list of proactive insights. </p>
     */
    inline ListInsightsResult& AddProactiveInsights(const ProactiveInsightSummary& value) { m_proactiveInsights.push_back(value); return *this; }

    /**
     * <p> The returned list of proactive insights. </p>
     */
    inline ListInsightsResult& AddProactiveInsights(ProactiveInsightSummary&& value) { m_proactiveInsights.push_back(std::move(value)); return *this; }


    /**
     * <p> The returned list of reactive insights. </p>
     */
    inline const Aws::Vector<ReactiveInsightSummary>& GetReactiveInsights() const{ return m_reactiveInsights; }

    /**
     * <p> The returned list of reactive insights. </p>
     */
    inline void SetReactiveInsights(const Aws::Vector<ReactiveInsightSummary>& value) { m_reactiveInsights = value; }

    /**
     * <p> The returned list of reactive insights. </p>
     */
    inline void SetReactiveInsights(Aws::Vector<ReactiveInsightSummary>&& value) { m_reactiveInsights = std::move(value); }

    /**
     * <p> The returned list of reactive insights. </p>
     */
    inline ListInsightsResult& WithReactiveInsights(const Aws::Vector<ReactiveInsightSummary>& value) { SetReactiveInsights(value); return *this;}

    /**
     * <p> The returned list of reactive insights. </p>
     */
    inline ListInsightsResult& WithReactiveInsights(Aws::Vector<ReactiveInsightSummary>&& value) { SetReactiveInsights(std::move(value)); return *this;}

    /**
     * <p> The returned list of reactive insights. </p>
     */
    inline ListInsightsResult& AddReactiveInsights(const ReactiveInsightSummary& value) { m_reactiveInsights.push_back(value); return *this; }

    /**
     * <p> The returned list of reactive insights. </p>
     */
    inline ListInsightsResult& AddReactiveInsights(ReactiveInsightSummary&& value) { m_reactiveInsights.push_back(std::move(value)); return *this; }


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
    inline ListInsightsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListInsightsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListInsightsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ProactiveInsightSummary> m_proactiveInsights;

    Aws::Vector<ReactiveInsightSummary> m_reactiveInsights;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
