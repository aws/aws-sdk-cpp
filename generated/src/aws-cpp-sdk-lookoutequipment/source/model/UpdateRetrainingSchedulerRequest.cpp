/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/UpdateRetrainingSchedulerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRetrainingSchedulerRequest::UpdateRetrainingSchedulerRequest() : 
    m_modelNameHasBeenSet(false),
    m_retrainingStartDateHasBeenSet(false),
    m_retrainingFrequencyHasBeenSet(false),
    m_lookbackWindowHasBeenSet(false),
    m_promoteMode(ModelPromoteMode::NOT_SET),
    m_promoteModeHasBeenSet(false)
{
}

Aws::String UpdateRetrainingSchedulerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_retrainingStartDateHasBeenSet)
  {
   payload.WithDouble("RetrainingStartDate", m_retrainingStartDate.SecondsWithMSPrecision());
  }

  if(m_retrainingFrequencyHasBeenSet)
  {
   payload.WithString("RetrainingFrequency", m_retrainingFrequency);

  }

  if(m_lookbackWindowHasBeenSet)
  {
   payload.WithString("LookbackWindow", m_lookbackWindow);

  }

  if(m_promoteModeHasBeenSet)
  {
   payload.WithString("PromoteMode", ModelPromoteModeMapper::GetNameForModelPromoteMode(m_promoteMode));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRetrainingSchedulerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLookoutEquipmentFrontendService.UpdateRetrainingScheduler"));
  return headers;

}




