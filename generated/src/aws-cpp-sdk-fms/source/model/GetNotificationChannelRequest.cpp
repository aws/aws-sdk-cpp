/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/GetNotificationChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetNotificationChannelRequest::GetNotificationChannelRequest()
{
}

Aws::String GetNotificationChannelRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection GetNotificationChannelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSFMS_20180101.GetNotificationChannel"));
  return headers;

}




