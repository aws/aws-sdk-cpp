/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/SolutionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

SolutionConfig::SolutionConfig() : 
    m_eventValueThresholdHasBeenSet(false),
    m_hpoConfigHasBeenSet(false),
    m_algorithmHyperParametersHasBeenSet(false),
    m_featureTransformationParametersHasBeenSet(false),
    m_autoMLConfigHasBeenSet(false)
{
}

SolutionConfig::SolutionConfig(JsonView jsonValue) : 
    m_eventValueThresholdHasBeenSet(false),
    m_hpoConfigHasBeenSet(false),
    m_algorithmHyperParametersHasBeenSet(false),
    m_featureTransformationParametersHasBeenSet(false),
    m_autoMLConfigHasBeenSet(false)
{
  *this = jsonValue;
}

SolutionConfig& SolutionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventValueThreshold"))
  {
    m_eventValueThreshold = jsonValue.GetString("eventValueThreshold");

    m_eventValueThresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hpoConfig"))
  {
    m_hpoConfig = jsonValue.GetObject("hpoConfig");

    m_hpoConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("algorithmHyperParameters"))
  {
    Aws::Map<Aws::String, JsonView> algorithmHyperParametersJsonMap = jsonValue.GetObject("algorithmHyperParameters").GetAllObjects();
    for(auto& algorithmHyperParametersItem : algorithmHyperParametersJsonMap)
    {
      m_algorithmHyperParameters[algorithmHyperParametersItem.first] = algorithmHyperParametersItem.second.AsString();
    }
    m_algorithmHyperParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("featureTransformationParameters"))
  {
    Aws::Map<Aws::String, JsonView> featureTransformationParametersJsonMap = jsonValue.GetObject("featureTransformationParameters").GetAllObjects();
    for(auto& featureTransformationParametersItem : featureTransformationParametersJsonMap)
    {
      m_featureTransformationParameters[featureTransformationParametersItem.first] = featureTransformationParametersItem.second.AsString();
    }
    m_featureTransformationParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoMLConfig"))
  {
    m_autoMLConfig = jsonValue.GetObject("autoMLConfig");

    m_autoMLConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue SolutionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_eventValueThresholdHasBeenSet)
  {
   payload.WithString("eventValueThreshold", m_eventValueThreshold);

  }

  if(m_hpoConfigHasBeenSet)
  {
   payload.WithObject("hpoConfig", m_hpoConfig.Jsonize());

  }

  if(m_algorithmHyperParametersHasBeenSet)
  {
   JsonValue algorithmHyperParametersJsonMap;
   for(auto& algorithmHyperParametersItem : m_algorithmHyperParameters)
   {
     algorithmHyperParametersJsonMap.WithString(algorithmHyperParametersItem.first, algorithmHyperParametersItem.second);
   }
   payload.WithObject("algorithmHyperParameters", std::move(algorithmHyperParametersJsonMap));

  }

  if(m_featureTransformationParametersHasBeenSet)
  {
   JsonValue featureTransformationParametersJsonMap;
   for(auto& featureTransformationParametersItem : m_featureTransformationParameters)
   {
     featureTransformationParametersJsonMap.WithString(featureTransformationParametersItem.first, featureTransformationParametersItem.second);
   }
   payload.WithObject("featureTransformationParameters", std::move(featureTransformationParametersJsonMap));

  }

  if(m_autoMLConfigHasBeenSet)
  {
   payload.WithObject("autoMLConfig", m_autoMLConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
