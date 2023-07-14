/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/DeleteNotificationChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteNotificationChannelRequest::DeleteNotificationChannelRequest()
{
}

Aws::String DeleteNotificationChannelRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection DeleteNotificationChannelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSFMS_20180101.DeleteNotificationChannel"));
  return headers;

}




