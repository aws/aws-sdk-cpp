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

#include <aws/kendra/model/DatabaseConfiguration.h>
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

DatabaseConfiguration::DatabaseConfiguration() : 
    m_databaseEngineType(DatabaseEngineType::NOT_SET),
    m_databaseEngineTypeHasBeenSet(false),
    m_connectionConfigurationHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false),
    m_columnConfigurationHasBeenSet(false),
    m_aclConfigurationHasBeenSet(false)
{
}

DatabaseConfiguration::DatabaseConfiguration(JsonView jsonValue) : 
    m_databaseEngineType(DatabaseEngineType::NOT_SET),
    m_databaseEngineTypeHasBeenSet(false),
    m_connectionConfigurationHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false),
    m_columnConfigurationHasBeenSet(false),
    m_aclConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

DatabaseConfiguration& DatabaseConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatabaseEngineType"))
  {
    m_databaseEngineType = DatabaseEngineTypeMapper::GetDatabaseEngineTypeForName(jsonValue.GetString("DatabaseEngineType"));

    m_databaseEngineTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionConfiguration"))
  {
    m_connectionConfiguration = jsonValue.GetObject("ConnectionConfiguration");

    m_connectionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfiguration"))
  {
    m_vpcConfiguration = jsonValue.GetObject("VpcConfiguration");

    m_vpcConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnConfiguration"))
  {
    m_columnConfiguration = jsonValue.GetObject("ColumnConfiguration");

    m_columnConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AclConfiguration"))
  {
    m_aclConfiguration = jsonValue.GetObject("AclConfiguration");

    m_aclConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue DatabaseConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_databaseEngineTypeHasBeenSet)
  {
   payload.WithString("DatabaseEngineType", DatabaseEngineTypeMapper::GetNameForDatabaseEngineType(m_databaseEngineType));
  }

  if(m_connectionConfigurationHasBeenSet)
  {
   payload.WithObject("ConnectionConfiguration", m_connectionConfiguration.Jsonize());

  }

  if(m_vpcConfigurationHasBeenSet)
  {
   payload.WithObject("VpcConfiguration", m_vpcConfiguration.Jsonize());

  }

  if(m_columnConfigurationHasBeenSet)
  {
   payload.WithObject("ColumnConfiguration", m_columnConfiguration.Jsonize());

  }

  if(m_aclConfigurationHasBeenSet)
  {
   payload.WithObject("AclConfiguration", m_aclConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
