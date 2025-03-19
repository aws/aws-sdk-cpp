/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/PrivacyBudgetSummary.h>
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
namespace CleanRooms
{
namespace Model
{
  class ListPrivacyBudgetsResult
  {
  public:
    AWS_CLEANROOMS_API ListPrivacyBudgetsResult() = default;
    AWS_CLEANROOMS_API ListPrivacyBudgetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListPrivacyBudgetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array that summarizes the privacy budgets. The summary includes
     * collaboration information, membership information, privacy budget template
     * information, and privacy budget details.</p>
     */
    inline const Aws::Vector<PrivacyBudgetSummary>& GetPrivacyBudgetSummaries() const { return m_privacyBudgetSummaries; }
    template<typename PrivacyBudgetSummariesT = Aws::Vector<PrivacyBudgetSummary>>
    void SetPrivacyBudgetSummaries(PrivacyBudgetSummariesT&& value) { m_privacyBudgetSummariesHasBeenSet = true; m_privacyBudgetSummaries = std::forward<PrivacyBudgetSummariesT>(value); }
    template<typename PrivacyBudgetSummariesT = Aws::Vector<PrivacyBudgetSummary>>
    ListPrivacyBudgetsResult& WithPrivacyBudgetSummaries(PrivacyBudgetSummariesT&& value) { SetPrivacyBudgetSummaries(std::forward<PrivacyBudgetSummariesT>(value)); return *this;}
    template<typename PrivacyBudgetSummariesT = PrivacyBudgetSummary>
    ListPrivacyBudgetsResult& AddPrivacyBudgetSummaries(PrivacyBudgetSummariesT&& value) { m_privacyBudgetSummariesHasBeenSet = true; m_privacyBudgetSummaries.emplace_back(std::forward<PrivacyBudgetSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPrivacyBudgetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPrivacyBudgetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PrivacyBudgetSummary> m_privacyBudgetSummaries;
    bool m_privacyBudgetSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
