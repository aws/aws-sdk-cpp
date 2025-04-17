/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/UpdateWorkspaceConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PrometheusService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateWorkspaceConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_limitsPerLabelSetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> limitsPerLabelSetJsonList(m_limitsPerLabelSet.size());
   for(unsigned limitsPerLabelSetIndex = 0; limitsPerLabelSetIndex < limitsPerLabelSetJsonList.GetLength(); ++limitsPerLabelSetIndex)
   {
     limitsPerLabelSetJsonList[limitsPerLabelSetIndex].AsObject(m_limitsPerLabelSet[limitsPerLabelSetIndex].Jsonize());
   }
   payload.WithArray("limitsPerLabelSet", std::move(limitsPerLabelSetJsonList));

  }

  if(m_retentionPeriodInDaysHasBeenSet)
  {
   payload.WithInteger("retentionPeriodInDays", m_retentionPeriodInDays);

  }

  return payload.View().WriteReadable();
}




