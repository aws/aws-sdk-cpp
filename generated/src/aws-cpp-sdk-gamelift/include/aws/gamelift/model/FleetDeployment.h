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
    AWS_GAMELIFT_API FleetDeployment();
    AWS_GAMELIFT_API FleetDeployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API FleetDeployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the deployment. </p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }
    inline FleetDeployment& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}
    inline FleetDeployment& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}
    inline FleetDeployment& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the container fleet. </p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }
    inline FleetDeployment& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline FleetDeployment& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline FleetDeployment& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the version of the game server container group
     * definition that is being deployed.</p>
     */
    inline const Aws::String& GetGameServerBinaryArn() const{ return m_gameServerBinaryArn; }
    inline bool GameServerBinaryArnHasBeenSet() const { return m_gameServerBinaryArnHasBeenSet; }
    inline void SetGameServerBinaryArn(const Aws::String& value) { m_gameServerBinaryArnHasBeenSet = true; m_gameServerBinaryArn = value; }
    inline void SetGameServerBinaryArn(Aws::String&& value) { m_gameServerBinaryArnHasBeenSet = true; m_gameServerBinaryArn = std::move(value); }
    inline void SetGameServerBinaryArn(const char* value) { m_gameServerBinaryArnHasBeenSet = true; m_gameServerBinaryArn.assign(value); }
    inline FleetDeployment& WithGameServerBinaryArn(const Aws::String& value) { SetGameServerBinaryArn(value); return *this;}
    inline FleetDeployment& WithGameServerBinaryArn(Aws::String&& value) { SetGameServerBinaryArn(std::move(value)); return *this;}
    inline FleetDeployment& WithGameServerBinaryArn(const char* value) { SetGameServerBinaryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the version of the game server container group
     * definition to roll back to if deployment fails.</p>
     */
    inline const Aws::String& GetRollbackGameServerBinaryArn() const{ return m_rollbackGameServerBinaryArn; }
    inline bool RollbackGameServerBinaryArnHasBeenSet() const { return m_rollbackGameServerBinaryArnHasBeenSet; }
    inline void SetRollbackGameServerBinaryArn(const Aws::String& value) { m_rollbackGameServerBinaryArnHasBeenSet = true; m_rollbackGameServerBinaryArn = value; }
    inline void SetRollbackGameServerBinaryArn(Aws::String&& value) { m_rollbackGameServerBinaryArnHasBeenSet = true; m_rollbackGameServerBinaryArn = std::move(value); }
    inline void SetRollbackGameServerBinaryArn(const char* value) { m_rollbackGameServerBinaryArnHasBeenSet = true; m_rollbackGameServerBinaryArn.assign(value); }
    inline FleetDeployment& WithRollbackGameServerBinaryArn(const Aws::String& value) { SetRollbackGameServerBinaryArn(value); return *this;}
    inline FleetDeployment& WithRollbackGameServerBinaryArn(Aws::String&& value) { SetRollbackGameServerBinaryArn(std::move(value)); return *this;}
    inline FleetDeployment& WithRollbackGameServerBinaryArn(const char* value) { SetRollbackGameServerBinaryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the version of the per-instance container group
     * definition that is being deployed.</p>
     */
    inline const Aws::String& GetPerInstanceBinaryArn() const{ return m_perInstanceBinaryArn; }
    inline bool PerInstanceBinaryArnHasBeenSet() const { return m_perInstanceBinaryArnHasBeenSet; }
    inline void SetPerInstanceBinaryArn(const Aws::String& value) { m_perInstanceBinaryArnHasBeenSet = true; m_perInstanceBinaryArn = value; }
    inline void SetPerInstanceBinaryArn(Aws::String&& value) { m_perInstanceBinaryArnHasBeenSet = true; m_perInstanceBinaryArn = std::move(value); }
    inline void SetPerInstanceBinaryArn(const char* value) { m_perInstanceBinaryArnHasBeenSet = true; m_perInstanceBinaryArn.assign(value); }
    inline FleetDeployment& WithPerInstanceBinaryArn(const Aws::String& value) { SetPerInstanceBinaryArn(value); return *this;}
    inline FleetDeployment& WithPerInstanceBinaryArn(Aws::String&& value) { SetPerInstanceBinaryArn(std::move(value)); return *this;}
    inline FleetDeployment& WithPerInstanceBinaryArn(const char* value) { SetPerInstanceBinaryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the version of the per-instance container group
     * definition to roll back to if deployment fails.</p>
     */
    inline const Aws::String& GetRollbackPerInstanceBinaryArn() const{ return m_rollbackPerInstanceBinaryArn; }
    inline bool RollbackPerInstanceBinaryArnHasBeenSet() const { return m_rollbackPerInstanceBinaryArnHasBeenSet; }
    inline void SetRollbackPerInstanceBinaryArn(const Aws::String& value) { m_rollbackPerInstanceBinaryArnHasBeenSet = true; m_rollbackPerInstanceBinaryArn = value; }
    inline void SetRollbackPerInstanceBinaryArn(Aws::String&& value) { m_rollbackPerInstanceBinaryArnHasBeenSet = true; m_rollbackPerInstanceBinaryArn = std::move(value); }
    inline void SetRollbackPerInstanceBinaryArn(const char* value) { m_rollbackPerInstanceBinaryArnHasBeenSet = true; m_rollbackPerInstanceBinaryArn.assign(value); }
    inline FleetDeployment& WithRollbackPerInstanceBinaryArn(const Aws::String& value) { SetRollbackPerInstanceBinaryArn(value); return *this;}
    inline FleetDeployment& WithRollbackPerInstanceBinaryArn(Aws::String&& value) { SetRollbackPerInstanceBinaryArn(std::move(value)); return *this;}
    inline FleetDeployment& WithRollbackPerInstanceBinaryArn(const char* value) { SetRollbackPerInstanceBinaryArn(value); return *this;}
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
    inline const DeploymentStatus& GetDeploymentStatus() const{ return m_deploymentStatus; }
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }
    inline void SetDeploymentStatus(const DeploymentStatus& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }
    inline void SetDeploymentStatus(DeploymentStatus&& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = std::move(value); }
    inline FleetDeployment& WithDeploymentStatus(const DeploymentStatus& value) { SetDeploymentStatus(value); return *this;}
    inline FleetDeployment& WithDeploymentStatus(DeploymentStatus&& value) { SetDeploymentStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Instructions for how to deploy updates to a container fleet and what actions
     * to take if the deployment fails.</p>
     */
    inline const DeploymentConfiguration& GetDeploymentConfiguration() const{ return m_deploymentConfiguration; }
    inline bool DeploymentConfigurationHasBeenSet() const { return m_deploymentConfigurationHasBeenSet; }
    inline void SetDeploymentConfiguration(const DeploymentConfiguration& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = value; }
    inline void SetDeploymentConfiguration(DeploymentConfiguration&& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = std::move(value); }
    inline FleetDeployment& WithDeploymentConfiguration(const DeploymentConfiguration& value) { SetDeploymentConfiguration(value); return *this;}
    inline FleetDeployment& WithDeploymentConfiguration(DeploymentConfiguration&& value) { SetDeploymentConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline FleetDeployment& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline FleetDeployment& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
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

    DeploymentStatus m_deploymentStatus;
    bool m_deploymentStatusHasBeenSet = false;

    DeploymentConfiguration m_deploymentConfiguration;
    bool m_deploymentConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
