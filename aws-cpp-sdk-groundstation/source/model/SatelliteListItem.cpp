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

#include <aws/groundstation/model/SatelliteListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

SatelliteListItem::SatelliteListItem() : 
    m_noradSatelliteID(0),
    m_noradSatelliteIDHasBeenSet(false),
    m_satelliteArnHasBeenSet(false),
    m_satelliteIdHasBeenSet(false)
{
}

SatelliteListItem::SatelliteListItem(JsonView jsonValue) : 
    m_noradSatelliteID(0),
    m_noradSatelliteIDHasBeenSet(false),
    m_satelliteArnHasBeenSet(false),
    m_satelliteIdHasBeenSet(false)
{
  *this = jsonValue;
}

SatelliteListItem& SatelliteListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("noradSatelliteID"))
  {
    m_noradSatelliteID = jsonValue.GetInteger("noradSatelliteID");

    m_noradSatelliteIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("satelliteArn"))
  {
    m_satelliteArn = jsonValue.GetString("satelliteArn");

    m_satelliteArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("satelliteId"))
  {
    m_satelliteId = jsonValue.GetString("satelliteId");

    m_satelliteIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SatelliteListItem::Jsonize() const
{
  JsonValue payload;

  if(m_noradSatelliteIDHasBeenSet)
  {
   payload.WithInteger("noradSatelliteID", m_noradSatelliteID);

  }

  if(m_satelliteArnHasBeenSet)
  {
   payload.WithString("satelliteArn", m_satelliteArn);

  }

  if(m_satelliteIdHasBeenSet)
  {
   payload.WithString("satelliteId", m_satelliteId);

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
