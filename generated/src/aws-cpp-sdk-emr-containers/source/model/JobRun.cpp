/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/JobRun.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

JobRun::JobRun() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_virtualClusterIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_state(JobRunState::NOT_SET),
    m_stateHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_releaseLabelHasBeenSet(false),
    m_configurationOverridesHasBeenSet(false),
    m_jobDriverHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_finishedAtHasBeenSet(false),
    m_stateDetailsHasBeenSet(false),
    m_failureReason(FailureReason::NOT_SET),
    m_failureReasonHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

JobRun::JobRun(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_virtualClusterIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_state(JobRunState::NOT_SET),
    m_stateHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_releaseLabelHasBeenSet(false),
    m_configurationOverridesHasBeenSet(false),
    m_jobDriverHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_finishedAtHasBeenSet(false),
    m_stateDetailsHasBeenSet(false),
    m_failureReason(FailureReason::NOT_SET),
    m_failureReasonHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

JobRun& JobRun::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("virtualClusterId"))
  {
    m_virtualClusterId = jsonValue.GetString("virtualClusterId");

    m_virtualClusterIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = JobRunStateMapper::GetJobRunStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientToken"))
  {
    m_clientToken = jsonValue.GetString("clientToken");

    m_clientTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("executionRoleArn");

    m_executionRoleArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("finishedAt"))
  {
    m_finishedAt = jsonValue.GetString("finishedAt");

    m_finishedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateDetails"))
  {
    m_stateDetails = jsonValue.GetString("stateDetails");

    m_stateDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = FailureReasonMapper::GetFailureReasonForName(jsonValue.GetString("failureReason"));

    m_failureReasonHasBeenSet = true;
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

  return *this;
}

JsonValue JobRun::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_virtualClusterIdHasBeenSet)
  {
   payload.WithString("virtualClusterId", m_virtualClusterId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", JobRunStateMapper::GetNameForJobRunState(m_state));
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("executionRoleArn", m_executionRoleArn);

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

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_finishedAtHasBeenSet)
  {
   payload.WithString("finishedAt", m_finishedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_stateDetailsHasBeenSet)
  {
   payload.WithString("stateDetails", m_stateDetails);

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", FailureReasonMapper::GetNameForFailureReason(m_failureReason));
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

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
