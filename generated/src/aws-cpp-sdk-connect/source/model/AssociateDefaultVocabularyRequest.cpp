/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AssociateDefaultVocabularyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateDefaultVocabularyRequest::AssociateDefaultVocabularyRequest() : 
    m_instanceIdHasBeenSet(false),
    m_languageCode(VocabularyLanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_vocabularyIdHasBeenSet(false)
{
}

Aws::String AssociateDefaultVocabularyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vocabularyIdHasBeenSet)
  {
   payload.WithString("VocabularyId", m_vocabularyId);

  }

  return payload.View().WriteReadable();
}




