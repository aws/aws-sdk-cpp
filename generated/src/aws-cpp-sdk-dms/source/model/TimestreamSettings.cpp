/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/TimestreamSettings.h>
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

TimestreamSettings::TimestreamSettings() : 
    m_databaseNameHasBeenSet(false),
    m_memoryDuration(0),
    m_memoryDurationHasBeenSet(false),
    m_magneticDuration(0),
    m_magneticDurationHasBeenSet(false),
    m_cdcInsertsAndUpdates(false),
    m_cdcInsertsAndUpdatesHasBeenSet(false),
    m_enableMagneticStoreWrites(false),
    m_enableMagneticStoreWritesHasBeenSet(false)
{
}

TimestreamSettings::TimestreamSettings(JsonView jsonValue) : 
    m_databaseNameHasBeenSet(false),
    m_memoryDuration(0),
    m_memoryDurationHasBeenSet(false),
    m_magneticDuration(0),
    m_magneticDurationHasBeenSet(false),
    m_cdcInsertsAndUpdates(false),
    m_cdcInsertsAndUpdatesHasBeenSet(false),
    m_enableMagneticStoreWrites(false),
    m_enableMagneticStoreWritesHasBeenSet(false)
{
  *this = jsonValue;
}

TimestreamSettings& TimestreamSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemoryDuration"))
  {
    m_memoryDuration = jsonValue.GetInteger("MemoryDuration");

    m_memoryDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MagneticDuration"))
  {
    m_magneticDuration = jsonValue.GetInteger("MagneticDuration");

    m_magneticDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CdcInsertsAndUpdates"))
  {
    m_cdcInsertsAndUpdates = jsonValue.GetBool("CdcInsertsAndUpdates");

    m_cdcInsertsAndUpdatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableMagneticStoreWrites"))
  {
    m_enableMagneticStoreWrites = jsonValue.GetBool("EnableMagneticStoreWrites");

    m_enableMagneticStoreWritesHasBeenSet = true;
  }

  return *this;
}

JsonValue TimestreamSettings::Jsonize() const
{
  JsonValue payload;

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_memoryDurationHasBeenSet)
  {
   payload.WithInteger("MemoryDuration", m_memoryDuration);

  }

  if(m_magneticDurationHasBeenSet)
  {
   payload.WithInteger("MagneticDuration", m_magneticDuration);

  }

  if(m_cdcInsertsAndUpdatesHasBeenSet)
  {
   payload.WithBool("CdcInsertsAndUpdates", m_cdcInsertsAndUpdates);

  }

  if(m_enableMagneticStoreWritesHasBeenSet)
  {
   payload.WithBool("EnableMagneticStoreWrites", m_enableMagneticStoreWrites);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
