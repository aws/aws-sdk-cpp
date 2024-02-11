/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/BlockStoragePerformanceConfiguration.h>
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

BlockStoragePerformanceConfiguration::BlockStoragePerformanceConfiguration() : 
    m_iops(0.0),
    m_iopsHasBeenSet(false),
    m_throughput(0.0),
    m_throughputHasBeenSet(false)
{
}

BlockStoragePerformanceConfiguration::BlockStoragePerformanceConfiguration(JsonView jsonValue) : 
    m_iops(0.0),
    m_iopsHasBeenSet(false),
    m_throughput(0.0),
    m_throughputHasBeenSet(false)
{
  *this = jsonValue;
}

BlockStoragePerformanceConfiguration& BlockStoragePerformanceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("iops"))
  {
    m_iops = jsonValue.GetDouble("iops");

    m_iopsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("throughput"))
  {
    m_throughput = jsonValue.GetDouble("throughput");

    m_throughputHasBeenSet = true;
  }

  return *this;
}

JsonValue BlockStoragePerformanceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_iopsHasBeenSet)
  {
   payload.WithDouble("iops", m_iops);

  }

  if(m_throughputHasBeenSet)
  {
   payload.WithDouble("throughput", m_throughput);

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
