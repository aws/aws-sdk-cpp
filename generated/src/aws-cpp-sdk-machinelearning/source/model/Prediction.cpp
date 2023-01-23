/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/Prediction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

Prediction::Prediction() : 
    m_predictedLabelHasBeenSet(false),
    m_predictedValue(0.0),
    m_predictedValueHasBeenSet(false),
    m_predictedScoresHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

Prediction::Prediction(JsonView jsonValue) : 
    m_predictedLabelHasBeenSet(false),
    m_predictedValue(0.0),
    m_predictedValueHasBeenSet(false),
    m_predictedScoresHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
  *this = jsonValue;
}

Prediction& Prediction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("predictedLabel"))
  {
    m_predictedLabel = jsonValue.GetString("predictedLabel");

    m_predictedLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("predictedValue"))
  {
    m_predictedValue = jsonValue.GetDouble("predictedValue");

    m_predictedValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("predictedScores"))
  {
    Aws::Map<Aws::String, JsonView> predictedScoresJsonMap = jsonValue.GetObject("predictedScores").GetAllObjects();
    for(auto& predictedScoresItem : predictedScoresJsonMap)
    {
      m_predictedScores[predictedScoresItem.first] = predictedScoresItem.second.AsDouble();
    }
    m_predictedScoresHasBeenSet = true;
  }

  if(jsonValue.ValueExists("details"))
  {
    Aws::Map<Aws::String, JsonView> detailsJsonMap = jsonValue.GetObject("details").GetAllObjects();
    for(auto& detailsItem : detailsJsonMap)
    {
      m_details[DetailsAttributesMapper::GetDetailsAttributesForName(detailsItem.first)] = detailsItem.second.AsString();
    }
    m_detailsHasBeenSet = true;
  }

  return *this;
}

JsonValue Prediction::Jsonize() const
{
  JsonValue payload;

  if(m_predictedLabelHasBeenSet)
  {
   payload.WithString("predictedLabel", m_predictedLabel);

  }

  if(m_predictedValueHasBeenSet)
  {
   payload.WithDouble("predictedValue", m_predictedValue);

  }

  if(m_predictedScoresHasBeenSet)
  {
   JsonValue predictedScoresJsonMap;
   for(auto& predictedScoresItem : m_predictedScores)
   {
     predictedScoresJsonMap.WithDouble(predictedScoresItem.first, predictedScoresItem.second);
   }
   payload.WithObject("predictedScores", std::move(predictedScoresJsonMap));

  }

  if(m_detailsHasBeenSet)
  {
   JsonValue detailsJsonMap;
   for(auto& detailsItem : m_details)
   {
     detailsJsonMap.WithString(DetailsAttributesMapper::GetNameForDetailsAttributes(detailsItem.first), detailsItem.second);
   }
   payload.WithObject("details", std::move(detailsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
