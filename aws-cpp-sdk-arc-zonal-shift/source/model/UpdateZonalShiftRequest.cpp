/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/UpdateZonalShiftRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ARCZonalShift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateZonalShiftRequest::UpdateZonalShiftRequest() : 
    m_commentHasBeenSet(false),
    m_expiresInHasBeenSet(false),
    m_zonalShiftIdHasBeenSet(false)
{
}

Aws::String UpdateZonalShiftRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_commentHasBeenSet)
  {
   payload.WithString("comment", m_comment);

  }

  if(m_expiresInHasBeenSet)
  {
   payload.WithString("expiresIn", m_expiresIn);

  }

  return payload.View().WriteReadable();
}




