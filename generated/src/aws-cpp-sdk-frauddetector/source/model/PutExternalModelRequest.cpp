/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/PutExternalModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutExternalModelRequest::PutExternalModelRequest() : 
    m_modelEndpointHasBeenSet(false),
    m_modelSource(ModelSource::NOT_SET),
    m_modelSourceHasBeenSet(false),
    m_invokeModelEndpointRoleArnHasBeenSet(false),
    m_inputConfigurationHasBeenSet(false),
    m_outputConfigurationHasBeenSet(false),
    m_modelEndpointStatus(ModelEndpointStatus::NOT_SET),
    m_modelEndpointStatusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String PutExternalModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelEndpointHasBeenSet)
  {
   payload.WithString("modelEndpoint", m_modelEndpoint);

  }

  if(m_modelSourceHasBeenSet)
  {
   payload.WithString("modelSource", ModelSourceMapper::GetNameForModelSource(m_modelSource));
  }

  if(m_invokeModelEndpointRoleArnHasBeenSet)
  {
   payload.WithString("invokeModelEndpointRoleArn", m_invokeModelEndpointRoleArn);

  }

  if(m_inputConfigurationHasBeenSet)
  {
   payload.WithObject("inputConfiguration", m_inputConfiguration.Jsonize());

  }

  if(m_outputConfigurationHasBeenSet)
  {
   payload.WithObject("outputConfiguration", m_outputConfiguration.Jsonize());

  }

  if(m_modelEndpointStatusHasBeenSet)
  {
   payload.WithString("modelEndpointStatus", ModelEndpointStatusMapper::GetNameForModelEndpointStatus(m_modelEndpointStatus));
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

Aws::Http::HeaderValueCollection PutExternalModelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.PutExternalModel"));
  return headers;

}




