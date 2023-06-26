/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/CreateModelVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateModelVersionRequest::CreateModelVersionRequest() : 
    m_modelIdHasBeenSet(false),
    m_modelType(ModelTypeEnum::NOT_SET),
    m_modelTypeHasBeenSet(false),
    m_trainingDataSource(TrainingDataSourceEnum::NOT_SET),
    m_trainingDataSourceHasBeenSet(false),
    m_trainingDataSchemaHasBeenSet(false),
    m_externalEventsDetailHasBeenSet(false),
    m_ingestedEventsDetailHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateModelVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelIdHasBeenSet)
  {
   payload.WithString("modelId", m_modelId);

  }

  if(m_modelTypeHasBeenSet)
  {
   payload.WithString("modelType", ModelTypeEnumMapper::GetNameForModelTypeEnum(m_modelType));
  }

  if(m_trainingDataSourceHasBeenSet)
  {
   payload.WithString("trainingDataSource", TrainingDataSourceEnumMapper::GetNameForTrainingDataSourceEnum(m_trainingDataSource));
  }

  if(m_trainingDataSchemaHasBeenSet)
  {
   payload.WithObject("trainingDataSchema", m_trainingDataSchema.Jsonize());

  }

  if(m_externalEventsDetailHasBeenSet)
  {
   payload.WithObject("externalEventsDetail", m_externalEventsDetail.Jsonize());

  }

  if(m_ingestedEventsDetailHasBeenSet)
  {
   payload.WithObject("ingestedEventsDetail", m_ingestedEventsDetail.Jsonize());

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

Aws::Http::HeaderValueCollection CreateModelVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.CreateModelVersion"));
  return headers;

}




