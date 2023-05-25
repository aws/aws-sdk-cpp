/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/StartRestoreJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartRestoreJobRequest::StartRestoreJobRequest() : 
    m_recoveryPointArnHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_idempotencyTokenHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
}

Aws::String StartRestoreJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_recoveryPointArnHasBeenSet)
  {
   payload.WithString("RecoveryPointArn", m_recoveryPointArn);

  }

  if(m_metadataHasBeenSet)
  {
   JsonValue metadataJsonMap;
   for(auto& metadataItem : m_metadata)
   {
     metadataJsonMap.WithString(metadataItem.first, metadataItem.second);
   }
   payload.WithObject("Metadata", std::move(metadataJsonMap));

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  return payload.View().WriteReadable();
}




