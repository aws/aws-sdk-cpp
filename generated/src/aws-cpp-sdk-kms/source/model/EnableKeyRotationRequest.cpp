/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/EnableKeyRotationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

EnableKeyRotationRequest::EnableKeyRotationRequest() : 
    m_keyIdHasBeenSet(false),
    m_rotationPeriodInDays(0),
    m_rotationPeriodInDaysHasBeenSet(false)
{
}

Aws::String EnableKeyRotationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_rotationPeriodInDaysHasBeenSet)
  {
   payload.WithInteger("RotationPeriodInDays", m_rotationPeriodInDays);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection EnableKeyRotationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.EnableKeyRotation"));
  return headers;

}




