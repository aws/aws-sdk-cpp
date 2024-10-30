/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-maps/model/GetSpritesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GeoMaps::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSpritesRequest::GetSpritesRequest() : 
    m_fileNameHasBeenSet(false),
    m_style(MapStyle::NOT_SET),
    m_styleHasBeenSet(false),
    m_colorScheme(ColorScheme::NOT_SET),
    m_colorSchemeHasBeenSet(false),
    m_variant(Variant::NOT_SET),
    m_variantHasBeenSet(false)
{
}

Aws::String GetSpritesRequest::SerializePayload() const
{
  return {};
}




