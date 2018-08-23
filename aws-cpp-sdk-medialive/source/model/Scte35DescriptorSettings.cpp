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

#include <aws/medialive/model/Scte35DescriptorSettings.h>
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

Scte35DescriptorSettings::Scte35DescriptorSettings() : 
    m_segmentationDescriptorScte35DescriptorSettingsHasBeenSet(false)
{
}

Scte35DescriptorSettings::Scte35DescriptorSettings(JsonView jsonValue) : 
    m_segmentationDescriptorScte35DescriptorSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

Scte35DescriptorSettings& Scte35DescriptorSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("segmentationDescriptorScte35DescriptorSettings"))
  {
    m_segmentationDescriptorScte35DescriptorSettings = jsonValue.GetObject("segmentationDescriptorScte35DescriptorSettings");

    m_segmentationDescriptorScte35DescriptorSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue Scte35DescriptorSettings::Jsonize() const
{
  JsonValue payload;

  if(m_segmentationDescriptorScte35DescriptorSettingsHasBeenSet)
  {
   payload.WithObject("segmentationDescriptorScte35DescriptorSettings", m_segmentationDescriptorScte35DescriptorSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
