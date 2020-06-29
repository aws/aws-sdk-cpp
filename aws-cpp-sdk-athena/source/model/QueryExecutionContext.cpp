/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/QueryExecutionContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

QueryExecutionContext::QueryExecutionContext() : 
    m_databaseHasBeenSet(false),
    m_catalogHasBeenSet(false)
{
}

QueryExecutionContext::QueryExecutionContext(JsonView jsonValue) : 
    m_databaseHasBeenSet(false),
    m_catalogHasBeenSet(false)
{
  *this = jsonValue;
}

QueryExecutionContext& QueryExecutionContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");

    m_databaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Catalog"))
  {
    m_catalog = jsonValue.GetString("Catalog");

    m_catalogHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryExecutionContext::Jsonize() const
{
  JsonValue payload;

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  if(m_catalogHasBeenSet)
  {
   payload.WithString("Catalog", m_catalog);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
