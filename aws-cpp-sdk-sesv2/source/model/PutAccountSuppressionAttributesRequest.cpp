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

#include <aws/sesv2/model/PutAccountSuppressionAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutAccountSuppressionAttributesRequest::PutAccountSuppressionAttributesRequest() : 
    m_suppressedReasonsHasBeenSet(false)
{
}

Aws::String PutAccountSuppressionAttributesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_suppressedReasonsHasBeenSet)
  {
   Array<JsonValue> suppressedReasonsJsonList(m_suppressedReasons.size());
   for(unsigned suppressedReasonsIndex = 0; suppressedReasonsIndex < suppressedReasonsJsonList.GetLength(); ++suppressedReasonsIndex)
   {
     suppressedReasonsJsonList[suppressedReasonsIndex].AsString(SuppressionListReasonMapper::GetNameForSuppressionListReason(m_suppressedReasons[suppressedReasonsIndex]));
   }
   payload.WithArray("SuppressedReasons", std::move(suppressedReasonsJsonList));

  }

  return payload.View().WriteReadable();
}




