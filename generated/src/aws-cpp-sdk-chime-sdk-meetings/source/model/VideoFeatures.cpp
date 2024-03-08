/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/VideoFeatures.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMeetings
{
namespace Model
{

VideoFeatures::VideoFeatures() : 
    m_maxResolution(VideoResolution::NOT_SET),
    m_maxResolutionHasBeenSet(false)
{
}

VideoFeatures::VideoFeatures(JsonView jsonValue) : 
    m_maxResolution(VideoResolution::NOT_SET),
    m_maxResolutionHasBeenSet(false)
{
  *this = jsonValue;
}

VideoFeatures& VideoFeatures::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxResolution"))
  {
    m_maxResolution = VideoResolutionMapper::GetVideoResolutionForName(jsonValue.GetString("MaxResolution"));

    m_maxResolutionHasBeenSet = true;
  }

  return *this;
}

JsonValue VideoFeatures::Jsonize() const
{
  JsonValue payload;

  if(m_maxResolutionHasBeenSet)
  {
   payload.WithString("MaxResolution", VideoResolutionMapper::GetNameForVideoResolution(m_maxResolution));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
