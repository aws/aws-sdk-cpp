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

#include <aws/lightsail/model/AvailabilityZone.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

AvailabilityZone::AvailabilityZone() : 
    m_zoneNameHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

AvailabilityZone::AvailabilityZone(const JsonValue& jsonValue) : 
    m_zoneNameHasBeenSet(false),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

AvailabilityZone& AvailabilityZone::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("zoneName"))
  {
    m_zoneName = jsonValue.GetString("zoneName");

    m_zoneNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = jsonValue.GetString("state");

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue AvailabilityZone::Jsonize() const
{
  JsonValue payload;

  if(m_zoneNameHasBeenSet)
  {
   payload.WithString("zoneName", m_zoneName);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", m_state);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws