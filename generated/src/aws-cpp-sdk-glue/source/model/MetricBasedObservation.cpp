/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/MetricBasedObservation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

MetricBasedObservation::MetricBasedObservation() : 
    m_metricNameHasBeenSet(false),
    m_metricValuesHasBeenSet(false),
    m_newRulesHasBeenSet(false)
{
}

MetricBasedObservation::MetricBasedObservation(JsonView jsonValue) : 
    m_metricNameHasBeenSet(false),
    m_metricValuesHasBeenSet(false),
    m_newRulesHasBeenSet(false)
{
  *this = jsonValue;
}

MetricBasedObservation& MetricBasedObservation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricValues"))
  {
    m_metricValues = jsonValue.GetObject("MetricValues");

    m_metricValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NewRules"))
  {
    Aws::Utils::Array<JsonView> newRulesJsonList = jsonValue.GetArray("NewRules");
    for(unsigned newRulesIndex = 0; newRulesIndex < newRulesJsonList.GetLength(); ++newRulesIndex)
    {
      m_newRules.push_back(newRulesJsonList[newRulesIndex].AsString());
    }
    m_newRulesHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricBasedObservation::Jsonize() const
{
  JsonValue payload;

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_metricValuesHasBeenSet)
  {
   payload.WithObject("MetricValues", m_metricValues.Jsonize());

  }

  if(m_newRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> newRulesJsonList(m_newRules.size());
   for(unsigned newRulesIndex = 0; newRulesIndex < newRulesJsonList.GetLength(); ++newRulesIndex)
   {
     newRulesJsonList[newRulesIndex].AsString(m_newRules[newRulesIndex]);
   }
   payload.WithArray("NewRules", std::move(newRulesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
