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
    m_variableImpactExplanationsHasBeenSet(false)
{
}

PredictionExplanations::PredictionExplanations(JsonView jsonValue) : 
    m_variableImpactExplanationsHasBeenSet(false)
{
  *this = jsonValue;
}

PredictionExplanations& PredictionExplanations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("variableImpactExplanations"))
  {
    Array<JsonView> variableImpactExplanationsJsonList = jsonValue.GetArray("variableImpactExplanations");
    for(unsigned variableImpactExplanationsIndex = 0; variableImpactExplanationsIndex < variableImpactExplanationsJsonList.GetLength(); ++variableImpactExplanationsIndex)
    {
      m_variableImpactExplanations.push_back(variableImpactExplanationsJsonList[variableImpactExplanationsIndex].AsObject());
    }
    m_variableImpactExplanationsHasBeenSet = true;
  }

  return *this;
}

JsonValue PredictionExplanations::Jsonize() const
{
  JsonValue payload;

  if(m_variableImpactExplanationsHasBeenSet)
  {
   Array<JsonValue> variableImpactExplanationsJsonList(m_variableImpactExplanations.size());
   for(unsigned variableImpactExplanationsIndex = 0; variableImpactExplanationsIndex < variableImpactExplanationsJsonList.GetLength(); ++variableImpactExplanationsIndex)
   {
     variableImpactExplanationsJsonList[variableImpactExplanationsIndex].AsObject(m_variableImpactExplanations[variableImpactExplanationsIndex].Jsonize());
   }
   payload.WithArray("variableImpactExplanations", std::move(variableImpactExplanationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
