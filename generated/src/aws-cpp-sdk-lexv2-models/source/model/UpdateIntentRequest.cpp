/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/UpdateIntentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateIntentRequest::UpdateIntentRequest() : 
    m_intentIdHasBeenSet(false),
    m_intentNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parentIntentSignatureHasBeenSet(false),
    m_sampleUtterancesHasBeenSet(false),
    m_dialogCodeHookHasBeenSet(false),
    m_fulfillmentCodeHookHasBeenSet(false),
    m_slotPrioritiesHasBeenSet(false),
    m_intentConfirmationSettingHasBeenSet(false),
    m_intentClosingSettingHasBeenSet(false),
    m_inputContextsHasBeenSet(false),
    m_outputContextsHasBeenSet(false),
    m_kendraConfigurationHasBeenSet(false),
    m_botIdHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_localeIdHasBeenSet(false),
    m_initialResponseSettingHasBeenSet(false)
{
}

Aws::String UpdateIntentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_intentNameHasBeenSet)
  {
   payload.WithString("intentName", m_intentName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_parentIntentSignatureHasBeenSet)
  {
   payload.WithString("parentIntentSignature", m_parentIntentSignature);

  }

  if(m_sampleUtterancesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sampleUtterancesJsonList(m_sampleUtterances.size());
   for(unsigned sampleUtterancesIndex = 0; sampleUtterancesIndex < sampleUtterancesJsonList.GetLength(); ++sampleUtterancesIndex)
   {
     sampleUtterancesJsonList[sampleUtterancesIndex].AsObject(m_sampleUtterances[sampleUtterancesIndex].Jsonize());
   }
   payload.WithArray("sampleUtterances", std::move(sampleUtterancesJsonList));

  }

  if(m_dialogCodeHookHasBeenSet)
  {
   payload.WithObject("dialogCodeHook", m_dialogCodeHook.Jsonize());

  }

  if(m_fulfillmentCodeHookHasBeenSet)
  {
   payload.WithObject("fulfillmentCodeHook", m_fulfillmentCodeHook.Jsonize());

  }

  if(m_slotPrioritiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> slotPrioritiesJsonList(m_slotPriorities.size());
   for(unsigned slotPrioritiesIndex = 0; slotPrioritiesIndex < slotPrioritiesJsonList.GetLength(); ++slotPrioritiesIndex)
   {
     slotPrioritiesJsonList[slotPrioritiesIndex].AsObject(m_slotPriorities[slotPrioritiesIndex].Jsonize());
   }
   payload.WithArray("slotPriorities", std::move(slotPrioritiesJsonList));

  }

  if(m_intentConfirmationSettingHasBeenSet)
  {
   payload.WithObject("intentConfirmationSetting", m_intentConfirmationSetting.Jsonize());

  }

  if(m_intentClosingSettingHasBeenSet)
  {
   payload.WithObject("intentClosingSetting", m_intentClosingSetting.Jsonize());

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

  if(m_kendraConfigurationHasBeenSet)
  {
   payload.WithObject("kendraConfiguration", m_kendraConfiguration.Jsonize());

  }

  if(m_initialResponseSettingHasBeenSet)
  {
   payload.WithObject("initialResponseSetting", m_initialResponseSetting.Jsonize());

  }

  return payload.View().WriteReadable();
}




