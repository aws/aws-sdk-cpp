/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/RedshiftDataProviderSettings.h>
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

RedshiftDataProviderSettings::RedshiftDataProviderSettings() : 
    m_serverNameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_databaseNameHasBeenSet(false)
{
}

RedshiftDataProviderSettings::RedshiftDataProviderSettings(JsonView jsonValue) : 
    m_serverNameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_databaseNameHasBeenSet(false)
{
  *this = jsonValue;
}

RedshiftDataProviderSettings& RedshiftDataProviderSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServerName"))
  {
    m_serverName = jsonValue.GetString("ServerName");

    m_serverNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  return *this;
}

JsonValue RedshiftDataProviderSettings::Jsonize() const
{
  JsonValue payload;

  if(m_serverNameHasBeenSet)
  {
   payload.WithString("ServerName", m_serverName);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
