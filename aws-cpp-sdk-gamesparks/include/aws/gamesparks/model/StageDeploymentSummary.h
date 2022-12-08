/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/gamesparks/model/DeploymentAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamesparks/model/DeploymentResult.h>
#include <aws/gamesparks/model/DeploymentState.h>
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
namespace GameSparks
{
namespace Model
{

  /**
   * <p>The summary of the properties of a stage deployment.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/StageDeploymentSummary">AWS
   * API Reference</a></p>
   */
  class StageDeploymentSummary
  {
  public:
    AWS_GAMESPARKS_API StageDeploymentSummary();
    AWS_GAMESPARKS_API StageDeploymentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMESPARKS_API StageDeploymentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMESPARKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of action of the deployment.</p>
     */
    inline const DeploymentAction& GetDeploymentAction() const{ return m_deploymentAction; }

    /**
     * <p>The type of action of the deployment.</p>
     */
    inline bool DeploymentActionHasBeenSet() const { return m_deploymentActionHasBeenSet; }

    /**
     * <p>The type of action of the deployment.</p>
     */
    inline void SetDeploymentAction(const DeploymentAction& value) { m_deploymentActionHasBeenSet = true; m_deploymentAction = value; }

    /**
     * <p>The type of action of the deployment.</p>
     */
    inline void SetDeploymentAction(DeploymentAction&& value) { m_deploymentActionHasBeenSet = true; m_deploymentAction = std::move(value); }

    /**
     * <p>The type of action of the deployment.</p>
     */
    inline StageDeploymentSummary& WithDeploymentAction(const DeploymentAction& value) { SetDeploymentAction(value); return *this;}

    /**
     * <p>The type of action of the deployment.</p>
     */
    inline StageDeploymentSummary& WithDeploymentAction(DeploymentAction&& value) { SetDeploymentAction(std::move(value)); return *this;}


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
    inline StageDeploymentSummary& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The identifier of the deployment.</p>
     */
    inline StageDeploymentSummary& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the deployment.</p>
     */
    inline StageDeploymentSummary& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p>The result of the deployment.</p>
     */
    inline const DeploymentResult& GetDeploymentResult() const{ return m_deploymentResult; }

    /**
     * <p>The result of the deployment.</p>
     */
    inline bool DeploymentResultHasBeenSet() const { return m_deploymentResultHasBeenSet; }

    /**
     * <p>The result of the deployment.</p>
     */
    inline void SetDeploymentResult(const DeploymentResult& value) { m_deploymentResultHasBeenSet = true; m_deploymentResult = value; }

    /**
     * <p>The result of the deployment.</p>
     */
    inline void SetDeploymentResult(DeploymentResult&& value) { m_deploymentResultHasBeenSet = true; m_deploymentResult = std::move(value); }

    /**
     * <p>The result of the deployment.</p>
     */
    inline StageDeploymentSummary& WithDeploymentResult(const DeploymentResult& value) { SetDeploymentResult(value); return *this;}

    /**
     * <p>The result of the deployment.</p>
     */
    inline StageDeploymentSummary& WithDeploymentResult(DeploymentResult&& value) { SetDeploymentResult(std::move(value)); return *this;}


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
    inline StageDeploymentSummary& WithDeploymentState(const DeploymentState& value) { SetDeploymentState(value); return *this;}

    /**
     * <p>The state of the deployment.</p>
     */
    inline StageDeploymentSummary& WithDeploymentState(DeploymentState&& value) { SetDeploymentState(std::move(value)); return *this;}


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
    inline StageDeploymentSummary& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>The timestamp of when the deployment was last updated.</p>
     */
    inline StageDeploymentSummary& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


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
    inline StageDeploymentSummary& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The identifier of the snapshot associated with the stage deployment.</p>
     */
    inline StageDeploymentSummary& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the snapshot associated with the stage deployment.</p>
     */
    inline StageDeploymentSummary& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}

  private:

    DeploymentAction m_deploymentAction;
    bool m_deploymentActionHasBeenSet = false;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    DeploymentResult m_deploymentResult;
    bool m_deploymentResultHasBeenSet = false;

    DeploymentState m_deploymentState;
    bool m_deploymentStateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
