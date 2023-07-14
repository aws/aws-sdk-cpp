/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/UtteranceAggregationDuration.h>
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

UtteranceAggregationDuration::UtteranceAggregationDuration() : 
    m_relativeAggregationDurationHasBeenSet(false)
{
}

UtteranceAggregationDuration::UtteranceAggregationDuration(JsonView jsonValue) : 
    m_relativeAggregationDurationHasBeenSet(false)
{
  *this = jsonValue;
}

UtteranceAggregationDuration& UtteranceAggregationDuration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("relativeAggregationDuration"))
  {
    m_relativeAggregationDuration = jsonValue.GetObject("relativeAggregationDuration");

    m_relativeAggregationDurationHasBeenSet = true;
  }

  return *this;
}

JsonValue UtteranceAggregationDuration::Jsonize() const
{
  JsonValue payload;

  if(m_relativeAggregationDurationHasBeenSet)
  {
   payload.WithObject("relativeAggregationDuration", m_relativeAggregationDuration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
