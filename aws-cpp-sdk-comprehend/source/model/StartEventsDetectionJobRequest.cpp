/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/StartEventsDetectionJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartEventsDetectionJobRequest::StartEventsDetectionJobRequest() : 
    m_inputDataConfigHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_targetEventTypesHasBeenSet(false)
{
}

Aws::String StartEventsDetectionJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_inputDataConfigHasBeenSet)
  {
   payload.WithObject("InputDataConfig", m_inputDataConfig.Jsonize());

  }

  if(m_outputDataConfigHasBeenSet)
  {
   payload.WithObject("OutputDataConfig", m_outputDataConfig.Jsonize());

  }

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("DataAccessRoleArn", m_dataAccessRoleArn);

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_targetEventTypesHasBeenSet)
  {
   Array<JsonValue> targetEventTypesJsonList(m_targetEventTypes.size());
   for(unsigned targetEventTypesIndex = 0; targetEventTypesIndex < targetEventTypesJsonList.GetLength(); ++targetEventTypesIndex)
   {
     targetEventTypesJsonList[targetEventTypesIndex].AsString(m_targetEventTypes[targetEventTypesIndex]);
   }
   payload.WithArray("TargetEventTypes", std::move(targetEventTypesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartEventsDetectionJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Comprehend_20171127.StartEventsDetectionJob"));
  return headers;

}




