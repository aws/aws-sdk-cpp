/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/ActiveSpeakerOnlyConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

ActiveSpeakerOnlyConfiguration::ActiveSpeakerOnlyConfiguration() : 
    m_activeSpeakerPosition(ActiveSpeakerPosition::NOT_SET),
    m_activeSpeakerPositionHasBeenSet(false)
{
}

ActiveSpeakerOnlyConfiguration::ActiveSpeakerOnlyConfiguration(JsonView jsonValue) : 
    m_activeSpeakerPosition(ActiveSpeakerPosition::NOT_SET),
    m_activeSpeakerPositionHasBeenSet(false)
{
  *this = jsonValue;
}

ActiveSpeakerOnlyConfiguration& ActiveSpeakerOnlyConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActiveSpeakerPosition"))
  {
    m_activeSpeakerPosition = ActiveSpeakerPositionMapper::GetActiveSpeakerPositionForName(jsonValue.GetString("ActiveSpeakerPosition"));

    m_activeSpeakerPositionHasBeenSet = true;
  }

  return *this;
}

JsonValue ActiveSpeakerOnlyConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_activeSpeakerPositionHasBeenSet)
  {
   payload.WithString("ActiveSpeakerPosition", ActiveSpeakerPositionMapper::GetNameForActiveSpeakerPosition(m_activeSpeakerPosition));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
