/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/DataPartitionStorageOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

DataPartitionStorageOptions::DataPartitionStorageOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

DataPartitionStorageOptions& DataPartitionStorageOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maximumSize"))
  {
    m_maximumSize = jsonValue.GetObject("maximumSize");
    m_maximumSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageLocation"))
  {
    m_storageLocation = jsonValue.GetString("storageLocation");
    m_storageLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minimumTimeToLive"))
  {
    m_minimumTimeToLive = jsonValue.GetObject("minimumTimeToLive");
    m_minimumTimeToLiveHasBeenSet = true;
  }
  return *this;
}

JsonValue DataPartitionStorageOptions::Jsonize() const
{
  JsonValue payload;

  if(m_maximumSizeHasBeenSet)
  {
   payload.WithObject("maximumSize", m_maximumSize.Jsonize());

  }

  if(m_storageLocationHasBeenSet)
  {
   payload.WithString("storageLocation", m_storageLocation);

  }

  if(m_minimumTimeToLiveHasBeenSet)
  {
   payload.WithObject("minimumTimeToLive", m_minimumTimeToLive.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
