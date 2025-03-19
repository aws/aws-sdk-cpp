/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/RuleSummary.h>
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
namespace Connect
{
namespace Model
{
  class ListRulesResult
  {
  public:
    AWS_CONNECT_API ListRulesResult() = default;
    AWS_CONNECT_API ListRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information about a rule.</p>
     */
    inline const Aws::Vector<RuleSummary>& GetRuleSummaryList() const { return m_ruleSummaryList; }
    template<typename RuleSummaryListT = Aws::Vector<RuleSummary>>
    void SetRuleSummaryList(RuleSummaryListT&& value) { m_ruleSummaryListHasBeenSet = true; m_ruleSummaryList = std::forward<RuleSummaryListT>(value); }
    template<typename RuleSummaryListT = Aws::Vector<RuleSummary>>
    ListRulesResult& WithRuleSummaryList(RuleSummaryListT&& value) { SetRuleSummaryList(std::forward<RuleSummaryListT>(value)); return *this;}
    template<typename RuleSummaryListT = RuleSummary>
    ListRulesResult& AddRuleSummaryList(RuleSummaryListT&& value) { m_ruleSummaryListHasBeenSet = true; m_ruleSummaryList.emplace_back(std::forward<RuleSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRulesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RuleSummary> m_ruleSummaryList;
    bool m_ruleSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
