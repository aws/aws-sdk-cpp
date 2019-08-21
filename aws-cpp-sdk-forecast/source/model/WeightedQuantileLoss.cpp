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

#include <aws/forecast/model/WeightedQuantileLoss.h>
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

WeightedQuantileLoss::WeightedQuantileLoss() : 
    m_quantile(0.0),
    m_quantileHasBeenSet(false),
    m_lossValue(0.0),
    m_lossValueHasBeenSet(false)
{
}

WeightedQuantileLoss::WeightedQuantileLoss(JsonView jsonValue) : 
    m_quantile(0.0),
    m_quantileHasBeenSet(false),
    m_lossValue(0.0),
    m_lossValueHasBeenSet(false)
{
  *this = jsonValue;
}

WeightedQuantileLoss& WeightedQuantileLoss::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Quantile"))
  {
    m_quantile = jsonValue.GetDouble("Quantile");

    m_quantileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LossValue"))
  {
    m_lossValue = jsonValue.GetDouble("LossValue");

    m_lossValueHasBeenSet = true;
  }

  return *this;
}

JsonValue WeightedQuantileLoss::Jsonize() const
{
  JsonValue payload;

  if(m_quantileHasBeenSet)
  {
   payload.WithDouble("Quantile", m_quantile);

  }

  if(m_lossValueHasBeenSet)
  {
   payload.WithDouble("LossValue", m_lossValue);

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
