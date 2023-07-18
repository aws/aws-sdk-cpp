/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/SelectColumn.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

SelectColumn::SelectColumn() : 
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_aliased(false),
    m_aliasedHasBeenSet(false)
{
}

SelectColumn::SelectColumn(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_aliased(false),
    m_aliasedHasBeenSet(false)
{
  *this = jsonValue;
}

SelectColumn& SelectColumn::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetObject("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Aliased"))
  {
    m_aliased = jsonValue.GetBool("Aliased");

    m_aliasedHasBeenSet = true;
  }

  return *this;
}

JsonValue SelectColumn::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithObject("Type", m_type.Jsonize());

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_aliasedHasBeenSet)
  {
   payload.WithBool("Aliased", m_aliased);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
