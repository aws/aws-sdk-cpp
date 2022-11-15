/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/UpdatePortfolioRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePortfolioRequest::UpdatePortfolioRequest() : 
    m_acceptLanguageHasBeenSet(false),
    m_idHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_providerNameHasBeenSet(false),
    m_addTagsHasBeenSet(false),
    m_removeTagsHasBeenSet(false)
{
}

Aws::String UpdatePortfolioRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_providerNameHasBeenSet)
  {
   payload.WithString("ProviderName", m_providerName);

  }

  if(m_addTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addTagsJsonList(m_addTags.size());
   for(unsigned addTagsIndex = 0; addTagsIndex < addTagsJsonList.GetLength(); ++addTagsIndex)
   {
     addTagsJsonList[addTagsIndex].AsObject(m_addTags[addTagsIndex].Jsonize());
   }
   payload.WithArray("AddTags", std::move(addTagsJsonList));

  }

  if(m_removeTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> removeTagsJsonList(m_removeTags.size());
   for(unsigned removeTagsIndex = 0; removeTagsIndex < removeTagsJsonList.GetLength(); ++removeTagsIndex)
   {
     removeTagsJsonList[removeTagsIndex].AsString(m_removeTags[removeTagsIndex]);
   }
   payload.WithArray("RemoveTags", std::move(removeTagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePortfolioRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.UpdatePortfolio"));
  return headers;

}




