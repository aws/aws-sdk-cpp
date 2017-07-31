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

#include <aws/ssm/model/SendAutomationSignalRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendAutomationSignalRequest::SendAutomationSignalRequest() : 
    m_automationExecutionIdHasBeenSet(false),
    m_signalType(SignalType::NOT_SET),
    m_signalTypeHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
}

Aws::String SendAutomationSignalRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_automationExecutionIdHasBeenSet)
  {
   payload.WithString("AutomationExecutionId", m_automationExecutionId);

  }

  if(m_signalTypeHasBeenSet)
  {
   payload.WithString("SignalType", SignalTypeMapper::GetNameForSignalType(m_signalType));
  }

  if(m_payloadHasBeenSet)
  {
   JsonValue payloadJsonMap;
   for(auto& payloadItem : m_payload)
   {
     Array<JsonValue> automationParameterValueListJsonList(payloadItem.second.size());
     for(unsigned automationParameterValueListIndex = 0; automationParameterValueListIndex < automationParameterValueListJsonList.GetLength(); ++automationParameterValueListIndex)
     {
       automationParameterValueListJsonList[automationParameterValueListIndex].AsString(payloadItem.second[automationParameterValueListIndex]);
     }
     payloadJsonMap.WithArray(payloadItem.first, std::move(automationParameterValueListJsonList));
   }
   payload.WithObject("Payload", std::move(payloadJsonMap));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection SendAutomationSignalRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.SendAutomationSignal"));
  return headers;

}




