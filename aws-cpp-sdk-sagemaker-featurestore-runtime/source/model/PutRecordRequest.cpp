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
    m_recordHasBeenSet(false)
{
}

Aws::String PutRecordRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_recordHasBeenSet)
  {
   Array<JsonValue> recordJsonList(m_record.size());
   for(unsigned recordIndex = 0; recordIndex < recordJsonList.GetLength(); ++recordIndex)
   {
     recordJsonList[recordIndex].AsObject(m_record[recordIndex].Jsonize());
   }
   payload.WithArray("Record", std::move(recordJsonList));

  }

  return payload.View().WriteReadable();
}




