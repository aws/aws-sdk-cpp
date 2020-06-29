/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/SetV2LoggingLevelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetV2LoggingLevelRequest::SetV2LoggingLevelRequest() : 
    m_logTargetHasBeenSet(false),
    m_logLevel(LogLevel::NOT_SET),
    m_logLevelHasBeenSet(false)
{
}

Aws::String SetV2LoggingLevelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_logTargetHasBeenSet)
  {
   payload.WithObject("logTarget", m_logTarget.Jsonize());

  }

  if(m_logLevelHasBeenSet)
  {
   payload.WithString("logLevel", LogLevelMapper::GetNameForLogLevel(m_logLevel));
  }

  return payload.View().WriteReadable();
}




