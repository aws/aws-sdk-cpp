/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> fromDiskInfoJsonList = jsonValue.GetArray("fromDiskInfo");
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
   Aws::Utils::Array<JsonValue> fromDiskInfoJsonList(m_fromDiskInfo.size());
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
