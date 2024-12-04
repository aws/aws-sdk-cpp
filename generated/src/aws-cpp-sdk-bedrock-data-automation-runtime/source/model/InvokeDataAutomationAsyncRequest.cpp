/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation-runtime/model/InvokeDataAutomationAsyncRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockDataAutomationRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

InvokeDataAutomationAsyncRequest::InvokeDataAutomationAsyncRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_inputConfigurationHasBeenSet(false),
    m_outputConfigurationHasBeenSet(false),
    m_dataAutomationConfigurationHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_notificationConfigurationHasBeenSet(false),
    m_blueprintsHasBeenSet(false)
{
}

Aws::String InvokeDataAutomationAsyncRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_inputConfigurationHasBeenSet)
  {
   payload.WithObject("inputConfiguration", m_inputConfiguration.Jsonize());

  }

  if(m_outputConfigurationHasBeenSet)
  {
   payload.WithObject("outputConfiguration", m_outputConfiguration.Jsonize());

  }

  if(m_dataAutomationConfigurationHasBeenSet)
  {
   payload.WithObject("dataAutomationConfiguration", m_dataAutomationConfiguration.Jsonize());

  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("encryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  if(m_notificationConfigurationHasBeenSet)
  {
   payload.WithObject("notificationConfiguration", m_notificationConfiguration.Jsonize());

  }

  if(m_blueprintsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blueprintsJsonList(m_blueprints.size());
   for(unsigned blueprintsIndex = 0; blueprintsIndex < blueprintsJsonList.GetLength(); ++blueprintsIndex)
   {
     blueprintsJsonList[blueprintsIndex].AsObject(m_blueprints[blueprintsIndex].Jsonize());
   }
   payload.WithArray("blueprints", std::move(blueprintsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection InvokeDataAutomationAsyncRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonBedrockKeystoneRuntimeService.InvokeDataAutomationAsync"));
  return headers;

}




