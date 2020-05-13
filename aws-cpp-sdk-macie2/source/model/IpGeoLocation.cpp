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

#include <aws/macie2/model/IpGeoLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

IpGeoLocation::IpGeoLocation() : 
    m_lat(0.0),
    m_latHasBeenSet(false),
    m_lon(0.0),
    m_lonHasBeenSet(false)
{
}

IpGeoLocation::IpGeoLocation(JsonView jsonValue) : 
    m_lat(0.0),
    m_latHasBeenSet(false),
    m_lon(0.0),
    m_lonHasBeenSet(false)
{
  *this = jsonValue;
}

IpGeoLocation& IpGeoLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lat"))
  {
    m_lat = jsonValue.GetDouble("lat");

    m_latHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lon"))
  {
    m_lon = jsonValue.GetDouble("lon");

    m_lonHasBeenSet = true;
  }

  return *this;
}

JsonValue IpGeoLocation::Jsonize() const
{
  JsonValue payload;

  if(m_latHasBeenSet)
  {
   payload.WithDouble("lat", m_lat);

  }

  if(m_lonHasBeenSet)
  {
   payload.WithDouble("lon", m_lon);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
