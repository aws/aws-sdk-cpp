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

#include <aws/medialive/model/VideoSelectorSettings.h>
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

VideoSelectorSettings::VideoSelectorSettings() : 
    m_videoSelectorPidHasBeenSet(false),
    m_videoSelectorProgramIdHasBeenSet(false)
{
}

VideoSelectorSettings::VideoSelectorSettings(const JsonValue& jsonValue) : 
    m_videoSelectorPidHasBeenSet(false),
    m_videoSelectorProgramIdHasBeenSet(false)
{
  *this = jsonValue;
}

VideoSelectorSettings& VideoSelectorSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("videoSelectorPid"))
  {
    m_videoSelectorPid = jsonValue.GetObject("videoSelectorPid");

    m_videoSelectorPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoSelectorProgramId"))
  {
    m_videoSelectorProgramId = jsonValue.GetObject("videoSelectorProgramId");

    m_videoSelectorProgramIdHasBeenSet = true;
  }

  return *this;
}

JsonValue VideoSelectorSettings::Jsonize() const
{
  JsonValue payload;

  if(m_videoSelectorPidHasBeenSet)
  {
   payload.WithObject("videoSelectorPid", m_videoSelectorPid.Jsonize());

  }

  if(m_videoSelectorProgramIdHasBeenSet)
  {
   payload.WithObject("videoSelectorProgramId", m_videoSelectorProgramId.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
