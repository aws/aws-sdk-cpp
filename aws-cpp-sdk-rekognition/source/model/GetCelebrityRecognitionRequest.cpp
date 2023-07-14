/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/GetCelebrityRecognitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCelebrityRecognitionRequest::GetCelebrityRecognitionRequest() : 
    m_jobIdHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_sortBy(CelebrityRecognitionSortBy::NOT_SET),
    m_sortByHasBeenSet(false)
{
}

Aws::String GetCelebrityRecognitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", CelebrityRecognitionSortByMapper::GetNameForCelebrityRecognitionSortBy(m_sortBy));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetCelebrityRecognitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.GetCelebrityRecognition"));
  return headers;

}




