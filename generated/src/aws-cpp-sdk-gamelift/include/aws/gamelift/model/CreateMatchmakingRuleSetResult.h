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
    AWS_GAMELIFT_API CreateMatchmakingRuleSetResult();
    AWS_GAMELIFT_API CreateMatchmakingRuleSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API CreateMatchmakingRuleSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The newly created matchmaking rule set.</p>
     */
    inline const MatchmakingRuleSet& GetRuleSet() const{ return m_ruleSet; }
    inline void SetRuleSet(const MatchmakingRuleSet& value) { m_ruleSet = value; }
    inline void SetRuleSet(MatchmakingRuleSet&& value) { m_ruleSet = std::move(value); }
    inline CreateMatchmakingRuleSetResult& WithRuleSet(const MatchmakingRuleSet& value) { SetRuleSet(value); return *this;}
    inline CreateMatchmakingRuleSetResult& WithRuleSet(MatchmakingRuleSet&& value) { SetRuleSet(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateMatchmakingRuleSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateMatchmakingRuleSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateMatchmakingRuleSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    MatchmakingRuleSet m_ruleSet;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
