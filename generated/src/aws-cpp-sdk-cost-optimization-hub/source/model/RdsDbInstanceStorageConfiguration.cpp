/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/RdsDbInstanceStorageConfiguration.h>
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

RdsDbInstanceStorageConfiguration::RdsDbInstanceStorageConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

RdsDbInstanceStorageConfiguration& RdsDbInstanceStorageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("storageType"))
  {
    m_storageType = jsonValue.GetString("storageType");
    m_storageTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allocatedStorageInGb"))
  {
    m_allocatedStorageInGb = jsonValue.GetDouble("allocatedStorageInGb");
    m_allocatedStorageInGbHasBeenSet = true;
  }
  if(jsonValue.ValueExists("iops"))
  {
    m_iops = jsonValue.GetDouble("iops");
    m_iopsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageThroughput"))
  {
    m_storageThroughput = jsonValue.GetDouble("storageThroughput");
    m_storageThroughputHasBeenSet = true;
  }
  return *this;
}

JsonValue RdsDbInstanceStorageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_storageTypeHasBeenSet)
  {
   payload.WithString("storageType", m_storageType);

  }

  if(m_allocatedStorageInGbHasBeenSet)
  {
   payload.WithDouble("allocatedStorageInGb", m_allocatedStorageInGb);

  }

  if(m_iopsHasBeenSet)
  {
   payload.WithDouble("iops", m_iops);

  }

  if(m_storageThroughputHasBeenSet)
  {
   payload.WithDouble("storageThroughput", m_storageThroughput);

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
