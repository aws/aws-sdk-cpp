/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/LocationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLiftStreams
{
namespace Model
{

LocationConfiguration::LocationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

LocationConfiguration& LocationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LocationName"))
  {
    m_locationName = jsonValue.GetString("LocationName");
    m_locationNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AlwaysOnCapacity"))
  {
    m_alwaysOnCapacity = jsonValue.GetInteger("AlwaysOnCapacity");
    m_alwaysOnCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OnDemandCapacity"))
  {
    m_onDemandCapacity = jsonValue.GetInteger("OnDemandCapacity");
    m_onDemandCapacityHasBeenSet = true;
  }
  return *this;
}

JsonValue LocationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_locationNameHasBeenSet)
  {
   payload.WithString("LocationName", m_locationName);

  }

  if(m_alwaysOnCapacityHasBeenSet)
  {
   payload.WithInteger("AlwaysOnCapacity", m_alwaysOnCapacity);

  }

  if(m_onDemandCapacityHasBeenSet)
  {
   payload.WithInteger("OnDemandCapacity", m_onDemandCapacity);

  }

  return payload;
}

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
