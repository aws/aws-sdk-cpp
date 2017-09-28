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

#include <aws/servicecatalog/model/CopyProductRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CopyProductRequest::CopyProductRequest() : 
    m_acceptLanguageHasBeenSet(false),
    m_sourceProductArnHasBeenSet(false),
    m_targetProductIdHasBeenSet(false),
    m_targetProductNameHasBeenSet(false),
    m_sourceProvisioningArtifactIdentifiersHasBeenSet(false),
    m_copyOptionsHasBeenSet(false),
    m_idempotencyToken(Aws::Utils::UUID::RandomUUID()),
    m_idempotencyTokenHasBeenSet(true)
{
}

Aws::String CopyProductRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  if(m_sourceProductArnHasBeenSet)
  {
   payload.WithString("SourceProductArn", m_sourceProductArn);

  }

  if(m_targetProductIdHasBeenSet)
  {
   payload.WithString("TargetProductId", m_targetProductId);

  }

  if(m_targetProductNameHasBeenSet)
  {
   payload.WithString("TargetProductName", m_targetProductName);

  }

  if(m_sourceProvisioningArtifactIdentifiersHasBeenSet)
  {
   Array<JsonValue> sourceProvisioningArtifactIdentifiersJsonList(m_sourceProvisioningArtifactIdentifiers.size());
   for(unsigned sourceProvisioningArtifactIdentifiersIndex = 0; sourceProvisioningArtifactIdentifiersIndex < sourceProvisioningArtifactIdentifiersJsonList.GetLength(); ++sourceProvisioningArtifactIdentifiersIndex)
   {
     JsonValue sourceProvisioningArtifactPropertiesMapJsonMap;
     for(auto& sourceProvisioningArtifactPropertiesMapItem : m_sourceProvisioningArtifactIdentifiers[sourceProvisioningArtifactIdentifiersIndex])
     {
       sourceProvisioningArtifactPropertiesMapJsonMap.WithString(ProvisioningArtifactPropertyNameMapper::GetNameForProvisioningArtifactPropertyName(sourceProvisioningArtifactPropertiesMapItem.first), sourceProvisioningArtifactPropertiesMapItem.second);
     }
     sourceProvisioningArtifactIdentifiersJsonList[sourceProvisioningArtifactIdentifiersIndex].AsObject(std::move(sourceProvisioningArtifactPropertiesMapJsonMap));
   }
   payload.WithArray("SourceProvisioningArtifactIdentifiers", std::move(sourceProvisioningArtifactIdentifiersJsonList));

  }

  if(m_copyOptionsHasBeenSet)
  {
   Array<JsonValue> copyOptionsJsonList(m_copyOptions.size());
   for(unsigned copyOptionsIndex = 0; copyOptionsIndex < copyOptionsJsonList.GetLength(); ++copyOptionsIndex)
   {
     copyOptionsJsonList[copyOptionsIndex].AsString(CopyOptionMapper::GetNameForCopyOption(m_copyOptions[copyOptionsIndex]));
   }
   payload.WithArray("CopyOptions", std::move(copyOptionsJsonList));

  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CopyProductRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.CopyProduct"));
  return headers;

}




