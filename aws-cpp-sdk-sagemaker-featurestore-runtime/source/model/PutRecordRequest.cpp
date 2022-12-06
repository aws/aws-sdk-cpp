/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-featurestore-runtime/model/PutRecordRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMakerFeatureStoreRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutRecordRequest::PutRecordRequest() : 
    m_featureGroupNameHasBeenSet(false),
    m_recordHasBeenSet(false),
    m_targetStoresHasBeenSet(false)
{
}

Aws::String PutRecordRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_recordHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recordJsonList(m_record.size());
   for(unsigned recordIndex = 0; recordIndex < recordJsonList.GetLength(); ++recordIndex)
   {
     recordJsonList[recordIndex].AsObject(m_record[recordIndex].Jsonize());
   }
   payload.WithArray("Record", std::move(recordJsonList));

  }

  if(m_targetStoresHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetStoresJsonList(m_targetStores.size());
   for(unsigned targetStoresIndex = 0; targetStoresIndex < targetStoresJsonList.GetLength(); ++targetStoresIndex)
   {
     targetStoresJsonList[targetStoresIndex].AsString(TargetStoreMapper::GetNameForTargetStore(m_targetStores[targetStoresIndex]));
   }
   payload.WithArray("TargetStores", std::move(targetStoresJsonList));

  }

  return payload.View().WriteReadable();
}




