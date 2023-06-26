/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/SetV2LoggingOptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetV2LoggingOptionsRequest::SetV2LoggingOptionsRequest() : 
    m_roleArnHasBeenSet(false),
    m_defaultLogLevel(LogLevel::NOT_SET),
    m_defaultLogLevelHasBeenSet(false),
    m_disableAllLogs(false),
    m_disableAllLogsHasBeenSet(false)
{
}

Aws::String SetV2LoggingOptionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_defaultLogLevelHasBeenSet)
  {
   payload.WithString("defaultLogLevel", LogLevelMapper::GetNameForLogLevel(m_defaultLogLevel));
  }

  if(m_disableAllLogsHasBeenSet)
  {
   payload.WithBool("disableAllLogs", m_disableAllLogs);

  }

  return payload.View().WriteReadable();
}




