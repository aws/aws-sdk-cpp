﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/GetMigrationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMigrationResult::GetMigrationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMigrationResult& GetMigrationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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
  if(jsonValue.ValueExists("alerts"))
  {
    Aws::Utils::Array<JsonView> alertsJsonList = jsonValue.GetArray("alerts");
    for(unsigned alertsIndex = 0; alertsIndex < alertsJsonList.GetLength(); ++alertsIndex)
    {
      m_alerts.push_back(alertsJsonList[alertsIndex].AsObject());
    }
    m_alertsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
