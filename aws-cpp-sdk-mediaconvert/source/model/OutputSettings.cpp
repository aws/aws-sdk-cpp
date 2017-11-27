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

#include <aws/mediaconvert/model/OutputSettings.h>
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

OutputSettings::OutputSettings() : 
    m_hlsSettingsHasBeenSet(false)
{
}

OutputSettings::OutputSettings(const JsonValue& jsonValue) : 
    m_hlsSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

OutputSettings& OutputSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("hlsSettings"))
  {
    m_hlsSettings = jsonValue.GetObject("hlsSettings");

    m_hlsSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputSettings::Jsonize() const
{
  JsonValue payload;

  if(m_hlsSettingsHasBeenSet)
  {
   payload.WithObject("hlsSettings", m_hlsSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
