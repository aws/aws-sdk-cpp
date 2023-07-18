/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotExportSpecification.h>
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

BotExportSpecification::BotExportSpecification() : 
    m_botIdHasBeenSet(false),
    m_botVersionHasBeenSet(false)
{
}

BotExportSpecification::BotExportSpecification(JsonView jsonValue) : 
    m_botIdHasBeenSet(false),
    m_botVersionHasBeenSet(false)
{
  *this = jsonValue;
}

BotExportSpecification& BotExportSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");

    m_botIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");

    m_botVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue BotExportSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_botIdHasBeenSet)
  {
   payload.WithString("botId", m_botId);

  }

  if(m_botVersionHasBeenSet)
  {
   payload.WithString("botVersion", m_botVersion);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
