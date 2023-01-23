﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/PutConfigurationRecorderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutConfigurationRecorderRequest::PutConfigurationRecorderRequest() : 
    m_configurationRecorderHasBeenSet(false)
{
}

Aws::String PutConfigurationRecorderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationRecorderHasBeenSet)
  {
   payload.WithObject("ConfigurationRecorder", m_configurationRecorder.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutConfigurationRecorderRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.PutConfigurationRecorder"));
  return headers;

}




