/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/CreatePresignedPortalUrlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePresignedPortalUrlRequest::CreatePresignedPortalUrlRequest() : 
    m_portalIdHasBeenSet(false),
    m_sessionDurationSeconds(0),
    m_sessionDurationSecondsHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

Aws::String CreatePresignedPortalUrlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sessionDurationSecondsHasBeenSet)
  {
   payload.WithInteger("sessionDurationSeconds", m_sessionDurationSeconds);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", m_state);

  }

  return payload.View().WriteReadable();
}




