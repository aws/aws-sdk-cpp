/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/UpdateAssetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAssetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assetExternalIdHasBeenSet)
  {
   payload.WithString("assetExternalId", m_assetExternalId);

  }

  if(m_assetNameHasBeenSet)
  {
   payload.WithString("assetName", m_assetName);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_assetDescriptionHasBeenSet)
  {
   payload.WithString("assetDescription", m_assetDescription);

  }

  return payload.View().WriteReadable();
}




