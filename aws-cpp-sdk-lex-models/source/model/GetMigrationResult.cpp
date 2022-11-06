/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/GetMigrationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMigrationResult::GetMigrationResult() : 
    m_v1BotLocale(Locale::NOT_SET),
    m_migrationStatus(MigrationStatus::NOT_SET),
    m_migrationStrategy(MigrationStrategy::NOT_SET)
{
}

GetMigrationResult::GetMigrationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_v1BotLocale(Locale::NOT_SET),
    m_migrationStatus(MigrationStatus::NOT_SET),
    m_migrationStrategy(MigrationStrategy::NOT_SET)
{
  *this = result;
}

GetMigrationResult& GetMigrationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("migrationId"))
  {
    m_migrationId = jsonValue.GetString("migrationId");

  }

  if(jsonValue.ValueExists("v1BotName"))
  {
    m_v1BotName = jsonValue.GetString("v1BotName");

  }

  if(jsonValue.ValueExists("v1BotVersion"))
  {
    m_v1BotVersion = jsonValue.GetString("v1BotVersion");

  }

  if(jsonValue.ValueExists("v1BotLocale"))
  {
    m_v1BotLocale = LocaleMapper::GetLocaleForName(jsonValue.GetString("v1BotLocale"));

  }

  if(jsonValue.ValueExists("v2BotId"))
  {
    m_v2BotId = jsonValue.GetString("v2BotId");

  }

  if(jsonValue.ValueExists("v2BotRole"))
  {
    m_v2BotRole = jsonValue.GetString("v2BotRole");

  }

  if(jsonValue.ValueExists("migrationStatus"))
  {
    m_migrationStatus = MigrationStatusMapper::GetMigrationStatusForName(jsonValue.GetString("migrationStatus"));

  }

  if(jsonValue.ValueExists("migrationStrategy"))
  {
    m_migrationStrategy = MigrationStrategyMapper::GetMigrationStrategyForName(jsonValue.GetString("migrationStrategy"));

  }

  if(jsonValue.ValueExists("migrationTimestamp"))
  {
    m_migrationTimestamp = jsonValue.GetDouble("migrationTimestamp");

  }

  if(jsonValue.ValueExists("alerts"))
  {
    Aws::Utils::Array<JsonView> alertsJsonList = jsonValue.GetArray("alerts");
    for(unsigned alertsIndex = 0; alertsIndex < alertsJsonList.GetLength(); ++alertsIndex)
    {
      m_alerts.push_back(alertsJsonList[alertsIndex].AsObject());
    }
  }



  return *this;
}
