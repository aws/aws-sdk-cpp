/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ListCalculatedAttributeForProfileItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

ListCalculatedAttributeForProfileItem::ListCalculatedAttributeForProfileItem() : 
    m_calculatedAttributeNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_isDataPartialHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

ListCalculatedAttributeForProfileItem::ListCalculatedAttributeForProfileItem(JsonView jsonValue) : 
    m_calculatedAttributeNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_isDataPartialHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

ListCalculatedAttributeForProfileItem& ListCalculatedAttributeForProfileItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CalculatedAttributeName"))
  {
    m_calculatedAttributeName = jsonValue.GetString("CalculatedAttributeName");

    m_calculatedAttributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsDataPartial"))
  {
    m_isDataPartial = jsonValue.GetString("IsDataPartial");

    m_isDataPartialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue ListCalculatedAttributeForProfileItem::Jsonize() const
{
  JsonValue payload;

  if(m_calculatedAttributeNameHasBeenSet)
  {
   payload.WithString("CalculatedAttributeName", m_calculatedAttributeName);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_isDataPartialHasBeenSet)
  {
   payload.WithString("IsDataPartial", m_isDataPartial);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
