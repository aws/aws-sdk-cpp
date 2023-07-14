/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/VideoDescription.h>
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

VideoDescription::VideoDescription() : 
    m_afdSignaling(AfdSignaling::NOT_SET),
    m_afdSignalingHasBeenSet(false),
    m_antiAlias(AntiAlias::NOT_SET),
    m_antiAliasHasBeenSet(false),
    m_codecSettingsHasBeenSet(false),
    m_colorMetadata(ColorMetadata::NOT_SET),
    m_colorMetadataHasBeenSet(false),
    m_cropHasBeenSet(false),
    m_dropFrameTimecode(DropFrameTimecode::NOT_SET),
    m_dropFrameTimecodeHasBeenSet(false),
    m_fixedAfd(0),
    m_fixedAfdHasBeenSet(false),
    m_height(0),
    m_heightHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_respondToAfd(RespondToAfd::NOT_SET),
    m_respondToAfdHasBeenSet(false),
    m_scalingBehavior(ScalingBehavior::NOT_SET),
    m_scalingBehaviorHasBeenSet(false),
    m_sharpness(0),
    m_sharpnessHasBeenSet(false),
    m_timecodeInsertion(VideoTimecodeInsertion::NOT_SET),
    m_timecodeInsertionHasBeenSet(false),
    m_videoPreprocessorsHasBeenSet(false),
    m_width(0),
    m_widthHasBeenSet(false)
{
}

VideoDescription::VideoDescription(JsonView jsonValue) : 
    m_afdSignaling(AfdSignaling::NOT_SET),
    m_afdSignalingHasBeenSet(false),
    m_antiAlias(AntiAlias::NOT_SET),
    m_antiAliasHasBeenSet(false),
    m_codecSettingsHasBeenSet(false),
    m_colorMetadata(ColorMetadata::NOT_SET),
    m_colorMetadataHasBeenSet(false),
    m_cropHasBeenSet(false),
    m_dropFrameTimecode(DropFrameTimecode::NOT_SET),
    m_dropFrameTimecodeHasBeenSet(false),
    m_fixedAfd(0),
    m_fixedAfdHasBeenSet(false),
    m_height(0),
    m_heightHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_respondToAfd(RespondToAfd::NOT_SET),
    m_respondToAfdHasBeenSet(false),
    m_scalingBehavior(ScalingBehavior::NOT_SET),
    m_scalingBehaviorHasBeenSet(false),
    m_sharpness(0),
    m_sharpnessHasBeenSet(false),
    m_timecodeInsertion(VideoTimecodeInsertion::NOT_SET),
    m_timecodeInsertionHasBeenSet(false),
    m_videoPreprocessorsHasBeenSet(false),
    m_width(0),
    m_widthHasBeenSet(false)
{
  *this = jsonValue;
}

VideoDescription& VideoDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("afdSignaling"))
  {
    m_afdSignaling = AfdSignalingMapper::GetAfdSignalingForName(jsonValue.GetString("afdSignaling"));

    m_afdSignalingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("antiAlias"))
  {
    m_antiAlias = AntiAliasMapper::GetAntiAliasForName(jsonValue.GetString("antiAlias"));

    m_antiAliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codecSettings"))
  {
    m_codecSettings = jsonValue.GetObject("codecSettings");

    m_codecSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("colorMetadata"))
  {
    m_colorMetadata = ColorMetadataMapper::GetColorMetadataForName(jsonValue.GetString("colorMetadata"));

    m_colorMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("crop"))
  {
    m_crop = jsonValue.GetObject("crop");

    m_cropHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dropFrameTimecode"))
  {
    m_dropFrameTimecode = DropFrameTimecodeMapper::GetDropFrameTimecodeForName(jsonValue.GetString("dropFrameTimecode"));

    m_dropFrameTimecodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fixedAfd"))
  {
    m_fixedAfd = jsonValue.GetInteger("fixedAfd");

    m_fixedAfdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("height"))
  {
    m_height = jsonValue.GetInteger("height");

    m_heightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("position"))
  {
    m_position = jsonValue.GetObject("position");

    m_positionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("respondToAfd"))
  {
    m_respondToAfd = RespondToAfdMapper::GetRespondToAfdForName(jsonValue.GetString("respondToAfd"));

    m_respondToAfdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scalingBehavior"))
  {
    m_scalingBehavior = ScalingBehaviorMapper::GetScalingBehaviorForName(jsonValue.GetString("scalingBehavior"));

    m_scalingBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sharpness"))
  {
    m_sharpness = jsonValue.GetInteger("sharpness");

    m_sharpnessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timecodeInsertion"))
  {
    m_timecodeInsertion = VideoTimecodeInsertionMapper::GetVideoTimecodeInsertionForName(jsonValue.GetString("timecodeInsertion"));

    m_timecodeInsertionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoPreprocessors"))
  {
    m_videoPreprocessors = jsonValue.GetObject("videoPreprocessors");

    m_videoPreprocessorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("width"))
  {
    m_width = jsonValue.GetInteger("width");

    m_widthHasBeenSet = true;
  }

  return *this;
}

JsonValue VideoDescription::Jsonize() const
{
  JsonValue payload;

  if(m_afdSignalingHasBeenSet)
  {
   payload.WithString("afdSignaling", AfdSignalingMapper::GetNameForAfdSignaling(m_afdSignaling));
  }

  if(m_antiAliasHasBeenSet)
  {
   payload.WithString("antiAlias", AntiAliasMapper::GetNameForAntiAlias(m_antiAlias));
  }

  if(m_codecSettingsHasBeenSet)
  {
   payload.WithObject("codecSettings", m_codecSettings.Jsonize());

  }

  if(m_colorMetadataHasBeenSet)
  {
   payload.WithString("colorMetadata", ColorMetadataMapper::GetNameForColorMetadata(m_colorMetadata));
  }

  if(m_cropHasBeenSet)
  {
   payload.WithObject("crop", m_crop.Jsonize());

  }

  if(m_dropFrameTimecodeHasBeenSet)
  {
   payload.WithString("dropFrameTimecode", DropFrameTimecodeMapper::GetNameForDropFrameTimecode(m_dropFrameTimecode));
  }

  if(m_fixedAfdHasBeenSet)
  {
   payload.WithInteger("fixedAfd", m_fixedAfd);

  }

  if(m_heightHasBeenSet)
  {
   payload.WithInteger("height", m_height);

  }

  if(m_positionHasBeenSet)
  {
   payload.WithObject("position", m_position.Jsonize());

  }

  if(m_respondToAfdHasBeenSet)
  {
   payload.WithString("respondToAfd", RespondToAfdMapper::GetNameForRespondToAfd(m_respondToAfd));
  }

  if(m_scalingBehaviorHasBeenSet)
  {
   payload.WithString("scalingBehavior", ScalingBehaviorMapper::GetNameForScalingBehavior(m_scalingBehavior));
  }

  if(m_sharpnessHasBeenSet)
  {
   payload.WithInteger("sharpness", m_sharpness);

  }

  if(m_timecodeInsertionHasBeenSet)
  {
   payload.WithString("timecodeInsertion", VideoTimecodeInsertionMapper::GetNameForVideoTimecodeInsertion(m_timecodeInsertion));
  }

  if(m_videoPreprocessorsHasBeenSet)
  {
   payload.WithObject("videoPreprocessors", m_videoPreprocessors.Jsonize());

  }

  if(m_widthHasBeenSet)
  {
   payload.WithInteger("width", m_width);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
