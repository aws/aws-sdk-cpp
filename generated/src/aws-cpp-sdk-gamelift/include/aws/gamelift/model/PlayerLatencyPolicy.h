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
   * <p>Sets a latency cap for individual players when placing a game session. With a
   * latency policy in force, a game session cannot be placed in a fleet location
   * where a player reports latency higher than the cap. Latency policies are used
   * only with placement request that provide player latency information. Player
   * latency policies can be stacked to gradually relax latency requirements over
   * time. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/PlayerLatencyPolicy">AWS
   * API Reference</a></p>
   */
  class PlayerLatencyPolicy
  {
  public:
    AWS_GAMELIFT_API PlayerLatencyPolicy();
    AWS_GAMELIFT_API PlayerLatencyPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API PlayerLatencyPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum latency value that is allowed for any player, in milliseconds.
     * All policies must have a value set for this property.</p>
     */
    inline int GetMaximumIndividualPlayerLatencyMilliseconds() const{ return m_maximumIndividualPlayerLatencyMilliseconds; }
    inline bool MaximumIndividualPlayerLatencyMillisecondsHasBeenSet() const { return m_maximumIndividualPlayerLatencyMillisecondsHasBeenSet; }
    inline void SetMaximumIndividualPlayerLatencyMilliseconds(int value) { m_maximumIndividualPlayerLatencyMillisecondsHasBeenSet = true; m_maximumIndividualPlayerLatencyMilliseconds = value; }
    inline PlayerLatencyPolicy& WithMaximumIndividualPlayerLatencyMilliseconds(int value) { SetMaximumIndividualPlayerLatencyMilliseconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of time, in seconds, that the policy is enforced while placing a
     * new game session. A null value for this property means that the policy is
     * enforced until the queue times out.</p>
     */
    inline int GetPolicyDurationSeconds() const{ return m_policyDurationSeconds; }
    inline bool PolicyDurationSecondsHasBeenSet() const { return m_policyDurationSecondsHasBeenSet; }
    inline void SetPolicyDurationSeconds(int value) { m_policyDurationSecondsHasBeenSet = true; m_policyDurationSeconds = value; }
    inline PlayerLatencyPolicy& WithPolicyDurationSeconds(int value) { SetPolicyDurationSeconds(value); return *this;}
    ///@}
  private:

    int m_maximumIndividualPlayerLatencyMilliseconds;
    bool m_maximumIndividualPlayerLatencyMillisecondsHasBeenSet = false;

    int m_policyDurationSeconds;
    bool m_policyDurationSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
