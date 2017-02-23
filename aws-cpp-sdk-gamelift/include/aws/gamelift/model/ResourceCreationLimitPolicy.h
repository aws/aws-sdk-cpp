/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>

namespace Aws
{
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
   * <p>Policy that limits the number of game sessions a player can create on the
   * same fleet. This optional policy gives game owners control over how players can
   * consume available game server resources. A resource creation policy makes the
   * following statement: "An individual player can create a maximum number of new
   * game sessions within a specified time period".</p> <p>The policy is evaluated
   * when a player tries to create a new game session. For example, with a policy of
   * 10 new game sessions and a time period of 60 minutes, on receiving a
   * <code>CreateGameSession</code> request, Amazon GameLift checks that the player
   * (identified by <code>CreatorId</code>) has created fewer than 10 game sessions
   * in the past 60 minutes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ResourceCreationLimitPolicy">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API ResourceCreationLimitPolicy
  {
  public:
    ResourceCreationLimitPolicy();
    ResourceCreationLimitPolicy(const Aws::Utils::Json::JsonValue& jsonValue);
    ResourceCreationLimitPolicy& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Maximum number of game sessions that an individual can create during the
     * policy period. </p>
     */
    inline int GetNewGameSessionsPerCreator() const{ return m_newGameSessionsPerCreator; }

    /**
     * <p>Maximum number of game sessions that an individual can create during the
     * policy period. </p>
     */
    inline void SetNewGameSessionsPerCreator(int value) { m_newGameSessionsPerCreatorHasBeenSet = true; m_newGameSessionsPerCreator = value; }

    /**
     * <p>Maximum number of game sessions that an individual can create during the
     * policy period. </p>
     */
    inline ResourceCreationLimitPolicy& WithNewGameSessionsPerCreator(int value) { SetNewGameSessionsPerCreator(value); return *this;}

    /**
     * <p>Time span used in evaluating the resource creation limit policy. </p>
     */
    inline int GetPolicyPeriodInMinutes() const{ return m_policyPeriodInMinutes; }

    /**
     * <p>Time span used in evaluating the resource creation limit policy. </p>
     */
    inline void SetPolicyPeriodInMinutes(int value) { m_policyPeriodInMinutesHasBeenSet = true; m_policyPeriodInMinutes = value; }

    /**
     * <p>Time span used in evaluating the resource creation limit policy. </p>
     */
    inline ResourceCreationLimitPolicy& WithPolicyPeriodInMinutes(int value) { SetPolicyPeriodInMinutes(value); return *this;}

  private:
    int m_newGameSessionsPerCreator;
    bool m_newGameSessionsPerCreatorHasBeenSet;
    int m_policyPeriodInMinutes;
    bool m_policyPeriodInMinutesHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
