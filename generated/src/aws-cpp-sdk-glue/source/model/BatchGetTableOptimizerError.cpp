/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchGetTableOptimizerError.h>
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

BatchGetTableOptimizerError::BatchGetTableOptimizerError() : 
    m_errorHasBeenSet(false),
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_type(TableOptimizerType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

BatchGetTableOptimizerError::BatchGetTableOptimizerError(JsonView jsonValue) : 
    m_errorHasBeenSet(false),
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_type(TableOptimizerType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

BatchGetTableOptimizerError& BatchGetTableOptimizerError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetObject("error");

    m_errorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("catalogId"))
  {
    m_catalogId = jsonValue.GetString("catalogId");

    m_catalogIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("databaseName"))
  {
    m_databaseName = jsonValue.GetString("databaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tableName"))
  {
    m_tableName = jsonValue.GetString("tableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = TableOptimizerTypeMapper::GetTableOptimizerTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchGetTableOptimizerError::Jsonize() const
{
  JsonValue payload;

  if(m_errorHasBeenSet)
  {
   payload.WithObject("error", m_error.Jsonize());

  }

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("catalogId", m_catalogId);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("databaseName", m_databaseName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("tableName", m_tableName);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TableOptimizerTypeMapper::GetNameForTableOptimizerType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
