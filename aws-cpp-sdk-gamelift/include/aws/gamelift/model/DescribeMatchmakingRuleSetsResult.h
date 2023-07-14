﻿/**
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
  /**
   * <p>Represents the returned data in response to a request
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeMatchmakingRuleSetsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API DescribeMatchmakingRuleSetsResult
  {
  public:
    DescribeMatchmakingRuleSetsResult();
    DescribeMatchmakingRuleSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeMatchmakingRuleSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of requested matchmaking rule set objects. </p>
     */
    inline const Aws::Vector<MatchmakingRuleSet>& GetRuleSets() const{ return m_ruleSets; }

    /**
     * <p>A collection of requested matchmaking rule set objects. </p>
     */
    inline void SetRuleSets(const Aws::Vector<MatchmakingRuleSet>& value) { m_ruleSets = value; }

    /**
     * <p>A collection of requested matchmaking rule set objects. </p>
     */
    inline void SetRuleSets(Aws::Vector<MatchmakingRuleSet>&& value) { m_ruleSets = std::move(value); }

    /**
     * <p>A collection of requested matchmaking rule set objects. </p>
     */
    inline DescribeMatchmakingRuleSetsResult& WithRuleSets(const Aws::Vector<MatchmakingRuleSet>& value) { SetRuleSets(value); return *this;}

    /**
     * <p>A collection of requested matchmaking rule set objects. </p>
     */
    inline DescribeMatchmakingRuleSetsResult& WithRuleSets(Aws::Vector<MatchmakingRuleSet>&& value) { SetRuleSets(std::move(value)); return *this;}

    /**
     * <p>A collection of requested matchmaking rule set objects. </p>
     */
    inline DescribeMatchmakingRuleSetsResult& AddRuleSets(const MatchmakingRuleSet& value) { m_ruleSets.push_back(value); return *this; }

    /**
     * <p>A collection of requested matchmaking rule set objects. </p>
     */
    inline DescribeMatchmakingRuleSetsResult& AddRuleSets(MatchmakingRuleSet&& value) { m_ruleSets.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeMatchmakingRuleSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeMatchmakingRuleSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeMatchmakingRuleSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MatchmakingRuleSet> m_ruleSets;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
