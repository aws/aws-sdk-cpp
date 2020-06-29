/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/UpdateDatastoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDatastoreRequest::UpdateDatastoreRequest() : 
    m_datastoreNameHasBeenSet(false),
    m_retentionPeriodHasBeenSet(false),
    m_datastoreStorageHasBeenSet(false)
{
}

Aws::String UpdateDatastoreRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_retentionPeriodHasBeenSet)
  {
   payload.WithObject("retentionPeriod", m_retentionPeriod.Jsonize());

  }

  if(m_datastoreStorageHasBeenSet)
  {
   payload.WithObject("datastoreStorage", m_datastoreStorage.Jsonize());

  }

  return payload.View().WriteReadable();
}




