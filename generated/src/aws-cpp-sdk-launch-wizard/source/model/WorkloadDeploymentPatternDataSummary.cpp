/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/launch-wizard/model/WorkloadDeploymentPatternDataSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LaunchWizard
{
namespace Model
{

WorkloadDeploymentPatternDataSummary::WorkloadDeploymentPatternDataSummary() : 
    m_deploymentPatternNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_status(WorkloadDeploymentPatternStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_workloadNameHasBeenSet(false),
    m_workloadVersionNameHasBeenSet(false)
{
}

WorkloadDeploymentPatternDataSummary::WorkloadDeploymentPatternDataSummary(JsonView jsonValue) : 
    m_deploymentPatternNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_status(WorkloadDeploymentPatternStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_workloadNameHasBeenSet(false),
    m_workloadVersionNameHasBeenSet(false)
{
  *this = jsonValue;
}

WorkloadDeploymentPatternDataSummary& WorkloadDeploymentPatternDataSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deploymentPatternName"))
  {
    m_deploymentPatternName = jsonValue.GetString("deploymentPatternName");

    m_deploymentPatternNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = WorkloadDeploymentPatternStatusMapper::GetWorkloadDeploymentPatternStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workloadName"))
  {
    m_workloadName = jsonValue.GetString("workloadName");

    m_workloadNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workloadVersionName"))
  {
    m_workloadVersionName = jsonValue.GetString("workloadVersionName");

    m_workloadVersionNameHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkloadDeploymentPatternDataSummary::Jsonize() const
{
  JsonValue payload;

  if(m_deploymentPatternNameHasBeenSet)
  {
   payload.WithString("deploymentPatternName", m_deploymentPatternName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", WorkloadDeploymentPatternStatusMapper::GetNameForWorkloadDeploymentPatternStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_workloadNameHasBeenSet)
  {
   payload.WithString("workloadName", m_workloadName);

  }

  if(m_workloadVersionNameHasBeenSet)
  {
   payload.WithString("workloadVersionName", m_workloadVersionName);

  }

  return payload;
}

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
