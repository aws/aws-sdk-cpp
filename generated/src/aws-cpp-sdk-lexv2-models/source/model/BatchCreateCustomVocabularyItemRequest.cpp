/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BatchCreateCustomVocabularyItemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchCreateCustomVocabularyItemRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_customVocabularyItemListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customVocabularyItemListJsonList(m_customVocabularyItemList.size());
   for(unsigned customVocabularyItemListIndex = 0; customVocabularyItemListIndex < customVocabularyItemListJsonList.GetLength(); ++customVocabularyItemListIndex)
   {
     customVocabularyItemListJsonList[customVocabularyItemListIndex].AsObject(m_customVocabularyItemList[customVocabularyItemListIndex].Jsonize());
   }
   payload.WithArray("customVocabularyItemList", std::move(customVocabularyItemListJsonList));

  }

  return payload.View().WriteReadable();
}




