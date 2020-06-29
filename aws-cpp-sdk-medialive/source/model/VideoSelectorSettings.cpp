/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

VideoSelectorSettings::VideoSelectorSettings(JsonView jsonValue) : 
    m_videoSelectorPidHasBeenSet(false),
    m_videoSelectorProgramIdHasBeenSet(false)
{
  *this = jsonValue;
}

VideoSelectorSettings& VideoSelectorSettings::operator =(JsonView jsonValue)
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
