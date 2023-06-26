/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/StartBotRecommendationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartBotRecommendationRequest::StartBotRecommendationRequest() : 
    m_botIdHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_localeIdHasBeenSet(false),
    m_transcriptSourceSettingHasBeenSet(false),
    m_encryptionSettingHasBeenSet(false)
{
}

Aws::String StartBotRecommendationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_transcriptSourceSettingHasBeenSet)
  {
   payload.WithObject("transcriptSourceSetting", m_transcriptSourceSetting.Jsonize());

  }

  if(m_encryptionSettingHasBeenSet)
  {
   payload.WithObject("encryptionSetting", m_encryptionSetting.Jsonize());

  }

  return payload.View().WriteReadable();
}




