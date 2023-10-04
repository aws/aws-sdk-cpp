/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SearchInItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

SearchInItem::SearchInItem() : 
    m_attributeHasBeenSet(false)
{
}

SearchInItem::SearchInItem(JsonView jsonValue) : 
    m_attributeHasBeenSet(false)
{
  *this = jsonValue;
}

SearchInItem& SearchInItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attribute"))
  {
    m_attribute = jsonValue.GetString("attribute");

    m_attributeHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchInItem::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithString("attribute", m_attribute);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
