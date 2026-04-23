/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> triggerNamesJsonList(m_triggerNames.size());
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




