/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/BatchDisassociateProjectAssetsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchDisassociateProjectAssetsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assetIdsJsonList(m_assetIds.size());
   for(unsigned assetIdsIndex = 0; assetIdsIndex < assetIdsJsonList.GetLength(); ++assetIdsIndex)
   {
     assetIdsJsonList[assetIdsIndex].AsString(m_assetIds[assetIdsIndex]);
   }
   payload.WithArray("assetIds", std::move(assetIdsJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




