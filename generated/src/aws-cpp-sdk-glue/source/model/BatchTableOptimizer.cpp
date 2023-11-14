/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchTableOptimizer.h>
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

BatchTableOptimizer::BatchTableOptimizer() : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableOptimizerHasBeenSet(false)
{
}

BatchTableOptimizer::BatchTableOptimizer(JsonView jsonValue) : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableOptimizerHasBeenSet(false)
{
  *this = jsonValue;
}

BatchTableOptimizer& BatchTableOptimizer::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("tableOptimizer"))
  {
    m_tableOptimizer = jsonValue.GetObject("tableOptimizer");

    m_tableOptimizerHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchTableOptimizer::Jsonize() const
{
  JsonValue payload;

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

  if(m_tableOptimizerHasBeenSet)
  {
   payload.WithObject("tableOptimizer", m_tableOptimizer.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
