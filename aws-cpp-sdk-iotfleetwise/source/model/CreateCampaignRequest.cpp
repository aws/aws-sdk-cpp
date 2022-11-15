/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/CreateCampaignRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCampaignRequest::CreateCampaignRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_signalCatalogArnHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_expiryTimeHasBeenSet(false),
    m_postTriggerCollectionDuration(0),
    m_postTriggerCollectionDurationHasBeenSet(false),
    m_diagnosticsMode(DiagnosticsMode::NOT_SET),
    m_diagnosticsModeHasBeenSet(false),
    m_spoolingMode(SpoolingMode::NOT_SET),
    m_spoolingModeHasBeenSet(false),
    m_compression(Compression::NOT_SET),
    m_compressionHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_signalsToCollectHasBeenSet(false),
    m_collectionSchemeHasBeenSet(false),
    m_dataExtraDimensionsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateCampaignRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_signalCatalogArnHasBeenSet)
  {
   payload.WithString("signalCatalogArn", m_signalCatalogArn);

  }

  if(m_targetArnHasBeenSet)
  {
   payload.WithString("targetArn", m_targetArn);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_expiryTimeHasBeenSet)
  {
   payload.WithDouble("expiryTime", m_expiryTime.SecondsWithMSPrecision());
  }

  if(m_postTriggerCollectionDurationHasBeenSet)
  {
   payload.WithInt64("postTriggerCollectionDuration", m_postTriggerCollectionDuration);

  }

  if(m_diagnosticsModeHasBeenSet)
  {
   payload.WithString("diagnosticsMode", DiagnosticsModeMapper::GetNameForDiagnosticsMode(m_diagnosticsMode));
  }

  if(m_spoolingModeHasBeenSet)
  {
   payload.WithString("spoolingMode", SpoolingModeMapper::GetNameForSpoolingMode(m_spoolingMode));
  }

  if(m_compressionHasBeenSet)
  {
   payload.WithString("compression", CompressionMapper::GetNameForCompression(m_compression));
  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("priority", m_priority);

  }

  if(m_signalsToCollectHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> signalsToCollectJsonList(m_signalsToCollect.size());
   for(unsigned signalsToCollectIndex = 0; signalsToCollectIndex < signalsToCollectJsonList.GetLength(); ++signalsToCollectIndex)
   {
     signalsToCollectJsonList[signalsToCollectIndex].AsObject(m_signalsToCollect[signalsToCollectIndex].Jsonize());
   }
   payload.WithArray("signalsToCollect", std::move(signalsToCollectJsonList));

  }

  if(m_collectionSchemeHasBeenSet)
  {
   payload.WithObject("collectionScheme", m_collectionScheme.Jsonize());

  }

  if(m_dataExtraDimensionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataExtraDimensionsJsonList(m_dataExtraDimensions.size());
   for(unsigned dataExtraDimensionsIndex = 0; dataExtraDimensionsIndex < dataExtraDimensionsJsonList.GetLength(); ++dataExtraDimensionsIndex)
   {
     dataExtraDimensionsJsonList[dataExtraDimensionsIndex].AsString(m_dataExtraDimensions[dataExtraDimensionsIndex]);
   }
   payload.WithArray("dataExtraDimensions", std::move(dataExtraDimensionsJsonList));

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

Aws::Http::HeaderValueCollection CreateCampaignRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTAutobahnControlPlane.CreateCampaign"));
  return headers;

}




