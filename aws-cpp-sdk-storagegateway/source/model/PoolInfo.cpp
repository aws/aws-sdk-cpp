/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/PoolInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

PoolInfo::PoolInfo() : 
    m_poolARNHasBeenSet(false),
    m_poolNameHasBeenSet(false),
    m_storageClass(TapeStorageClass::NOT_SET),
    m_storageClassHasBeenSet(false),
    m_retentionLockType(RetentionLockType::NOT_SET),
    m_retentionLockTypeHasBeenSet(false),
    m_retentionLockTimeInDays(0),
    m_retentionLockTimeInDaysHasBeenSet(false),
    m_poolStatus(PoolStatus::NOT_SET),
    m_poolStatusHasBeenSet(false)
{
}

PoolInfo::PoolInfo(JsonView jsonValue) : 
    m_poolARNHasBeenSet(false),
    m_poolNameHasBeenSet(false),
    m_storageClass(TapeStorageClass::NOT_SET),
    m_storageClassHasBeenSet(false),
    m_retentionLockType(RetentionLockType::NOT_SET),
    m_retentionLockTypeHasBeenSet(false),
    m_retentionLockTimeInDays(0),
    m_retentionLockTimeInDaysHasBeenSet(false),
    m_poolStatus(PoolStatus::NOT_SET),
    m_poolStatusHasBeenSet(false)
{
  *this = jsonValue;
}

PoolInfo& PoolInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PoolARN"))
  {
    m_poolARN = jsonValue.GetString("PoolARN");

    m_poolARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PoolName"))
  {
    m_poolName = jsonValue.GetString("PoolName");

    m_poolNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageClass"))
  {
    m_storageClass = TapeStorageClassMapper::GetTapeStorageClassForName(jsonValue.GetString("StorageClass"));

    m_storageClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetentionLockType"))
  {
    m_retentionLockType = RetentionLockTypeMapper::GetRetentionLockTypeForName(jsonValue.GetString("RetentionLockType"));

    m_retentionLockTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetentionLockTimeInDays"))
  {
    m_retentionLockTimeInDays = jsonValue.GetInteger("RetentionLockTimeInDays");

    m_retentionLockTimeInDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PoolStatus"))
  {
    m_poolStatus = PoolStatusMapper::GetPoolStatusForName(jsonValue.GetString("PoolStatus"));

    m_poolStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue PoolInfo::Jsonize() const
{
  JsonValue payload;

  if(m_poolARNHasBeenSet)
  {
   payload.WithString("PoolARN", m_poolARN);

  }

  if(m_poolNameHasBeenSet)
  {
   payload.WithString("PoolName", m_poolName);

  }

  if(m_storageClassHasBeenSet)
  {
   payload.WithString("StorageClass", TapeStorageClassMapper::GetNameForTapeStorageClass(m_storageClass));
  }

  if(m_retentionLockTypeHasBeenSet)
  {
   payload.WithString("RetentionLockType", RetentionLockTypeMapper::GetNameForRetentionLockType(m_retentionLockType));
  }

  if(m_retentionLockTimeInDaysHasBeenSet)
  {
   payload.WithInteger("RetentionLockTimeInDays", m_retentionLockTimeInDays);

  }

  if(m_poolStatusHasBeenSet)
  {
   payload.WithString("PoolStatus", PoolStatusMapper::GetNameForPoolStatus(m_poolStatus));
  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
