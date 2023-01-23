/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/ModelScores.h>
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

ModelScores::ModelScores() : 
    m_modelVersionHasBeenSet(false),
    m_scoresHasBeenSet(false)
{
}

ModelScores::ModelScores(JsonView jsonValue) : 
    m_modelVersionHasBeenSet(false),
    m_scoresHasBeenSet(false)
{
  *this = jsonValue;
}

ModelScores& ModelScores::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modelVersion"))
  {
    m_modelVersion = jsonValue.GetObject("modelVersion");

    m_modelVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scores"))
  {
    Aws::Map<Aws::String, JsonView> scoresJsonMap = jsonValue.GetObject("scores").GetAllObjects();
    for(auto& scoresItem : scoresJsonMap)
    {
      m_scores[scoresItem.first] = scoresItem.second.AsDouble();
    }
    m_scoresHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelScores::Jsonize() const
{
  JsonValue payload;

  if(m_modelVersionHasBeenSet)
  {
   payload.WithObject("modelVersion", m_modelVersion.Jsonize());

  }

  if(m_scoresHasBeenSet)
  {
   JsonValue scoresJsonMap;
   for(auto& scoresItem : m_scores)
   {
     scoresJsonMap.WithDouble(scoresItem.first, scoresItem.second);
   }
   payload.WithObject("scores", std::move(scoresJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
