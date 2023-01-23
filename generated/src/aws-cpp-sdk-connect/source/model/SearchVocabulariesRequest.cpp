/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SearchVocabulariesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchVocabulariesRequest::SearchVocabulariesRequest() : 
    m_instanceIdHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_state(VocabularyState::NOT_SET),
    m_stateHasBeenSet(false),
    m_nameStartsWithHasBeenSet(false),
    m_languageCode(VocabularyLanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false)
{
}

Aws::String SearchVocabulariesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", VocabularyStateMapper::GetNameForVocabularyState(m_state));
  }

  if(m_nameStartsWithHasBeenSet)
  {
   payload.WithString("NameStartsWith", m_nameStartsWith);

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", VocabularyLanguageCodeMapper::GetNameForVocabularyLanguageCode(m_languageCode));
  }

  return payload.View().WriteReadable();
}




