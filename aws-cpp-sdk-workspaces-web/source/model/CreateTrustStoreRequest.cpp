/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/CreateTrustStoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTrustStoreRequest::CreateTrustStoreRequest() : 
    m_certificateListHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateTrustStoreRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> certificateListJsonList(m_certificateList.size());
   for(unsigned certificateListIndex = 0; certificateListIndex < certificateListJsonList.GetLength(); ++certificateListIndex)
   {
     certificateListJsonList[certificateListIndex].AsString(HashingUtils::Base64Encode(m_certificateList[certificateListIndex]));
   }
   payload.WithArray("certificateList", std::move(certificateListJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}




