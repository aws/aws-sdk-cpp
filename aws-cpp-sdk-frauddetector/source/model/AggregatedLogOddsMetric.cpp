/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/AggregatedLogOddsMetric.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

AggregatedLogOddsMetric::AggregatedLogOddsMetric() : 
    m_variableNamesHasBeenSet(false),
    m_aggregatedVariablesImportance(0.0),
    m_aggregatedVariablesImportanceHasBeenSet(false)
{
}

AggregatedLogOddsMetric::AggregatedLogOddsMetric(JsonView jsonValue) : 
    m_variableNamesHasBeenSet(false),
    m_aggregatedVariablesImportance(0.0),
    m_aggregatedVariablesImportanceHasBeenSet(false)
{
  *this = jsonValue;
}

AggregatedLogOddsMetric& AggregatedLogOddsMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("variableNames"))
  {
    Aws::Utils::Array<JsonView> variableNamesJsonList = jsonValue.GetArray("variableNames");
    for(unsigned variableNamesIndex = 0; variableNamesIndex < variableNamesJsonList.GetLength(); ++variableNamesIndex)
    {
      m_variableNames.push_back(variableNamesJsonList[variableNamesIndex].AsString());
    }
    m_variableNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("aggregatedVariablesImportance"))
  {
    m_aggregatedVariablesImportance = jsonValue.GetDouble("aggregatedVariablesImportance");

    m_aggregatedVariablesImportanceHasBeenSet = true;
  }

  return *this;
}

JsonValue AggregatedLogOddsMetric::Jsonize() const
{
  JsonValue payload;

  if(m_variableNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> variableNamesJsonList(m_variableNames.size());
   for(unsigned variableNamesIndex = 0; variableNamesIndex < variableNamesJsonList.GetLength(); ++variableNamesIndex)
   {
     variableNamesJsonList[variableNamesIndex].AsString(m_variableNames[variableNamesIndex]);
   }
   payload.WithArray("variableNames", std::move(variableNamesJsonList));

  }

  if(m_aggregatedVariablesImportanceHasBeenSet)
  {
   payload.WithDouble("aggregatedVariablesImportance", m_aggregatedVariablesImportance);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
