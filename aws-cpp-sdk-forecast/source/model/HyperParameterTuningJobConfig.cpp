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

#include <aws/forecast/model/HyperParameterTuningJobConfig.h>
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

HyperParameterTuningJobConfig::HyperParameterTuningJobConfig() : 
    m_parameterRangesHasBeenSet(false)
{
}

HyperParameterTuningJobConfig::HyperParameterTuningJobConfig(JsonView jsonValue) : 
    m_parameterRangesHasBeenSet(false)
{
  *this = jsonValue;
}

HyperParameterTuningJobConfig& HyperParameterTuningJobConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParameterRanges"))
  {
    m_parameterRanges = jsonValue.GetObject("ParameterRanges");

    m_parameterRangesHasBeenSet = true;
  }

  return *this;
}

JsonValue HyperParameterTuningJobConfig::Jsonize() const
{
  JsonValue payload;

  if(m_parameterRangesHasBeenSet)
  {
   payload.WithObject("ParameterRanges", m_parameterRanges.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
