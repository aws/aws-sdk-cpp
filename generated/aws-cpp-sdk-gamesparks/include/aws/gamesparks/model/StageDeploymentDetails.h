﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gamesparks/model/DeploymentAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamesparks/model/DeploymentState.h>
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
namespace GameSparks
{
namespace Model
{

  /**
   * <p>Properties that provide details of a stage deployment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/StageDeploymentDetails">AWS
   * API Reference</a></p>
   */
  class AWS_GAMESPARKS_API StageDeploymentDetails
  {
  public:
    StageDeploymentDetails();
    StageDeploymentDetails(Aws::Utils::Json::JsonView jsonValue);
    StageDeploymentDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp of when the stage deployment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>The timestamp of when the stage deployment was created.</p>
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p>The timestamp of when the stage deployment was created.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>The timestamp of when the stage deployment was created.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }

    /**
     * <p>The timestamp of when the stage deployment was created.</p>
     */
    inline StageDeploymentDetails& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>The timestamp of when the stage deployment was created.</p>
     */
    inline StageDeploymentDetails& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * <p>The type of action of the stage deployment.</p>
     */
    inline const DeploymentAction& GetDeploymentAction() const{ return m_deploymentAction; }

    /**
     * <p>The type of action of the stage deployment.</p>
     */
    inline bool DeploymentActionHasBeenSet() const { return m_deploymentActionHasBeenSet; }

    /**
     * <p>The type of action of the stage deployment.</p>
     */
    inline void SetDeploymentAction(const DeploymentAction& value) { m_deploymentActionHasBeenSet = true; m_deploymentAction = value; }

    /**
     * <p>The type of action of the stage deployment.</p>
     */
    inline void SetDeploymentAction(DeploymentAction&& value) { m_deploymentActionHasBeenSet = true; m_deploymentAction = std::move(value); }

    /**
     * <p>The type of action of the stage deployment.</p>
     */
    inline StageDeploymentDetails& WithDeploymentAction(const DeploymentAction& value) { SetDeploymentAction(value); return *this;}

    /**
     * <p>The type of action of the stage deployment.</p>
     */
    inline StageDeploymentDetails& WithDeploymentAction(DeploymentAction&& value) { SetDeploymentAction(std::move(value)); return *this;}


    /**
     * <p>The identifier of the deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The identifier of the deployment.</p>
     */
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }

    /**
     * <p>The identifier of the deployment.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The identifier of the deployment.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p>The identifier of the deployment.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p>The identifier of the deployment.</p>
     */
    inline StageDeploymentDetails& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The identifier of the deployment.</p>
     */
    inline StageDeploymentDetails& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the deployment.</p>
     */
    inline StageDeploymentDetails& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p>The state of the deployment.</p>
     */
    inline const DeploymentState& GetDeploymentState() const{ return m_deploymentState; }

    /**
     * <p>The state of the deployment.</p>
     */
    inline bool DeploymentStateHasBeenSet() const { return m_deploymentStateHasBeenSet; }

    /**
     * <p>The state of the deployment.</p>
     */
    inline void SetDeploymentState(const DeploymentState& value) { m_deploymentStateHasBeenSet = true; m_deploymentState = value; }

    /**
     * <p>The state of the deployment.</p>
     */
    inline void SetDeploymentState(DeploymentState&& value) { m_deploymentStateHasBeenSet = true; m_deploymentState = std::move(value); }

    /**
     * <p>The state of the deployment.</p>
     */
    inline StageDeploymentDetails& WithDeploymentState(const DeploymentState& value) { SetDeploymentState(value); return *this;}

    /**
     * <p>The state of the deployment.</p>
     */
    inline StageDeploymentDetails& WithDeploymentState(DeploymentState&& value) { SetDeploymentState(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the deployment was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>The timestamp of when the deployment was last updated.</p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p>The timestamp of when the deployment was last updated.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>The timestamp of when the deployment was last updated.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>The timestamp of when the deployment was last updated.</p>
     */
    inline StageDeploymentDetails& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>The timestamp of when the deployment was last updated.</p>
     */
    inline StageDeploymentDetails& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * <p>The identifier of the snapshot associated with the stage deployment.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The identifier of the snapshot associated with the stage deployment.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The identifier of the snapshot associated with the stage deployment.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The identifier of the snapshot associated with the stage deployment.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The identifier of the snapshot associated with the stage deployment.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The identifier of the snapshot associated with the stage deployment.</p>
     */
    inline StageDeploymentDetails& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The identifier of the snapshot associated with the stage deployment.</p>
     */
    inline StageDeploymentDetails& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the snapshot associated with the stage deployment.</p>
     */
    inline StageDeploymentDetails& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}

  private:

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet;

    DeploymentAction m_deploymentAction;
    bool m_deploymentActionHasBeenSet;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;

    DeploymentState m_deploymentState;
    bool m_deploymentStateHasBeenSet;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
