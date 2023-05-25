/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/LocalVolumeResourceData.h>
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

LocalVolumeResourceData::LocalVolumeResourceData() : 
    m_destinationPathHasBeenSet(false),
    m_groupOwnerSettingHasBeenSet(false),
    m_sourcePathHasBeenSet(false)
{
}

LocalVolumeResourceData::LocalVolumeResourceData(JsonView jsonValue) : 
    m_destinationPathHasBeenSet(false),
    m_groupOwnerSettingHasBeenSet(false),
    m_sourcePathHasBeenSet(false)
{
  *this = jsonValue;
}

LocalVolumeResourceData& LocalVolumeResourceData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DestinationPath"))
  {
    m_destinationPath = jsonValue.GetString("DestinationPath");

    m_destinationPathHasBeenSet = true;
  }

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

JsonValue LocalVolumeResourceData::Jsonize() const
{
  JsonValue payload;

  if(m_destinationPathHasBeenSet)
  {
   payload.WithString("DestinationPath", m_destinationPath);

  }

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
