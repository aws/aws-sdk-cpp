/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage-vod/model/ConfigureLogsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaPackageVod::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ConfigureLogsRequest::ConfigureLogsRequest() : 
    m_egressAccessLogsHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

Aws::String ConfigureLogsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_egressAccessLogsHasBeenSet)
  {
   payload.WithObject("egressAccessLogs", m_egressAccessLogs.Jsonize());

  }

  return payload.View().WriteReadable();
}




