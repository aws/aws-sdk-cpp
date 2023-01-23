/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/UpdateAssetModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAssetModelRequest::UpdateAssetModelRequest() : 
    m_assetModelIdHasBeenSet(false),
    m_assetModelNameHasBeenSet(false),
    m_assetModelDescriptionHasBeenSet(false),
    m_assetModelPropertiesHasBeenSet(false),
    m_assetModelHierarchiesHasBeenSet(false),
    m_assetModelCompositeModelsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String UpdateAssetModelRequest::SerializePayload() const
{
  JsonValue payload;

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




