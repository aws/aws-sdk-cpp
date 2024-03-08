/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ParticipantCapabilities.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

ParticipantCapabilities::ParticipantCapabilities() : 
    m_video(VideoCapability::NOT_SET),
    m_videoHasBeenSet(false)
{
}

ParticipantCapabilities::ParticipantCapabilities(JsonView jsonValue) : 
    m_video(VideoCapability::NOT_SET),
    m_videoHasBeenSet(false)
{
  *this = jsonValue;
}

ParticipantCapabilities& ParticipantCapabilities::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Video"))
  {
    m_video = VideoCapabilityMapper::GetVideoCapabilityForName(jsonValue.GetString("Video"));

    m_videoHasBeenSet = true;
  }

  return *this;
}

JsonValue ParticipantCapabilities::Jsonize() const
{
  JsonValue payload;

  if(m_videoHasBeenSet)
  {
   payload.WithString("Video", VideoCapabilityMapper::GetNameForVideoCapability(m_video));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
