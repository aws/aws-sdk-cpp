/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/UpdateCanaryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Synthetics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateCanaryRequest::UpdateCanaryRequest() : 
    m_nameHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_runtimeVersionHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_runConfigHasBeenSet(false),
    m_successRetentionPeriodInDays(0),
    m_successRetentionPeriodInDaysHasBeenSet(false),
    m_failureRetentionPeriodInDays(0),
    m_failureRetentionPeriodInDaysHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_visualReferenceHasBeenSet(false),
    m_artifactS3LocationHasBeenSet(false),
    m_artifactConfigHasBeenSet(false)
{
}

Aws::String UpdateCanaryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithObject("Code", m_code.Jsonize());

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("ExecutionRoleArn", m_executionRoleArn);

  }

  if(m_runtimeVersionHasBeenSet)
  {
   payload.WithString("RuntimeVersion", m_runtimeVersion);

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

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_visualReferenceHasBeenSet)
  {
   payload.WithObject("VisualReference", m_visualReference.Jsonize());

  }

  if(m_artifactS3LocationHasBeenSet)
  {
   payload.WithString("ArtifactS3Location", m_artifactS3Location);

  }

  if(m_artifactConfigHasBeenSet)
  {
   payload.WithObject("ArtifactConfig", m_artifactConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




