/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/UpdateAssetModelCompositeModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAssetModelCompositeModelRequest::UpdateAssetModelCompositeModelRequest() : 
    m_assetModelIdHasBeenSet(false),
    m_assetModelCompositeModelIdHasBeenSet(false),
    m_assetModelCompositeModelExternalIdHasBeenSet(false),
    m_assetModelCompositeModelDescriptionHasBeenSet(false),
    m_assetModelCompositeModelNameHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_assetModelCompositeModelPropertiesHasBeenSet(false)
{
}

Aws::String UpdateAssetModelCompositeModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assetModelCompositeModelExternalIdHasBeenSet)
  {
   payload.WithString("assetModelCompositeModelExternalId", m_assetModelCompositeModelExternalId);

  }

  if(m_assetModelCompositeModelDescriptionHasBeenSet)
  {
   payload.WithString("assetModelCompositeModelDescription", m_assetModelCompositeModelDescription);

  }

  if(m_assetModelCompositeModelNameHasBeenSet)
  {
   payload.WithString("assetModelCompositeModelName", m_assetModelCompositeModelName);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_assetModelCompositeModelPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assetModelCompositeModelPropertiesJsonList(m_assetModelCompositeModelProperties.size());
   for(unsigned assetModelCompositeModelPropertiesIndex = 0; assetModelCompositeModelPropertiesIndex < assetModelCompositeModelPropertiesJsonList.GetLength(); ++assetModelCompositeModelPropertiesIndex)
   {
     assetModelCompositeModelPropertiesJsonList[assetModelCompositeModelPropertiesIndex].AsObject(m_assetModelCompositeModelProperties[assetModelCompositeModelPropertiesIndex].Jsonize());
   }
   payload.WithArray("assetModelCompositeModelProperties", std::move(assetModelCompositeModelPropertiesJsonList));

  }

  return payload.View().WriteReadable();
}




