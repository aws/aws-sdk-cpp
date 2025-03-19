/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class ListRuleBasedMatchesResult
  {
  public:
    AWS_CUSTOMERPROFILES_API ListRuleBasedMatchesResult() = default;
    AWS_CUSTOMERPROFILES_API ListRuleBasedMatchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API ListRuleBasedMatchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of <code>MatchIds</code> for the given domain.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchIds() const { return m_matchIds; }
    template<typename MatchIdsT = Aws::Vector<Aws::String>>
    void SetMatchIds(MatchIdsT&& value) { m_matchIdsHasBeenSet = true; m_matchIds = std::forward<MatchIdsT>(value); }
    template<typename MatchIdsT = Aws::Vector<Aws::String>>
    ListRuleBasedMatchesResult& WithMatchIds(MatchIdsT&& value) { SetMatchIds(std::forward<MatchIdsT>(value)); return *this;}
    template<typename MatchIdsT = Aws::String>
    ListRuleBasedMatchesResult& AddMatchIds(MatchIdsT&& value) { m_matchIdsHasBeenSet = true; m_matchIds.emplace_back(std::forward<MatchIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token from the previous <code>ListRuleBasedMatches</code> API
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRuleBasedMatchesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRuleBasedMatchesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_matchIds;
    bool m_matchIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
