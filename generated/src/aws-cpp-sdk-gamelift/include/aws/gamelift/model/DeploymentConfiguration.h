/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/DeploymentImpairmentStrategy.h>
#include <aws/gamelift/model/DeploymentProtectionStrategy.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace GameLift {
namespace Model {

/**
 * <p>Set of rules for processing a deployment for a container fleet update. For
 * how Amazon GameLift Servers validates and rolls out a deployment, see <a
 * href="https://docs.aws.amazon.com/gameliftservers/latest/developerguide/containers-deployment-validation.html">Container
 * fleet deployments</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeploymentConfiguration">AWS
 * API Reference</a></p>
 */
class DeploymentConfiguration {
 public:
  AWS_GAMELIFT_API DeploymentConfiguration() = default;
  AWS_GAMELIFT_API DeploymentConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API DeploymentConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Determines how fleet deployment activity affects active game sessions on the
   * fleet. A protected game session can't be terminated while it's active; a fleet
   * sets the default protection for its new game sessions with
   * <code>NewGameSessionProtectionPolicy</code>.</p> <ul> <li> <p>
   * <code>WITH_PROTECTION</code> -- The deployment honors game session protection,
   * and delays actions that would interrupt a protected active game session until
   * the game session ends.</p> </li> <li> <p> <code>IGNORE_PROTECTION</code> -- The
   * deployment replaces containers regardless of game session activity, including
   * active game sessions. This option is useful during development and testing.</p>
   * </li> </ul> <p>This setting also affects how long deployment validation can
   * take. When the fleet's <code>NewGameSessionProtectionPolicy</code> is
   * <code>FullProtection</code> and the deployment uses
   * <code>WITH_PROTECTION</code>, validation waits for protected game sessions to
   * end.</p> <p>Default value: <code>WITH_PROTECTION</code> </p>
   */
  inline DeploymentProtectionStrategy GetProtectionStrategy() const { return m_protectionStrategy; }
  inline bool ProtectionStrategyHasBeenSet() const { return m_protectionStrategyHasBeenSet; }
  inline void SetProtectionStrategy(DeploymentProtectionStrategy value) {
    m_protectionStrategyHasBeenSet = true;
    m_protectionStrategy = value;
  }
  inline DeploymentConfiguration& WithProtectionStrategy(DeploymentProtectionStrategy value) {
    SetProtectionStrategy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Sets the minimum percentage of the fleet's game server container groups to
   * keep healthy during deployment activity. A low value favors deployment speed; a
   * high value favors game server availability. For example, if the fleet runs 20
   * game server container groups and this value is 75, Amazon GameLift Servers keeps
   * at least 15 of them healthy, so it replaces no more than 5 at a time.</p>
   * <p>Default value: 75</p>
   */
  inline int64_t GetMinimumHealthyPercentage() const { return m_minimumHealthyPercentage; }
  inline bool MinimumHealthyPercentageHasBeenSet() const { return m_minimumHealthyPercentageHasBeenSet; }
  inline void SetMinimumHealthyPercentage(int64_t value) {
    m_minimumHealthyPercentageHasBeenSet = true;
    m_minimumHealthyPercentage = value;
  }
  inline DeploymentConfiguration& WithMinimumHealthyPercentage(int64_t value) {
    SetMinimumHealthyPercentage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Determines what actions to take if a deployment fails validation. If the
   * fleet is multi-location, this strategy applies across all fleet locations.</p>
   * <ul> <li> <p> <code>ROLLBACK</code> -- Returns all of the fleet's containers to
   * the last successful deployment.</p> </li> <li> <p> <code>MAINTAIN</code> --
   * Keeps the containers that failed validation in place so that you can inspect
   * them, and returns all other containers to the last successful deployment. Use
   * this option when you're deploying a container image that you want to be able to
   * debug on failure.</p> </li> </ul> <p>Default value: <code>MAINTAIN</code> </p>
   */
  inline DeploymentImpairmentStrategy GetImpairmentStrategy() const { return m_impairmentStrategy; }
  inline bool ImpairmentStrategyHasBeenSet() const { return m_impairmentStrategyHasBeenSet; }
  inline void SetImpairmentStrategy(DeploymentImpairmentStrategy value) {
    m_impairmentStrategyHasBeenSet = true;
    m_impairmentStrategy = value;
  }
  inline DeploymentConfiguration& WithImpairmentStrategy(DeploymentImpairmentStrategy value) {
    SetImpairmentStrategy(value);
    return *this;
  }
  ///@}
 private:
  DeploymentProtectionStrategy m_protectionStrategy{DeploymentProtectionStrategy::NOT_SET};

  int64_t m_minimumHealthyPercentage{0};

  DeploymentImpairmentStrategy m_impairmentStrategy{DeploymentImpairmentStrategy::NOT_SET};
  bool m_protectionStrategyHasBeenSet = false;
  bool m_minimumHealthyPercentageHasBeenSet = false;
  bool m_impairmentStrategyHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
