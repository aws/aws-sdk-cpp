/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TableError.h>
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

TableError::TableError() : 
    m_tableNameHasBeenSet(false),
    m_errorDetailHasBeenSet(false)
{
}

TableError::TableError(JsonView jsonValue) : 
    m_tableNameHasBeenSet(false),
    m_errorDetailHasBeenSet(false)
{
  *this = jsonValue;
}

TableError& TableError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorDetail"))
  {
    m_errorDetail = jsonValue.GetObject("ErrorDetail");

    m_errorDetailHasBeenSet = true;
  }

  return *this;
}

JsonValue TableError::Jsonize() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_errorDetailHasBeenSet)
  {
   payload.WithObject("ErrorDetail", m_errorDetail.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
