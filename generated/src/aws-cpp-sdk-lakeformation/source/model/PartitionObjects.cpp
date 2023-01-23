/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/PartitionObjects.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

PartitionObjects::PartitionObjects() : 
    m_partitionValuesHasBeenSet(false),
    m_objectsHasBeenSet(false)
{
}

PartitionObjects::PartitionObjects(JsonView jsonValue) : 
    m_partitionValuesHasBeenSet(false),
    m_objectsHasBeenSet(false)
{
  *this = jsonValue;
}

PartitionObjects& PartitionObjects::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PartitionValues"))
  {
    Aws::Utils::Array<JsonView> partitionValuesJsonList = jsonValue.GetArray("PartitionValues");
    for(unsigned partitionValuesIndex = 0; partitionValuesIndex < partitionValuesJsonList.GetLength(); ++partitionValuesIndex)
    {
      m_partitionValues.push_back(partitionValuesJsonList[partitionValuesIndex].AsString());
    }
    m_partitionValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Objects"))
  {
    Aws::Utils::Array<JsonView> objectsJsonList = jsonValue.GetArray("Objects");
    for(unsigned objectsIndex = 0; objectsIndex < objectsJsonList.GetLength(); ++objectsIndex)
    {
      m_objects.push_back(objectsJsonList[objectsIndex].AsObject());
    }
    m_objectsHasBeenSet = true;
  }

  return *this;
}

JsonValue PartitionObjects::Jsonize() const
{
  JsonValue payload;

  if(m_partitionValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partitionValuesJsonList(m_partitionValues.size());
   for(unsigned partitionValuesIndex = 0; partitionValuesIndex < partitionValuesJsonList.GetLength(); ++partitionValuesIndex)
   {
     partitionValuesJsonList[partitionValuesIndex].AsString(m_partitionValues[partitionValuesIndex]);
   }
   payload.WithArray("PartitionValues", std::move(partitionValuesJsonList));

  }

  if(m_objectsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> objectsJsonList(m_objects.size());
   for(unsigned objectsIndex = 0; objectsIndex < objectsJsonList.GetLength(); ++objectsIndex)
   {
     objectsJsonList[objectsIndex].AsObject(m_objects[objectsIndex].Jsonize());
   }
   payload.WithArray("Objects", std::move(objectsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
