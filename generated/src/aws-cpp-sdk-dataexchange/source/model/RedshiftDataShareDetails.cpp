/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/RedshiftDataShareDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

RedshiftDataShareDetails::RedshiftDataShareDetails() : 
    m_arnHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_functionHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_viewHasBeenSet(false)
{
}

RedshiftDataShareDetails::RedshiftDataShareDetails(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_functionHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_viewHasBeenSet(false)
{
  *this = jsonValue;
}

RedshiftDataShareDetails& RedshiftDataShareDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");

    m_databaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Function"))
  {
    m_function = jsonValue.GetString("Function");

    m_functionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Table"))
  {
    m_table = jsonValue.GetString("Table");

    m_tableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Schema"))
  {
    m_schema = jsonValue.GetString("Schema");

    m_schemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("View"))
  {
    m_view = jsonValue.GetString("View");

    m_viewHasBeenSet = true;
  }

  return *this;
}

JsonValue RedshiftDataShareDetails::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  if(m_functionHasBeenSet)
  {
   payload.WithString("Function", m_function);

  }

  if(m_tableHasBeenSet)
  {
   payload.WithString("Table", m_table);

  }

  if(m_schemaHasBeenSet)
  {
   payload.WithString("Schema", m_schema);

  }

  if(m_viewHasBeenSet)
  {
   payload.WithString("View", m_view);

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
