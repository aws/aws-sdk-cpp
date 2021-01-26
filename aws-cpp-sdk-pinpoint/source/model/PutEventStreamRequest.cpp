/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/PutEventStreamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutEventStreamRequest::PutEventStreamRequest() : 
    m_applicationIdHasBeenSet(false),
    m_writeEventStreamHasBeenSet(false)
{
}

Aws::String PutEventStreamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_writeEventStreamHasBeenSet)
  {
   payload = m_writeEventStream.Jsonize();
  }

  return payload.View().WriteReadable();
}




