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
    Array<JsonView> predictorExecutionsJsonList = jsonValue.GetArray("PredictorExecutions");
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
   Array<JsonValue> predictorExecutionsJsonList(m_predictorExecutions.size());
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
