/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/IspPlacement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

IspPlacement::IspPlacement() : 
    m_ispNameHasBeenSet(false),
    m_placementStatisticsHasBeenSet(false)
{
}

IspPlacement::IspPlacement(JsonView jsonValue) : 
    m_ispNameHasBeenSet(false),
    m_placementStatisticsHasBeenSet(false)
{
  *this = jsonValue;
}

IspPlacement& IspPlacement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IspName"))
  {
    m_ispName = jsonValue.GetString("IspName");

    m_ispNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlacementStatistics"))
  {
    m_placementStatistics = jsonValue.GetObject("PlacementStatistics");

    m_placementStatisticsHasBeenSet = true;
  }

  return *this;
}

JsonValue IspPlacement::Jsonize() const
{
  JsonValue payload;

  if(m_ispNameHasBeenSet)
  {
   payload.WithString("IspName", m_ispName);

  }

  if(m_placementStatisticsHasBeenSet)
  {
   payload.WithObject("PlacementStatistics", m_placementStatistics.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
