/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Order.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

Order::Order() : 
    m_columnHasBeenSet(false),
    m_sortOrder(0),
    m_sortOrderHasBeenSet(false)
{
}

Order::Order(JsonView jsonValue) : 
    m_columnHasBeenSet(false),
    m_sortOrder(0),
    m_sortOrderHasBeenSet(false)
{
  *this = jsonValue;
}

Order& Order::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Column"))
  {
    m_column = jsonValue.GetString("Column");

    m_columnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SortOrder"))
  {
    m_sortOrder = jsonValue.GetInteger("SortOrder");

    m_sortOrderHasBeenSet = true;
  }

  return *this;
}

JsonValue Order::Jsonize() const
{
  JsonValue payload;

  if(m_columnHasBeenSet)
  {
   payload.WithString("Column", m_column);

  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithInteger("SortOrder", m_sortOrder);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
