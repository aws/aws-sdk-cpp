/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/devicefarm/model/Location.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

Location::Location() : 
    m_latitude(0.0),
    m_latitudeHasBeenSet(false),
    m_longitude(0.0),
    m_longitudeHasBeenSet(false)
{
}

Location::Location(const JsonValue& jsonValue) : 
    m_latitude(0.0),
    m_latitudeHasBeenSet(false),
    m_longitude(0.0),
    m_longitudeHasBeenSet(false)
{
  *this = jsonValue;
}

Location& Location::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("latitude"))
  {
    m_latitude = jsonValue.GetDouble("latitude");

    m_latitudeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("longitude"))
  {
    m_longitude = jsonValue.GetDouble("longitude");

    m_longitudeHasBeenSet = true;
  }

  return *this;
}

JsonValue Location::Jsonize() const
{
  JsonValue payload;

  if(m_latitudeHasBeenSet)
  {
   payload.WithDouble("latitude", m_latitude);

  }

  if(m_longitudeHasBeenSet)
  {
   payload.WithDouble("longitude", m_longitude);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws