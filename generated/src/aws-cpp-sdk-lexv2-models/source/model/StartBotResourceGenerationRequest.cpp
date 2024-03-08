/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/StartBotResourceGenerationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartBotResourceGenerationRequest::StartBotResourceGenerationRequest() : 
    m_generationInputPromptHasBeenSet(false),
    m_botIdHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_localeIdHasBeenSet(false)
{
}

Aws::String StartBotResourceGenerationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_generationInputPromptHasBeenSet)
  {
   payload.WithString("generationInputPrompt", m_generationInputPrompt);

  }

  return payload.View().WriteReadable();
}




