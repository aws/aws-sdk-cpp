/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/PutDataLakeSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutDataLakeSettingsRequest::PutDataLakeSettingsRequest() : 
    m_catalogIdHasBeenSet(false),
    m_dataLakeSettingsHasBeenSet(false)
{
}

Aws::String PutDataLakeSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_dataLakeSettingsHasBeenSet)
  {
   payload.WithObject("DataLakeSettings", m_dataLakeSettings.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutDataLakeSettingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLakeFormation.PutDataLakeSettings"));
  return headers;

}




