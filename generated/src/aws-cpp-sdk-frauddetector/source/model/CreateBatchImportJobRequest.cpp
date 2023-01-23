/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/CreateBatchImportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBatchImportJobRequest::CreateBatchImportJobRequest() : 
    m_jobIdHasBeenSet(false),
    m_inputPathHasBeenSet(false),
    m_outputPathHasBeenSet(false),
    m_eventTypeNameHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateBatchImportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_inputPathHasBeenSet)
  {
   payload.WithString("inputPath", m_inputPath);

  }

  if(m_outputPathHasBeenSet)
  {
   payload.WithString("outputPath", m_outputPath);

  }

  if(m_eventTypeNameHasBeenSet)
  {
   payload.WithString("eventTypeName", m_eventTypeName);

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("iamRoleArn", m_iamRoleArn);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateBatchImportJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.CreateBatchImportJob"));
  return headers;

}




