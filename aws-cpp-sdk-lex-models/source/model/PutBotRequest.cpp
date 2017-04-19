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
    m_childDirectedHasBeenSet(false)
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
   Array<JsonValue> intentsJsonList(m_intents.size());
   for(unsigned intentsIndex = 0; intentsIndex < intentsJsonList.GetLength(); ++intentsIndex)
   {
     intentsJsonList[intentsIndex].AsObject(m_intents[intentsIndex].Jsonize());
   }
   payload.WithArray("intents", std::move(intentsJsonList));

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

  return payload.WriteReadable();
}




