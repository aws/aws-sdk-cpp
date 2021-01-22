/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SlotSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

SlotSummary::SlotSummary() : 
    m_slotIdHasBeenSet(false),
    m_slotNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_slotConstraint(SlotConstraint::NOT_SET),
    m_slotConstraintHasBeenSet(false),
    m_slotTypeIdHasBeenSet(false),
    m_valueElicitationPromptSpecificationHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
}

SlotSummary::SlotSummary(JsonView jsonValue) : 
    m_slotIdHasBeenSet(false),
    m_slotNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_slotConstraint(SlotConstraint::NOT_SET),
    m_slotConstraintHasBeenSet(false),
    m_slotTypeIdHasBeenSet(false),
    m_valueElicitationPromptSpecificationHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

SlotSummary& SlotSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("slotId"))
  {
    m_slotId = jsonValue.GetString("slotId");

    m_slotIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slotName"))
  {
    m_slotName = jsonValue.GetString("slotName");

    m_slotNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slotConstraint"))
  {
    m_slotConstraint = SlotConstraintMapper::GetSlotConstraintForName(jsonValue.GetString("slotConstraint"));

    m_slotConstraintHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slotTypeId"))
  {
    m_slotTypeId = jsonValue.GetString("slotTypeId");

    m_slotTypeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("valueElicitationPromptSpecification"))
  {
    m_valueElicitationPromptSpecification = jsonValue.GetObject("valueElicitationPromptSpecification");

    m_valueElicitationPromptSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue SlotSummary::Jsonize() const
{
  JsonValue payload;

  if(m_slotIdHasBeenSet)
  {
   payload.WithString("slotId", m_slotId);

  }

  if(m_slotNameHasBeenSet)
  {
   payload.WithString("slotName", m_slotName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_slotConstraintHasBeenSet)
  {
   payload.WithString("slotConstraint", SlotConstraintMapper::GetNameForSlotConstraint(m_slotConstraint));
  }

  if(m_slotTypeIdHasBeenSet)
  {
   payload.WithString("slotTypeId", m_slotTypeId);

  }

  if(m_valueElicitationPromptSpecificationHasBeenSet)
  {
   payload.WithObject("valueElicitationPromptSpecification", m_valueElicitationPromptSpecification.Jsonize());

  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
