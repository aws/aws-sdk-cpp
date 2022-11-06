/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/CreateDatastoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDatastoreRequest::CreateDatastoreRequest() : 
    m_datastoreNameHasBeenSet(false),
    m_datastoreStorageHasBeenSet(false),
    m_retentionPeriodHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_fileFormatConfigurationHasBeenSet(false),
    m_datastorePartitionsHasBeenSet(false)
{
}

Aws::String CreateDatastoreRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_datastoreNameHasBeenSet)
  {
   payload.WithString("datastoreName", m_datastoreName);

  }

  if(m_datastoreStorageHasBeenSet)
  {
   payload.WithObject("datastoreStorage", m_datastoreStorage.Jsonize());

  }

  if(m_retentionPeriodHasBeenSet)
  {
   payload.WithObject("retentionPeriod", m_retentionPeriod.Jsonize());

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

  if(m_fileFormatConfigurationHasBeenSet)
  {
   payload.WithObject("fileFormatConfiguration", m_fileFormatConfiguration.Jsonize());

  }

  if(m_datastorePartitionsHasBeenSet)
  {
   payload.WithObject("datastorePartitions", m_datastorePartitions.Jsonize());

  }

  return payload.View().WriteReadable();
}




