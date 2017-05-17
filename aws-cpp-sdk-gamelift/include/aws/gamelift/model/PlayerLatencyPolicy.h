/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Queue setting that determines the highest latency allowed for individual
   * players when placing a game session. When a latency policy is in force, a game
   * session cannot be placed at any destination in a region where a player is
   * reporting latency higher than the cap. Latency policies are only enforced when
   * the placement request contains player latency information.</p> <p>Latency
   * policy-related operations include:</p> <ul> <li> <p>
   * <a>CreateGameSessionQueue</a> </p> </li> <li> <p> <a>UpdateGameSessionQueue</a>
   * </p> </li> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/PlayerLatencyPolicy">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API PlayerLatencyPolicy
  {
  public:
    PlayerLatencyPolicy();
    PlayerLatencyPolicy(const Aws::Utils::Json::JsonValue& jsonValue);
    PlayerLatencyPolicy& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The maximum latency value that is allowed for any player, in milliseconds.
     * All policies must have a value set for this property.</p>
     */
    inline int GetMaximumIndividualPlayerLatencyMilliseconds() const{ return m_maximumIndividualPlayerLatencyMilliseconds; }

    /**
     * <p>The maximum latency value that is allowed for any player, in milliseconds.
     * All policies must have a value set for this property.</p>
     */
    inline void SetMaximumIndividualPlayerLatencyMilliseconds(int value) { m_maximumIndividualPlayerLatencyMillisecondsHasBeenSet = true; m_maximumIndividualPlayerLatencyMilliseconds = value; }

    /**
     * <p>The maximum latency value that is allowed for any player, in milliseconds.
     * All policies must have a value set for this property.</p>
     */
    inline PlayerLatencyPolicy& WithMaximumIndividualPlayerLatencyMilliseconds(int value) { SetMaximumIndividualPlayerLatencyMilliseconds(value); return *this;}

    /**
     * <p>The length of time, in seconds, that the policy is enforced while placing a
     * new game session. A null value for this property means that the policy is
     * enforced until the queue times out.</p>
     */
    inline int GetPolicyDurationSeconds() const{ return m_policyDurationSeconds; }

    /**
     * <p>The length of time, in seconds, that the policy is enforced while placing a
     * new game session. A null value for this property means that the policy is
     * enforced until the queue times out.</p>
     */
    inline void SetPolicyDurationSeconds(int value) { m_policyDurationSecondsHasBeenSet = true; m_policyDurationSeconds = value; }

    /**
     * <p>The length of time, in seconds, that the policy is enforced while placing a
     * new game session. A null value for this property means that the policy is
     * enforced until the queue times out.</p>
     */
    inline PlayerLatencyPolicy& WithPolicyDurationSeconds(int value) { SetPolicyDurationSeconds(value); return *this;}

  private:
    int m_maximumIndividualPlayerLatencyMilliseconds;
    bool m_maximumIndividualPlayerLatencyMillisecondsHasBeenSet;
    int m_policyDurationSeconds;
    bool m_policyDurationSecondsHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
