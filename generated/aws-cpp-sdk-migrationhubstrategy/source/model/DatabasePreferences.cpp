/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/DatabasePreferences.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

DatabasePreferences::DatabasePreferences() : 
    m_databaseManagementPreference(DatabaseManagementPreference::NOT_SET),
    m_databaseManagementPreferenceHasBeenSet(false),
    m_databaseMigrationPreferenceHasBeenSet(false)
{
}

DatabasePreferences::DatabasePreferences(JsonView jsonValue) : 
    m_databaseManagementPreference(DatabaseManagementPreference::NOT_SET),
    m_databaseManagementPreferenceHasBeenSet(false),
    m_databaseMigrationPreferenceHasBeenSet(false)
{
  *this = jsonValue;
}

DatabasePreferences& DatabasePreferences::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("databaseManagementPreference"))
  {
    m_databaseManagementPreference = DatabaseManagementPreferenceMapper::GetDatabaseManagementPreferenceForName(jsonValue.GetString("databaseManagementPreference"));

    m_databaseManagementPreferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("databaseMigrationPreference"))
  {
    m_databaseMigrationPreference = jsonValue.GetObject("databaseMigrationPreference");

    m_databaseMigrationPreferenceHasBeenSet = true;
  }

  return *this;
}

JsonValue DatabasePreferences::Jsonize() const
{
  JsonValue payload;

  if(m_databaseManagementPreferenceHasBeenSet)
  {
   payload.WithString("databaseManagementPreference", DatabaseManagementPreferenceMapper::GetNameForDatabaseManagementPreference(m_databaseManagementPreference));
  }

  if(m_databaseMigrationPreferenceHasBeenSet)
  {
   payload.WithObject("databaseMigrationPreference", m_databaseMigrationPreference.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
