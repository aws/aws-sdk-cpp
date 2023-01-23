/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/RedshiftMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

RedshiftMetadata::RedshiftMetadata() : 
    m_redshiftDatabaseHasBeenSet(false),
    m_databaseUserNameHasBeenSet(false),
    m_selectSqlQueryHasBeenSet(false)
{
}

RedshiftMetadata::RedshiftMetadata(JsonView jsonValue) : 
    m_redshiftDatabaseHasBeenSet(false),
    m_databaseUserNameHasBeenSet(false),
    m_selectSqlQueryHasBeenSet(false)
{
  *this = jsonValue;
}

RedshiftMetadata& RedshiftMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RedshiftDatabase"))
  {
    m_redshiftDatabase = jsonValue.GetObject("RedshiftDatabase");

    m_redshiftDatabaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseUserName"))
  {
    m_databaseUserName = jsonValue.GetString("DatabaseUserName");

    m_databaseUserNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectSqlQuery"))
  {
    m_selectSqlQuery = jsonValue.GetString("SelectSqlQuery");

    m_selectSqlQueryHasBeenSet = true;
  }

  return *this;
}

JsonValue RedshiftMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_redshiftDatabaseHasBeenSet)
  {
   payload.WithObject("RedshiftDatabase", m_redshiftDatabase.Jsonize());

  }

  if(m_databaseUserNameHasBeenSet)
  {
   payload.WithString("DatabaseUserName", m_databaseUserName);

  }

  if(m_selectSqlQueryHasBeenSet)
  {
   payload.WithString("SelectSqlQuery", m_selectSqlQuery);

  }

  return payload;
}

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
