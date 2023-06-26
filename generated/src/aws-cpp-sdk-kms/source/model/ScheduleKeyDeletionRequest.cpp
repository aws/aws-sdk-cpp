/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/ScheduleKeyDeletionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ScheduleKeyDeletionRequest::ScheduleKeyDeletionRequest() : 
    m_keyIdHasBeenSet(false),
    m_pendingWindowInDays(0),
    m_pendingWindowInDaysHasBeenSet(false)
{
}

Aws::String ScheduleKeyDeletionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_pendingWindowInDaysHasBeenSet)
  {
   payload.WithInteger("PendingWindowInDays", m_pendingWindowInDays);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ScheduleKeyDeletionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.ScheduleKeyDeletion"));
  return headers;

}




