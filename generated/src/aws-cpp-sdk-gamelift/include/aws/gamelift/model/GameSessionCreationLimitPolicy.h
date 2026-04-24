/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/GameLift_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace GameLift {
namespace Model {

/**
 * <p>A policy that puts limits on the number of game sessions that a player can
 * create within a specified span of time. With this policy, you can control
 * players' ability to consume available resources.</p> <p>The policy is evaluated
 * when a player tries to create a new game session. On receiving a
 * <code>CreateGameSession</code> request, Amazon GameLift Servers checks that the
 * player (identified by <code>CreatorId</code>) has created fewer than game
 * session limit in the specified time period.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameSessionCreationLimitPolicy">AWS
 * API Reference</a></p>
 */
class GameSessionCreationLimitPolicy {
 public:
  AWS_GAMELIFT_API GameSessionCreationLimitPolicy() = default;
  AWS_GAMELIFT_API GameSessionCreationLimitPolicy(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API GameSessionCreationLimitPolicy& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>A policy that puts limits on the number of game sessions that a player can
   * create within a specified span of time. With this policy, you can control
   * players' ability to consume available resources.</p> <p>The policy evaluates
   * when a player tries to create a new game session. On receiving a
   * <code>CreateGameSession</code> request, Amazon GameLift Servers checks that the
   * player (identified by <code>CreatorId</code>) has created fewer than game
   * session limit in the specified time period.</p>
   */
  inline int64_t GetNewGameSessionsPerCreator() const { return m_newGameSessionsPerCreator; }
  inline bool NewGameSessionsPerCreatorHasBeenSet() const { return m_newGameSessionsPerCreatorHasBeenSet; }
  inline void SetNewGameSessionsPerCreator(int64_t value) {
    m_newGameSessionsPerCreatorHasBeenSet = true;
    m_newGameSessionsPerCreator = value;
  }
  inline GameSessionCreationLimitPolicy& WithNewGameSessionsPerCreator(int64_t value) {
    SetNewGameSessionsPerCreator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time span used in evaluating the resource creation limit policy. </p>
   */
  inline int64_t GetPolicyPeriodInMinutes() const { return m_policyPeriodInMinutes; }
  inline bool PolicyPeriodInMinutesHasBeenSet() const { return m_policyPeriodInMinutesHasBeenSet; }
  inline void SetPolicyPeriodInMinutes(int64_t value) {
    m_policyPeriodInMinutesHasBeenSet = true;
    m_policyPeriodInMinutes = value;
  }
  inline GameSessionCreationLimitPolicy& WithPolicyPeriodInMinutes(int64_t value) {
    SetPolicyPeriodInMinutes(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_newGameSessionsPerCreator{0};

  int64_t m_policyPeriodInMinutes{0};
  bool m_newGameSessionsPerCreatorHasBeenSet = false;
  bool m_policyPeriodInMinutesHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
