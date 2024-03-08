/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/CopySnapshotAndUpdateVolumeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CopySnapshotAndUpdateVolumeRequest::CopySnapshotAndUpdateVolumeRequest() : 
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_volumeIdHasBeenSet(false),
    m_sourceSnapshotARNHasBeenSet(false),
    m_copyStrategy(OpenZFSCopyStrategy::NOT_SET),
    m_copyStrategyHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
}

Aws::String CopySnapshotAndUpdateVolumeRequest::SerializePayload() const
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

  if(m_sourceSnapshotARNHasBeenSet)
  {
   payload.WithString("SourceSnapshotARN", m_sourceSnapshotARN);

  }

  if(m_copyStrategyHasBeenSet)
  {
   payload.WithString("CopyStrategy", OpenZFSCopyStrategyMapper::GetNameForOpenZFSCopyStrategy(m_copyStrategy));
  }

  if(m_optionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> optionsJsonList(m_options.size());
   for(unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex)
   {
     optionsJsonList[optionsIndex].AsString(UpdateOpenZFSVolumeOptionMapper::GetNameForUpdateOpenZFSVolumeOption(m_options[optionsIndex]));
   }
   payload.WithArray("Options", std::move(optionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CopySnapshotAndUpdateVolumeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.CopySnapshotAndUpdateVolume"));
  return headers;

}




