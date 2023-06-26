/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/CancelZonalShiftRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ARCZonalShift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelZonalShiftRequest::CancelZonalShiftRequest() : 
    m_zonalShiftIdHasBeenSet(false)
{
}

Aws::String CancelZonalShiftRequest::SerializePayload() const
{
  return {};
}




