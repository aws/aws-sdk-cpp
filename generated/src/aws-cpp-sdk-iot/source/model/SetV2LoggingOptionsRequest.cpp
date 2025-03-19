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




