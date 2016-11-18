/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

RedshiftMetadata::RedshiftMetadata(const JsonValue& jsonValue) : 
    m_redshiftDatabaseHasBeenSet(false),
    m_databaseUserNameHasBeenSet(false),
    m_selectSqlQueryHasBeenSet(false)
{
  *this = jsonValue;
}

RedshiftMetadata& RedshiftMetadata::operator =(const JsonValue& jsonValue)
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