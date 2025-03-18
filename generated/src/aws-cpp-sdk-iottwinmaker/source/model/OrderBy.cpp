/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/OrderBy.h>
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

OrderBy::OrderBy(JsonView jsonValue)
{
  *this = jsonValue;
}

OrderBy& OrderBy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("order"))
  {
    m_order = OrderMapper::GetOrderForName(jsonValue.GetString("order"));
    m_orderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("propertyName"))
  {
    m_propertyName = jsonValue.GetString("propertyName");
    m_propertyNameHasBeenSet = true;
  }
  return *this;
}

JsonValue OrderBy::Jsonize() const
{
  JsonValue payload;

  if(m_orderHasBeenSet)
  {
   payload.WithString("order", OrderMapper::GetNameForOrder(m_order));
  }

  if(m_propertyNameHasBeenSet)
  {
   payload.WithString("propertyName", m_propertyName);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
