/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/forecast/model/Metrics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

Metrics::Metrics() : 
    m_rMSE(0.0),
    m_rMSEHasBeenSet(false),
    m_weightedQuantileLossesHasBeenSet(false)
{
}

Metrics::Metrics(JsonView jsonValue) : 
    m_rMSE(0.0),
    m_rMSEHasBeenSet(false),
    m_weightedQuantileLossesHasBeenSet(false)
{
  *this = jsonValue;
}

Metrics& Metrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RMSE"))
  {
    m_rMSE = jsonValue.GetDouble("RMSE");

    m_rMSEHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WeightedQuantileLosses"))
  {
    Array<JsonView> weightedQuantileLossesJsonList = jsonValue.GetArray("WeightedQuantileLosses");
    for(unsigned weightedQuantileLossesIndex = 0; weightedQuantileLossesIndex < weightedQuantileLossesJsonList.GetLength(); ++weightedQuantileLossesIndex)
    {
      m_weightedQuantileLosses.push_back(weightedQuantileLossesJsonList[weightedQuantileLossesIndex].AsObject());
    }
    m_weightedQuantileLossesHasBeenSet = true;
  }

  return *this;
}

JsonValue Metrics::Jsonize() const
{
  JsonValue payload;

  if(m_rMSEHasBeenSet)
  {
   payload.WithDouble("RMSE", m_rMSE);

  }

  if(m_weightedQuantileLossesHasBeenSet)
  {
   Array<JsonValue> weightedQuantileLossesJsonList(m_weightedQuantileLosses.size());
   for(unsigned weightedQuantileLossesIndex = 0; weightedQuantileLossesIndex < weightedQuantileLossesJsonList.GetLength(); ++weightedQuantileLossesIndex)
   {
     weightedQuantileLossesJsonList[weightedQuantileLossesIndex].AsObject(m_weightedQuantileLosses[weightedQuantileLossesIndex].Jsonize());
   }
   payload.WithArray("WeightedQuantileLosses", std::move(weightedQuantileLossesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
