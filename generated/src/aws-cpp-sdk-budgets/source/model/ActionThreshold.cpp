/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/ActionThreshold.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Budgets
{
namespace Model
{

ActionThreshold::ActionThreshold() : 
    m_actionThresholdValue(0.0),
    m_actionThresholdValueHasBeenSet(false),
    m_actionThresholdType(ThresholdType::NOT_SET),
    m_actionThresholdTypeHasBeenSet(false)
{
}

ActionThreshold::ActionThreshold(JsonView jsonValue) : 
    m_actionThresholdValue(0.0),
    m_actionThresholdValueHasBeenSet(false),
    m_actionThresholdType(ThresholdType::NOT_SET),
    m_actionThresholdTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ActionThreshold& ActionThreshold::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActionThresholdValue"))
  {
    m_actionThresholdValue = jsonValue.GetDouble("ActionThresholdValue");

    m_actionThresholdValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActionThresholdType"))
  {
    m_actionThresholdType = ThresholdTypeMapper::GetThresholdTypeForName(jsonValue.GetString("ActionThresholdType"));

    m_actionThresholdTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionThreshold::Jsonize() const
{
  JsonValue payload;

  if(m_actionThresholdValueHasBeenSet)
  {
   payload.WithDouble("ActionThresholdValue", m_actionThresholdValue);

  }

  if(m_actionThresholdTypeHasBeenSet)
  {
   payload.WithString("ActionThresholdType", ThresholdTypeMapper::GetNameForThresholdType(m_actionThresholdType));
  }

  return payload;
}

} // namespace Model
} // namespace Budgets
} // namespace Aws
