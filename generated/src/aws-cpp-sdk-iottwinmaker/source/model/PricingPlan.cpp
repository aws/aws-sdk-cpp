/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/PricingPlan.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

PricingPlan::PricingPlan() : 
    m_billableEntityCount(0),
    m_billableEntityCountHasBeenSet(false),
    m_bundleInformationHasBeenSet(false),
    m_effectiveDateTimeHasBeenSet(false),
    m_pricingMode(PricingMode::NOT_SET),
    m_pricingModeHasBeenSet(false),
    m_updateDateTimeHasBeenSet(false),
    m_updateReason(UpdateReason::NOT_SET),
    m_updateReasonHasBeenSet(false)
{
}

PricingPlan::PricingPlan(JsonView jsonValue) : 
    m_billableEntityCount(0),
    m_billableEntityCountHasBeenSet(false),
    m_bundleInformationHasBeenSet(false),
    m_effectiveDateTimeHasBeenSet(false),
    m_pricingMode(PricingMode::NOT_SET),
    m_pricingModeHasBeenSet(false),
    m_updateDateTimeHasBeenSet(false),
    m_updateReason(UpdateReason::NOT_SET),
    m_updateReasonHasBeenSet(false)
{
  *this = jsonValue;
}

PricingPlan& PricingPlan::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("billableEntityCount"))
  {
    m_billableEntityCount = jsonValue.GetInt64("billableEntityCount");

    m_billableEntityCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bundleInformation"))
  {
    m_bundleInformation = jsonValue.GetObject("bundleInformation");

    m_bundleInformationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("effectiveDateTime"))
  {
    m_effectiveDateTime = jsonValue.GetDouble("effectiveDateTime");

    m_effectiveDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pricingMode"))
  {
    m_pricingMode = PricingModeMapper::GetPricingModeForName(jsonValue.GetString("pricingMode"));

    m_pricingModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateDateTime"))
  {
    m_updateDateTime = jsonValue.GetDouble("updateDateTime");

    m_updateDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateReason"))
  {
    m_updateReason = UpdateReasonMapper::GetUpdateReasonForName(jsonValue.GetString("updateReason"));

    m_updateReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue PricingPlan::Jsonize() const
{
  JsonValue payload;

  if(m_billableEntityCountHasBeenSet)
  {
   payload.WithInt64("billableEntityCount", m_billableEntityCount);

  }

  if(m_bundleInformationHasBeenSet)
  {
   payload.WithObject("bundleInformation", m_bundleInformation.Jsonize());

  }

  if(m_effectiveDateTimeHasBeenSet)
  {
   payload.WithDouble("effectiveDateTime", m_effectiveDateTime.SecondsWithMSPrecision());
  }

  if(m_pricingModeHasBeenSet)
  {
   payload.WithString("pricingMode", PricingModeMapper::GetNameForPricingMode(m_pricingMode));
  }

  if(m_updateDateTimeHasBeenSet)
  {
   payload.WithDouble("updateDateTime", m_updateDateTime.SecondsWithMSPrecision());
  }

  if(m_updateReasonHasBeenSet)
  {
   payload.WithString("updateReason", UpdateReasonMapper::GetNameForUpdateReason(m_updateReason));
  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
