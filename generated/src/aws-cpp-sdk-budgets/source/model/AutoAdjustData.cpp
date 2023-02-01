/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/AutoAdjustData.h>
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

AutoAdjustData::AutoAdjustData() : 
    m_autoAdjustType(AutoAdjustType::NOT_SET),
    m_autoAdjustTypeHasBeenSet(false),
    m_historicalOptionsHasBeenSet(false),
    m_lastAutoAdjustTimeHasBeenSet(false)
{
}

AutoAdjustData::AutoAdjustData(JsonView jsonValue) : 
    m_autoAdjustType(AutoAdjustType::NOT_SET),
    m_autoAdjustTypeHasBeenSet(false),
    m_historicalOptionsHasBeenSet(false),
    m_lastAutoAdjustTimeHasBeenSet(false)
{
  *this = jsonValue;
}

AutoAdjustData& AutoAdjustData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutoAdjustType"))
  {
    m_autoAdjustType = AutoAdjustTypeMapper::GetAutoAdjustTypeForName(jsonValue.GetString("AutoAdjustType"));

    m_autoAdjustTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HistoricalOptions"))
  {
    m_historicalOptions = jsonValue.GetObject("HistoricalOptions");

    m_historicalOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastAutoAdjustTime"))
  {
    m_lastAutoAdjustTime = jsonValue.GetDouble("LastAutoAdjustTime");

    m_lastAutoAdjustTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoAdjustData::Jsonize() const
{
  JsonValue payload;

  if(m_autoAdjustTypeHasBeenSet)
  {
   payload.WithString("AutoAdjustType", AutoAdjustTypeMapper::GetNameForAutoAdjustType(m_autoAdjustType));
  }

  if(m_historicalOptionsHasBeenSet)
  {
   payload.WithObject("HistoricalOptions", m_historicalOptions.Jsonize());

  }

  if(m_lastAutoAdjustTimeHasBeenSet)
  {
   payload.WithDouble("LastAutoAdjustTime", m_lastAutoAdjustTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Budgets
} // namespace Aws
