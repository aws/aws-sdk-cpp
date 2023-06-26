/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchGetTriggersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetTriggersRequest::BatchGetTriggersRequest() : 
    m_triggerNamesHasBeenSet(false)
{
}

Aws::String BatchGetTriggersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_triggerNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> triggerNamesJsonList(m_triggerNames.size());
   for(unsigned triggerNamesIndex = 0; triggerNamesIndex < triggerNamesJsonList.GetLength(); ++triggerNamesIndex)
   {
     triggerNamesJsonList[triggerNamesIndex].AsString(m_triggerNames[triggerNamesIndex]);
   }
   payload.WithArray("TriggerNames", std::move(triggerNamesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetTriggersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.BatchGetTriggers"));
  return headers;

}




