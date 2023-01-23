/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/DatastorePartitions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

DatastorePartitions::DatastorePartitions() : 
    m_partitionsHasBeenSet(false)
{
}

DatastorePartitions::DatastorePartitions(JsonView jsonValue) : 
    m_partitionsHasBeenSet(false)
{
  *this = jsonValue;
}

DatastorePartitions& DatastorePartitions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("partitions"))
  {
    Aws::Utils::Array<JsonView> partitionsJsonList = jsonValue.GetArray("partitions");
    for(unsigned partitionsIndex = 0; partitionsIndex < partitionsJsonList.GetLength(); ++partitionsIndex)
    {
      m_partitions.push_back(partitionsJsonList[partitionsIndex].AsObject());
    }
    m_partitionsHasBeenSet = true;
  }

  return *this;
}

JsonValue DatastorePartitions::Jsonize() const
{
  JsonValue payload;

  if(m_partitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partitionsJsonList(m_partitions.size());
   for(unsigned partitionsIndex = 0; partitionsIndex < partitionsJsonList.GetLength(); ++partitionsIndex)
   {
     partitionsJsonList[partitionsIndex].AsObject(m_partitions[partitionsIndex].Jsonize());
   }
   payload.WithArray("partitions", std::move(partitionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
