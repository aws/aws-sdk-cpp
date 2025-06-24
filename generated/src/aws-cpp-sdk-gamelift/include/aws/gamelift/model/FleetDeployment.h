/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/DeploymentStatus.h>
#include <aws/gamelift/model/DeploymentConfiguration.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Describes a container fleet deployment with updates to the fleet.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/FleetDeployment">AWS
   * API Reference</a></p>
   */
  class FleetDeployment
  {
  public:
    AWS_GAMELIFT_API FleetDeployment() = default;
    AWS_GAMELIFT_API FleetDeployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API FleetDeployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the deployment. </p>
     */
    inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    template<typename DeploymentIdT = Aws::String>
    void SetDeploymentId(DeploymentIdT&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::forward<DeploymentIdT>(value); }
    template<typename DeploymentIdT = Aws::String>
    FleetDeployment& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the container fleet. </p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    FleetDeployment& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the version of the game server container group
     * definition that is being deployed.</p>
     */
    inline const Aws::String& GetGameServerBinaryArn() const { return m_gameServerBinaryArn; }
    inline bool GameServerBinaryArnHasBeenSet() const { return m_gameServerBinaryArnHasBeenSet; }
    template<typename GameServerBinaryArnT = Aws::String>
    void SetGameServerBinaryArn(GameServerBinaryArnT&& value) { m_gameServerBinaryArnHasBeenSet = true; m_gameServerBinaryArn = std::forward<GameServerBinaryArnT>(value); }
    template<typename GameServerBinaryArnT = Aws::String>
    FleetDeployment& WithGameServerBinaryArn(GameServerBinaryArnT&& value) { SetGameServerBinaryArn(std::forward<GameServerBinaryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the version of the game server container group
     * definition to roll back to if deployment fails. Amazon GameLift Servers sets
     * this property to the container group definition version that the fleet used when
     * it was last active.</p>
     */
    inline const Aws::String& GetRollbackGameServerBinaryArn() const { return m_rollbackGameServerBinaryArn; }
    inline bool RollbackGameServerBinaryArnHasBeenSet() const { return m_rollbackGameServerBinaryArnHasBeenSet; }
    template<typename RollbackGameServerBinaryArnT = Aws::String>
    void SetRollbackGameServerBinaryArn(RollbackGameServerBinaryArnT&& value) { m_rollbackGameServerBinaryArnHasBeenSet = true; m_rollbackGameServerBinaryArn = std::forward<RollbackGameServerBinaryArnT>(value); }
    template<typename RollbackGameServerBinaryArnT = Aws::String>
    FleetDeployment& WithRollbackGameServerBinaryArn(RollbackGameServerBinaryArnT&& value) { SetRollbackGameServerBinaryArn(std::forward<RollbackGameServerBinaryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the version of the per-instance container group
     * definition that is being deployed. </p>
     */
    inline const Aws::String& GetPerInstanceBinaryArn() const { return m_perInstanceBinaryArn; }
    inline bool PerInstanceBinaryArnHasBeenSet() const { return m_perInstanceBinaryArnHasBeenSet; }
    template<typename PerInstanceBinaryArnT = Aws::String>
    void SetPerInstanceBinaryArn(PerInstanceBinaryArnT&& value) { m_perInstanceBinaryArnHasBeenSet = true; m_perInstanceBinaryArn = std::forward<PerInstanceBinaryArnT>(value); }
    template<typename PerInstanceBinaryArnT = Aws::String>
    FleetDeployment& WithPerInstanceBinaryArn(PerInstanceBinaryArnT&& value) { SetPerInstanceBinaryArn(std::forward<PerInstanceBinaryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the version of the per-instance container group
     * definition to roll back to if deployment fails. Amazon GameLift Servers sets
     * this property to the container group definition version that the fleet used when
     * it was last active.</p>
     */
    inline const Aws::String& GetRollbackPerInstanceBinaryArn() const { return m_rollbackPerInstanceBinaryArn; }
    inline bool RollbackPerInstanceBinaryArnHasBeenSet() const { return m_rollbackPerInstanceBinaryArnHasBeenSet; }
    template<typename RollbackPerInstanceBinaryArnT = Aws::String>
    void SetRollbackPerInstanceBinaryArn(RollbackPerInstanceBinaryArnT&& value) { m_rollbackPerInstanceBinaryArnHasBeenSet = true; m_rollbackPerInstanceBinaryArn = std::forward<RollbackPerInstanceBinaryArnT>(value); }
    template<typename RollbackPerInstanceBinaryArnT = Aws::String>
    FleetDeployment& WithRollbackPerInstanceBinaryArn(RollbackPerInstanceBinaryArnT&& value) { SetRollbackPerInstanceBinaryArn(std::forward<RollbackPerInstanceBinaryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of fleet deployment activity in the location. </p> <ul> <li> <p>
     * <code>IN_PROGRESS</code> -- The deployment is in progress.</p> </li> <li> <p>
     * <code>IMPAIRED</code> -- The deployment failed and the fleet has some impaired
     * containers. </p> </li> <li> <p> <code>COMPLETE</code> -- The deployment has
     * completed successfully.</p> </li> <li> <p> <code>ROLLBACK_IN_PROGRESS</code> --
     * The deployment failed and rollback has been initiated.</p> </li> <li> <p>
     * <code>ROLLBACK_IN_COMPLETE</code> -- The deployment failed and rollback has been
     * completed.</p> </li> <li> <p> <code>CANCELLED</code> -- The deployment was
     * cancelled.</p> </li> </ul>
     */
    inline DeploymentStatus GetDeploymentStatus() const { return m_deploymentStatus; }
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }
    inline void SetDeploymentStatus(DeploymentStatus value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }
    inline FleetDeployment& WithDeploymentStatus(DeploymentStatus value) { SetDeploymentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Instructions for how to deploy updates to a container fleet and what actions
     * to take if the deployment fails.</p>
     */
    inline const DeploymentConfiguration& GetDeploymentConfiguration() const { return m_deploymentConfiguration; }
    inline bool DeploymentConfigurationHasBeenSet() const { return m_deploymentConfigurationHasBeenSet; }
    template<typename DeploymentConfigurationT = DeploymentConfiguration>
    void SetDeploymentConfiguration(DeploymentConfigurationT&& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = std::forward<DeploymentConfigurationT>(value); }
    template<typename DeploymentConfigurationT = DeploymentConfiguration>
    FleetDeployment& WithDeploymentConfiguration(DeploymentConfigurationT&& value) { SetDeploymentConfiguration(std::forward<DeploymentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    FleetDeployment& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_gameServerBinaryArn;
    bool m_gameServerBinaryArnHasBeenSet = false;

    Aws::String m_rollbackGameServerBinaryArn;
    bool m_rollbackGameServerBinaryArnHasBeenSet = false;

    Aws::String m_perInstanceBinaryArn;
    bool m_perInstanceBinaryArnHasBeenSet = false;

    Aws::String m_rollbackPerInstanceBinaryArn;
    bool m_rollbackPerInstanceBinaryArnHasBeenSet = false;

    DeploymentStatus m_deploymentStatus{DeploymentStatus::NOT_SET};
    bool m_deploymentStatusHasBeenSet = false;

    DeploymentConfiguration m_deploymentConfiguration;
    bool m_deploymentConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
