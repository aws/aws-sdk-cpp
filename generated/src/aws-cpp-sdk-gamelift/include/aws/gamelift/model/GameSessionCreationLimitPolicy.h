/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>A policy that puts limits on the number of game sessions that a player can
   * create within a specified span of time. With this policy, you can control
   * players' ability to consume available resources.</p> <p>The policy is evaluated
   * when a player tries to create a new game session. On receiving a
   * <code>CreateGameSession</code> request, Amazon GameLift checks that the player
   * (identified by <code>CreatorId</code>) has created fewer than game session limit
   * in the specified time period.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameSessionCreationLimitPolicy">AWS
   * API Reference</a></p>
   */
  class GameSessionCreationLimitPolicy
  {
  public:
    AWS_GAMELIFT_API GameSessionCreationLimitPolicy();
    AWS_GAMELIFT_API GameSessionCreationLimitPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API GameSessionCreationLimitPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A policy that puts limits on the number of game sessions that a player can
     * create within a specified span of time. With this policy, you can control
     * players' ability to consume available resources.</p> <p>The policy evaluates
     * when a player tries to create a new game session. On receiving a
     * <code>CreateGameSession</code> request, Amazon GameLift checks that the player
     * (identified by <code>CreatorId</code>) has created fewer than game session limit
     * in the specified time period.</p>
     */
    inline int GetNewGameSessionsPerCreator() const{ return m_newGameSessionsPerCreator; }
    inline bool NewGameSessionsPerCreatorHasBeenSet() const { return m_newGameSessionsPerCreatorHasBeenSet; }
    inline void SetNewGameSessionsPerCreator(int value) { m_newGameSessionsPerCreatorHasBeenSet = true; m_newGameSessionsPerCreator = value; }
    inline GameSessionCreationLimitPolicy& WithNewGameSessionsPerCreator(int value) { SetNewGameSessionsPerCreator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time span used in evaluating the resource creation limit policy. </p>
     */
    inline int GetPolicyPeriodInMinutes() const{ return m_policyPeriodInMinutes; }
    inline bool PolicyPeriodInMinutesHasBeenSet() const { return m_policyPeriodInMinutesHasBeenSet; }
    inline void SetPolicyPeriodInMinutes(int value) { m_policyPeriodInMinutesHasBeenSet = true; m_policyPeriodInMinutes = value; }
    inline GameSessionCreationLimitPolicy& WithPolicyPeriodInMinutes(int value) { SetPolicyPeriodInMinutes(value); return *this;}
    ///@}
  private:

    int m_newGameSessionsPerCreator;
    bool m_newGameSessionsPerCreatorHasBeenSet = false;

    int m_policyPeriodInMinutes;
    bool m_policyPeriodInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
