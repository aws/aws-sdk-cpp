/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/GetMapTileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMapTileRequest::GetMapTileRequest() : 
    m_mapNameHasBeenSet(false),
    m_xHasBeenSet(false),
    m_yHasBeenSet(false),
    m_zHasBeenSet(false)
{
}

Aws::String GetMapTileRequest::SerializePayload() const
{
  return {};
}




