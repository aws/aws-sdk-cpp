/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/GeoMatchParams.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

GeoMatchParams::GeoMatchParams() : 
    m_countryHasBeenSet(false),
    m_areaCodeHasBeenSet(false)
{
}

GeoMatchParams::GeoMatchParams(JsonView jsonValue) : 
    m_countryHasBeenSet(false),
    m_areaCodeHasBeenSet(false)
{
  *this = jsonValue;
}

GeoMatchParams& GeoMatchParams::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetString("Country");

    m_countryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AreaCode"))
  {
    m_areaCode = jsonValue.GetString("AreaCode");

    m_areaCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue GeoMatchParams::Jsonize() const
{
  JsonValue payload;

  if(m_countryHasBeenSet)
  {
   payload.WithString("Country", m_country);

  }

  if(m_areaCodeHasBeenSet)
  {
   payload.WithString("AreaCode", m_areaCode);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
