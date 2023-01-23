/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/Relevance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

Relevance::Relevance() : 
    m_freshness(false),
    m_freshnessHasBeenSet(false),
    m_importance(0),
    m_importanceHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_rankOrder(Order::NOT_SET),
    m_rankOrderHasBeenSet(false),
    m_valueImportanceMapHasBeenSet(false)
{
}

Relevance::Relevance(JsonView jsonValue) : 
    m_freshness(false),
    m_freshnessHasBeenSet(false),
    m_importance(0),
    m_importanceHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_rankOrder(Order::NOT_SET),
    m_rankOrderHasBeenSet(false),
    m_valueImportanceMapHasBeenSet(false)
{
  *this = jsonValue;
}

Relevance& Relevance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Freshness"))
  {
    m_freshness = jsonValue.GetBool("Freshness");

    m_freshnessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Importance"))
  {
    m_importance = jsonValue.GetInteger("Importance");

    m_importanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetString("Duration");

    m_durationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RankOrder"))
  {
    m_rankOrder = OrderMapper::GetOrderForName(jsonValue.GetString("RankOrder"));

    m_rankOrderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueImportanceMap"))
  {
    Aws::Map<Aws::String, JsonView> valueImportanceMapJsonMap = jsonValue.GetObject("ValueImportanceMap").GetAllObjects();
    for(auto& valueImportanceMapItem : valueImportanceMapJsonMap)
    {
      m_valueImportanceMap[valueImportanceMapItem.first] = valueImportanceMapItem.second.AsInteger();
    }
    m_valueImportanceMapHasBeenSet = true;
  }

  return *this;
}

JsonValue Relevance::Jsonize() const
{
  JsonValue payload;

  if(m_freshnessHasBeenSet)
  {
   payload.WithBool("Freshness", m_freshness);

  }

  if(m_importanceHasBeenSet)
  {
   payload.WithInteger("Importance", m_importance);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithString("Duration", m_duration);

  }

  if(m_rankOrderHasBeenSet)
  {
   payload.WithString("RankOrder", OrderMapper::GetNameForOrder(m_rankOrder));
  }

  if(m_valueImportanceMapHasBeenSet)
  {
   JsonValue valueImportanceMapJsonMap;
   for(auto& valueImportanceMapItem : m_valueImportanceMap)
   {
     valueImportanceMapJsonMap.WithInteger(valueImportanceMapItem.first, valueImportanceMapItem.second);
   }
   payload.WithObject("ValueImportanceMap", std::move(valueImportanceMapJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
