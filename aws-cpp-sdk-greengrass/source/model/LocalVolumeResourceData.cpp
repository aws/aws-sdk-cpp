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

LocalVolumeResourceData::LocalVolumeResourceData(const JsonValue& jsonValue) : 
    m_destinationPathHasBeenSet(false),
    m_groupOwnerSettingHasBeenSet(false),
    m_sourcePathHasBeenSet(false)
{
  *this = jsonValue;
}

LocalVolumeResourceData& LocalVolumeResourceData::operator =(const JsonValue& jsonValue)
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
