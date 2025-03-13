/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/IsNullExpression.h>
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

IsNullExpression::IsNullExpression(JsonView jsonValue)
{
  *this = jsonValue;
}

IsNullExpression& IsNullExpression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("columnName"))
  {
    m_columnName = jsonValue.GetString("columnName");
    m_columnNameHasBeenSet = true;
  }
  return *this;
}

JsonValue IsNullExpression::Jsonize() const
{
  JsonValue payload;

  if(m_columnNameHasBeenSet)
  {
   payload.WithString("columnName", m_columnName);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
