/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/OrderByElement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

OrderByElement::OrderByElement() : 
    m_fieldNameHasBeenSet(false),
    m_sortOrder(OrderString::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

OrderByElement::OrderByElement(JsonView jsonValue) : 
    m_fieldNameHasBeenSet(false),
    m_sortOrder(OrderString::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
  *this = jsonValue;
}

OrderByElement& OrderByElement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fieldName"))
  {
    m_fieldName = jsonValue.GetString("fieldName");

    m_fieldNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sortOrder"))
  {
    m_sortOrder = OrderStringMapper::GetOrderStringForName(jsonValue.GetString("sortOrder"));

    m_sortOrderHasBeenSet = true;
  }

  return *this;
}

JsonValue OrderByElement::Jsonize() const
{
  JsonValue payload;

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("fieldName", m_fieldName);

  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("sortOrder", OrderStringMapper::GetNameForOrderString(m_sortOrder));
  }

  return payload;
}

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
