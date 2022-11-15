/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/UpdateProvisionedProductRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateProvisionedProductRequest::UpdateProvisionedProductRequest() : 
    m_acceptLanguageHasBeenSet(false),
    m_provisionedProductNameHasBeenSet(false),
    m_provisionedProductIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_provisioningArtifactIdHasBeenSet(false),
    m_provisioningArtifactNameHasBeenSet(false),
    m_pathIdHasBeenSet(false),
    m_pathNameHasBeenSet(false),
    m_provisioningParametersHasBeenSet(false),
    m_provisioningPreferencesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_updateToken(Aws::Utils::UUID::RandomUUID()),
    m_updateTokenHasBeenSet(true)
{
}

Aws::String UpdateProvisionedProductRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  if(m_provisionedProductNameHasBeenSet)
  {
   payload.WithString("ProvisionedProductName", m_provisionedProductName);

  }

  if(m_provisionedProductIdHasBeenSet)
  {
   payload.WithString("ProvisionedProductId", m_provisionedProductId);

  }

  if(m_productIdHasBeenSet)
  {
   payload.WithString("ProductId", m_productId);

  }

  if(m_productNameHasBeenSet)
  {
   payload.WithString("ProductName", m_productName);

  }

  if(m_provisioningArtifactIdHasBeenSet)
  {
   payload.WithString("ProvisioningArtifactId", m_provisioningArtifactId);

  }

  if(m_provisioningArtifactNameHasBeenSet)
  {
   payload.WithString("ProvisioningArtifactName", m_provisioningArtifactName);

  }

  if(m_pathIdHasBeenSet)
  {
   payload.WithString("PathId", m_pathId);

  }

  if(m_pathNameHasBeenSet)
  {
   payload.WithString("PathName", m_pathName);

  }

  if(m_provisioningParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> provisioningParametersJsonList(m_provisioningParameters.size());
   for(unsigned provisioningParametersIndex = 0; provisioningParametersIndex < provisioningParametersJsonList.GetLength(); ++provisioningParametersIndex)
   {
     provisioningParametersJsonList[provisioningParametersIndex].AsObject(m_provisioningParameters[provisioningParametersIndex].Jsonize());
   }
   payload.WithArray("ProvisioningParameters", std::move(provisioningParametersJsonList));

  }

  if(m_provisioningPreferencesHasBeenSet)
  {
   payload.WithObject("ProvisioningPreferences", m_provisioningPreferences.Jsonize());

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

  if(m_updateTokenHasBeenSet)
  {
   payload.WithString("UpdateToken", m_updateToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateProvisionedProductRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.UpdateProvisionedProduct"));
  return headers;

}




