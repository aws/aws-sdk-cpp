/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/StartViewerSessionRevocationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartViewerSessionRevocationRequest::StartViewerSessionRevocationRequest() : 
    m_channelArnHasBeenSet(false),
    m_viewerIdHasBeenSet(false),
    m_viewerSessionVersionsLessThanOrEqualTo(0),
    m_viewerSessionVersionsLessThanOrEqualToHasBeenSet(false)
{
}

Aws::String StartViewerSessionRevocationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_channelArnHasBeenSet)
  {
   payload.WithString("channelArn", m_channelArn);

  }

  if(m_viewerIdHasBeenSet)
  {
   payload.WithString("viewerId", m_viewerId);

  }

  if(m_viewerSessionVersionsLessThanOrEqualToHasBeenSet)
  {
   payload.WithInteger("viewerSessionVersionsLessThanOrEqualTo", m_viewerSessionVersionsLessThanOrEqualTo);

  }

  return payload.View().WriteReadable();
}




