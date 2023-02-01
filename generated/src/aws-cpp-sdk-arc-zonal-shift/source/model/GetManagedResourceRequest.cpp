/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/GetManagedResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ARCZonalShift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetManagedResourceRequest::GetManagedResourceRequest() : 
    m_resourceIdentifierHasBeenSet(false)
{
}

Aws::String GetManagedResourceRequest::SerializePayload() const
{
  return {};
}




