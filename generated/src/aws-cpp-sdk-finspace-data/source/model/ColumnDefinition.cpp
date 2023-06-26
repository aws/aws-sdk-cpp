/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/ColumnDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{

ColumnDefinition::ColumnDefinition() : 
    m_dataType(ColumnDataType::NOT_SET),
    m_dataTypeHasBeenSet(false),
    m_columnNameHasBeenSet(false),
    m_columnDescriptionHasBeenSet(false)
{
}

ColumnDefinition::ColumnDefinition(JsonView jsonValue) : 
    m_dataType(ColumnDataType::NOT_SET),
    m_dataTypeHasBeenSet(false),
    m_columnNameHasBeenSet(false),
    m_columnDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnDefinition& ColumnDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataType"))
  {
    m_dataType = ColumnDataTypeMapper::GetColumnDataTypeForName(jsonValue.GetString("dataType"));

    m_dataTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("columnName"))
  {
    m_columnName = jsonValue.GetString("columnName");

    m_columnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("columnDescription"))
  {
    m_columnDescription = jsonValue.GetString("columnDescription");

    m_columnDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_dataTypeHasBeenSet)
  {
   payload.WithString("dataType", ColumnDataTypeMapper::GetNameForColumnDataType(m_dataType));
  }

  if(m_columnNameHasBeenSet)
  {
   payload.WithString("columnName", m_columnName);

  }

  if(m_columnDescriptionHasBeenSet)
  {
   payload.WithString("columnDescription", m_columnDescription);

  }

  return payload;
}

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
