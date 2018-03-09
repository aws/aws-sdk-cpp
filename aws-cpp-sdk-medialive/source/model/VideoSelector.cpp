﻿/*
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

#include <aws/medialive/model/VideoSelector.h>
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

VideoSelector::VideoSelector() : 
    m_colorSpace(VideoSelectorColorSpace::NOT_SET),
    m_colorSpaceHasBeenSet(false),
    m_colorSpaceUsage(VideoSelectorColorSpaceUsage::NOT_SET),
    m_colorSpaceUsageHasBeenSet(false),
    m_selectorSettingsHasBeenSet(false)
{
}

VideoSelector::VideoSelector(const JsonValue& jsonValue) : 
    m_colorSpace(VideoSelectorColorSpace::NOT_SET),
    m_colorSpaceHasBeenSet(false),
    m_colorSpaceUsage(VideoSelectorColorSpaceUsage::NOT_SET),
    m_colorSpaceUsageHasBeenSet(false),
    m_selectorSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

VideoSelector& VideoSelector::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("colorSpace"))
  {
    m_colorSpace = VideoSelectorColorSpaceMapper::GetVideoSelectorColorSpaceForName(jsonValue.GetString("colorSpace"));

    m_colorSpaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("colorSpaceUsage"))
  {
    m_colorSpaceUsage = VideoSelectorColorSpaceUsageMapper::GetVideoSelectorColorSpaceUsageForName(jsonValue.GetString("colorSpaceUsage"));

    m_colorSpaceUsageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("selectorSettings"))
  {
    m_selectorSettings = jsonValue.GetObject("selectorSettings");

    m_selectorSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue VideoSelector::Jsonize() const
{
  JsonValue payload;

  if(m_colorSpaceHasBeenSet)
  {
   payload.WithString("colorSpace", VideoSelectorColorSpaceMapper::GetNameForVideoSelectorColorSpace(m_colorSpace));
  }

  if(m_colorSpaceUsageHasBeenSet)
  {
   payload.WithString("colorSpaceUsage", VideoSelectorColorSpaceUsageMapper::GetNameForVideoSelectorColorSpaceUsage(m_colorSpaceUsage));
  }

  if(m_selectorSettingsHasBeenSet)
  {
   payload.WithObject("selectorSettings", m_selectorSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
