/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/servicecatalog/model/CreateProvisionedProductPlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateProvisionedProductPlanRequest::CreateProvisionedProductPlanRequest() : 
    m_acceptLanguageHasBeenSet(false),
    m_planNameHasBeenSet(false),
    m_planType(ProvisionedProductPlanType::NOT_SET),
    m_planTypeHasBeenSet(false),
    m_notificationArnsHasBeenSet(false),
    m_pathIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_provisionedProductNameHasBeenSet(false),
    m_provisioningArtifactIdHasBeenSet(false),
    m_provisioningParametersHasBeenSet(false),
    m_idempotencyToken(Aws::Utils::UUID::RandomUUID()),
    m_idempotencyTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateProvisionedProductPlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  if(m_planNameHasBeenSet)
  {
   payload.WithString("PlanName", m_planName);

  }

  if(m_planTypeHasBeenSet)
  {
   payload.WithString("PlanType", ProvisionedProductPlanTypeMapper::GetNameForProvisionedProductPlanType(m_planType));
  }

  if(m_notificationArnsHasBeenSet)
  {
   Array<JsonValue> notificationArnsJsonList(m_notificationArns.size());
   for(unsigned notificationArnsIndex = 0; notificationArnsIndex < notificationArnsJsonList.GetLength(); ++notificationArnsIndex)
   {
     notificationArnsJsonList[notificationArnsIndex].AsString(m_notificationArns[notificationArnsIndex]);
   }
   payload.WithArray("NotificationArns", std::move(notificationArnsJsonList));

  }

  if(m_pathIdHasBeenSet)
  {
   payload.WithString("PathId", m_pathId);

  }

  if(m_productIdHasBeenSet)
  {
   payload.WithString("ProductId", m_productId);

  }

  if(m_provisionedProductNameHasBeenSet)
  {
   payload.WithString("ProvisionedProductName", m_provisionedProductName);

  }

  if(m_provisioningArtifactIdHasBeenSet)
  {
   payload.WithString("ProvisioningArtifactId", m_provisioningArtifactId);

  }

  if(m_provisioningParametersHasBeenSet)
  {
   Array<JsonValue> provisioningParametersJsonList(m_provisioningParameters.size());
   for(unsigned provisioningParametersIndex = 0; provisioningParametersIndex < provisioningParametersJsonList.GetLength(); ++provisioningParametersIndex)
   {
     provisioningParametersJsonList[provisioningParametersIndex].AsObject(m_provisioningParameters[provisioningParametersIndex].Jsonize());
   }
   payload.WithArray("ProvisioningParameters", std::move(provisioningParametersJsonList));

  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateProvisionedProductPlanRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.CreateProvisionedProductPlan"));
  return headers;

}




