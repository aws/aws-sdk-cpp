/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/PutIntentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutIntentRequest::PutIntentRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_slotsHasBeenSet(false),
    m_sampleUtterancesHasBeenSet(false),
    m_confirmationPromptHasBeenSet(false),
    m_rejectionStatementHasBeenSet(false),
    m_followUpPromptHasBeenSet(false),
    m_conclusionStatementHasBeenSet(false),
    m_dialogCodeHookHasBeenSet(false),
    m_fulfillmentActivityHasBeenSet(false),
    m_parentIntentSignatureHasBeenSet(false),
    m_checksumHasBeenSet(false),
    m_createVersion(false),
    m_createVersionHasBeenSet(false),
    m_kendraConfigurationHasBeenSet(false),
    m_inputContextsHasBeenSet(false),
    m_outputContextsHasBeenSet(false)
{
}

Aws::String PutIntentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_slotsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> slotsJsonList(m_slots.size());
   for(unsigned slotsIndex = 0; slotsIndex < slotsJsonList.GetLength(); ++slotsIndex)
   {
     slotsJsonList[slotsIndex].AsObject(m_slots[slotsIndex].Jsonize());
   }
   payload.WithArray("slots", std::move(slotsJsonList));

  }

  if(m_sampleUtterancesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sampleUtterancesJsonList(m_sampleUtterances.size());
   for(unsigned sampleUtterancesIndex = 0; sampleUtterancesIndex < sampleUtterancesJsonList.GetLength(); ++sampleUtterancesIndex)
   {
     sampleUtterancesJsonList[sampleUtterancesIndex].AsString(m_sampleUtterances[sampleUtterancesIndex]);
   }
   payload.WithArray("sampleUtterances", std::move(sampleUtterancesJsonList));

  }

  if(m_confirmationPromptHasBeenSet)
  {
   payload.WithObject("confirmationPrompt", m_confirmationPrompt.Jsonize());

  }

  if(m_rejectionStatementHasBeenSet)
  {
   payload.WithObject("rejectionStatement", m_rejectionStatement.Jsonize());

  }

  if(m_followUpPromptHasBeenSet)
  {
   payload.WithObject("followUpPrompt", m_followUpPrompt.Jsonize());

  }

  if(m_conclusionStatementHasBeenSet)
  {
   payload.WithObject("conclusionStatement", m_conclusionStatement.Jsonize());

  }

  if(m_dialogCodeHookHasBeenSet)
  {
   payload.WithObject("dialogCodeHook", m_dialogCodeHook.Jsonize());

  }

  if(m_fulfillmentActivityHasBeenSet)
  {
   payload.WithObject("fulfillmentActivity", m_fulfillmentActivity.Jsonize());

  }

  if(m_parentIntentSignatureHasBeenSet)
  {
   payload.WithString("parentIntentSignature", m_parentIntentSignature);

  }

  if(m_checksumHasBeenSet)
  {
   payload.WithString("checksum", m_checksum);

  }

  if(m_createVersionHasBeenSet)
  {
   payload.WithBool("createVersion", m_createVersion);

  }

  if(m_kendraConfigurationHasBeenSet)
  {
   payload.WithObject("kendraConfiguration", m_kendraConfiguration.Jsonize());

  }

  if(m_inputContextsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputContextsJsonList(m_inputContexts.size());
   for(unsigned inputContextsIndex = 0; inputContextsIndex < inputContextsJsonList.GetLength(); ++inputContextsIndex)
   {
     inputContextsJsonList[inputContextsIndex].AsObject(m_inputContexts[inputContextsIndex].Jsonize());
   }
   payload.WithArray("inputContexts", std::move(inputContextsJsonList));

  }

  if(m_outputContextsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputContextsJsonList(m_outputContexts.size());
   for(unsigned outputContextsIndex = 0; outputContextsIndex < outputContextsJsonList.GetLength(); ++outputContextsIndex)
   {
     outputContextsJsonList[outputContextsIndex].AsObject(m_outputContexts[outputContextsIndex].Jsonize());
   }
   payload.WithArray("outputContexts", std::move(outputContextsJsonList));

  }

  return payload.View().WriteReadable();
}




