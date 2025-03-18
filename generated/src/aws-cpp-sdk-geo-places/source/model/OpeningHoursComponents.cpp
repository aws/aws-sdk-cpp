/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/OpeningHoursComponents.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoPlaces
{
namespace Model
{

OpeningHoursComponents::OpeningHoursComponents(JsonView jsonValue)
{
  *this = jsonValue;
}

OpeningHoursComponents& OpeningHoursComponents::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OpenTime"))
  {
    m_openTime = jsonValue.GetString("OpenTime");
    m_openTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OpenDuration"))
  {
    m_openDuration = jsonValue.GetString("OpenDuration");
    m_openDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Recurrence"))
  {
    m_recurrence = jsonValue.GetString("Recurrence");
    m_recurrenceHasBeenSet = true;
  }
  return *this;
}

JsonValue OpeningHoursComponents::Jsonize() const
{
  JsonValue payload;

  if(m_openTimeHasBeenSet)
  {
   payload.WithString("OpenTime", m_openTime);

  }

  if(m_openDurationHasBeenSet)
  {
   payload.WithString("OpenDuration", m_openDuration);

  }

  if(m_recurrenceHasBeenSet)
  {
   payload.WithString("Recurrence", m_recurrence);

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
