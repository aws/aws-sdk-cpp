/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/DeploymentProtectionStrategy.h>
#include <aws/gamelift/model/DeploymentImpairmentStrategy.h>
#include <utility>

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
   * <p>Set of rules for processing a deployment for a container fleet
   * update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeploymentConfiguration">AWS
   * API Reference</a></p>
   */
  class DeploymentConfiguration
  {
  public:
    AWS_GAMELIFT_API DeploymentConfiguration();
    AWS_GAMELIFT_API DeploymentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API DeploymentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines how fleet deployment activity affects active game sessions on the
     * fleet. With protection, a deployment honors game session protection, and delays
     * actions that would interrupt a protected active game session until the game
     * session ends. Without protection, deployment activity can shut down all running
     * tasks, including active game sessions, regardless of game session protection.
     * </p>
     */
    inline const DeploymentProtectionStrategy& GetProtectionStrategy() const{ return m_protectionStrategy; }
    inline bool ProtectionStrategyHasBeenSet() const { return m_protectionStrategyHasBeenSet; }
    inline void SetProtectionStrategy(const DeploymentProtectionStrategy& value) { m_protectionStrategyHasBeenSet = true; m_protectionStrategy = value; }
    inline void SetProtectionStrategy(DeploymentProtectionStrategy&& value) { m_protectionStrategyHasBeenSet = true; m_protectionStrategy = std::move(value); }
    inline DeploymentConfiguration& WithProtectionStrategy(const DeploymentProtectionStrategy& value) { SetProtectionStrategy(value); return *this;}
    inline DeploymentConfiguration& WithProtectionStrategy(DeploymentProtectionStrategy&& value) { SetProtectionStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets a minimum level of healthy tasks to maintain during deployment activity.
     * </p>
     */
    inline int GetMinimumHealthyPercentage() const{ return m_minimumHealthyPercentage; }
    inline bool MinimumHealthyPercentageHasBeenSet() const { return m_minimumHealthyPercentageHasBeenSet; }
    inline void SetMinimumHealthyPercentage(int value) { m_minimumHealthyPercentageHasBeenSet = true; m_minimumHealthyPercentage = value; }
    inline DeploymentConfiguration& WithMinimumHealthyPercentage(int value) { SetMinimumHealthyPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines what actions to take if a deployment fails. If the fleet is
     * multi-location, this strategy applies across all fleet locations. With a
     * rollback strategy, updated fleet instances are rolled back to the last
     * successful deployment. Alternatively, you can maintain a few impaired containers
     * for the purpose of debugging, while all other tasks return to the last
     * successful deployment.</p>
     */
    inline const DeploymentImpairmentStrategy& GetImpairmentStrategy() const{ return m_impairmentStrategy; }
    inline bool ImpairmentStrategyHasBeenSet() const { return m_impairmentStrategyHasBeenSet; }
    inline void SetImpairmentStrategy(const DeploymentImpairmentStrategy& value) { m_impairmentStrategyHasBeenSet = true; m_impairmentStrategy = value; }
    inline void SetImpairmentStrategy(DeploymentImpairmentStrategy&& value) { m_impairmentStrategyHasBeenSet = true; m_impairmentStrategy = std::move(value); }
    inline DeploymentConfiguration& WithImpairmentStrategy(const DeploymentImpairmentStrategy& value) { SetImpairmentStrategy(value); return *this;}
    inline DeploymentConfiguration& WithImpairmentStrategy(DeploymentImpairmentStrategy&& value) { SetImpairmentStrategy(std::move(value)); return *this;}
    ///@}
  private:

    DeploymentProtectionStrategy m_protectionStrategy;
    bool m_protectionStrategyHasBeenSet = false;

    int m_minimumHealthyPercentage;
    bool m_minimumHealthyPercentageHasBeenSet = false;

    DeploymentImpairmentStrategy m_impairmentStrategy;
    bool m_impairmentStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
