/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AggregationListItem.h>
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

AggregationListItem::AggregationListItem(JsonView jsonValue)
{
  *this = jsonValue;
}

AggregationListItem& AggregationListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attribute"))
  {
    m_attribute = jsonValue.GetString("attribute");
    m_attributeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayValue"))
  {
    m_displayValue = jsonValue.GetString("displayValue");
    m_displayValueHasBeenSet = true;
  }
  return *this;
}

JsonValue AggregationListItem::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithString("attribute", m_attribute);

  }

  if(m_displayValueHasBeenSet)
  {
   payload.WithString("displayValue", m_displayValue);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
