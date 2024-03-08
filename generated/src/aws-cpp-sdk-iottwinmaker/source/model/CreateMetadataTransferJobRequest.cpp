/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/CreateMetadataTransferJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMetadataTransferJobRequest::CreateMetadataTransferJobRequest() : 
    m_metadataTransferJobIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourcesHasBeenSet(false),
    m_destinationHasBeenSet(false)
{
}

Aws::String CreateMetadataTransferJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_metadataTransferJobIdHasBeenSet)
  {
   payload.WithString("metadataTransferJobId", m_metadataTransferJobId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_sourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourcesJsonList(m_sources.size());
   for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
   {
     sourcesJsonList[sourcesIndex].AsObject(m_sources[sourcesIndex].Jsonize());
   }
   payload.WithArray("sources", std::move(sourcesJsonList));

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("destination", m_destination.Jsonize());

  }

  return payload.View().WriteReadable();
}




