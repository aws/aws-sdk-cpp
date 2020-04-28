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

#include <aws/medialive/model/H264FilterSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

H264FilterSettings::H264FilterSettings() : 
    m_temporalFilterSettingsHasBeenSet(false)
{
}

H264FilterSettings::H264FilterSettings(JsonView jsonValue) : 
    m_temporalFilterSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

H264FilterSettings& H264FilterSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("temporalFilterSettings"))
  {
    m_temporalFilterSettings = jsonValue.GetObject("temporalFilterSettings");

    m_temporalFilterSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue H264FilterSettings::Jsonize() const
{
  JsonValue payload;

  if(m_temporalFilterSettingsHasBeenSet)
  {
   payload.WithObject("temporalFilterSettings", m_temporalFilterSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
