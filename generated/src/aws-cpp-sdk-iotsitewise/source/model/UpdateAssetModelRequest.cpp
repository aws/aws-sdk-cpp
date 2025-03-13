/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/UpdateAssetModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAssetModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assetModelExternalIdHasBeenSet)
  {
   payload.WithString("assetModelExternalId", m_assetModelExternalId);

  }

  if(m_assetModelNameHasBeenSet)
  {
   payload.WithString("assetModelName", m_assetModelName);

  }

  if(m_assetModelDescriptionHasBeenSet)
  {
   payload.WithString("assetModelDescription", m_assetModelDescription);

  }

  if(m_assetModelPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assetModelPropertiesJsonList(m_assetModelProperties.size());
   for(unsigned assetModelPropertiesIndex = 0; assetModelPropertiesIndex < assetModelPropertiesJsonList.GetLength(); ++assetModelPropertiesIndex)
   {
     assetModelPropertiesJsonList[assetModelPropertiesIndex].AsObject(m_assetModelProperties[assetModelPropertiesIndex].Jsonize());
   }
   payload.WithArray("assetModelProperties", std::move(assetModelPropertiesJsonList));

  }

  if(m_assetModelHierarchiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assetModelHierarchiesJsonList(m_assetModelHierarchies.size());
   for(unsigned assetModelHierarchiesIndex = 0; assetModelHierarchiesIndex < assetModelHierarchiesJsonList.GetLength(); ++assetModelHierarchiesIndex)
   {
     assetModelHierarchiesJsonList[assetModelHierarchiesIndex].AsObject(m_assetModelHierarchies[assetModelHierarchiesIndex].Jsonize());
   }
   payload.WithArray("assetModelHierarchies", std::move(assetModelHierarchiesJsonList));

  }

  if(m_assetModelCompositeModelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assetModelCompositeModelsJsonList(m_assetModelCompositeModels.size());
   for(unsigned assetModelCompositeModelsIndex = 0; assetModelCompositeModelsIndex < assetModelCompositeModelsJsonList.GetLength(); ++assetModelCompositeModelsIndex)
   {
     assetModelCompositeModelsJsonList[assetModelCompositeModelsIndex].AsObject(m_assetModelCompositeModels[assetModelCompositeModelsIndex].Jsonize());
   }
   payload.WithArray("assetModelCompositeModels", std::move(assetModelCompositeModelsJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAssetModelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_ifMatchHasBeenSet)
  {
    ss << m_ifMatch;
    headers.emplace("if-match",  ss.str());
    ss.str("");
  }

  if(m_ifNoneMatchHasBeenSet)
  {
    ss << m_ifNoneMatch;
    headers.emplace("if-none-match",  ss.str());
    ss.str("");
  }

  if(m_matchForVersionTypeHasBeenSet && m_matchForVersionType != AssetModelVersionType::NOT_SET)
  {
    headers.emplace("match-for-version-type", AssetModelVersionTypeMapper::GetNameForAssetModelVersionType(m_matchForVersionType));
  }

  return headers;

}




