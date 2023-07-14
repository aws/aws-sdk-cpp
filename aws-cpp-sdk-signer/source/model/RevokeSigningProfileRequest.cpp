/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/RevokeSigningProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::signer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RevokeSigningProfileRequest::RevokeSigningProfileRequest() : 
    m_profileNameHasBeenSet(false),
    m_profileVersionHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_effectiveTimeHasBeenSet(false)
{
}

Aws::String RevokeSigningProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_profileVersionHasBeenSet)
  {
   payload.WithString("profileVersion", m_profileVersion);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_effectiveTimeHasBeenSet)
  {
   payload.WithDouble("effectiveTime", m_effectiveTime.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}




