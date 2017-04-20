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
    m_checksumHasBeenSet(false)
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
   Array<JsonValue> slotsJsonList(m_slots.size());
   for(unsigned slotsIndex = 0; slotsIndex < slotsJsonList.GetLength(); ++slotsIndex)
   {
     slotsJsonList[slotsIndex].AsObject(m_slots[slotsIndex].Jsonize());
   }
   payload.WithArray("slots", std::move(slotsJsonList));

  }

  if(m_sampleUtterancesHasBeenSet)
  {
   Array<JsonValue> sampleUtterancesJsonList(m_sampleUtterances.size());
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

  return payload.WriteReadable();
}




