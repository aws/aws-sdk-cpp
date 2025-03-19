/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AcceptSubscriptionRequestRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AcceptSubscriptionRequestRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assetScopesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assetScopesJsonList(m_assetScopes.size());
   for(unsigned assetScopesIndex = 0; assetScopesIndex < assetScopesJsonList.GetLength(); ++assetScopesIndex)
   {
     assetScopesJsonList[assetScopesIndex].AsObject(m_assetScopes[assetScopesIndex].Jsonize());
   }
   payload.WithArray("assetScopes", std::move(assetScopesJsonList));

  }

  if(m_decisionCommentHasBeenSet)
  {
   payload.WithString("decisionComment", m_decisionComment);

  }

  return payload.View().WriteReadable();
}




