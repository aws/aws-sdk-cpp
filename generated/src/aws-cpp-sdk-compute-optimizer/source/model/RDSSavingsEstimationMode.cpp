/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RDSSavingsEstimationMode.h>
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

RDSSavingsEstimationMode::RDSSavingsEstimationMode(JsonView jsonValue)
{
  *this = jsonValue;
}

RDSSavingsEstimationMode& RDSSavingsEstimationMode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = RDSSavingsEstimationModeSourceMapper::GetRDSSavingsEstimationModeSourceForName(jsonValue.GetString("source"));
    m_sourceHasBeenSet = true;
  }
  return *this;
}

JsonValue RDSSavingsEstimationMode::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", RDSSavingsEstimationModeSourceMapper::GetNameForRDSSavingsEstimationModeSource(m_source));
  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
