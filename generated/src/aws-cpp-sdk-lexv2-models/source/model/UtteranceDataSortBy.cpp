/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/UtteranceDataSortBy.h>
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

UtteranceDataSortBy::UtteranceDataSortBy() : 
    m_name(AnalyticsUtteranceSortByName::NOT_SET),
    m_nameHasBeenSet(false),
    m_order(AnalyticsSortOrder::NOT_SET),
    m_orderHasBeenSet(false)
{
}

UtteranceDataSortBy::UtteranceDataSortBy(JsonView jsonValue) : 
    m_name(AnalyticsUtteranceSortByName::NOT_SET),
    m_nameHasBeenSet(false),
    m_order(AnalyticsSortOrder::NOT_SET),
    m_orderHasBeenSet(false)
{
  *this = jsonValue;
}

UtteranceDataSortBy& UtteranceDataSortBy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = AnalyticsUtteranceSortByNameMapper::GetAnalyticsUtteranceSortByNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("order"))
  {
    m_order = AnalyticsSortOrderMapper::GetAnalyticsSortOrderForName(jsonValue.GetString("order"));

    m_orderHasBeenSet = true;
  }

  return *this;
}

JsonValue UtteranceDataSortBy::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", AnalyticsUtteranceSortByNameMapper::GetNameForAnalyticsUtteranceSortByName(m_name));
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
