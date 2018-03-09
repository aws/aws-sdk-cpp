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

#include <aws/mediaconvert/model/OutputGroupSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

OutputGroupSettings::OutputGroupSettings() : 
    m_dashIsoGroupSettingsHasBeenSet(false),
    m_fileGroupSettingsHasBeenSet(false),
    m_hlsGroupSettingsHasBeenSet(false),
    m_msSmoothGroupSettingsHasBeenSet(false),
    m_type(OutputGroupType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

OutputGroupSettings::OutputGroupSettings(const JsonValue& jsonValue) : 
    m_dashIsoGroupSettingsHasBeenSet(false),
    m_fileGroupSettingsHasBeenSet(false),
    m_hlsGroupSettingsHasBeenSet(false),
    m_msSmoothGroupSettingsHasBeenSet(false),
    m_type(OutputGroupType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

OutputGroupSettings& OutputGroupSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("dashIsoGroupSettings"))
  {
    m_dashIsoGroupSettings = jsonValue.GetObject("dashIsoGroupSettings");

    m_dashIsoGroupSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileGroupSettings"))
  {
    m_fileGroupSettings = jsonValue.GetObject("fileGroupSettings");

    m_fileGroupSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hlsGroupSettings"))
  {
    m_hlsGroupSettings = jsonValue.GetObject("hlsGroupSettings");

    m_hlsGroupSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("msSmoothGroupSettings"))
  {
    m_msSmoothGroupSettings = jsonValue.GetObject("msSmoothGroupSettings");

    m_msSmoothGroupSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = OutputGroupTypeMapper::GetOutputGroupTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputGroupSettings::Jsonize() const
{
  JsonValue payload;

  if(m_dashIsoGroupSettingsHasBeenSet)
  {
   payload.WithObject("dashIsoGroupSettings", m_dashIsoGroupSettings.Jsonize());

  }

  if(m_fileGroupSettingsHasBeenSet)
  {
   payload.WithObject("fileGroupSettings", m_fileGroupSettings.Jsonize());

  }

  if(m_hlsGroupSettingsHasBeenSet)
  {
   payload.WithObject("hlsGroupSettings", m_hlsGroupSettings.Jsonize());

  }

  if(m_msSmoothGroupSettingsHasBeenSet)
  {
   payload.WithObject("msSmoothGroupSettings", m_msSmoothGroupSettings.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", OutputGroupTypeMapper::GetNameForOutputGroupType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
