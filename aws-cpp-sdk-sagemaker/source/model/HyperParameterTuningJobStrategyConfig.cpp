/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HyperParameterTuningJobStrategyConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

HyperParameterTuningJobStrategyConfig::HyperParameterTuningJobStrategyConfig() : 
    m_hyperbandStrategyConfigHasBeenSet(false)
{
}

HyperParameterTuningJobStrategyConfig::HyperParameterTuningJobStrategyConfig(JsonView jsonValue) : 
    m_hyperbandStrategyConfigHasBeenSet(false)
{
  *this = jsonValue;
}

HyperParameterTuningJobStrategyConfig& HyperParameterTuningJobStrategyConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HyperbandStrategyConfig"))
  {
    m_hyperbandStrategyConfig = jsonValue.GetObject("HyperbandStrategyConfig");

    m_hyperbandStrategyConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue HyperParameterTuningJobStrategyConfig::Jsonize() const
{
  JsonValue payload;

  if(m_hyperbandStrategyConfigHasBeenSet)
  {
   payload.WithObject("HyperbandStrategyConfig", m_hyperbandStrategyConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
