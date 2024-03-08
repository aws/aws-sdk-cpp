/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/InstanceSavingsEstimationMode.h>
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

InstanceSavingsEstimationMode::InstanceSavingsEstimationMode() : 
    m_source(InstanceSavingsEstimationModeSource::NOT_SET),
    m_sourceHasBeenSet(false)
{
}

InstanceSavingsEstimationMode::InstanceSavingsEstimationMode(JsonView jsonValue) : 
    m_source(InstanceSavingsEstimationModeSource::NOT_SET),
    m_sourceHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceSavingsEstimationMode& InstanceSavingsEstimationMode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = InstanceSavingsEstimationModeSourceMapper::GetInstanceSavingsEstimationModeSourceForName(jsonValue.GetString("source"));

    m_sourceHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceSavingsEstimationMode::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", InstanceSavingsEstimationModeSourceMapper::GetNameForInstanceSavingsEstimationModeSource(m_source));
  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
