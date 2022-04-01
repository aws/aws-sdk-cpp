/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
