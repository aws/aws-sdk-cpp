/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/MatchmakingRuleSet.h>
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
namespace GameLift
{
namespace Model
{
  class CreateMatchmakingRuleSetResult
  {
  public:
    AWS_GAMELIFT_API CreateMatchmakingRuleSetResult() = default;
    AWS_GAMELIFT_API CreateMatchmakingRuleSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API CreateMatchmakingRuleSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The newly created matchmaking rule set.</p>
     */
    inline const MatchmakingRuleSet& GetRuleSet() const { return m_ruleSet; }
    template<typename RuleSetT = MatchmakingRuleSet>
    void SetRuleSet(RuleSetT&& value) { m_ruleSetHasBeenSet = true; m_ruleSet = std::forward<RuleSetT>(value); }
    template<typename RuleSetT = MatchmakingRuleSet>
    CreateMatchmakingRuleSetResult& WithRuleSet(RuleSetT&& value) { SetRuleSet(std::forward<RuleSetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateMatchmakingRuleSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MatchmakingRuleSet m_ruleSet;
    bool m_ruleSetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
