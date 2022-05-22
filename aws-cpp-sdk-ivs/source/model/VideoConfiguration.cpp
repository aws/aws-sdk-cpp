/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/VideoConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IVS
{
namespace Model
{

VideoConfiguration::VideoConfiguration() : 
    m_avcLevelHasBeenSet(false),
    m_avcProfileHasBeenSet(false),
    m_codecHasBeenSet(false),
    m_encoderHasBeenSet(false),
    m_targetBitrate(0),
    m_targetBitrateHasBeenSet(false),
    m_targetFramerate(0),
    m_targetFramerateHasBeenSet(false),
    m_videoHeight(0),
    m_videoHeightHasBeenSet(false),
    m_videoWidth(0),
    m_videoWidthHasBeenSet(false)
{
}

VideoConfiguration::VideoConfiguration(JsonView jsonValue) : 
    m_avcLevelHasBeenSet(false),
    m_avcProfileHasBeenSet(false),
    m_codecHasBeenSet(false),
    m_encoderHasBeenSet(false),
    m_targetBitrate(0),
    m_targetBitrateHasBeenSet(false),
    m_targetFramerate(0),
    m_targetFramerateHasBeenSet(false),
    m_videoHeight(0),
    m_videoHeightHasBeenSet(false),
    m_videoWidth(0),
    m_videoWidthHasBeenSet(false)
{
  *this = jsonValue;
}

VideoConfiguration& VideoConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("avcLevel"))
  {
    m_avcLevel = jsonValue.GetString("avcLevel");

    m_avcLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("avcProfile"))
  {
    m_avcProfile = jsonValue.GetString("avcProfile");

    m_avcProfileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codec"))
  {
    m_codec = jsonValue.GetString("codec");

    m_codecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encoder"))
  {
    m_encoder = jsonValue.GetString("encoder");

    m_encoderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetBitrate"))
  {
    m_targetBitrate = jsonValue.GetInt64("targetBitrate");

    m_targetBitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetFramerate"))
  {
    m_targetFramerate = jsonValue.GetInt64("targetFramerate");

    m_targetFramerateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoHeight"))
  {
    m_videoHeight = jsonValue.GetInt64("videoHeight");

    m_videoHeightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoWidth"))
  {
    m_videoWidth = jsonValue.GetInt64("videoWidth");

    m_videoWidthHasBeenSet = true;
  }

  return *this;
}

JsonValue VideoConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_avcLevelHasBeenSet)
  {
   payload.WithString("avcLevel", m_avcLevel);

  }

  if(m_avcProfileHasBeenSet)
  {
   payload.WithString("avcProfile", m_avcProfile);

  }

  if(m_codecHasBeenSet)
  {
   payload.WithString("codec", m_codec);

  }

  if(m_encoderHasBeenSet)
  {
   payload.WithString("encoder", m_encoder);

  }

  if(m_targetBitrateHasBeenSet)
  {
   payload.WithInt64("targetBitrate", m_targetBitrate);

  }

  if(m_targetFramerateHasBeenSet)
  {
   payload.WithInt64("targetFramerate", m_targetFramerate);

  }

  if(m_videoHeightHasBeenSet)
  {
   payload.WithInt64("videoHeight", m_videoHeight);

  }

  if(m_videoWidthHasBeenSet)
  {
   payload.WithInt64("videoWidth", m_videoWidth);

  }

  return payload;
}

} // namespace Model
} // namespace IVS
} // namespace Aws
