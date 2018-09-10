/*
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

#include <aws/pinpoint/model/GPSPointDimension.h>
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

GPSPointDimension::GPSPointDimension() : 
    m_coordinatesHasBeenSet(false),
    m_rangeInKilometers(0.0),
    m_rangeInKilometersHasBeenSet(false)
{
}

GPSPointDimension::GPSPointDimension(JsonView jsonValue) : 
    m_coordinatesHasBeenSet(false),
    m_rangeInKilometers(0.0),
    m_rangeInKilometersHasBeenSet(false)
{
  *this = jsonValue;
}

GPSPointDimension& GPSPointDimension::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Coordinates"))
  {
    m_coordinates = jsonValue.GetObject("Coordinates");

    m_coordinatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RangeInKilometers"))
  {
    m_rangeInKilometers = jsonValue.GetDouble("RangeInKilometers");

    m_rangeInKilometersHasBeenSet = true;
  }

  return *this;
}

JsonValue GPSPointDimension::Jsonize() const
{
  JsonValue payload;

  if(m_coordinatesHasBeenSet)
  {
   payload.WithObject("Coordinates", m_coordinates.Jsonize());

  }

  if(m_rangeInKilometersHasBeenSet)
  {
   payload.WithDouble("RangeInKilometers", m_rangeInKilometers);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
