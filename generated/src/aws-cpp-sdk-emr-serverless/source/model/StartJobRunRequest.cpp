/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/StartJobRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMRServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartJobRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("executionRoleArn", m_executionRoleArn);

  }

  if(m_executionIamPolicyHasBeenSet)
  {
   payload.WithObject("executionIamPolicy", m_executionIamPolicy.Jsonize());

  }

  if(m_jobDriverHasBeenSet)
  {
   payload.WithObject("jobDriver", m_jobDriver.Jsonize());

  }

  if(m_configurationOverridesHasBeenSet)
  {
   payload.WithObject("configurationOverrides", m_configurationOverrides.Jsonize());

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

  if(m_executionTimeoutMinutesHasBeenSet)
  {
   payload.WithInt64("executionTimeoutMinutes", m_executionTimeoutMinutes);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("mode", JobRunModeMapper::GetNameForJobRunMode(m_mode));
  }

  if(m_retryPolicyHasBeenSet)
  {
   payload.WithObject("retryPolicy", m_retryPolicy.Jsonize());

  }

  return payload.View().WriteReadable();
}




