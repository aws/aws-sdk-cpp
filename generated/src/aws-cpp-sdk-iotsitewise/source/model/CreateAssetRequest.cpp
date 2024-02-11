/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/CreateAssetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAssetRequest::CreateAssetRequest() : 
    m_assetNameHasBeenSet(false),
    m_assetModelIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagsHasBeenSet(false),
    m_assetDescriptionHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_assetExternalIdHasBeenSet(false)
{
}

Aws::String CreateAssetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assetNameHasBeenSet)
  {
   payload.WithString("assetName", m_assetName);

  }

  if(m_assetModelIdHasBeenSet)
  {
   payload.WithString("assetModelId", m_assetModelId);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_assetDescriptionHasBeenSet)
  {
   payload.WithString("assetDescription", m_assetDescription);

  }

  if(m_assetIdHasBeenSet)
  {
   payload.WithString("assetId", m_assetId);

  }

  if(m_assetExternalIdHasBeenSet)
  {
   payload.WithString("assetExternalId", m_assetExternalId);

  }

  return payload.View().WriteReadable();
}




