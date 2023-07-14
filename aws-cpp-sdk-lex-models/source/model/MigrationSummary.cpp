/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/MigrationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

MigrationSummary::MigrationSummary() : 
    m_migrationIdHasBeenSet(false),
    m_v1BotNameHasBeenSet(false),
    m_v1BotVersionHasBeenSet(false),
    m_v1BotLocale(Locale::NOT_SET),
    m_v1BotLocaleHasBeenSet(false),
    m_v2BotIdHasBeenSet(false),
    m_v2BotRoleHasBeenSet(false),
    m_migrationStatus(MigrationStatus::NOT_SET),
    m_migrationStatusHasBeenSet(false),
    m_migrationStrategy(MigrationStrategy::NOT_SET),
    m_migrationStrategyHasBeenSet(false),
    m_migrationTimestampHasBeenSet(false)
{
}

MigrationSummary::MigrationSummary(JsonView jsonValue) : 
    m_migrationIdHasBeenSet(false),
    m_v1BotNameHasBeenSet(false),
    m_v1BotVersionHasBeenSet(false),
    m_v1BotLocale(Locale::NOT_SET),
    m_v1BotLocaleHasBeenSet(false),
    m_v2BotIdHasBeenSet(false),
    m_v2BotRoleHasBeenSet(false),
    m_migrationStatus(MigrationStatus::NOT_SET),
    m_migrationStatusHasBeenSet(false),
    m_migrationStrategy(MigrationStrategy::NOT_SET),
    m_migrationStrategyHasBeenSet(false),
    m_migrationTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

MigrationSummary& MigrationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("migrationId"))
  {
    m_migrationId = jsonValue.GetString("migrationId");

    m_migrationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("v1BotName"))
  {
    m_v1BotName = jsonValue.GetString("v1BotName");

    m_v1BotNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("v1BotVersion"))
  {
    m_v1BotVersion = jsonValue.GetString("v1BotVersion");

    m_v1BotVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("v1BotLocale"))
  {
    m_v1BotLocale = LocaleMapper::GetLocaleForName(jsonValue.GetString("v1BotLocale"));

    m_v1BotLocaleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("v2BotId"))
  {
    m_v2BotId = jsonValue.GetString("v2BotId");

    m_v2BotIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("v2BotRole"))
  {
    m_v2BotRole = jsonValue.GetString("v2BotRole");

    m_v2BotRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("migrationStatus"))
  {
    m_migrationStatus = MigrationStatusMapper::GetMigrationStatusForName(jsonValue.GetString("migrationStatus"));

    m_migrationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("migrationStrategy"))
  {
    m_migrationStrategy = MigrationStrategyMapper::GetMigrationStrategyForName(jsonValue.GetString("migrationStrategy"));

    m_migrationStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("migrationTimestamp"))
  {
    m_migrationTimestamp = jsonValue.GetDouble("migrationTimestamp");

    m_migrationTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue MigrationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_migrationIdHasBeenSet)
  {
   payload.WithString("migrationId", m_migrationId);

  }

  if(m_v1BotNameHasBeenSet)
  {
   payload.WithString("v1BotName", m_v1BotName);

  }

  if(m_v1BotVersionHasBeenSet)
  {
   payload.WithString("v1BotVersion", m_v1BotVersion);

  }

  if(m_v1BotLocaleHasBeenSet)
  {
   payload.WithString("v1BotLocale", LocaleMapper::GetNameForLocale(m_v1BotLocale));
  }

  if(m_v2BotIdHasBeenSet)
  {
   payload.WithString("v2BotId", m_v2BotId);

  }

  if(m_v2BotRoleHasBeenSet)
  {
   payload.WithString("v2BotRole", m_v2BotRole);

  }

  if(m_migrationStatusHasBeenSet)
  {
   payload.WithString("migrationStatus", MigrationStatusMapper::GetNameForMigrationStatus(m_migrationStatus));
  }

  if(m_migrationStrategyHasBeenSet)
  {
   payload.WithString("migrationStrategy", MigrationStrategyMapper::GetNameForMigrationStrategy(m_migrationStrategy));
  }

  if(m_migrationTimestampHasBeenSet)
  {
   payload.WithDouble("migrationTimestamp", m_migrationTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
