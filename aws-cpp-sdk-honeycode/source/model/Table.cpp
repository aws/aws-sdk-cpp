/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/Table.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Honeycode
{
namespace Model
{

Table::Table() : 
    m_tableIdHasBeenSet(false),
    m_tableNameHasBeenSet(false)
{
}

Table::Table(JsonView jsonValue) : 
    m_tableIdHasBeenSet(false),
    m_tableNameHasBeenSet(false)
{
  *this = jsonValue;
}

Table& Table::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tableId"))
  {
    m_tableId = jsonValue.GetString("tableId");

    m_tableIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tableName"))
  {
    m_tableName = jsonValue.GetString("tableName");

    m_tableNameHasBeenSet = true;
  }

  return *this;
}

JsonValue Table::Jsonize() const
{
  JsonValue payload;

  if(m_tableIdHasBeenSet)
  {
   payload.WithString("tableId", m_tableId);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("tableName", m_tableName);

  }

  return payload;
}

} // namespace Model
} // namespace Honeycode
} // namespace Aws
