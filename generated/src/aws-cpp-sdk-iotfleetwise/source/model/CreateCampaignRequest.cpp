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

  if(m_dataDestinationConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataDestinationConfigsJsonList(m_dataDestinationConfigs.size());
   for(unsigned dataDestinationConfigsIndex = 0; dataDestinationConfigsIndex < dataDestinationConfigsJsonList.GetLength(); ++dataDestinationConfigsIndex)
   {
     dataDestinationConfigsJsonList[dataDestinationConfigsIndex].AsObject(m_dataDestinationConfigs[dataDestinationConfigsIndex].Jsonize());
   }
   payload.WithArray("dataDestinationConfigs", std::move(dataDestinationConfigsJsonList));

  }

  if(m_dataPartitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataPartitionsJsonList(m_dataPartitions.size());
   for(unsigned dataPartitionsIndex = 0; dataPartitionsIndex < dataPartitionsJsonList.GetLength(); ++dataPartitionsIndex)
   {
     dataPartitionsJsonList[dataPartitionsIndex].AsObject(m_dataPartitions[dataPartitionsIndex].Jsonize());
   }
   payload.WithArray("dataPartitions", std::move(dataPartitionsJsonList));

  }

  if(m_signalsToFetchHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> signalsToFetchJsonList(m_signalsToFetch.size());
   for(unsigned signalsToFetchIndex = 0; signalsToFetchIndex < signalsToFetchJsonList.GetLength(); ++signalsToFetchIndex)
   {
     signalsToFetchJsonList[signalsToFetchIndex].AsObject(m_signalsToFetch[signalsToFetchIndex].Jsonize());
   }
   payload.WithArray("signalsToFetch", std::move(signalsToFetchJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateCampaignRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTAutobahnControlPlane.CreateCampaign"));
  return headers;

}




