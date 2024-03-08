/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/CreateAssetModelCompositeModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAssetModelCompositeModelRequest::CreateAssetModelCompositeModelRequest() : 
    m_assetModelIdHasBeenSet(false),
    m_parentAssetModelCompositeModelIdHasBeenSet(false),
    m_assetModelCompositeModelExternalIdHasBeenSet(false),
    m_assetModelCompositeModelIdHasBeenSet(false),
    m_assetModelCompositeModelDescriptionHasBeenSet(false),
    m_assetModelCompositeModelNameHasBeenSet(false),
    m_assetModelCompositeModelTypeHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_composedAssetModelIdHasBeenSet(false),
    m_assetModelCompositeModelPropertiesHasBeenSet(false)
{
}

Aws::String CreateAssetModelCompositeModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_parentAssetModelCompositeModelIdHasBeenSet)
  {
   payload.WithString("parentAssetModelCompositeModelId", m_parentAssetModelCompositeModelId);

  }

  if(m_assetModelCompositeModelExternalIdHasBeenSet)
  {
   payload.WithString("assetModelCompositeModelExternalId", m_assetModelCompositeModelExternalId);

  }

  if(m_assetModelCompositeModelIdHasBeenSet)
  {
   payload.WithString("assetModelCompositeModelId", m_assetModelCompositeModelId);

  }

  if(m_assetModelCompositeModelDescriptionHasBeenSet)
  {
   payload.WithString("assetModelCompositeModelDescription", m_assetModelCompositeModelDescription);

  }

  if(m_assetModelCompositeModelNameHasBeenSet)
  {
   payload.WithString("assetModelCompositeModelName", m_assetModelCompositeModelName);

  }

  if(m_assetModelCompositeModelTypeHasBeenSet)
  {
   payload.WithString("assetModelCompositeModelType", m_assetModelCompositeModelType);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_composedAssetModelIdHasBeenSet)
  {
   payload.WithString("composedAssetModelId", m_composedAssetModelId);

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




