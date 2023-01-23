/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/ProactiveAnomalySummary.h>
#include <aws/devops-guru/model/ReactiveAnomalySummary.h>
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
  class ListAnomaliesForInsightResult
  {
  public:
    AWS_DEVOPSGURU_API ListAnomaliesForInsightResult();
    AWS_DEVOPSGURU_API ListAnomaliesForInsightResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API ListAnomaliesForInsightResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> An array of <code>ProactiveAnomalySummary</code> objects that represent the
     * requested anomalies </p>
     */
    inline const Aws::Vector<ProactiveAnomalySummary>& GetProactiveAnomalies() const{ return m_proactiveAnomalies; }

    /**
     * <p> An array of <code>ProactiveAnomalySummary</code> objects that represent the
     * requested anomalies </p>
     */
    inline void SetProactiveAnomalies(const Aws::Vector<ProactiveAnomalySummary>& value) { m_proactiveAnomalies = value; }

    /**
     * <p> An array of <code>ProactiveAnomalySummary</code> objects that represent the
     * requested anomalies </p>
     */
    inline void SetProactiveAnomalies(Aws::Vector<ProactiveAnomalySummary>&& value) { m_proactiveAnomalies = std::move(value); }

    /**
     * <p> An array of <code>ProactiveAnomalySummary</code> objects that represent the
     * requested anomalies </p>
     */
    inline ListAnomaliesForInsightResult& WithProactiveAnomalies(const Aws::Vector<ProactiveAnomalySummary>& value) { SetProactiveAnomalies(value); return *this;}

    /**
     * <p> An array of <code>ProactiveAnomalySummary</code> objects that represent the
     * requested anomalies </p>
     */
    inline ListAnomaliesForInsightResult& WithProactiveAnomalies(Aws::Vector<ProactiveAnomalySummary>&& value) { SetProactiveAnomalies(std::move(value)); return *this;}

    /**
     * <p> An array of <code>ProactiveAnomalySummary</code> objects that represent the
     * requested anomalies </p>
     */
    inline ListAnomaliesForInsightResult& AddProactiveAnomalies(const ProactiveAnomalySummary& value) { m_proactiveAnomalies.push_back(value); return *this; }

    /**
     * <p> An array of <code>ProactiveAnomalySummary</code> objects that represent the
     * requested anomalies </p>
     */
    inline ListAnomaliesForInsightResult& AddProactiveAnomalies(ProactiveAnomalySummary&& value) { m_proactiveAnomalies.push_back(std::move(value)); return *this; }


    /**
     * <p> An array of <code>ReactiveAnomalySummary</code> objects that represent the
     * requested anomalies </p>
     */
    inline const Aws::Vector<ReactiveAnomalySummary>& GetReactiveAnomalies() const{ return m_reactiveAnomalies; }

    /**
     * <p> An array of <code>ReactiveAnomalySummary</code> objects that represent the
     * requested anomalies </p>
     */
    inline void SetReactiveAnomalies(const Aws::Vector<ReactiveAnomalySummary>& value) { m_reactiveAnomalies = value; }

    /**
     * <p> An array of <code>ReactiveAnomalySummary</code> objects that represent the
     * requested anomalies </p>
     */
    inline void SetReactiveAnomalies(Aws::Vector<ReactiveAnomalySummary>&& value) { m_reactiveAnomalies = std::move(value); }

    /**
     * <p> An array of <code>ReactiveAnomalySummary</code> objects that represent the
     * requested anomalies </p>
     */
    inline ListAnomaliesForInsightResult& WithReactiveAnomalies(const Aws::Vector<ReactiveAnomalySummary>& value) { SetReactiveAnomalies(value); return *this;}

    /**
     * <p> An array of <code>ReactiveAnomalySummary</code> objects that represent the
     * requested anomalies </p>
     */
    inline ListAnomaliesForInsightResult& WithReactiveAnomalies(Aws::Vector<ReactiveAnomalySummary>&& value) { SetReactiveAnomalies(std::move(value)); return *this;}

    /**
     * <p> An array of <code>ReactiveAnomalySummary</code> objects that represent the
     * requested anomalies </p>
     */
    inline ListAnomaliesForInsightResult& AddReactiveAnomalies(const ReactiveAnomalySummary& value) { m_reactiveAnomalies.push_back(value); return *this; }

    /**
     * <p> An array of <code>ReactiveAnomalySummary</code> objects that represent the
     * requested anomalies </p>
     */
    inline ListAnomaliesForInsightResult& AddReactiveAnomalies(ReactiveAnomalySummary&& value) { m_reactiveAnomalies.push_back(std::move(value)); return *this; }


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
    inline ListAnomaliesForInsightResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListAnomaliesForInsightResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListAnomaliesForInsightResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ProactiveAnomalySummary> m_proactiveAnomalies;

    Aws::Vector<ReactiveAnomalySummary> m_reactiveAnomalies;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
