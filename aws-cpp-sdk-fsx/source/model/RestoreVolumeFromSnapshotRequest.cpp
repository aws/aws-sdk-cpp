/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/RestoreVolumeFromSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RestoreVolumeFromSnapshotRequest::RestoreVolumeFromSnapshotRequest() : 
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_volumeIdHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
}

Aws::String RestoreVolumeFromSnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_volumeIdHasBeenSet)
  {
   payload.WithString("VolumeId", m_volumeId);

  }

  if(m_snapshotIdHasBeenSet)
  {
   payload.WithString("SnapshotId", m_snapshotId);

  }

  if(m_optionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> optionsJsonList(m_options.size());
   for(unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex)
   {
     optionsJsonList[optionsIndex].AsString(RestoreOpenZFSVolumeOptionMapper::GetNameForRestoreOpenZFSVolumeOption(m_options[optionsIndex]));
   }
   payload.WithArray("Options", std::move(optionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RestoreVolumeFromSnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.RestoreVolumeFromSnapshot"));
  return headers;

}




