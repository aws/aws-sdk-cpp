/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ECSSavingsEstimationMode.h>
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

ECSSavingsEstimationMode::ECSSavingsEstimationMode() : 
    m_source(ECSSavingsEstimationModeSource::NOT_SET),
    m_sourceHasBeenSet(false)
{
}

ECSSavingsEstimationMode::ECSSavingsEstimationMode(JsonView jsonValue) : 
    m_source(ECSSavingsEstimationModeSource::NOT_SET),
    m_sourceHasBeenSet(false)
{
  *this = jsonValue;
}

ECSSavingsEstimationMode& ECSSavingsEstimationMode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = ECSSavingsEstimationModeSourceMapper::GetECSSavingsEstimationModeSourceForName(jsonValue.GetString("source"));

    m_sourceHasBeenSet = true;
  }

  return *this;
}

JsonValue ECSSavingsEstimationMode::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", ECSSavingsEstimationModeSourceMapper::GetNameForECSSavingsEstimationModeSource(m_source));
  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
