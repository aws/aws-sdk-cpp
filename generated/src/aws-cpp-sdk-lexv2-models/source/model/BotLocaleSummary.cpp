/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotLocaleSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

BotLocaleSummary::BotLocaleSummary() : 
    m_localeIdHasBeenSet(false),
    m_localeNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_botLocaleStatus(BotLocaleStatus::NOT_SET),
    m_botLocaleStatusHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_lastBuildSubmittedDateTimeHasBeenSet(false)
{
}

BotLocaleSummary::BotLocaleSummary(JsonView jsonValue) : 
    m_localeIdHasBeenSet(false),
    m_localeNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_botLocaleStatus(BotLocaleStatus::NOT_SET),
    m_botLocaleStatusHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_lastBuildSubmittedDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

BotLocaleSummary& BotLocaleSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("localeId"))
  {
    m_localeId = jsonValue.GetString("localeId");

    m_localeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("localeName"))
  {
    m_localeName = jsonValue.GetString("localeName");

    m_localeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botLocaleStatus"))
  {
    m_botLocaleStatus = BotLocaleStatusMapper::GetBotLocaleStatusForName(jsonValue.GetString("botLocaleStatus"));

    m_botLocaleStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastBuildSubmittedDateTime"))
  {
    m_lastBuildSubmittedDateTime = jsonValue.GetDouble("lastBuildSubmittedDateTime");

    m_lastBuildSubmittedDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue BotLocaleSummary::Jsonize() const
{
  JsonValue payload;

  if(m_localeIdHasBeenSet)
  {
   payload.WithString("localeId", m_localeId);

  }

  if(m_localeNameHasBeenSet)
  {
   payload.WithString("localeName", m_localeName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_botLocaleStatusHasBeenSet)
  {
   payload.WithString("botLocaleStatus", BotLocaleStatusMapper::GetNameForBotLocaleStatus(m_botLocaleStatus));
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  if(m_lastBuildSubmittedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastBuildSubmittedDateTime", m_lastBuildSubmittedDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
