/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/StageDeploymentDetails.h>
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

StageDeploymentDetails::StageDeploymentDetails() : 
    m_createdHasBeenSet(false),
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

StageDeploymentDetails::StageDeploymentDetails(JsonView jsonValue) : 
    m_createdHasBeenSet(false),
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

StageDeploymentDetails& StageDeploymentDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Created"))
  {
    m_created = jsonValue.GetString("Created");

    m_createdHasBeenSet = true;
  }

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

JsonValue StageDeploymentDetails::Jsonize() const
{
  JsonValue payload;

  if(m_createdHasBeenSet)
  {
   payload.WithString("Created", m_created.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

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
