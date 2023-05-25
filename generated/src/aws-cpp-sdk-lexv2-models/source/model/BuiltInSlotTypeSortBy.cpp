/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BuiltInSlotTypeSortBy.h>
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

BuiltInSlotTypeSortBy::BuiltInSlotTypeSortBy() : 
    m_attribute(BuiltInSlotTypeSortAttribute::NOT_SET),
    m_attributeHasBeenSet(false),
    m_order(SortOrder::NOT_SET),
    m_orderHasBeenSet(false)
{
}

BuiltInSlotTypeSortBy::BuiltInSlotTypeSortBy(JsonView jsonValue) : 
    m_attribute(BuiltInSlotTypeSortAttribute::NOT_SET),
    m_attributeHasBeenSet(false),
    m_order(SortOrder::NOT_SET),
    m_orderHasBeenSet(false)
{
  *this = jsonValue;
}

BuiltInSlotTypeSortBy& BuiltInSlotTypeSortBy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attribute"))
  {
    m_attribute = BuiltInSlotTypeSortAttributeMapper::GetBuiltInSlotTypeSortAttributeForName(jsonValue.GetString("attribute"));

    m_attributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("order"))
  {
    m_order = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("order"));

    m_orderHasBeenSet = true;
  }

  return *this;
}

JsonValue BuiltInSlotTypeSortBy::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithString("attribute", BuiltInSlotTypeSortAttributeMapper::GetNameForBuiltInSlotTypeSortAttribute(m_attribute));
  }

  if(m_orderHasBeenSet)
  {
   payload.WithString("order", SortOrderMapper::GetNameForSortOrder(m_order));
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
