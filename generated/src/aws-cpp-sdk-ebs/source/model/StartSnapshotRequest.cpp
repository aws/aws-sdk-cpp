/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ebs/model/StartSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EBS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartSnapshotRequest::StartSnapshotRequest() : 
    m_volumeSize(0),
    m_volumeSizeHasBeenSet(false),
    m_parentSnapshotIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false)
{
}

Aws::String StartSnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_volumeSizeHasBeenSet)
  {
   payload.WithInt64("VolumeSize", m_volumeSize);

  }

  if(m_parentSnapshotIdHasBeenSet)
  {
   payload.WithString("ParentSnapshotId", m_parentSnapshotId);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_encryptedHasBeenSet)
  {
   payload.WithBool("Encrypted", m_encrypted);

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  if(m_timeoutHasBeenSet)
  {
   payload.WithInteger("Timeout", m_timeout);

  }

  return payload.View().WriteReadable();
}




