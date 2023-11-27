/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/LambdaSavingsEstimationMode.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

LambdaSavingsEstimationMode::LambdaSavingsEstimationMode() : 
    m_source(LambdaSavingsEstimationModeSource::NOT_SET),
    m_sourceHasBeenSet(false)
{
}

LambdaSavingsEstimationMode::LambdaSavingsEstimationMode(JsonView jsonValue) : 
    m_source(LambdaSavingsEstimationModeSource::NOT_SET),
    m_sourceHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaSavingsEstimationMode& LambdaSavingsEstimationMode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = LambdaSavingsEstimationModeSourceMapper::GetLambdaSavingsEstimationModeSourceForName(jsonValue.GetString("source"));

    m_sourceHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaSavingsEstimationMode::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", LambdaSavingsEstimationModeSourceMapper::GetNameForLambdaSavingsEstimationModeSource(m_source));
  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
