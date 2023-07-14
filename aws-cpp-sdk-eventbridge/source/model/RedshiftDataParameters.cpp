/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/RedshiftDataParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

RedshiftDataParameters::RedshiftDataParameters() : 
    m_secretManagerArnHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_dbUserHasBeenSet(false),
    m_sqlHasBeenSet(false),
    m_statementNameHasBeenSet(false),
    m_withEvent(false),
    m_withEventHasBeenSet(false)
{
}

RedshiftDataParameters::RedshiftDataParameters(JsonView jsonValue) : 
    m_secretManagerArnHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_dbUserHasBeenSet(false),
    m_sqlHasBeenSet(false),
    m_statementNameHasBeenSet(false),
    m_withEvent(false),
    m_withEventHasBeenSet(false)
{
  *this = jsonValue;
}

RedshiftDataParameters& RedshiftDataParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SecretManagerArn"))
  {
    m_secretManagerArn = jsonValue.GetString("SecretManagerArn");

    m_secretManagerArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");

    m_databaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbUser"))
  {
    m_dbUser = jsonValue.GetString("DbUser");

    m_dbUserHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sql"))
  {
    m_sql = jsonValue.GetString("Sql");

    m_sqlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatementName"))
  {
    m_statementName = jsonValue.GetString("StatementName");

    m_statementNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WithEvent"))
  {
    m_withEvent = jsonValue.GetBool("WithEvent");

    m_withEventHasBeenSet = true;
  }

  return *this;
}

JsonValue RedshiftDataParameters::Jsonize() const
{
  JsonValue payload;

  if(m_secretManagerArnHasBeenSet)
  {
   payload.WithString("SecretManagerArn", m_secretManagerArn);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  if(m_dbUserHasBeenSet)
  {
   payload.WithString("DbUser", m_dbUser);

  }

  if(m_sqlHasBeenSet)
  {
   payload.WithString("Sql", m_sql);

  }

  if(m_statementNameHasBeenSet)
  {
   payload.WithString("StatementName", m_statementName);

  }

  if(m_withEventHasBeenSet)
  {
   payload.WithBool("WithEvent", m_withEvent);

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
