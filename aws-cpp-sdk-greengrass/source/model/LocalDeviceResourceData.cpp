/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/LocalDeviceResourceData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

LocalDeviceResourceData::LocalDeviceResourceData() : 
    m_groupOwnerSettingHasBeenSet(false),
    m_sourcePathHasBeenSet(false)
{
}

LocalDeviceResourceData::LocalDeviceResourceData(JsonView jsonValue) : 
    m_groupOwnerSettingHasBeenSet(false),
    m_sourcePathHasBeenSet(false)
{
  *this = jsonValue;
}

LocalDeviceResourceData& LocalDeviceResourceData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupOwnerSetting"))
  {
    m_groupOwnerSetting = jsonValue.GetObject("GroupOwnerSetting");

    m_groupOwnerSettingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourcePath"))
  {
    m_sourcePath = jsonValue.GetString("SourcePath");

    m_sourcePathHasBeenSet = true;
  }

  return *this;
}

JsonValue LocalDeviceResourceData::Jsonize() const
{
  JsonValue payload;

  if(m_groupOwnerSettingHasBeenSet)
  {
   payload.WithObject("GroupOwnerSetting", m_groupOwnerSetting.Jsonize());

  }

  if(m_sourcePathHasBeenSet)
  {
   payload.WithString("SourcePath", m_sourcePath);

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
