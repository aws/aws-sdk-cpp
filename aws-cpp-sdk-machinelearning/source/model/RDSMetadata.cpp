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
#include <aws/machinelearning/model/RDSMetadata.h>
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

RDSMetadata::RDSMetadata() : 
    m_databaseHasBeenSet(false),
    m_databaseUserNameHasBeenSet(false),
    m_selectSqlQueryHasBeenSet(false),
    m_resourceRoleHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_dataPipelineIdHasBeenSet(false)
{
}

RDSMetadata::RDSMetadata(const JsonValue& jsonValue) : 
    m_databaseHasBeenSet(false),
    m_databaseUserNameHasBeenSet(false),
    m_selectSqlQueryHasBeenSet(false),
    m_resourceRoleHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_dataPipelineIdHasBeenSet(false)
{
  *this = jsonValue;
}

RDSMetadata& RDSMetadata::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetObject("Database");

    m_databaseHasBeenSet = true;
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

  if(jsonValue.ValueExists("ResourceRole"))
  {
    m_resourceRole = jsonValue.GetString("ResourceRole");

    m_resourceRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceRole"))
  {
    m_serviceRole = jsonValue.GetString("ServiceRole");

    m_serviceRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataPipelineId"))
  {
    m_dataPipelineId = jsonValue.GetString("DataPipelineId");

    m_dataPipelineIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RDSMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_databaseHasBeenSet)
  {
   payload.WithObject("Database", m_database.Jsonize());

  }

  if(m_databaseUserNameHasBeenSet)
  {
   payload.WithString("DatabaseUserName", m_databaseUserName);

  }

  if(m_selectSqlQueryHasBeenSet)
  {
   payload.WithString("SelectSqlQuery", m_selectSqlQuery);

  }

  if(m_resourceRoleHasBeenSet)
  {
   payload.WithString("ResourceRole", m_resourceRole);

  }

  if(m_serviceRoleHasBeenSet)
  {
   payload.WithString("ServiceRole", m_serviceRole);

  }

  if(m_dataPipelineIdHasBeenSet)
  {
   payload.WithString("DataPipelineId", m_dataPipelineId);

  }

  return payload;
}

} // namespace Model
} // namespace MachineLearning
} // namespace Aws