/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/UpdateProtectedJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateProtectedJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetStatusHasBeenSet)
  {
   payload.WithString("targetStatus", TargetProtectedJobStatusMapper::GetNameForTargetProtectedJobStatus(m_targetStatus));
  }

  return payload.View().WriteReadable();
}




