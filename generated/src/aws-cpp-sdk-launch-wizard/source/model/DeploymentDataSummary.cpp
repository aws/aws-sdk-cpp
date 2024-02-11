/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/launch-wizard/model/DeploymentDataSummary.h>
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

DeploymentDataSummary::DeploymentDataSummary() : 
    m_createdAtHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_patternNameHasBeenSet(false),
    m_status(DeploymentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_workloadNameHasBeenSet(false)
{
}

DeploymentDataSummary::DeploymentDataSummary(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_patternNameHasBeenSet(false),
    m_status(DeploymentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_workloadNameHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentDataSummary& DeploymentDataSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("patternName"))
  {
    m_patternName = jsonValue.GetString("patternName");

    m_patternNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DeploymentStatusMapper::GetDeploymentStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workloadName"))
  {
    m_workloadName = jsonValue.GetString("workloadName");

    m_workloadNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentDataSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_patternNameHasBeenSet)
  {
   payload.WithString("patternName", m_patternName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DeploymentStatusMapper::GetNameForDeploymentStatus(m_status));
  }

  if(m_workloadNameHasBeenSet)
  {
   payload.WithString("workloadName", m_workloadName);

  }

  return payload;
}

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
