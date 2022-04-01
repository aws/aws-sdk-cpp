/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MotionImageInserter.h>
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

MotionImageInserter::MotionImageInserter() : 
    m_framerateHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_insertionMode(MotionImageInsertionMode::NOT_SET),
    m_insertionModeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_playback(MotionImagePlayback::NOT_SET),
    m_playbackHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

MotionImageInserter::MotionImageInserter(JsonView jsonValue) : 
    m_framerateHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_insertionMode(MotionImageInsertionMode::NOT_SET),
    m_insertionModeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_playback(MotionImagePlayback::NOT_SET),
    m_playbackHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
  *this = jsonValue;
}

MotionImageInserter& MotionImageInserter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("framerate"))
  {
    m_framerate = jsonValue.GetObject("framerate");

    m_framerateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("input"))
  {
    m_input = jsonValue.GetString("input");

    m_inputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("insertionMode"))
  {
    m_insertionMode = MotionImageInsertionModeMapper::GetMotionImageInsertionModeForName(jsonValue.GetString("insertionMode"));

    m_insertionModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("offset"))
  {
    m_offset = jsonValue.GetObject("offset");

    m_offsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("playback"))
  {
    m_playback = MotionImagePlaybackMapper::GetMotionImagePlaybackForName(jsonValue.GetString("playback"));

    m_playbackHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

    m_startTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue MotionImageInserter::Jsonize() const
{
  JsonValue payload;

  if(m_framerateHasBeenSet)
  {
   payload.WithObject("framerate", m_framerate.Jsonize());

  }

  if(m_inputHasBeenSet)
  {
   payload.WithString("input", m_input);

  }

  if(m_insertionModeHasBeenSet)
  {
   payload.WithString("insertionMode", MotionImageInsertionModeMapper::GetNameForMotionImageInsertionMode(m_insertionMode));
  }

  if(m_offsetHasBeenSet)
  {
   payload.WithObject("offset", m_offset.Jsonize());

  }

  if(m_playbackHasBeenSet)
  {
   payload.WithString("playback", MotionImagePlaybackMapper::GetNameForMotionImagePlayback(m_playback));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
