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

LocalDeviceResourceData::LocalDeviceResourceData(const JsonValue& jsonValue) : 
    m_groupOwnerSettingHasBeenSet(false),
    m_sourcePathHasBeenSet(false)
{
  *this = jsonValue;
}

LocalDeviceResourceData& LocalDeviceResourceData::operator =(const JsonValue& jsonValue)
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
