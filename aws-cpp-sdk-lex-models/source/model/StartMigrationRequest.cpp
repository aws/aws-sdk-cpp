/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/StartMigrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartMigrationRequest::StartMigrationRequest() : 
    m_v1BotNameHasBeenSet(false),
    m_v1BotVersionHasBeenSet(false),
    m_v2BotNameHasBeenSet(false),
    m_v2BotRoleHasBeenSet(false),
    m_migrationStrategy(MigrationStrategy::NOT_SET),
    m_migrationStrategyHasBeenSet(false)
{
}

Aws::String StartMigrationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_v1BotNameHasBeenSet)
  {
   payload.WithString("v1BotName", m_v1BotName);

  }

  if(m_v1BotVersionHasBeenSet)
  {
   payload.WithString("v1BotVersion", m_v1BotVersion);

  }

  if(m_v2BotNameHasBeenSet)
  {
   payload.WithString("v2BotName", m_v2BotName);

  }

  if(m_v2BotRoleHasBeenSet)
  {
   payload.WithString("v2BotRole", m_v2BotRole);

  }

  if(m_migrationStrategyHasBeenSet)
  {
   payload.WithString("migrationStrategy", MigrationStrategyMapper::GetNameForMigrationStrategy(m_migrationStrategy));
  }

  return payload.View().WriteReadable();
}




