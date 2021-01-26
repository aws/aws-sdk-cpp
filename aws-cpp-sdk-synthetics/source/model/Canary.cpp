/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/Canary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Synthetics
{
namespace Model
{

Canary::Canary() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_runConfigHasBeenSet(false),
    m_successRetentionPeriodInDays(0),
    m_successRetentionPeriodInDaysHasBeenSet(false),
    m_failureRetentionPeriodInDays(0),
    m_failureRetentionPeriodInDaysHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_timelineHasBeenSet(false),
    m_artifactS3LocationHasBeenSet(false),
    m_engineArnHasBeenSet(false),
    m_runtimeVersionHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Canary::Canary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_runConfigHasBeenSet(false),
    m_successRetentionPeriodInDays(0),
    m_successRetentionPeriodInDaysHasBeenSet(false),
    m_failureRetentionPeriodInDays(0),
    m_failureRetentionPeriodInDaysHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_timelineHasBeenSet(false),
    m_artifactS3LocationHasBeenSet(false),
    m_engineArnHasBeenSet(false),
    m_runtimeVersionHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Canary& Canary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Code"))
  {
    m_code = jsonValue.GetObject("Code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("ExecutionRoleArn");

    m_executionRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Schedule"))
  {
    m_schedule = jsonValue.GetObject("Schedule");

    m_scheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RunConfig"))
  {
    m_runConfig = jsonValue.GetObject("RunConfig");

    m_runConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SuccessRetentionPeriodInDays"))
  {
    m_successRetentionPeriodInDays = jsonValue.GetInteger("SuccessRetentionPeriodInDays");

    m_successRetentionPeriodInDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureRetentionPeriodInDays"))
  {
    m_failureRetentionPeriodInDays = jsonValue.GetInteger("FailureRetentionPeriodInDays");

    m_failureRetentionPeriodInDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timeline"))
  {
    m_timeline = jsonValue.GetObject("Timeline");

    m_timelineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ArtifactS3Location"))
  {
    m_artifactS3Location = jsonValue.GetString("ArtifactS3Location");

    m_artifactS3LocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineArn"))
  {
    m_engineArn = jsonValue.GetString("EngineArn");

    m_engineArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuntimeVersion"))
  {
    m_runtimeVersion = jsonValue.GetString("RuntimeVersion");

    m_runtimeVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");

    m_vpcConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue Canary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_codeHasBeenSet)
  {
   payload.WithObject("Code", m_code.Jsonize());

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("ExecutionRoleArn", m_executionRoleArn);

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("Schedule", m_schedule.Jsonize());

  }

  if(m_runConfigHasBeenSet)
  {
   payload.WithObject("RunConfig", m_runConfig.Jsonize());

  }

  if(m_successRetentionPeriodInDaysHasBeenSet)
  {
   payload.WithInteger("SuccessRetentionPeriodInDays", m_successRetentionPeriodInDays);

  }

  if(m_failureRetentionPeriodInDaysHasBeenSet)
  {
   payload.WithInteger("FailureRetentionPeriodInDays", m_failureRetentionPeriodInDays);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  if(m_timelineHasBeenSet)
  {
   payload.WithObject("Timeline", m_timeline.Jsonize());

  }

  if(m_artifactS3LocationHasBeenSet)
  {
   payload.WithString("ArtifactS3Location", m_artifactS3Location);

  }

  if(m_engineArnHasBeenSet)
  {
   payload.WithString("EngineArn", m_engineArn);

  }

  if(m_runtimeVersionHasBeenSet)
  {
   payload.WithString("RuntimeVersion", m_runtimeVersion);

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
