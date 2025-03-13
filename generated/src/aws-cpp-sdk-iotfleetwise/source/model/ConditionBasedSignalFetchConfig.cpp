/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/ConditionBasedSignalFetchConfig.h>
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

ConditionBasedSignalFetchConfig::ConditionBasedSignalFetchConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ConditionBasedSignalFetchConfig& ConditionBasedSignalFetchConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("conditionExpression"))
  {
    m_conditionExpression = jsonValue.GetString("conditionExpression");
    m_conditionExpressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("triggerMode"))
  {
    m_triggerMode = TriggerModeMapper::GetTriggerModeForName(jsonValue.GetString("triggerMode"));
    m_triggerModeHasBeenSet = true;
  }
  return *this;
}

JsonValue ConditionBasedSignalFetchConfig::Jsonize() const
{
  JsonValue payload;

  if(m_conditionExpressionHasBeenSet)
  {
   payload.WithString("conditionExpression", m_conditionExpression);

  }

  if(m_triggerModeHasBeenSet)
  {
   payload.WithString("triggerMode", TriggerModeMapper::GetNameForTriggerMode(m_triggerMode));
  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
