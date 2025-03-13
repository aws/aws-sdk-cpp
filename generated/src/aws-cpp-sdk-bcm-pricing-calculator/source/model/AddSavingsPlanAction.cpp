/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/AddSavingsPlanAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMPricingCalculator
{
namespace Model
{

AddSavingsPlanAction::AddSavingsPlanAction(JsonView jsonValue)
{
  *this = jsonValue;
}

AddSavingsPlanAction& AddSavingsPlanAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("savingsPlanOfferingId"))
  {
    m_savingsPlanOfferingId = jsonValue.GetString("savingsPlanOfferingId");
    m_savingsPlanOfferingIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("commitment"))
  {
    m_commitment = jsonValue.GetDouble("commitment");
    m_commitmentHasBeenSet = true;
  }
  return *this;
}

JsonValue AddSavingsPlanAction::Jsonize() const
{
  JsonValue payload;

  if(m_savingsPlanOfferingIdHasBeenSet)
  {
   payload.WithString("savingsPlanOfferingId", m_savingsPlanOfferingId);

  }

  if(m_commitmentHasBeenSet)
  {
   payload.WithDouble("commitment", m_commitment);

  }

  return payload;
}

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
