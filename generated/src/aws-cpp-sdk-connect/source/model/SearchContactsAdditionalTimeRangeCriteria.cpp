/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SearchContactsAdditionalTimeRangeCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

SearchContactsAdditionalTimeRangeCriteria::SearchContactsAdditionalTimeRangeCriteria(JsonView jsonValue)
{
  *this = jsonValue;
}

SearchContactsAdditionalTimeRangeCriteria& SearchContactsAdditionalTimeRangeCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimeRange"))
  {
    m_timeRange = jsonValue.GetObject("TimeRange");
    m_timeRangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimestampCondition"))
  {
    m_timestampCondition = jsonValue.GetObject("TimestampCondition");
    m_timestampConditionHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchContactsAdditionalTimeRangeCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_timeRangeHasBeenSet)
  {
   payload.WithObject("TimeRange", m_timeRange.Jsonize());

  }

  if(m_timestampConditionHasBeenSet)
  {
   payload.WithObject("TimestampCondition", m_timestampCondition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
