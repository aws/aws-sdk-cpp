/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/PutLoggingOptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutLoggingOptionsRequest::PutLoggingOptionsRequest() : 
    m_loggingOptionsHasBeenSet(false)
{
}

Aws::String PutLoggingOptionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_loggingOptionsHasBeenSet)
  {
   payload.WithObject("loggingOptions", m_loggingOptions.Jsonize());

  }

  return payload.View().WriteReadable();
}




