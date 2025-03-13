/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/UpdateKxDataviewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateKxDataviewRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_changesetIdHasBeenSet)
  {
   payload.WithString("changesetId", m_changesetId);

  }

  if(m_segmentConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> segmentConfigurationsJsonList(m_segmentConfigurations.size());
   for(unsigned segmentConfigurationsIndex = 0; segmentConfigurationsIndex < segmentConfigurationsJsonList.GetLength(); ++segmentConfigurationsIndex)
   {
     segmentConfigurationsJsonList[segmentConfigurationsIndex].AsObject(m_segmentConfigurations[segmentConfigurationsIndex].Jsonize());
   }
   payload.WithArray("segmentConfigurations", std::move(segmentConfigurationsJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




