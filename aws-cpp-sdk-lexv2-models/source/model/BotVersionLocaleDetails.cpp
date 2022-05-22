/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotVersionLocaleDetails.h>
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

BotVersionLocaleDetails::BotVersionLocaleDetails() : 
    m_sourceBotVersionHasBeenSet(false)
{
}

BotVersionLocaleDetails::BotVersionLocaleDetails(JsonView jsonValue) : 
    m_sourceBotVersionHasBeenSet(false)
{
  *this = jsonValue;
}

BotVersionLocaleDetails& BotVersionLocaleDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceBotVersion"))
  {
    m_sourceBotVersion = jsonValue.GetString("sourceBotVersion");

    m_sourceBotVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue BotVersionLocaleDetails::Jsonize() const
{
  JsonValue payload;

  if(m_sourceBotVersionHasBeenSet)
  {
   payload.WithString("sourceBotVersion", m_sourceBotVersion);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
