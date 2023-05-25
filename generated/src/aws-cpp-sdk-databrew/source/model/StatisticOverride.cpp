/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/StatisticOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

StatisticOverride::StatisticOverride() : 
    m_statisticHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

StatisticOverride::StatisticOverride(JsonView jsonValue) : 
    m_statisticHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
  *this = jsonValue;
}

StatisticOverride& StatisticOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Statistic"))
  {
    m_statistic = jsonValue.GetString("Statistic");

    m_statisticHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsString();
    }
    m_parametersHasBeenSet = true;
  }

  return *this;
}

JsonValue StatisticOverride::Jsonize() const
{
  JsonValue payload;

  if(m_statisticHasBeenSet)
  {
   payload.WithString("Statistic", m_statistic);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
