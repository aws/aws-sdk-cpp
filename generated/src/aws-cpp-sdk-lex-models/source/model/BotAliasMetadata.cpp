/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/BotAliasMetadata.h>
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

BotAliasMetadata::BotAliasMetadata() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_botNameHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_checksumHasBeenSet(false),
    m_conversationLogsHasBeenSet(false)
{
}

BotAliasMetadata::BotAliasMetadata(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_botNameHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_checksumHasBeenSet(false),
    m_conversationLogsHasBeenSet(false)
{
  *this = jsonValue;
}

BotAliasMetadata& BotAliasMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");

    m_botVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botName"))
  {
    m_botName = jsonValue.GetString("botName");

    m_botNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetDouble("lastUpdatedDate");

    m_lastUpdatedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("checksum"))
  {
    m_checksum = jsonValue.GetString("checksum");

    m_checksumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("conversationLogs"))
  {
    m_conversationLogs = jsonValue.GetObject("conversationLogs");

    m_conversationLogsHasBeenSet = true;
  }

  return *this;
}

JsonValue BotAliasMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_botVersionHasBeenSet)
  {
   payload.WithString("botVersion", m_botVersion);

  }

  if(m_botNameHasBeenSet)
  {
   payload.WithString("botName", m_botName);

  }

  if(m_lastUpdatedDateHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDate", m_lastUpdatedDate.SecondsWithMSPrecision());
  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithDouble("createdDate", m_createdDate.SecondsWithMSPrecision());
  }

  if(m_checksumHasBeenSet)
  {
   payload.WithString("checksum", m_checksum);

  }

  if(m_conversationLogsHasBeenSet)
  {
   payload.WithObject("conversationLogs", m_conversationLogs.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
