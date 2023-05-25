/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/TrackingConfig.h>
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

TrackingConfig::TrackingConfig() : 
    m_autotrack(Criticality::NOT_SET),
    m_autotrackHasBeenSet(false)
{
}

TrackingConfig::TrackingConfig(JsonView jsonValue) : 
    m_autotrack(Criticality::NOT_SET),
    m_autotrackHasBeenSet(false)
{
  *this = jsonValue;
}

TrackingConfig& TrackingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("autotrack"))
  {
    m_autotrack = CriticalityMapper::GetCriticalityForName(jsonValue.GetString("autotrack"));

    m_autotrackHasBeenSet = true;
  }

  return *this;
}

JsonValue TrackingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_autotrackHasBeenSet)
  {
   payload.WithString("autotrack", CriticalityMapper::GetNameForCriticality(m_autotrack));
  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
