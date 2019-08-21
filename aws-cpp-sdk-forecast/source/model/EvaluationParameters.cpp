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

#include <aws/forecast/model/EvaluationParameters.h>
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

EvaluationParameters::EvaluationParameters() : 
    m_numberOfBacktestWindows(0),
    m_numberOfBacktestWindowsHasBeenSet(false),
    m_backTestWindowOffset(0),
    m_backTestWindowOffsetHasBeenSet(false)
{
}

EvaluationParameters::EvaluationParameters(JsonView jsonValue) : 
    m_numberOfBacktestWindows(0),
    m_numberOfBacktestWindowsHasBeenSet(false),
    m_backTestWindowOffset(0),
    m_backTestWindowOffsetHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationParameters& EvaluationParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NumberOfBacktestWindows"))
  {
    m_numberOfBacktestWindows = jsonValue.GetInteger("NumberOfBacktestWindows");

    m_numberOfBacktestWindowsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackTestWindowOffset"))
  {
    m_backTestWindowOffset = jsonValue.GetInteger("BackTestWindowOffset");

    m_backTestWindowOffsetHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationParameters::Jsonize() const
{
  JsonValue payload;

  if(m_numberOfBacktestWindowsHasBeenSet)
  {
   payload.WithInteger("NumberOfBacktestWindows", m_numberOfBacktestWindows);

  }

  if(m_backTestWindowOffsetHasBeenSet)
  {
   payload.WithInteger("BackTestWindowOffset", m_backTestWindowOffset);

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
