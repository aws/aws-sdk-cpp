/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_includedAllocatedStorageHasBeenSet(false)
{
}

OrderableReplicationInstance::OrderableReplicationInstance(const JsonValue& jsonValue) : 
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
    m_includedAllocatedStorageHasBeenSet(false)
{
  *this = jsonValue;
}

OrderableReplicationInstance& OrderableReplicationInstance::operator =(const JsonValue& jsonValue)
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

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws