/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ContributorInsightsSummary.h>
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
namespace DynamoDB
{
namespace Model
{
  class ListContributorInsightsResult
  {
  public:
    AWS_DYNAMODB_API ListContributorInsightsResult() = default;
    AWS_DYNAMODB_API ListContributorInsightsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API ListContributorInsightsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of ContributorInsightsSummary.</p>
     */
    inline const Aws::Vector<ContributorInsightsSummary>& GetContributorInsightsSummaries() const { return m_contributorInsightsSummaries; }
    template<typename ContributorInsightsSummariesT = Aws::Vector<ContributorInsightsSummary>>
    void SetContributorInsightsSummaries(ContributorInsightsSummariesT&& value) { m_contributorInsightsSummariesHasBeenSet = true; m_contributorInsightsSummaries = std::forward<ContributorInsightsSummariesT>(value); }
    template<typename ContributorInsightsSummariesT = Aws::Vector<ContributorInsightsSummary>>
    ListContributorInsightsResult& WithContributorInsightsSummaries(ContributorInsightsSummariesT&& value) { SetContributorInsightsSummaries(std::forward<ContributorInsightsSummariesT>(value)); return *this;}
    template<typename ContributorInsightsSummariesT = ContributorInsightsSummary>
    ListContributorInsightsResult& AddContributorInsightsSummaries(ContributorInsightsSummariesT&& value) { m_contributorInsightsSummariesHasBeenSet = true; m_contributorInsightsSummaries.emplace_back(std::forward<ContributorInsightsSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to go to the next page if there is one.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListContributorInsightsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListContributorInsightsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ContributorInsightsSummary> m_contributorInsightsSummaries;
    bool m_contributorInsightsSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
