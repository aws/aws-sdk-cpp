/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/lightsail/model/InstanceSnapshotInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

InstanceSnapshotInfo::InstanceSnapshotInfo() : 
    m_fromBundleIdHasBeenSet(false),
    m_fromBlueprintIdHasBeenSet(false),
    m_fromDiskInfoHasBeenSet(false)
{
}

InstanceSnapshotInfo::InstanceSnapshotInfo(JsonView jsonValue) : 
    m_fromBundleIdHasBeenSet(false),
    m_fromBlueprintIdHasBeenSet(false),
    m_fromDiskInfoHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceSnapshotInfo& InstanceSnapshotInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fromBundleId"))
  {
    m_fromBundleId = jsonValue.GetString("fromBundleId");

    m_fromBundleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fromBlueprintId"))
  {
    m_fromBlueprintId = jsonValue.GetString("fromBlueprintId");

    m_fromBlueprintIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fromDiskInfo"))
  {
    Array<JsonView> fromDiskInfoJsonList = jsonValue.GetArray("fromDiskInfo");
    for(unsigned fromDiskInfoIndex = 0; fromDiskInfoIndex < fromDiskInfoJsonList.GetLength(); ++fromDiskInfoIndex)
    {
      m_fromDiskInfo.push_back(fromDiskInfoJsonList[fromDiskInfoIndex].AsObject());
    }
    m_fromDiskInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceSnapshotInfo::Jsonize() const
{
  JsonValue payload;

  if(m_fromBundleIdHasBeenSet)
  {
   payload.WithString("fromBundleId", m_fromBundleId);

  }

  if(m_fromBlueprintIdHasBeenSet)
  {
   payload.WithString("fromBlueprintId", m_fromBlueprintId);

  }

  if(m_fromDiskInfoHasBeenSet)
  {
   Array<JsonValue> fromDiskInfoJsonList(m_fromDiskInfo.size());
   for(unsigned fromDiskInfoIndex = 0; fromDiskInfoIndex < fromDiskInfoJsonList.GetLength(); ++fromDiskInfoIndex)
   {
     fromDiskInfoJsonList[fromDiskInfoIndex].AsObject(m_fromDiskInfo[fromDiskInfoIndex].Jsonize());
   }
   payload.WithArray("fromDiskInfo", std::move(fromDiskInfoJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
