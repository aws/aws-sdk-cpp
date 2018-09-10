﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
