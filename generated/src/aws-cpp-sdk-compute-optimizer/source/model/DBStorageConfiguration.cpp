/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/DBStorageConfiguration.h>
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

DBStorageConfiguration::DBStorageConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DBStorageConfiguration& DBStorageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("storageType"))
  {
    m_storageType = jsonValue.GetString("storageType");
    m_storageTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allocatedStorage"))
  {
    m_allocatedStorage = jsonValue.GetInteger("allocatedStorage");
    m_allocatedStorageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("iops"))
  {
    m_iops = jsonValue.GetInteger("iops");
    m_iopsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxAllocatedStorage"))
  {
    m_maxAllocatedStorage = jsonValue.GetInteger("maxAllocatedStorage");
    m_maxAllocatedStorageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageThroughput"))
  {
    m_storageThroughput = jsonValue.GetInteger("storageThroughput");
    m_storageThroughputHasBeenSet = true;
  }
  return *this;
}

JsonValue DBStorageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_storageTypeHasBeenSet)
  {
   payload.WithString("storageType", m_storageType);

  }

  if(m_allocatedStorageHasBeenSet)
  {
   payload.WithInteger("allocatedStorage", m_allocatedStorage);

  }

  if(m_iopsHasBeenSet)
  {
   payload.WithInteger("iops", m_iops);

  }

  if(m_maxAllocatedStorageHasBeenSet)
  {
   payload.WithInteger("maxAllocatedStorage", m_maxAllocatedStorage);

  }

  if(m_storageThroughputHasBeenSet)
  {
   payload.WithInteger("storageThroughput", m_storageThroughput);

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
