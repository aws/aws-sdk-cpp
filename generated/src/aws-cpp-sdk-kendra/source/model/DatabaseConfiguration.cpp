/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_aclConfigurationHasBeenSet(false),
    m_sqlConfigurationHasBeenSet(false)
{
}

DatabaseConfiguration::DatabaseConfiguration(JsonView jsonValue) : 
    m_databaseEngineType(DatabaseEngineType::NOT_SET),
    m_databaseEngineTypeHasBeenSet(false),
    m_connectionConfigurationHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false),
    m_columnConfigurationHasBeenSet(false),
    m_aclConfigurationHasBeenSet(false),
    m_sqlConfigurationHasBeenSet(false)
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

  if(jsonValue.ValueExists("SqlConfiguration"))
  {
    m_sqlConfiguration = jsonValue.GetObject("SqlConfiguration");

    m_sqlConfigurationHasBeenSet = true;
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

  if(m_sqlConfigurationHasBeenSet)
  {
   payload.WithObject("SqlConfiguration", m_sqlConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
