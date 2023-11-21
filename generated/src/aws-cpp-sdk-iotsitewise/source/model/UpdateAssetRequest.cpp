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

UpdateAssetRequest::UpdateAssetRequest() : 
    m_assetIdHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_assetDescriptionHasBeenSet(false),
    m_assetExternalIdHasBeenSet(false)
{
}

Aws::String UpdateAssetRequest::SerializePayload() const
{
  JsonValue payload;

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

  if(m_assetExternalIdHasBeenSet)
  {
   payload.WithString("assetExternalId", m_assetExternalId);

  }

  return payload.View().WriteReadable();
}




