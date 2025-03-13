/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteTollPass.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{

RouteTollPass::RouteTollPass(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteTollPass& RouteTollPass::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IncludesReturnTrip"))
  {
    m_includesReturnTrip = jsonValue.GetBool("IncludesReturnTrip");
    m_includesReturnTripHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SeniorPass"))
  {
    m_seniorPass = jsonValue.GetBool("SeniorPass");
    m_seniorPassHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TransferCount"))
  {
    m_transferCount = jsonValue.GetInteger("TransferCount");
    m_transferCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TripCount"))
  {
    m_tripCount = jsonValue.GetInteger("TripCount");
    m_tripCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ValidityPeriod"))
  {
    m_validityPeriod = jsonValue.GetObject("ValidityPeriod");
    m_validityPeriodHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteTollPass::Jsonize() const
{
  JsonValue payload;

  if(m_includesReturnTripHasBeenSet)
  {
   payload.WithBool("IncludesReturnTrip", m_includesReturnTrip);

  }

  if(m_seniorPassHasBeenSet)
  {
   payload.WithBool("SeniorPass", m_seniorPass);

  }

  if(m_transferCountHasBeenSet)
  {
   payload.WithInteger("TransferCount", m_transferCount);

  }

  if(m_tripCountHasBeenSet)
  {
   payload.WithInteger("TripCount", m_tripCount);

  }

  if(m_validityPeriodHasBeenSet)
  {
   payload.WithObject("ValidityPeriod", m_validityPeriod.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
