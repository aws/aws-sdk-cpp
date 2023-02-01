/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/ConditionBasedCollectionScheme.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

ConditionBasedCollectionScheme::ConditionBasedCollectionScheme() : 
    m_expressionHasBeenSet(false),
    m_minimumTriggerIntervalMs(0),
    m_minimumTriggerIntervalMsHasBeenSet(false),
    m_triggerMode(TriggerMode::NOT_SET),
    m_triggerModeHasBeenSet(false),
    m_conditionLanguageVersion(0),
    m_conditionLanguageVersionHasBeenSet(false)
{
}

ConditionBasedCollectionScheme::ConditionBasedCollectionScheme(JsonView jsonValue) : 
    m_expressionHasBeenSet(false),
    m_minimumTriggerIntervalMs(0),
    m_minimumTriggerIntervalMsHasBeenSet(false),
    m_triggerMode(TriggerMode::NOT_SET),
    m_triggerModeHasBeenSet(false),
    m_conditionLanguageVersion(0),
    m_conditionLanguageVersionHasBeenSet(false)
{
  *this = jsonValue;
}

ConditionBasedCollectionScheme& ConditionBasedCollectionScheme::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("expression"))
  {
    m_expression = jsonValue.GetString("expression");

    m_expressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minimumTriggerIntervalMs"))
  {
    m_minimumTriggerIntervalMs = jsonValue.GetInt64("minimumTriggerIntervalMs");

    m_minimumTriggerIntervalMsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("triggerMode"))
  {
    m_triggerMode = TriggerModeMapper::GetTriggerModeForName(jsonValue.GetString("triggerMode"));

    m_triggerModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("conditionLanguageVersion"))
  {
    m_conditionLanguageVersion = jsonValue.GetInteger("conditionLanguageVersion");

    m_conditionLanguageVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue ConditionBasedCollectionScheme::Jsonize() const
{
  JsonValue payload;

  if(m_expressionHasBeenSet)
  {
   payload.WithString("expression", m_expression);

  }

  if(m_minimumTriggerIntervalMsHasBeenSet)
  {
   payload.WithInt64("minimumTriggerIntervalMs", m_minimumTriggerIntervalMs);

  }

  if(m_triggerModeHasBeenSet)
  {
   payload.WithString("triggerMode", TriggerModeMapper::GetNameForTriggerMode(m_triggerMode));
  }

  if(m_conditionLanguageVersionHasBeenSet)
  {
   payload.WithInteger("conditionLanguageVersion", m_conditionLanguageVersion);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
