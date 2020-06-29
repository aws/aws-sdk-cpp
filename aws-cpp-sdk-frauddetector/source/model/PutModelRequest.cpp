/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/PutModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutModelRequest::PutModelRequest() : 
    m_modelIdHasBeenSet(false),
    m_modelType(ModelTypeEnum::NOT_SET),
    m_modelTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_trainingDataSourceHasBeenSet(false),
    m_modelVariablesHasBeenSet(false),
    m_labelSchemaHasBeenSet(false)
{
}

Aws::String PutModelRequest::SerializePayload() const
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

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_trainingDataSourceHasBeenSet)
  {
   payload.WithObject("trainingDataSource", m_trainingDataSource.Jsonize());

  }

  if(m_modelVariablesHasBeenSet)
  {
   Array<JsonValue> modelVariablesJsonList(m_modelVariables.size());
   for(unsigned modelVariablesIndex = 0; modelVariablesIndex < modelVariablesJsonList.GetLength(); ++modelVariablesIndex)
   {
     modelVariablesJsonList[modelVariablesIndex].AsObject(m_modelVariables[modelVariablesIndex].Jsonize());
   }
   payload.WithArray("modelVariables", std::move(modelVariablesJsonList));

  }

  if(m_labelSchemaHasBeenSet)
  {
   payload.WithObject("labelSchema", m_labelSchema.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutModelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.PutModel"));
  return headers;

}




