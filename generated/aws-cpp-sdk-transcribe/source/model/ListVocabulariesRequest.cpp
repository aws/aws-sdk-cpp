/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/ListVocabulariesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListVocabulariesRequest::ListVocabulariesRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_stateEquals(VocabularyState::NOT_SET),
    m_stateEqualsHasBeenSet(false),
    m_nameContainsHasBeenSet(false)
{
}

Aws::String ListVocabulariesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_stateEqualsHasBeenSet)
  {
   payload.WithString("StateEquals", VocabularyStateMapper::GetNameForVocabularyState(m_stateEquals));
  }

  if(m_nameContainsHasBeenSet)
  {
   payload.WithString("NameContains", m_nameContains);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListVocabulariesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Transcribe.ListVocabularies"));
  return headers;

}




