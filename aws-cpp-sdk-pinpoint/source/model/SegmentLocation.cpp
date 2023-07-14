/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/SegmentLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

SegmentLocation::SegmentLocation() : 
    m_countryHasBeenSet(false),
    m_gPSPointHasBeenSet(false)
{
}

SegmentLocation::SegmentLocation(JsonView jsonValue) : 
    m_countryHasBeenSet(false),
    m_gPSPointHasBeenSet(false)
{
  *this = jsonValue;
}

SegmentLocation& SegmentLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetObject("Country");

    m_countryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GPSPoint"))
  {
    m_gPSPoint = jsonValue.GetObject("GPSPoint");

    m_gPSPointHasBeenSet = true;
  }

  return *this;
}

JsonValue SegmentLocation::Jsonize() const
{
  JsonValue payload;

  if(m_countryHasBeenSet)
  {
   payload.WithObject("Country", m_country.Jsonize());

  }

  if(m_gPSPointHasBeenSet)
  {
   payload.WithObject("GPSPoint", m_gPSPoint.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
