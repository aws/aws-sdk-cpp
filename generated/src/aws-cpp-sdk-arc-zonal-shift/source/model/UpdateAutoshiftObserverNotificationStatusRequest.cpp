/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/UpdateAutoshiftObserverNotificationStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ARCZonalShift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAutoshiftObserverNotificationStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AutoshiftObserverNotificationStatusMapper::GetNameForAutoshiftObserverNotificationStatus(m_status));
  }

  return payload.View().WriteReadable();
}




