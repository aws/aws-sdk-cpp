/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/JobRunSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

JobRunSummary::JobRunSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

JobRunSummary& JobRunSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");
    m_applicationIdHasBeenSet = true;
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
  if(jsonValue.ValueExists("mode"))
  {
    m_mode = JobRunModeMapper::GetJobRunModeForName(jsonValue.GetString("mode"));
    m_modeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionRole"))
  {
    m_executionRole = jsonValue.GetString("executionRole");
    m_executionRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("state"))
  {
    m_state = JobRunStateMapper::GetJobRunStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stateDetails"))
  {
    m_stateDetails = jsonValue.GetString("stateDetails");
    m_stateDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("releaseLabel"))
  {
    m_releaseLabel = jsonValue.GetString("releaseLabel");
    m_releaseLabelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("attempt"))
  {
    m_attempt = jsonValue.GetInteger("attempt");
    m_attemptHasBeenSet = true;
  }
  if(jsonValue.ValueExists("attemptCreatedAt"))
  {
    m_attemptCreatedAt = jsonValue.GetDouble("attemptCreatedAt");
    m_attemptCreatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("attemptUpdatedAt"))
  {
    m_attemptUpdatedAt = jsonValue.GetDouble("attemptUpdatedAt");
    m_attemptUpdatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue JobRunSummary::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("applicationId", m_applicationId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("mode", JobRunModeMapper::GetNameForJobRunMode(m_mode));
  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_executionRoleHasBeenSet)
  {
   payload.WithString("executionRole", m_executionRole);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", JobRunStateMapper::GetNameForJobRunState(m_state));
  }

  if(m_stateDetailsHasBeenSet)
  {
   payload.WithString("stateDetails", m_stateDetails);

  }

  if(m_releaseLabelHasBeenSet)
  {
   payload.WithString("releaseLabel", m_releaseLabel);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_attemptHasBeenSet)
  {
   payload.WithInteger("attempt", m_attempt);

  }

  if(m_attemptCreatedAtHasBeenSet)
  {
   payload.WithDouble("attemptCreatedAt", m_attemptCreatedAt.SecondsWithMSPrecision());
  }

  if(m_attemptUpdatedAtHasBeenSet)
  {
   payload.WithDouble("attemptUpdatedAt", m_attemptUpdatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
