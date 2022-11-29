/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ExcludePeriodConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ExcludePeriodConfiguration::ExcludePeriodConfiguration() : 
    m_amount(0),
    m_amountHasBeenSet(false),
    m_granularity(TimeGranularity::NOT_SET),
    m_granularityHasBeenSet(false),
    m_status(WidgetStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ExcludePeriodConfiguration::ExcludePeriodConfiguration(JsonView jsonValue) : 
    m_amount(0),
    m_amountHasBeenSet(false),
    m_granularity(TimeGranularity::NOT_SET),
    m_granularityHasBeenSet(false),
    m_status(WidgetStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ExcludePeriodConfiguration& ExcludePeriodConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Amount"))
  {
    m_amount = jsonValue.GetInteger("Amount");

    m_amountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Granularity"))
  {
    m_granularity = TimeGranularityMapper::GetTimeGranularityForName(jsonValue.GetString("Granularity"));

    m_granularityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = WidgetStatusMapper::GetWidgetStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ExcludePeriodConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_amountHasBeenSet)
  {
   payload.WithInteger("Amount", m_amount);

  }

  if(m_granularityHasBeenSet)
  {
   payload.WithString("Granularity", TimeGranularityMapper::GetNameForTimeGranularity(m_granularity));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", WidgetStatusMapper::GetNameForWidgetStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
