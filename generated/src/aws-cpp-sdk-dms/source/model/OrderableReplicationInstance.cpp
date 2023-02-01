/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/OrderableReplicationInstance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

OrderableReplicationInstance::OrderableReplicationInstance() : 
    m_engineVersionHasBeenSet(false),
    m_replicationInstanceClassHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_minAllocatedStorage(0),
    m_minAllocatedStorageHasBeenSet(false),
    m_maxAllocatedStorage(0),
    m_maxAllocatedStorageHasBeenSet(false),
    m_defaultAllocatedStorage(0),
    m_defaultAllocatedStorageHasBeenSet(false),
    m_includedAllocatedStorage(0),
    m_includedAllocatedStorageHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_releaseStatus(ReleaseStatusValues::NOT_SET),
    m_releaseStatusHasBeenSet(false)
{
}

OrderableReplicationInstance::OrderableReplicationInstance(JsonView jsonValue) : 
    m_engineVersionHasBeenSet(false),
    m_replicationInstanceClassHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_minAllocatedStorage(0),
    m_minAllocatedStorageHasBeenSet(false),
    m_maxAllocatedStorage(0),
    m_maxAllocatedStorageHasBeenSet(false),
    m_defaultAllocatedStorage(0),
    m_defaultAllocatedStorageHasBeenSet(false),
    m_includedAllocatedStorage(0),
    m_includedAllocatedStorageHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_releaseStatus(ReleaseStatusValues::NOT_SET),
    m_releaseStatusHasBeenSet(false)
{
  *this = jsonValue;
}

OrderableReplicationInstance& OrderableReplicationInstance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EngineVersion"))
  {
    m_engineVersion = jsonValue.GetString("EngineVersion");

    m_engineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationInstanceClass"))
  {
    m_replicationInstanceClass = jsonValue.GetString("ReplicationInstanceClass");

    m_replicationInstanceClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageType"))
  {
    m_storageType = jsonValue.GetString("StorageType");

    m_storageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinAllocatedStorage"))
  {
    m_minAllocatedStorage = jsonValue.GetInteger("MinAllocatedStorage");

    m_minAllocatedStorageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxAllocatedStorage"))
  {
    m_maxAllocatedStorage = jsonValue.GetInteger("MaxAllocatedStorage");

    m_maxAllocatedStorageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultAllocatedStorage"))
  {
    m_defaultAllocatedStorage = jsonValue.GetInteger("DefaultAllocatedStorage");

    m_defaultAllocatedStorageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludedAllocatedStorage"))
  {
    m_includedAllocatedStorage = jsonValue.GetInteger("IncludedAllocatedStorage");

    m_includedAllocatedStorageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZones"))
  {
    Aws::Utils::Array<JsonView> availabilityZonesJsonList = jsonValue.GetArray("AvailabilityZones");
    for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
    {
      m_availabilityZones.push_back(availabilityZonesJsonList[availabilityZonesIndex].AsString());
    }
    m_availabilityZonesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReleaseStatus"))
  {
    m_releaseStatus = ReleaseStatusValuesMapper::GetReleaseStatusValuesForName(jsonValue.GetString("ReleaseStatus"));

    m_releaseStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue OrderableReplicationInstance::Jsonize() const
{
  JsonValue payload;

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_replicationInstanceClassHasBeenSet)
  {
   payload.WithString("ReplicationInstanceClass", m_replicationInstanceClass);

  }

  if(m_storageTypeHasBeenSet)
  {
   payload.WithString("StorageType", m_storageType);

  }

  if(m_minAllocatedStorageHasBeenSet)
  {
   payload.WithInteger("MinAllocatedStorage", m_minAllocatedStorage);

  }

  if(m_maxAllocatedStorageHasBeenSet)
  {
   payload.WithInteger("MaxAllocatedStorage", m_maxAllocatedStorage);

  }

  if(m_defaultAllocatedStorageHasBeenSet)
  {
   payload.WithInteger("DefaultAllocatedStorage", m_defaultAllocatedStorage);

  }

  if(m_includedAllocatedStorageHasBeenSet)
  {
   payload.WithInteger("IncludedAllocatedStorage", m_includedAllocatedStorage);

  }

  if(m_availabilityZonesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availabilityZonesJsonList(m_availabilityZones.size());
   for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
   {
     availabilityZonesJsonList[availabilityZonesIndex].AsString(m_availabilityZones[availabilityZonesIndex]);
   }
   payload.WithArray("AvailabilityZones", std::move(availabilityZonesJsonList));

  }

  if(m_releaseStatusHasBeenSet)
  {
   payload.WithString("ReleaseStatus", ReleaseStatusValuesMapper::GetNameForReleaseStatusValues(m_releaseStatus));
  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
