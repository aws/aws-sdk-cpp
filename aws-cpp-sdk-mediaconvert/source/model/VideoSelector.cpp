﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/VideoSelector.h>
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

VideoSelector::VideoSelector() : 
    m_alphaBehavior(AlphaBehavior::NOT_SET),
    m_alphaBehaviorHasBeenSet(false),
    m_colorSpace(ColorSpace::NOT_SET),
    m_colorSpaceHasBeenSet(false),
    m_colorSpaceUsage(ColorSpaceUsage::NOT_SET),
    m_colorSpaceUsageHasBeenSet(false),
    m_embeddedTimecodeOverride(EmbeddedTimecodeOverride::NOT_SET),
    m_embeddedTimecodeOverrideHasBeenSet(false),
    m_hdr10MetadataHasBeenSet(false),
    m_padVideo(PadVideo::NOT_SET),
    m_padVideoHasBeenSet(false),
    m_pid(0),
    m_pidHasBeenSet(false),
    m_programNumber(0),
    m_programNumberHasBeenSet(false),
    m_rotate(InputRotate::NOT_SET),
    m_rotateHasBeenSet(false),
    m_sampleRange(InputSampleRange::NOT_SET),
    m_sampleRangeHasBeenSet(false)
{
}

VideoSelector::VideoSelector(JsonView jsonValue) : 
    m_alphaBehavior(AlphaBehavior::NOT_SET),
    m_alphaBehaviorHasBeenSet(false),
    m_colorSpace(ColorSpace::NOT_SET),
    m_colorSpaceHasBeenSet(false),
    m_colorSpaceUsage(ColorSpaceUsage::NOT_SET),
    m_colorSpaceUsageHasBeenSet(false),
    m_embeddedTimecodeOverride(EmbeddedTimecodeOverride::NOT_SET),
    m_embeddedTimecodeOverrideHasBeenSet(false),
    m_hdr10MetadataHasBeenSet(false),
    m_padVideo(PadVideo::NOT_SET),
    m_padVideoHasBeenSet(false),
    m_pid(0),
    m_pidHasBeenSet(false),
    m_programNumber(0),
    m_programNumberHasBeenSet(false),
    m_rotate(InputRotate::NOT_SET),
    m_rotateHasBeenSet(false),
    m_sampleRange(InputSampleRange::NOT_SET),
    m_sampleRangeHasBeenSet(false)
{
  *this = jsonValue;
}

VideoSelector& VideoSelector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("alphaBehavior"))
  {
    m_alphaBehavior = AlphaBehaviorMapper::GetAlphaBehaviorForName(jsonValue.GetString("alphaBehavior"));

    m_alphaBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("colorSpace"))
  {
    m_colorSpace = ColorSpaceMapper::GetColorSpaceForName(jsonValue.GetString("colorSpace"));

    m_colorSpaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("colorSpaceUsage"))
  {
    m_colorSpaceUsage = ColorSpaceUsageMapper::GetColorSpaceUsageForName(jsonValue.GetString("colorSpaceUsage"));

    m_colorSpaceUsageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("embeddedTimecodeOverride"))
  {
    m_embeddedTimecodeOverride = EmbeddedTimecodeOverrideMapper::GetEmbeddedTimecodeOverrideForName(jsonValue.GetString("embeddedTimecodeOverride"));

    m_embeddedTimecodeOverrideHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hdr10Metadata"))
  {
    m_hdr10Metadata = jsonValue.GetObject("hdr10Metadata");

    m_hdr10MetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("padVideo"))
  {
    m_padVideo = PadVideoMapper::GetPadVideoForName(jsonValue.GetString("padVideo"));

    m_padVideoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pid"))
  {
    m_pid = jsonValue.GetInteger("pid");

    m_pidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("programNumber"))
  {
    m_programNumber = jsonValue.GetInteger("programNumber");

    m_programNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rotate"))
  {
    m_rotate = InputRotateMapper::GetInputRotateForName(jsonValue.GetString("rotate"));

    m_rotateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sampleRange"))
  {
    m_sampleRange = InputSampleRangeMapper::GetInputSampleRangeForName(jsonValue.GetString("sampleRange"));

    m_sampleRangeHasBeenSet = true;
  }

  return *this;
}

JsonValue VideoSelector::Jsonize() const
{
  JsonValue payload;

  if(m_alphaBehaviorHasBeenSet)
  {
   payload.WithString("alphaBehavior", AlphaBehaviorMapper::GetNameForAlphaBehavior(m_alphaBehavior));
  }

  if(m_colorSpaceHasBeenSet)
  {
   payload.WithString("colorSpace", ColorSpaceMapper::GetNameForColorSpace(m_colorSpace));
  }

  if(m_colorSpaceUsageHasBeenSet)
  {
   payload.WithString("colorSpaceUsage", ColorSpaceUsageMapper::GetNameForColorSpaceUsage(m_colorSpaceUsage));
  }

  if(m_embeddedTimecodeOverrideHasBeenSet)
  {
   payload.WithString("embeddedTimecodeOverride", EmbeddedTimecodeOverrideMapper::GetNameForEmbeddedTimecodeOverride(m_embeddedTimecodeOverride));
  }

  if(m_hdr10MetadataHasBeenSet)
  {
   payload.WithObject("hdr10Metadata", m_hdr10Metadata.Jsonize());

  }

  if(m_padVideoHasBeenSet)
  {
   payload.WithString("padVideo", PadVideoMapper::GetNameForPadVideo(m_padVideo));
  }

  if(m_pidHasBeenSet)
  {
   payload.WithInteger("pid", m_pid);

  }

  if(m_programNumberHasBeenSet)
  {
   payload.WithInteger("programNumber", m_programNumber);

  }

  if(m_rotateHasBeenSet)
  {
   payload.WithString("rotate", InputRotateMapper::GetNameForInputRotate(m_rotate));
  }

  if(m_sampleRangeHasBeenSet)
  {
   payload.WithString("sampleRange", InputSampleRangeMapper::GetNameForInputSampleRange(m_sampleRange));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
