﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/PutBotAliasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutBotAliasRequest::PutBotAliasRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_botNameHasBeenSet(false),
    m_checksumHasBeenSet(false),
    m_conversationLogsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String PutBotAliasRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_botVersionHasBeenSet)
  {
   payload.WithString("botVersion", m_botVersion);

  }

  if(m_checksumHasBeenSet)
  {
   payload.WithString("checksum", m_checksum);

  }

  if(m_conversationLogsHasBeenSet)
  {
   payload.WithObject("conversationLogs", m_conversationLogs.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}




