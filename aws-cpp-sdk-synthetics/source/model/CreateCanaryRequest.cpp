/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/CreateCanaryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Synthetics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCanaryRequest::CreateCanaryRequest() : 
    m_nameHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_artifactS3LocationHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_runConfigHasBeenSet(false),
    m_successRetentionPeriodInDays(0),
    m_successRetentionPeriodInDaysHasBeenSet(false),
    m_failureRetentionPeriodInDays(0),
    m_failureRetentionPeriodInDaysHasBeenSet(false),
    m_runtimeVersionHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateCanaryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_codeHasBeenSet)
  {
   payload.WithObject("Code", m_code.Jsonize());

  }

  if(m_artifactS3LocationHasBeenSet)
  {
   payload.WithString("ArtifactS3Location", m_artifactS3Location);

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

  return payload.View().WriteReadable();
}




