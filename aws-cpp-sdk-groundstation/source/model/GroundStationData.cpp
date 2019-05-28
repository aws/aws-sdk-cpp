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

#include <aws/groundstation/model/GroundStationData.h>
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

GroundStationData::GroundStationData() : 
    m_groundStationIdHasBeenSet(false),
    m_groundStationNameHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

GroundStationData::GroundStationData(JsonView jsonValue) : 
    m_groundStationIdHasBeenSet(false),
    m_groundStationNameHasBeenSet(false),
    m_regionHasBeenSet(false)
{
  *this = jsonValue;
}

GroundStationData& GroundStationData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groundStationId"))
  {
    m_groundStationId = jsonValue.GetString("groundStationId");

    m_groundStationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groundStationName"))
  {
    m_groundStationName = jsonValue.GetString("groundStationName");

    m_groundStationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  return *this;
}

JsonValue GroundStationData::Jsonize() const
{
  JsonValue payload;

  if(m_groundStationIdHasBeenSet)
  {
   payload.WithString("groundStationId", m_groundStationId);

  }

  if(m_groundStationNameHasBeenSet)
  {
   payload.WithString("groundStationName", m_groundStationName);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
