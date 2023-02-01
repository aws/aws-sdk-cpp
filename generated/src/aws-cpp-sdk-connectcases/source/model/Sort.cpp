/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/Sort.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

Sort::Sort() : 
    m_fieldIdHasBeenSet(false),
    m_sortOrder(Order::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

Sort::Sort(JsonView jsonValue) : 
    m_fieldIdHasBeenSet(false),
    m_sortOrder(Order::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
  *this = jsonValue;
}

Sort& Sort::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fieldId"))
  {
    m_fieldId = jsonValue.GetString("fieldId");

    m_fieldIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sortOrder"))
  {
    m_sortOrder = OrderMapper::GetOrderForName(jsonValue.GetString("sortOrder"));

    m_sortOrderHasBeenSet = true;
  }

  return *this;
}

JsonValue Sort::Jsonize() const
{
  JsonValue payload;

  if(m_fieldIdHasBeenSet)
  {
   payload.WithString("fieldId", m_fieldId);

  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("sortOrder", OrderMapper::GetNameForOrder(m_sortOrder));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
