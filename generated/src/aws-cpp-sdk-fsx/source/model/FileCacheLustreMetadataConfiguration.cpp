/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/FileCacheLustreMetadataConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

FileCacheLustreMetadataConfiguration::FileCacheLustreMetadataConfiguration() : 
    m_storageCapacity(0),
    m_storageCapacityHasBeenSet(false)
{
}

FileCacheLustreMetadataConfiguration::FileCacheLustreMetadataConfiguration(JsonView jsonValue) : 
    m_storageCapacity(0),
    m_storageCapacityHasBeenSet(false)
{
  *this = jsonValue;
}

FileCacheLustreMetadataConfiguration& FileCacheLustreMetadataConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StorageCapacity"))
  {
    m_storageCapacity = jsonValue.GetInteger("StorageCapacity");

    m_storageCapacityHasBeenSet = true;
  }

  return *this;
}

JsonValue FileCacheLustreMetadataConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_storageCapacityHasBeenSet)
  {
   payload.WithInteger("StorageCapacity", m_storageCapacity);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
