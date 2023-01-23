/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/PredictionExplanations.h>
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

PredictionExplanations::PredictionExplanations() : 
    m_variableImpactExplanationsHasBeenSet(false),
    m_aggregatedVariablesImpactExplanationsHasBeenSet(false)
{
}

PredictionExplanations::PredictionExplanations(JsonView jsonValue) : 
    m_variableImpactExplanationsHasBeenSet(false),
    m_aggregatedVariablesImpactExplanationsHasBeenSet(false)
{
  *this = jsonValue;
}

PredictionExplanations& PredictionExplanations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("variableImpactExplanations"))
  {
    Aws::Utils::Array<JsonView> variableImpactExplanationsJsonList = jsonValue.GetArray("variableImpactExplanations");
    for(unsigned variableImpactExplanationsIndex = 0; variableImpactExplanationsIndex < variableImpactExplanationsJsonList.GetLength(); ++variableImpactExplanationsIndex)
    {
      m_variableImpactExplanations.push_back(variableImpactExplanationsJsonList[variableImpactExplanationsIndex].AsObject());
    }
    m_variableImpactExplanationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("aggregatedVariablesImpactExplanations"))
  {
    Aws::Utils::Array<JsonView> aggregatedVariablesImpactExplanationsJsonList = jsonValue.GetArray("aggregatedVariablesImpactExplanations");
    for(unsigned aggregatedVariablesImpactExplanationsIndex = 0; aggregatedVariablesImpactExplanationsIndex < aggregatedVariablesImpactExplanationsJsonList.GetLength(); ++aggregatedVariablesImpactExplanationsIndex)
    {
      m_aggregatedVariablesImpactExplanations.push_back(aggregatedVariablesImpactExplanationsJsonList[aggregatedVariablesImpactExplanationsIndex].AsObject());
    }
    m_aggregatedVariablesImpactExplanationsHasBeenSet = true;
  }

  return *this;
}

JsonValue PredictionExplanations::Jsonize() const
{
  JsonValue payload;

  if(m_variableImpactExplanationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> variableImpactExplanationsJsonList(m_variableImpactExplanations.size());
   for(unsigned variableImpactExplanationsIndex = 0; variableImpactExplanationsIndex < variableImpactExplanationsJsonList.GetLength(); ++variableImpactExplanationsIndex)
   {
     variableImpactExplanationsJsonList[variableImpactExplanationsIndex].AsObject(m_variableImpactExplanations[variableImpactExplanationsIndex].Jsonize());
   }
   payload.WithArray("variableImpactExplanations", std::move(variableImpactExplanationsJsonList));

  }

  if(m_aggregatedVariablesImpactExplanationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aggregatedVariablesImpactExplanationsJsonList(m_aggregatedVariablesImpactExplanations.size());
   for(unsigned aggregatedVariablesImpactExplanationsIndex = 0; aggregatedVariablesImpactExplanationsIndex < aggregatedVariablesImpactExplanationsJsonList.GetLength(); ++aggregatedVariablesImpactExplanationsIndex)
   {
     aggregatedVariablesImpactExplanationsJsonList[aggregatedVariablesImpactExplanationsIndex].AsObject(m_aggregatedVariablesImpactExplanations[aggregatedVariablesImpactExplanationsIndex].Jsonize());
   }
   payload.WithArray("aggregatedVariablesImpactExplanations", std::move(aggregatedVariablesImpactExplanationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
