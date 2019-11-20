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

#include <aws/chime/model/Meeting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

Meeting::Meeting() : 
    m_meetingIdHasBeenSet(false),
    m_mediaPlacementHasBeenSet(false),
    m_mediaRegionHasBeenSet(false)
{
}

Meeting::Meeting(JsonView jsonValue) : 
    m_meetingIdHasBeenSet(false),
    m_mediaPlacementHasBeenSet(false),
    m_mediaRegionHasBeenSet(false)
{
  *this = jsonValue;
}

Meeting& Meeting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MeetingId"))
  {
    m_meetingId = jsonValue.GetString("MeetingId");

    m_meetingIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaPlacement"))
  {
    m_mediaPlacement = jsonValue.GetObject("MediaPlacement");

    m_mediaPlacementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaRegion"))
  {
    m_mediaRegion = jsonValue.GetString("MediaRegion");

    m_mediaRegionHasBeenSet = true;
  }

  return *this;
}

JsonValue Meeting::Jsonize() const
{
  JsonValue payload;

  if(m_meetingIdHasBeenSet)
  {
   payload.WithString("MeetingId", m_meetingId);

  }

  if(m_mediaPlacementHasBeenSet)
  {
   payload.WithObject("MediaPlacement", m_mediaPlacement.Jsonize());

  }

  if(m_mediaRegionHasBeenSet)
  {
   payload.WithString("MediaRegion", m_mediaRegion);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
