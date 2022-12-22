/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/ReverseReplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ReverseReplicationRequest::ReverseReplicationRequest() : 
    m_recoveryInstanceIDHasBeenSet(false)
{
}

Aws::String ReverseReplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_recoveryInstanceIDHasBeenSet)
  {
   payload.WithString("recoveryInstanceID", m_recoveryInstanceID);

  }

  return payload.View().WriteReadable();
}




