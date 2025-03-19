/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/ComputeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostOptimizationHub
{
namespace Model
{

ComputeConfiguration::ComputeConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ComputeConfiguration& ComputeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vCpu"))
  {
    m_vCpu = jsonValue.GetDouble("vCpu");
    m_vCpuHasBeenSet = true;
  }
  if(jsonValue.ValueExists("memorySizeInMB"))
  {
    m_memorySizeInMB = jsonValue.GetInteger("memorySizeInMB");
    m_memorySizeInMBHasBeenSet = true;
  }
  if(jsonValue.ValueExists("architecture"))
  {
    m_architecture = jsonValue.GetString("architecture");
    m_architectureHasBeenSet = true;
  }
  if(jsonValue.ValueExists("platform"))
  {
    m_platform = jsonValue.GetString("platform");
    m_platformHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_vCpuHasBeenSet)
  {
   payload.WithDouble("vCpu", m_vCpu);

  }

  if(m_memorySizeInMBHasBeenSet)
  {
   payload.WithInteger("memorySizeInMB", m_memorySizeInMB);

  }

  if(m_architectureHasBeenSet)
  {
   payload.WithString("architecture", m_architecture);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("platform", m_platform);

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
