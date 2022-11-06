/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/AggregatedVariablesImpactExplanation.h>
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

AggregatedVariablesImpactExplanation::AggregatedVariablesImpactExplanation() : 
    m_eventVariableNamesHasBeenSet(false),
    m_relativeImpactHasBeenSet(false),
    m_logOddsImpact(0.0),
    m_logOddsImpactHasBeenSet(false)
{
}

AggregatedVariablesImpactExplanation::AggregatedVariablesImpactExplanation(JsonView jsonValue) : 
    m_eventVariableNamesHasBeenSet(false),
    m_relativeImpactHasBeenSet(false),
    m_logOddsImpact(0.0),
    m_logOddsImpactHasBeenSet(false)
{
  *this = jsonValue;
}

AggregatedVariablesImpactExplanation& AggregatedVariablesImpactExplanation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventVariableNames"))
  {
    Aws::Utils::Array<JsonView> eventVariableNamesJsonList = jsonValue.GetArray("eventVariableNames");
    for(unsigned eventVariableNamesIndex = 0; eventVariableNamesIndex < eventVariableNamesJsonList.GetLength(); ++eventVariableNamesIndex)
    {
      m_eventVariableNames.push_back(eventVariableNamesJsonList[eventVariableNamesIndex].AsString());
    }
    m_eventVariableNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relativeImpact"))
  {
    m_relativeImpact = jsonValue.GetString("relativeImpact");

    m_relativeImpactHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logOddsImpact"))
  {
    m_logOddsImpact = jsonValue.GetDouble("logOddsImpact");

    m_logOddsImpactHasBeenSet = true;
  }

  return *this;
}

JsonValue AggregatedVariablesImpactExplanation::Jsonize() const
{
  JsonValue payload;

  if(m_eventVariableNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventVariableNamesJsonList(m_eventVariableNames.size());
   for(unsigned eventVariableNamesIndex = 0; eventVariableNamesIndex < eventVariableNamesJsonList.GetLength(); ++eventVariableNamesIndex)
   {
     eventVariableNamesJsonList[eventVariableNamesIndex].AsString(m_eventVariableNames[eventVariableNamesIndex]);
   }
   payload.WithArray("eventVariableNames", std::move(eventVariableNamesJsonList));

  }

  if(m_relativeImpactHasBeenSet)
  {
   payload.WithString("relativeImpact", m_relativeImpact);

  }

  if(m_logOddsImpactHasBeenSet)
  {
   payload.WithDouble("logOddsImpact", m_logOddsImpact);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
