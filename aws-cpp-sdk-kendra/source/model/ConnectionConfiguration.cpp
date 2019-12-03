/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/kendra/model/ConnectionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

ConnectionConfiguration::ConnectionConfiguration() : 
    m_databaseHostHasBeenSet(false),
    m_databasePort(0),
    m_databasePortHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_secretArnHasBeenSet(false)
{
}

ConnectionConfiguration::ConnectionConfiguration(JsonView jsonValue) : 
    m_databaseHostHasBeenSet(false),
    m_databasePort(0),
    m_databasePortHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_secretArnHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectionConfiguration& ConnectionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatabaseHost"))
  {
    m_databaseHost = jsonValue.GetString("DatabaseHost");

    m_databaseHostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabasePort"))
  {
    m_databasePort = jsonValue.GetInteger("DatabasePort");

    m_databasePortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");

    m_secretArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_databaseHostHasBeenSet)
  {
   payload.WithString("DatabaseHost", m_databaseHost);

  }

  if(m_databasePortHasBeenSet)
  {
   payload.WithInteger("DatabasePort", m_databasePort);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
