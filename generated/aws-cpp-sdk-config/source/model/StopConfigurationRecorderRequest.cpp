/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/StopConfigurationRecorderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopConfigurationRecorderRequest::StopConfigurationRecorderRequest() : 
    m_configurationRecorderNameHasBeenSet(false)
{
}

Aws::String StopConfigurationRecorderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationRecorderNameHasBeenSet)
  {
   payload.WithString("ConfigurationRecorderName", m_configurationRecorderName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopConfigurationRecorderRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.StopConfigurationRecorder"));
  return headers;

}




