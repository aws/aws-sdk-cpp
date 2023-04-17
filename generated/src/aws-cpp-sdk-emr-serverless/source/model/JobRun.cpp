/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/JobRun.h>
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

JobRun::JobRun() : 
    m_applicationIdHasBeenSet(false),
    m_jobRunIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_executionRoleHasBeenSet(false),
    m_state(JobRunState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateDetailsHasBeenSet(false),
    m_releaseLabelHasBeenSet(false),
    m_configurationOverridesHasBeenSet(false),
    m_jobDriverHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_totalResourceUtilizationHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_totalExecutionDurationSeconds(0),
    m_totalExecutionDurationSecondsHasBeenSet(false),
    m_executionTimeoutMinutes(0),
    m_executionTimeoutMinutesHasBeenSet(false),
    m_billedResourceUtilizationHasBeenSet(false)
{
}

JobRun::JobRun(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_jobRunIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_executionRoleHasBeenSet(false),
    m_state(JobRunState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateDetailsHasBeenSet(false),
    m_releaseLabelHasBeenSet(false),
    m_configurationOverridesHasBeenSet(false),
    m_jobDriverHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_totalResourceUtilizationHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_totalExecutionDurationSeconds(0),
    m_totalExecutionDurationSecondsHasBeenSet(false),
    m_executionTimeoutMinutes(0),
    m_executionTimeoutMinutesHasBeenSet(false),
    m_billedResourceUtilizationHasBeenSet(false)
{
  *this = jsonValue;
}

JobRun& JobRun::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobRunId"))
  {
    m_jobRunId = jsonValue.GetString("jobRunId");

    m_jobRunIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
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

  if(jsonValue.ValueExists("configurationOverrides"))
  {
    m_configurationOverrides = jsonValue.GetObject("configurationOverrides");

    m_configurationOverridesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobDriver"))
  {
    m_jobDriver = jsonValue.GetObject("jobDriver");

    m_jobDriverHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalResourceUtilization"))
  {
    m_totalResourceUtilization = jsonValue.GetObject("totalResourceUtilization");

    m_totalResourceUtilizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkConfiguration"))
  {
    m_networkConfiguration = jsonValue.GetObject("networkConfiguration");

    m_networkConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalExecutionDurationSeconds"))
  {
    m_totalExecutionDurationSeconds = jsonValue.GetInteger("totalExecutionDurationSeconds");

    m_totalExecutionDurationSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionTimeoutMinutes"))
  {
    m_executionTimeoutMinutes = jsonValue.GetInt64("executionTimeoutMinutes");

    m_executionTimeoutMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("billedResourceUtilization"))
  {
    m_billedResourceUtilization = jsonValue.GetObject("billedResourceUtilization");

    m_billedResourceUtilizationHasBeenSet = true;
  }

  return *this;
}

JsonValue JobRun::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("applicationId", m_applicationId);

  }

  if(m_jobRunIdHasBeenSet)
  {
   payload.WithString("jobRunId", m_jobRunId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

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

  if(m_configurationOverridesHasBeenSet)
  {
   payload.WithObject("configurationOverrides", m_configurationOverrides.Jsonize());

  }

  if(m_jobDriverHasBeenSet)
  {
   payload.WithObject("jobDriver", m_jobDriver.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_totalResourceUtilizationHasBeenSet)
  {
   payload.WithObject("totalResourceUtilization", m_totalResourceUtilization.Jsonize());

  }

  if(m_networkConfigurationHasBeenSet)
  {
   payload.WithObject("networkConfiguration", m_networkConfiguration.Jsonize());

  }

  if(m_totalExecutionDurationSecondsHasBeenSet)
  {
   payload.WithInteger("totalExecutionDurationSeconds", m_totalExecutionDurationSeconds);

  }

  if(m_executionTimeoutMinutesHasBeenSet)
  {
   payload.WithInt64("executionTimeoutMinutes", m_executionTimeoutMinutes);

  }

  if(m_billedResourceUtilizationHasBeenSet)
  {
   payload.WithObject("billedResourceUtilization", m_billedResourceUtilization.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
