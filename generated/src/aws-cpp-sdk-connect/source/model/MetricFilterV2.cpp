/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MetricFilterV2.h>
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

MetricFilterV2::MetricFilterV2() : 
    m_metricFilterKeyHasBeenSet(false),
    m_metricFilterValuesHasBeenSet(false),
    m_negate(false),
    m_negateHasBeenSet(false)
{
}

MetricFilterV2::MetricFilterV2(JsonView jsonValue) : 
    m_metricFilterKeyHasBeenSet(false),
    m_metricFilterValuesHasBeenSet(false),
    m_negate(false),
    m_negateHasBeenSet(false)
{
  *this = jsonValue;
}

MetricFilterV2& MetricFilterV2::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricFilterKey"))
  {
    m_metricFilterKey = jsonValue.GetString("MetricFilterKey");

    m_metricFilterKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricFilterValues"))
  {
    Aws::Utils::Array<JsonView> metricFilterValuesJsonList = jsonValue.GetArray("MetricFilterValues");
    for(unsigned metricFilterValuesIndex = 0; metricFilterValuesIndex < metricFilterValuesJsonList.GetLength(); ++metricFilterValuesIndex)
    {
      m_metricFilterValues.push_back(metricFilterValuesJsonList[metricFilterValuesIndex].AsString());
    }
    m_metricFilterValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Negate"))
  {
    m_negate = jsonValue.GetBool("Negate");

    m_negateHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricFilterV2::Jsonize() const
{
  JsonValue payload;

  if(m_metricFilterKeyHasBeenSet)
  {
   payload.WithString("MetricFilterKey", m_metricFilterKey);

  }

  if(m_metricFilterValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricFilterValuesJsonList(m_metricFilterValues.size());
   for(unsigned metricFilterValuesIndex = 0; metricFilterValuesIndex < metricFilterValuesJsonList.GetLength(); ++metricFilterValuesIndex)
   {
     metricFilterValuesJsonList[metricFilterValuesIndex].AsString(m_metricFilterValues[metricFilterValuesIndex]);
   }
   payload.WithArray("MetricFilterValues", std::move(metricFilterValuesJsonList));

  }

  if(m_negateHasBeenSet)
  {
   payload.WithBool("Negate", m_negate);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
