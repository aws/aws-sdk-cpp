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
#include <aws/servicecatalog/model/UpdateProductRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateProductRequest::UpdateProductRequest() : 
    m_acceptLanguageHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_distributorHasBeenSet(false),
    m_supportDescriptionHasBeenSet(false),
    m_supportEmailHasBeenSet(false),
    m_supportUrlHasBeenSet(false),
    m_addTagsHasBeenSet(false),
    m_removeTagsHasBeenSet(false)
{
}

Aws::String UpdateProductRequest::SerializePayload() const
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

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_distributorHasBeenSet)
  {
   payload.WithString("Distributor", m_distributor);

  }

  if(m_supportDescriptionHasBeenSet)
  {
   payload.WithString("SupportDescription", m_supportDescription);

  }

  if(m_supportEmailHasBeenSet)
  {
   payload.WithString("SupportEmail", m_supportEmail);

  }

  if(m_supportUrlHasBeenSet)
  {
   payload.WithString("SupportUrl", m_supportUrl);

  }

  if(m_addTagsHasBeenSet)
  {
   Array<JsonValue> addTagsJsonList(m_addTags.size());
   for(unsigned addTagsIndex = 0; addTagsIndex < addTagsJsonList.GetLength(); ++addTagsIndex)
   {
     addTagsJsonList[addTagsIndex].AsObject(m_addTags[addTagsIndex].Jsonize());
   }
   payload.WithArray("AddTags", std::move(addTagsJsonList));

  }

  if(m_removeTagsHasBeenSet)
  {
   Array<JsonValue> removeTagsJsonList(m_removeTags.size());
   for(unsigned removeTagsIndex = 0; removeTagsIndex < removeTagsJsonList.GetLength(); ++removeTagsIndex)
   {
     removeTagsJsonList[removeTagsIndex].AsString(m_removeTags[removeTagsIndex]);
   }
   payload.WithArray("RemoveTags", std::move(removeTagsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateProductRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.UpdateProduct"));
  return headers;

}



