/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/DatasourcePackageUsageInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Detective
{
namespace Model
{

DatasourcePackageUsageInfo::DatasourcePackageUsageInfo() : 
    m_volumeUsageInBytes(0),
    m_volumeUsageInBytesHasBeenSet(false),
    m_volumeUsageUpdateTimeHasBeenSet(false)
{
}

DatasourcePackageUsageInfo::DatasourcePackageUsageInfo(JsonView jsonValue) : 
    m_volumeUsageInBytes(0),
    m_volumeUsageInBytesHasBeenSet(false),
    m_volumeUsageUpdateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

DatasourcePackageUsageInfo& DatasourcePackageUsageInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VolumeUsageInBytes"))
  {
    m_volumeUsageInBytes = jsonValue.GetInt64("VolumeUsageInBytes");

    m_volumeUsageInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeUsageUpdateTime"))
  {
    m_volumeUsageUpdateTime = jsonValue.GetString("VolumeUsageUpdateTime");

    m_volumeUsageUpdateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasourcePackageUsageInfo::Jsonize() const
{
  JsonValue payload;

  if(m_volumeUsageInBytesHasBeenSet)
  {
   payload.WithInt64("VolumeUsageInBytes", m_volumeUsageInBytes);

  }

  if(m_volumeUsageUpdateTimeHasBeenSet)
  {
   payload.WithString("VolumeUsageUpdateTime", m_volumeUsageUpdateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Detective
} // namespace Aws
