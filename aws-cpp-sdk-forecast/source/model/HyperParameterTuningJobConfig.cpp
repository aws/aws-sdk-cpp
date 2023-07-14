/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
