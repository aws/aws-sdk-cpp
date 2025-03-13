/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BuiltInIntentSortBy.h>
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

BuiltInIntentSortBy::BuiltInIntentSortBy(JsonView jsonValue)
{
  *this = jsonValue;
}

BuiltInIntentSortBy& BuiltInIntentSortBy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attribute"))
  {
    m_attribute = BuiltInIntentSortAttributeMapper::GetBuiltInIntentSortAttributeForName(jsonValue.GetString("attribute"));
    m_attributeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("order"))
  {
    m_order = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("order"));
    m_orderHasBeenSet = true;
  }
  return *this;
}

JsonValue BuiltInIntentSortBy::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithString("attribute", BuiltInIntentSortAttributeMapper::GetNameForBuiltInIntentSortAttribute(m_attribute));
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
