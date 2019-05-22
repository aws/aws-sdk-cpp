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

#include <aws/servicecatalog/model/UpdateProvisionedProductPropertiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateProvisionedProductPropertiesRequest::UpdateProvisionedProductPropertiesRequest() : 
    m_acceptLanguageHasBeenSet(false),
    m_provisionedProductIdHasBeenSet(false),
    m_provisionedProductPropertiesHasBeenSet(false),
    m_idempotencyToken(Aws::Utils::UUID::RandomUUID()),
    m_idempotencyTokenHasBeenSet(true)
{
}

Aws::String UpdateProvisionedProductPropertiesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  if(m_provisionedProductIdHasBeenSet)
  {
   payload.WithString("ProvisionedProductId", m_provisionedProductId);

  }

  if(m_provisionedProductPropertiesHasBeenSet)
  {
   JsonValue provisionedProductPropertiesJsonMap;
   for(auto& provisionedProductPropertiesItem : m_provisionedProductProperties)
   {
     provisionedProductPropertiesJsonMap.WithString(PropertyKeyMapper::GetNameForPropertyKey(provisionedProductPropertiesItem.first), provisionedProductPropertiesItem.second);
   }
   payload.WithObject("ProvisionedProductProperties", std::move(provisionedProductPropertiesJsonMap));

  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateProvisionedProductPropertiesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.UpdateProvisionedProductProperties"));
  return headers;

}




