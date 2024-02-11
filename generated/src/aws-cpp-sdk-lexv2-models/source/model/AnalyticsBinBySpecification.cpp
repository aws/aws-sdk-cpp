/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsBinBySpecification.h>
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

AnalyticsBinBySpecification::AnalyticsBinBySpecification() : 
    m_name(AnalyticsBinByName::NOT_SET),
    m_nameHasBeenSet(false),
    m_interval(AnalyticsInterval::NOT_SET),
    m_intervalHasBeenSet(false),
    m_order(AnalyticsSortOrder::NOT_SET),
    m_orderHasBeenSet(false)
{
}

AnalyticsBinBySpecification::AnalyticsBinBySpecification(JsonView jsonValue) : 
    m_name(AnalyticsBinByName::NOT_SET),
    m_nameHasBeenSet(false),
    m_interval(AnalyticsInterval::NOT_SET),
    m_intervalHasBeenSet(false),
    m_order(AnalyticsSortOrder::NOT_SET),
    m_orderHasBeenSet(false)
{
  *this = jsonValue;
}

AnalyticsBinBySpecification& AnalyticsBinBySpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = AnalyticsBinByNameMapper::GetAnalyticsBinByNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("interval"))
  {
    m_interval = AnalyticsIntervalMapper::GetAnalyticsIntervalForName(jsonValue.GetString("interval"));

    m_intervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("order"))
  {
    m_order = AnalyticsSortOrderMapper::GetAnalyticsSortOrderForName(jsonValue.GetString("order"));

    m_orderHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalyticsBinBySpecification::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", AnalyticsBinByNameMapper::GetNameForAnalyticsBinByName(m_name));
  }

  if(m_intervalHasBeenSet)
  {
   payload.WithString("interval", AnalyticsIntervalMapper::GetNameForAnalyticsInterval(m_interval));
  }

  if(m_orderHasBeenSet)
  {
   payload.WithString("order", AnalyticsSortOrderMapper::GetNameForAnalyticsSortOrder(m_order));
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
