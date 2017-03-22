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
#include <aws/ssm/model/StartAutomationExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartAutomationExecutionRequest::StartAutomationExecutionRequest() : 
    m_documentNameHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

Aws::String StartAutomationExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_documentNameHasBeenSet)
  {
   payload.WithString("DocumentName", m_documentName);

  }

  if(m_documentVersionHasBeenSet)
  {
   payload.WithString("DocumentVersion", m_documentVersion);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     Array<JsonValue> automationParameterValueListJsonList(parametersItem.second.size());
     for(unsigned automationParameterValueListIndex = 0; automationParameterValueListIndex < automationParameterValueListJsonList.GetLength(); ++automationParameterValueListIndex)
     {
       automationParameterValueListJsonList[automationParameterValueListIndex].AsString(parametersItem.second[automationParameterValueListIndex]);
     }
     parametersJsonMap.WithArray(parametersItem.first, std::move(automationParameterValueListJsonList));
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection StartAutomationExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.StartAutomationExecution"));
  return headers;

}




