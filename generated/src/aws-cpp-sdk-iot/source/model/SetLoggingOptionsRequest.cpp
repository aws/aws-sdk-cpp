/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/SetLoggingOptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetLoggingOptionsRequest::SetLoggingOptionsRequest() : 
    m_loggingOptionsPayloadHasBeenSet(false)
{
}

Aws::String SetLoggingOptionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_loggingOptionsPayloadHasBeenSet)
  {
   payload = m_loggingOptionsPayload.Jsonize();
  }

  return payload.View().WriteReadable();
}




