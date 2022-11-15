/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsmv2/model/CopyBackupToRegionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudHSMV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CopyBackupToRegionRequest::CopyBackupToRegionRequest() : 
    m_destinationRegionHasBeenSet(false),
    m_backupIdHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
}

Aws::String CopyBackupToRegionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_destinationRegionHasBeenSet)
  {
   payload.WithString("DestinationRegion", m_destinationRegion);

  }

  if(m_backupIdHasBeenSet)
  {
   payload.WithString("BackupId", m_backupId);

  }

  if(m_tagListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagListJsonList(m_tagList.size());
   for(unsigned tagListIndex = 0; tagListIndex < tagListJsonList.GetLength(); ++tagListIndex)
   {
     tagListJsonList[tagListIndex].AsObject(m_tagList[tagListIndex].Jsonize());
   }
   payload.WithArray("TagList", std::move(tagListJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CopyBackupToRegionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "BaldrApiService.CopyBackupToRegion"));
  return headers;

}




