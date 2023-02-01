/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/PutBotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutBotRequest::PutBotRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_intentsHasBeenSet(false),
    m_enableModelImprovements(false),
    m_enableModelImprovementsHasBeenSet(false),
    m_nluIntentConfidenceThreshold(0.0),
    m_nluIntentConfidenceThresholdHasBeenSet(false),
    m_clarificationPromptHasBeenSet(false),
    m_abortStatementHasBeenSet(false),
    m_idleSessionTTLInSeconds(0),
    m_idleSessionTTLInSecondsHasBeenSet(false),
    m_voiceIdHasBeenSet(false),
    m_checksumHasBeenSet(false),
    m_processBehavior(ProcessBehavior::NOT_SET),
    m_processBehaviorHasBeenSet(false),
    m_locale(Locale::NOT_SET),
    m_localeHasBeenSet(false),
    m_childDirected(false),
    m_childDirectedHasBeenSet(false),
    m_detectSentiment(false),
    m_detectSentimentHasBeenSet(false),
    m_createVersion(false),
    m_createVersionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String PutBotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_intentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> intentsJsonList(m_intents.size());
   for(unsigned intentsIndex = 0; intentsIndex < intentsJsonList.GetLength(); ++intentsIndex)
   {
     intentsJsonList[intentsIndex].AsObject(m_intents[intentsIndex].Jsonize());
   }
   payload.WithArray("intents", std::move(intentsJsonList));

  }

  if(m_enableModelImprovementsHasBeenSet)
  {
   payload.WithBool("enableModelImprovements", m_enableModelImprovements);

  }

  if(m_nluIntentConfidenceThresholdHasBeenSet)
  {
   payload.WithDouble("nluIntentConfidenceThreshold", m_nluIntentConfidenceThreshold);

  }

  if(m_clarificationPromptHasBeenSet)
  {
   payload.WithObject("clarificationPrompt", m_clarificationPrompt.Jsonize());

  }

  if(m_abortStatementHasBeenSet)
  {
   payload.WithObject("abortStatement", m_abortStatement.Jsonize());

  }

  if(m_idleSessionTTLInSecondsHasBeenSet)
  {
   payload.WithInteger("idleSessionTTLInSeconds", m_idleSessionTTLInSeconds);

  }

  if(m_voiceIdHasBeenSet)
  {
   payload.WithString("voiceId", m_voiceId);

  }

  if(m_checksumHasBeenSet)
  {
   payload.WithString("checksum", m_checksum);

  }

  if(m_processBehaviorHasBeenSet)
  {
   payload.WithString("processBehavior", ProcessBehaviorMapper::GetNameForProcessBehavior(m_processBehavior));
  }

  if(m_localeHasBeenSet)
  {
   payload.WithString("locale", LocaleMapper::GetNameForLocale(m_locale));
  }

  if(m_childDirectedHasBeenSet)
  {
   payload.WithBool("childDirected", m_childDirected);

  }

  if(m_detectSentimentHasBeenSet)
  {
   payload.WithBool("detectSentiment", m_detectSentiment);

  }

  if(m_createVersionHasBeenSet)
  {
   payload.WithBool("createVersion", m_createVersion);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}




