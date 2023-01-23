/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SlotTypeSummary.h>
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

SlotTypeSummary::SlotTypeSummary() : 
    m_slotTypeIdHasBeenSet(false),
    m_slotTypeNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parentSlotTypeSignatureHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_slotTypeCategory(SlotTypeCategory::NOT_SET),
    m_slotTypeCategoryHasBeenSet(false)
{
}

SlotTypeSummary::SlotTypeSummary(JsonView jsonValue) : 
    m_slotTypeIdHasBeenSet(false),
    m_slotTypeNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parentSlotTypeSignatureHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_slotTypeCategory(SlotTypeCategory::NOT_SET),
    m_slotTypeCategoryHasBeenSet(false)
{
  *this = jsonValue;
}

SlotTypeSummary& SlotTypeSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("slotTypeId"))
  {
    m_slotTypeId = jsonValue.GetString("slotTypeId");

    m_slotTypeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slotTypeName"))
  {
    m_slotTypeName = jsonValue.GetString("slotTypeName");

    m_slotTypeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parentSlotTypeSignature"))
  {
    m_parentSlotTypeSignature = jsonValue.GetString("parentSlotTypeSignature");

    m_parentSlotTypeSignatureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slotTypeCategory"))
  {
    m_slotTypeCategory = SlotTypeCategoryMapper::GetSlotTypeCategoryForName(jsonValue.GetString("slotTypeCategory"));

    m_slotTypeCategoryHasBeenSet = true;
  }

  return *this;
}

JsonValue SlotTypeSummary::Jsonize() const
{
  JsonValue payload;

  if(m_slotTypeIdHasBeenSet)
  {
   payload.WithString("slotTypeId", m_slotTypeId);

  }

  if(m_slotTypeNameHasBeenSet)
  {
   payload.WithString("slotTypeName", m_slotTypeName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_parentSlotTypeSignatureHasBeenSet)
  {
   payload.WithString("parentSlotTypeSignature", m_parentSlotTypeSignature);

  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  if(m_slotTypeCategoryHasBeenSet)
  {
   payload.WithString("slotTypeCategory", SlotTypeCategoryMapper::GetNameForSlotTypeCategory(m_slotTypeCategory));
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
