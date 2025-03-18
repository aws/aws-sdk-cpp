/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/TimeZone.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoPlaces
{
namespace Model
{

TimeZone::TimeZone(JsonView jsonValue)
{
  *this = jsonValue;
}

TimeZone& TimeZone::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Offset"))
  {
    m_offset = jsonValue.GetString("Offset");
    m_offsetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OffsetSeconds"))
  {
    m_offsetSeconds = jsonValue.GetInt64("OffsetSeconds");
    m_offsetSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue TimeZone::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_offsetHasBeenSet)
  {
   payload.WithString("Offset", m_offset);

  }

  if(m_offsetSecondsHasBeenSet)
  {
   payload.WithInt64("OffsetSeconds", m_offsetSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
