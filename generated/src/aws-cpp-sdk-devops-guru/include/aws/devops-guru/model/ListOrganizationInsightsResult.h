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
    AWS_DEVOPSGURU_API ListOrganizationInsightsResult() = default;
    AWS_DEVOPSGURU_API ListOrganizationInsightsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API ListOrganizationInsightsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account.</p>
     */
    inline const Aws::Vector<ProactiveOrganizationInsightSummary>& GetProactiveInsights() const { return m_proactiveInsights; }
    template<typename ProactiveInsightsT = Aws::Vector<ProactiveOrganizationInsightSummary>>
    void SetProactiveInsights(ProactiveInsightsT&& value) { m_proactiveInsightsHasBeenSet = true; m_proactiveInsights = std::forward<ProactiveInsightsT>(value); }
    template<typename ProactiveInsightsT = Aws::Vector<ProactiveOrganizationInsightSummary>>
    ListOrganizationInsightsResult& WithProactiveInsights(ProactiveInsightsT&& value) { SetProactiveInsights(std::forward<ProactiveInsightsT>(value)); return *this;}
    template<typename ProactiveInsightsT = ProactiveOrganizationInsightSummary>
    ListOrganizationInsightsResult& AddProactiveInsights(ProactiveInsightsT&& value) { m_proactiveInsightsHasBeenSet = true; m_proactiveInsights.emplace_back(std::forward<ProactiveInsightsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An integer that specifies the number of open reactive insights in your Amazon
     * Web Services account.</p>
     */
    inline const Aws::Vector<ReactiveOrganizationInsightSummary>& GetReactiveInsights() const { return m_reactiveInsights; }
    template<typename ReactiveInsightsT = Aws::Vector<ReactiveOrganizationInsightSummary>>
    void SetReactiveInsights(ReactiveInsightsT&& value) { m_reactiveInsightsHasBeenSet = true; m_reactiveInsights = std::forward<ReactiveInsightsT>(value); }
    template<typename ReactiveInsightsT = Aws::Vector<ReactiveOrganizationInsightSummary>>
    ListOrganizationInsightsResult& WithReactiveInsights(ReactiveInsightsT&& value) { SetReactiveInsights(std::forward<ReactiveInsightsT>(value)); return *this;}
    template<typename ReactiveInsightsT = ReactiveOrganizationInsightSummary>
    ListOrganizationInsightsResult& AddReactiveInsights(ReactiveInsightsT&& value) { m_reactiveInsightsHasBeenSet = true; m_reactiveInsights.emplace_back(std::forward<ReactiveInsightsT>(value)); return *this; }
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
    ListOrganizationInsightsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOrganizationInsightsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProactiveOrganizationInsightSummary> m_proactiveInsights;
    bool m_proactiveInsightsHasBeenSet = false;

    Aws::Vector<ReactiveOrganizationInsightSummary> m_reactiveInsights;
    bool m_reactiveInsightsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
