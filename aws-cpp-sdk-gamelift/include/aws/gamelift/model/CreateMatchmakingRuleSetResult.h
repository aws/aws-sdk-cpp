/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
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
  class CreateMatchmakingRuleSetResult
  {
  public:
    AWS_GAMELIFT_API CreateMatchmakingRuleSetResult();
    AWS_GAMELIFT_API CreateMatchmakingRuleSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API CreateMatchmakingRuleSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The newly created matchmaking rule set.</p>
     */
    inline const MatchmakingRuleSet& GetRuleSet() const{ return m_ruleSet; }

    /**
     * <p>The newly created matchmaking rule set.</p>
     */
    inline void SetRuleSet(const MatchmakingRuleSet& value) { m_ruleSet = value; }

    /**
     * <p>The newly created matchmaking rule set.</p>
     */
    inline void SetRuleSet(MatchmakingRuleSet&& value) { m_ruleSet = std::move(value); }

    /**
     * <p>The newly created matchmaking rule set.</p>
     */
    inline CreateMatchmakingRuleSetResult& WithRuleSet(const MatchmakingRuleSet& value) { SetRuleSet(value); return *this;}

    /**
     * <p>The newly created matchmaking rule set.</p>
     */
    inline CreateMatchmakingRuleSetResult& WithRuleSet(MatchmakingRuleSet&& value) { SetRuleSet(std::move(value)); return *this;}

  private:

    MatchmakingRuleSet m_ruleSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
