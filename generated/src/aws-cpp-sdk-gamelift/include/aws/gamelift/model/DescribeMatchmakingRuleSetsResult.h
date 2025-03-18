/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/MatchmakingRuleSet.h>
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
namespace GameLift
{
namespace Model
{
  class DescribeMatchmakingRuleSetsResult
  {
  public:
    AWS_GAMELIFT_API DescribeMatchmakingRuleSetsResult() = default;
    AWS_GAMELIFT_API DescribeMatchmakingRuleSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeMatchmakingRuleSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of requested matchmaking rule set objects. </p>
     */
    inline const Aws::Vector<MatchmakingRuleSet>& GetRuleSets() const { return m_ruleSets; }
    template<typename RuleSetsT = Aws::Vector<MatchmakingRuleSet>>
    void SetRuleSets(RuleSetsT&& value) { m_ruleSetsHasBeenSet = true; m_ruleSets = std::forward<RuleSetsT>(value); }
    template<typename RuleSetsT = Aws::Vector<MatchmakingRuleSet>>
    DescribeMatchmakingRuleSetsResult& WithRuleSets(RuleSetsT&& value) { SetRuleSets(std::forward<RuleSetsT>(value)); return *this;}
    template<typename RuleSetsT = MatchmakingRuleSet>
    DescribeMatchmakingRuleSetsResult& AddRuleSets(RuleSetsT&& value) { m_ruleSetsHasBeenSet = true; m_ruleSets.emplace_back(std::forward<RuleSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeMatchmakingRuleSetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMatchmakingRuleSetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MatchmakingRuleSet> m_ruleSets;
    bool m_ruleSetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
