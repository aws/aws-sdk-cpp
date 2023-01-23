/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/GetMapGlyphsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMapGlyphsRequest::GetMapGlyphsRequest() : 
    m_fontStackHasBeenSet(false),
    m_fontUnicodeRangeHasBeenSet(false),
    m_mapNameHasBeenSet(false)
{
}

Aws::String GetMapGlyphsRequest::SerializePayload() const
{
  return {};
}




