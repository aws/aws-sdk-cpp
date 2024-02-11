/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/UpdateBotLocaleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBotLocaleRequest::UpdateBotLocaleRequest() : 
    m_botIdHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_localeIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nluIntentConfidenceThreshold(0.0),
    m_nluIntentConfidenceThresholdHasBeenSet(false),
    m_voiceSettingsHasBeenSet(false),
    m_generativeAISettingsHasBeenSet(false)
{
}

Aws::String UpdateBotLocaleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nluIntentConfidenceThresholdHasBeenSet)
  {
   payload.WithDouble("nluIntentConfidenceThreshold", m_nluIntentConfidenceThreshold);

  }

  if(m_voiceSettingsHasBeenSet)
  {
   payload.WithObject("voiceSettings", m_voiceSettings.Jsonize());

  }

  if(m_generativeAISettingsHasBeenSet)
  {
   payload.WithObject("generativeAISettings", m_generativeAISettings.Jsonize());

  }

  return payload.View().WriteReadable();
}




