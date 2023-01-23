/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ReplicationPendingModifiedValues.h>
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

ReplicationPendingModifiedValues::ReplicationPendingModifiedValues() : 
    m_replicationInstanceClassHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_networkTypeHasBeenSet(false)
{
}

ReplicationPendingModifiedValues::ReplicationPendingModifiedValues(JsonView jsonValue) : 
    m_replicationInstanceClassHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_networkTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationPendingModifiedValues& ReplicationPendingModifiedValues::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReplicationInstanceClass"))
  {
    m_replicationInstanceClass = jsonValue.GetString("ReplicationInstanceClass");

    m_replicationInstanceClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllocatedStorage"))
  {
    m_allocatedStorage = jsonValue.GetInteger("AllocatedStorage");

    m_allocatedStorageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MultiAZ"))
  {
    m_multiAZ = jsonValue.GetBool("MultiAZ");

    m_multiAZHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineVersion"))
  {
    m_engineVersion = jsonValue.GetString("EngineVersion");

    m_engineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkType"))
  {
    m_networkType = jsonValue.GetString("NetworkType");

    m_networkTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationPendingModifiedValues::Jsonize() const
{
  JsonValue payload;

  if(m_replicationInstanceClassHasBeenSet)
  {
   payload.WithString("ReplicationInstanceClass", m_replicationInstanceClass);

  }

  if(m_allocatedStorageHasBeenSet)
  {
   payload.WithInteger("AllocatedStorage", m_allocatedStorage);

  }

  if(m_multiAZHasBeenSet)
  {
   payload.WithBool("MultiAZ", m_multiAZ);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_networkTypeHasBeenSet)
  {
   payload.WithString("NetworkType", m_networkType);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
