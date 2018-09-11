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

#include <aws/ssm/model/StartSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartSessionRequest::StartSessionRequest() : 
    m_targetHasBeenSet(false),
    m_documentNameHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

Aws::String StartSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetHasBeenSet)
  {
   payload.WithString("Target", m_target);

  }

  if(m_documentNameHasBeenSet)
  {
   payload.WithString("DocumentName", m_documentName);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     Array<JsonValue> sessionManagerParameterValueListJsonList(parametersItem.second.size());
     for(unsigned sessionManagerParameterValueListIndex = 0; sessionManagerParameterValueListIndex < sessionManagerParameterValueListJsonList.GetLength(); ++sessionManagerParameterValueListIndex)
     {
       sessionManagerParameterValueListJsonList[sessionManagerParameterValueListIndex].AsString(parametersItem.second[sessionManagerParameterValueListIndex]);
     }
     parametersJsonMap.WithArray(parametersItem.first, std::move(sessionManagerParameterValueListJsonList));
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartSessionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.StartSession"));
  return headers;

}




