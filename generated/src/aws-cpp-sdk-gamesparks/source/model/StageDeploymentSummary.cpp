/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/StageDeploymentSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameSparks
{
namespace Model
{

StageDeploymentSummary::StageDeploymentSummary() : 
    m_deploymentAction(DeploymentAction::NOT_SET),
    m_deploymentActionHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
    m_deploymentResultHasBeenSet(false),
    m_deploymentState(DeploymentState::NOT_SET),
    m_deploymentStateHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_snapshotIdHasBeenSet(false)
{
}

StageDeploymentSummary::StageDeploymentSummary(JsonView jsonValue) : 
    m_deploymentAction(DeploymentAction::NOT_SET),
    m_deploymentActionHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
    m_deploymentResultHasBeenSet(false),
    m_deploymentState(DeploymentState::NOT_SET),
    m_deploymentStateHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_snapshotIdHasBeenSet(false)
{
  *this = jsonValue;
}

StageDeploymentSummary& StageDeploymentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeploymentAction"))
  {
    m_deploymentAction = DeploymentActionMapper::GetDeploymentActionForName(jsonValue.GetString("DeploymentAction"));

    m_deploymentActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentId"))
  {
    m_deploymentId = jsonValue.GetString("DeploymentId");

    m_deploymentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentResult"))
  {
    m_deploymentResult = jsonValue.GetObject("DeploymentResult");

    m_deploymentResultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentState"))
  {
    m_deploymentState = DeploymentStateMapper::GetDeploymentStateForName(jsonValue.GetString("DeploymentState"));

    m_deploymentStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdated"))
  {
    m_lastUpdated = jsonValue.GetString("LastUpdated");

    m_lastUpdatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotId"))
  {
    m_snapshotId = jsonValue.GetString("SnapshotId");

    m_snapshotIdHasBeenSet = true;
  }

  return *this;
}

JsonValue StageDeploymentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_deploymentActionHasBeenSet)
  {
   payload.WithString("DeploymentAction", DeploymentActionMapper::GetNameForDeploymentAction(m_deploymentAction));
  }

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("DeploymentId", m_deploymentId);

  }

  if(m_deploymentResultHasBeenSet)
  {
   payload.WithObject("DeploymentResult", m_deploymentResult.Jsonize());

  }

  if(m_deploymentStateHasBeenSet)
  {
   payload.WithString("DeploymentState", DeploymentStateMapper::GetNameForDeploymentState(m_deploymentState));
  }

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithString("LastUpdated", m_lastUpdated.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_snapshotIdHasBeenSet)
  {
   payload.WithString("SnapshotId", m_snapshotId);

  }

  return payload;
}

} // namespace Model
} // namespace GameSparks
} // namespace Aws
