/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DataProviderSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

DataProviderSettings::DataProviderSettings() : 
    m_redshiftSettingsHasBeenSet(false),
    m_postgreSqlSettingsHasBeenSet(false),
    m_mySqlSettingsHasBeenSet(false),
    m_oracleSettingsHasBeenSet(false),
    m_microsoftSqlServerSettingsHasBeenSet(false),
    m_docDbSettingsHasBeenSet(false),
    m_mariaDbSettingsHasBeenSet(false),
    m_mongoDbSettingsHasBeenSet(false)
{
}

DataProviderSettings::DataProviderSettings(JsonView jsonValue) : 
    m_redshiftSettingsHasBeenSet(false),
    m_postgreSqlSettingsHasBeenSet(false),
    m_mySqlSettingsHasBeenSet(false),
    m_oracleSettingsHasBeenSet(false),
    m_microsoftSqlServerSettingsHasBeenSet(false),
    m_docDbSettingsHasBeenSet(false),
    m_mariaDbSettingsHasBeenSet(false),
    m_mongoDbSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

DataProviderSettings& DataProviderSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RedshiftSettings"))
  {
    m_redshiftSettings = jsonValue.GetObject("RedshiftSettings");

    m_redshiftSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PostgreSqlSettings"))
  {
    m_postgreSqlSettings = jsonValue.GetObject("PostgreSqlSettings");

    m_postgreSqlSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MySqlSettings"))
  {
    m_mySqlSettings = jsonValue.GetObject("MySqlSettings");

    m_mySqlSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OracleSettings"))
  {
    m_oracleSettings = jsonValue.GetObject("OracleSettings");

    m_oracleSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MicrosoftSqlServerSettings"))
  {
    m_microsoftSqlServerSettings = jsonValue.GetObject("MicrosoftSqlServerSettings");

    m_microsoftSqlServerSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocDbSettings"))
  {
    m_docDbSettings = jsonValue.GetObject("DocDbSettings");

    m_docDbSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MariaDbSettings"))
  {
    m_mariaDbSettings = jsonValue.GetObject("MariaDbSettings");

    m_mariaDbSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MongoDbSettings"))
  {
    m_mongoDbSettings = jsonValue.GetObject("MongoDbSettings");

    m_mongoDbSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue DataProviderSettings::Jsonize() const
{
  JsonValue payload;

  if(m_redshiftSettingsHasBeenSet)
  {
   payload.WithObject("RedshiftSettings", m_redshiftSettings.Jsonize());

  }

  if(m_postgreSqlSettingsHasBeenSet)
  {
   payload.WithObject("PostgreSqlSettings", m_postgreSqlSettings.Jsonize());

  }

  if(m_mySqlSettingsHasBeenSet)
  {
   payload.WithObject("MySqlSettings", m_mySqlSettings.Jsonize());

  }

  if(m_oracleSettingsHasBeenSet)
  {
   payload.WithObject("OracleSettings", m_oracleSettings.Jsonize());

  }

  if(m_microsoftSqlServerSettingsHasBeenSet)
  {
   payload.WithObject("MicrosoftSqlServerSettings", m_microsoftSqlServerSettings.Jsonize());

  }

  if(m_docDbSettingsHasBeenSet)
  {
   payload.WithObject("DocDbSettings", m_docDbSettings.Jsonize());

  }

  if(m_mariaDbSettingsHasBeenSet)
  {
   payload.WithObject("MariaDbSettings", m_mariaDbSettings.Jsonize());

  }

  if(m_mongoDbSettingsHasBeenSet)
  {
   payload.WithObject("MongoDbSettings", m_mongoDbSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
