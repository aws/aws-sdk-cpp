/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/HlsPlaylistSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

HlsPlaylistSettings::HlsPlaylistSettings() : 
    m_manifestWindowSeconds(0),
    m_manifestWindowSecondsHasBeenSet(false)
{
}

HlsPlaylistSettings::HlsPlaylistSettings(JsonView jsonValue) : 
    m_manifestWindowSeconds(0),
    m_manifestWindowSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

HlsPlaylistSettings& HlsPlaylistSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ManifestWindowSeconds"))
  {
    m_manifestWindowSeconds = jsonValue.GetInteger("ManifestWindowSeconds");

    m_manifestWindowSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue HlsPlaylistSettings::Jsonize() const
{
  JsonValue payload;

  if(m_manifestWindowSecondsHasBeenSet)
  {
   payload.WithInteger("ManifestWindowSeconds", m_manifestWindowSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
