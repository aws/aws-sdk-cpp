/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SessionDataSortBy.h>
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

SessionDataSortBy::SessionDataSortBy() : 
    m_name(AnalyticsSessionSortByName::NOT_SET),
    m_nameHasBeenSet(false),
    m_order(AnalyticsSortOrder::NOT_SET),
    m_orderHasBeenSet(false)
{
}

SessionDataSortBy::SessionDataSortBy(JsonView jsonValue) : 
    m_name(AnalyticsSessionSortByName::NOT_SET),
    m_nameHasBeenSet(false),
    m_order(AnalyticsSortOrder::NOT_SET),
    m_orderHasBeenSet(false)
{
  *this = jsonValue;
}

SessionDataSortBy& SessionDataSortBy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = AnalyticsSessionSortByNameMapper::GetAnalyticsSessionSortByNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("order"))
  {
    m_order = AnalyticsSortOrderMapper::GetAnalyticsSortOrderForName(jsonValue.GetString("order"));

    m_orderHasBeenSet = true;
  }

  return *this;
}

JsonValue SessionDataSortBy::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", AnalyticsSessionSortByNameMapper::GetNameForAnalyticsSessionSortByName(m_name));
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
