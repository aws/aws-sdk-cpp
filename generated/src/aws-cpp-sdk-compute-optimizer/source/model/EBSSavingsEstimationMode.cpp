/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/EBSSavingsEstimationMode.h>
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

EBSSavingsEstimationMode::EBSSavingsEstimationMode() : 
    m_source(EBSSavingsEstimationModeSource::NOT_SET),
    m_sourceHasBeenSet(false)
{
}

EBSSavingsEstimationMode::EBSSavingsEstimationMode(JsonView jsonValue) : 
    m_source(EBSSavingsEstimationModeSource::NOT_SET),
    m_sourceHasBeenSet(false)
{
  *this = jsonValue;
}

EBSSavingsEstimationMode& EBSSavingsEstimationMode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = EBSSavingsEstimationModeSourceMapper::GetEBSSavingsEstimationModeSourceForName(jsonValue.GetString("source"));

    m_sourceHasBeenSet = true;
  }

  return *this;
}

JsonValue EBSSavingsEstimationMode::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", EBSSavingsEstimationModeSourceMapper::GetNameForEBSSavingsEstimationModeSource(m_source));
  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
