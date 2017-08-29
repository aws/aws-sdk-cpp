/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

Order::Order(const JsonValue& jsonValue) : 
    m_columnHasBeenSet(false),
    m_sortOrder(0),
    m_sortOrderHasBeenSet(false)
{
  *this = jsonValue;
}

Order& Order::operator =(const JsonValue& jsonValue)
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
