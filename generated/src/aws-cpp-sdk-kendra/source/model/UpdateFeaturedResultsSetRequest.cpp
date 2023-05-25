/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/UpdateFeaturedResultsSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFeaturedResultsSetRequest::UpdateFeaturedResultsSetRequest() : 
    m_indexIdHasBeenSet(false),
    m_featuredResultsSetIdHasBeenSet(false),
    m_featuredResultsSetNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(FeaturedResultsSetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_queryTextsHasBeenSet(false),
    m_featuredDocumentsHasBeenSet(false)
{
}

Aws::String UpdateFeaturedResultsSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_indexIdHasBeenSet)
  {
   payload.WithString("IndexId", m_indexId);

  }

  if(m_featuredResultsSetIdHasBeenSet)
  {
   payload.WithString("FeaturedResultsSetId", m_featuredResultsSetId);

  }

  if(m_featuredResultsSetNameHasBeenSet)
  {
   payload.WithString("FeaturedResultsSetName", m_featuredResultsSetName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", FeaturedResultsSetStatusMapper::GetNameForFeaturedResultsSetStatus(m_status));
  }

  if(m_queryTextsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> queryTextsJsonList(m_queryTexts.size());
   for(unsigned queryTextsIndex = 0; queryTextsIndex < queryTextsJsonList.GetLength(); ++queryTextsIndex)
   {
     queryTextsJsonList[queryTextsIndex].AsString(m_queryTexts[queryTextsIndex]);
   }
   payload.WithArray("QueryTexts", std::move(queryTextsJsonList));

  }

  if(m_featuredDocumentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> featuredDocumentsJsonList(m_featuredDocuments.size());
   for(unsigned featuredDocumentsIndex = 0; featuredDocumentsIndex < featuredDocumentsJsonList.GetLength(); ++featuredDocumentsIndex)
   {
     featuredDocumentsJsonList[featuredDocumentsIndex].AsObject(m_featuredDocuments[featuredDocumentsIndex].Jsonize());
   }
   payload.WithArray("FeaturedDocuments", std::move(featuredDocumentsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateFeaturedResultsSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraFrontendService.UpdateFeaturedResultsSet"));
  return headers;

}




