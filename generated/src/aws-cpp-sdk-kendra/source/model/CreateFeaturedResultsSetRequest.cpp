/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/CreateFeaturedResultsSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFeaturedResultsSetRequest::CreateFeaturedResultsSetRequest() : 
    m_indexIdHasBeenSet(false),
    m_featuredResultsSetNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_status(FeaturedResultsSetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_queryTextsHasBeenSet(false),
    m_featuredDocumentsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateFeaturedResultsSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_indexIdHasBeenSet)
  {
   payload.WithString("IndexId", m_indexId);

  }

  if(m_featuredResultsSetNameHasBeenSet)
  {
   payload.WithString("FeaturedResultsSetName", m_featuredResultsSetName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

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

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateFeaturedResultsSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraFrontendService.CreateFeaturedResultsSet"));
  return headers;

}




