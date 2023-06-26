/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/PredictorExecutionDetails.h>
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

PredictorExecutionDetails::PredictorExecutionDetails() : 
    m_predictorExecutionsHasBeenSet(false)
{
}

PredictorExecutionDetails::PredictorExecutionDetails(JsonView jsonValue) : 
    m_predictorExecutionsHasBeenSet(false)
{
  *this = jsonValue;
}

PredictorExecutionDetails& PredictorExecutionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PredictorExecutions"))
  {
    Aws::Utils::Array<JsonView> predictorExecutionsJsonList = jsonValue.GetArray("PredictorExecutions");
    for(unsigned predictorExecutionsIndex = 0; predictorExecutionsIndex < predictorExecutionsJsonList.GetLength(); ++predictorExecutionsIndex)
    {
      m_predictorExecutions.push_back(predictorExecutionsJsonList[predictorExecutionsIndex].AsObject());
    }
    m_predictorExecutionsHasBeenSet = true;
  }

  return *this;
}

JsonValue PredictorExecutionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_predictorExecutionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> predictorExecutionsJsonList(m_predictorExecutions.size());
   for(unsigned predictorExecutionsIndex = 0; predictorExecutionsIndex < predictorExecutionsJsonList.GetLength(); ++predictorExecutionsIndex)
   {
     predictorExecutionsJsonList[predictorExecutionsIndex].AsObject(m_predictorExecutions[predictorExecutionsIndex].Jsonize());
   }
   payload.WithArray("PredictorExecutions", std::move(predictorExecutionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
