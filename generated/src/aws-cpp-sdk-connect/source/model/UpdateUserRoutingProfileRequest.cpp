/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateUserRoutingProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateUserRoutingProfileRequest::UpdateUserRoutingProfileRequest() : 
    m_routingProfileIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

Aws::String UpdateUserRoutingProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_routingProfileIdHasBeenSet)
  {
   payload.WithString("RoutingProfileId", m_routingProfileId);

  }

  return payload.View().WriteReadable();
}




