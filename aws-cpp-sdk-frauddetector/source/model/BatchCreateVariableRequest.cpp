/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/BatchCreateVariableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchCreateVariableRequest::BatchCreateVariableRequest() : 
    m_variableEntriesHasBeenSet(false)
{
}

Aws::String BatchCreateVariableRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_variableEntriesHasBeenSet)
  {
   Array<JsonValue> variableEntriesJsonList(m_variableEntries.size());
   for(unsigned variableEntriesIndex = 0; variableEntriesIndex < variableEntriesJsonList.GetLength(); ++variableEntriesIndex)
   {
     variableEntriesJsonList[variableEntriesIndex].AsObject(m_variableEntries[variableEntriesIndex].Jsonize());
   }
   payload.WithArray("variableEntries", std::move(variableEntriesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchCreateVariableRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.BatchCreateVariable"));
  return headers;

}




