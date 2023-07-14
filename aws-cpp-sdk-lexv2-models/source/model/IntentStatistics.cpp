/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/IntentStatistics.h>
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

IntentStatistics::IntentStatistics() : 
    m_discoveredIntentCount(0),
    m_discoveredIntentCountHasBeenSet(false)
{
}

IntentStatistics::IntentStatistics(JsonView jsonValue) : 
    m_discoveredIntentCount(0),
    m_discoveredIntentCountHasBeenSet(false)
{
  *this = jsonValue;
}

IntentStatistics& IntentStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("discoveredIntentCount"))
  {
    m_discoveredIntentCount = jsonValue.GetInteger("discoveredIntentCount");

    m_discoveredIntentCountHasBeenSet = true;
  }

  return *this;
}

JsonValue IntentStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_discoveredIntentCountHasBeenSet)
  {
   payload.WithInteger("discoveredIntentCount", m_discoveredIntentCount);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
