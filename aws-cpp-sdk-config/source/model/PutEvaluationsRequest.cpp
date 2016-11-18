/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/config/model/PutEvaluationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutEvaluationsRequest::PutEvaluationsRequest() : 
    m_evaluationsHasBeenSet(false),
    m_resultTokenHasBeenSet(false)
{
}

Aws::String PutEvaluationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_evaluationsHasBeenSet)
  {
   Array<JsonValue> evaluationsJsonList(m_evaluations.size());
   for(unsigned evaluationsIndex = 0; evaluationsIndex < evaluationsJsonList.GetLength(); ++evaluationsIndex)
   {
     evaluationsJsonList[evaluationsIndex].AsObject(m_evaluations[evaluationsIndex].Jsonize());
   }
   payload.WithArray("Evaluations", std::move(evaluationsJsonList));

  }

  if(m_resultTokenHasBeenSet)
  {
   payload.WithString("ResultToken", m_resultToken);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection PutEvaluationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.PutEvaluations"));
  return headers;

}



