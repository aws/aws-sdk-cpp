/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ColumnImportance.h>
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

ColumnImportance::ColumnImportance() : 
    m_columnNameHasBeenSet(false),
    m_importance(0.0),
    m_importanceHasBeenSet(false)
{
}

ColumnImportance::ColumnImportance(JsonView jsonValue) : 
    m_columnNameHasBeenSet(false),
    m_importance(0.0),
    m_importanceHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnImportance& ColumnImportance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ColumnName"))
  {
    m_columnName = jsonValue.GetString("ColumnName");

    m_columnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Importance"))
  {
    m_importance = jsonValue.GetDouble("Importance");

    m_importanceHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnImportance::Jsonize() const
{
  JsonValue payload;

  if(m_columnNameHasBeenSet)
  {
   payload.WithString("ColumnName", m_columnName);

  }

  if(m_importanceHasBeenSet)
  {
   payload.WithDouble("Importance", m_importance);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
