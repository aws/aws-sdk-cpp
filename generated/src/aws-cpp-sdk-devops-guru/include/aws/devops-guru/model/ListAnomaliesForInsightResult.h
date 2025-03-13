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
    AWS_DEVOPSGURU_API ListAnomaliesForInsightResult() = default;
    AWS_DEVOPSGURU_API ListAnomaliesForInsightResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API ListAnomaliesForInsightResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An array of <code>ProactiveAnomalySummary</code> objects that represent the
     * requested anomalies </p>
     */
    inline const Aws::Vector<ProactiveAnomalySummary>& GetProactiveAnomalies() const { return m_proactiveAnomalies; }
    template<typename ProactiveAnomaliesT = Aws::Vector<ProactiveAnomalySummary>>
    void SetProactiveAnomalies(ProactiveAnomaliesT&& value) { m_proactiveAnomaliesHasBeenSet = true; m_proactiveAnomalies = std::forward<ProactiveAnomaliesT>(value); }
    template<typename ProactiveAnomaliesT = Aws::Vector<ProactiveAnomalySummary>>
    ListAnomaliesForInsightResult& WithProactiveAnomalies(ProactiveAnomaliesT&& value) { SetProactiveAnomalies(std::forward<ProactiveAnomaliesT>(value)); return *this;}
    template<typename ProactiveAnomaliesT = ProactiveAnomalySummary>
    ListAnomaliesForInsightResult& AddProactiveAnomalies(ProactiveAnomaliesT&& value) { m_proactiveAnomaliesHasBeenSet = true; m_proactiveAnomalies.emplace_back(std::forward<ProactiveAnomaliesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of <code>ReactiveAnomalySummary</code> objects that represent the
     * requested anomalies </p>
     */
    inline const Aws::Vector<ReactiveAnomalySummary>& GetReactiveAnomalies() const { return m_reactiveAnomalies; }
    template<typename ReactiveAnomaliesT = Aws::Vector<ReactiveAnomalySummary>>
    void SetReactiveAnomalies(ReactiveAnomaliesT&& value) { m_reactiveAnomaliesHasBeenSet = true; m_reactiveAnomalies = std::forward<ReactiveAnomaliesT>(value); }
    template<typename ReactiveAnomaliesT = Aws::Vector<ReactiveAnomalySummary>>
    ListAnomaliesForInsightResult& WithReactiveAnomalies(ReactiveAnomaliesT&& value) { SetReactiveAnomalies(std::forward<ReactiveAnomaliesT>(value)); return *this;}
    template<typename ReactiveAnomaliesT = ReactiveAnomalySummary>
    ListAnomaliesForInsightResult& AddReactiveAnomalies(ReactiveAnomaliesT&& value) { m_reactiveAnomaliesHasBeenSet = true; m_reactiveAnomalies.emplace_back(std::forward<ReactiveAnomaliesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAnomaliesForInsightResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAnomaliesForInsightResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProactiveAnomalySummary> m_proactiveAnomalies;
    bool m_proactiveAnomaliesHasBeenSet = false;

    Aws::Vector<ReactiveAnomalySummary> m_reactiveAnomalies;
    bool m_reactiveAnomaliesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
