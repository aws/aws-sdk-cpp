/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

AvailabilityZone::AvailabilityZone(JsonView jsonValue)
{
  *this = jsonValue;
}

AvailabilityZone& AvailabilityZone::operator =(JsonView jsonValue)
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
