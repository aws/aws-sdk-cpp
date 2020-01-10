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

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/MediaPlacement.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Chime
{
namespace Model
{

  /**
   * <p>A meeting created using the Amazon Chime SDK.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/Meeting">AWS API
   * Reference</a></p>
   */
  class AWS_CHIME_API Meeting
  {
  public:
    Meeting();
    Meeting(Aws::Utils::Json::JsonView jsonValue);
    Meeting& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline const Aws::String& GetMeetingId() const{ return m_meetingId; }

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline bool MeetingIdHasBeenSet() const { return m_meetingIdHasBeenSet; }

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline void SetMeetingId(const Aws::String& value) { m_meetingIdHasBeenSet = true; m_meetingId = value; }

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline void SetMeetingId(Aws::String&& value) { m_meetingIdHasBeenSet = true; m_meetingId = std::move(value); }

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline void SetMeetingId(const char* value) { m_meetingIdHasBeenSet = true; m_meetingId.assign(value); }

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline Meeting& WithMeetingId(const Aws::String& value) { SetMeetingId(value); return *this;}

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline Meeting& WithMeetingId(Aws::String&& value) { SetMeetingId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline Meeting& WithMeetingId(const char* value) { SetMeetingId(value); return *this;}


    /**
     * <p>The media placement for the meeting.</p>
     */
    inline const MediaPlacement& GetMediaPlacement() const{ return m_mediaPlacement; }

    /**
     * <p>The media placement for the meeting.</p>
     */
    inline bool MediaPlacementHasBeenSet() const { return m_mediaPlacementHasBeenSet; }

    /**
     * <p>The media placement for the meeting.</p>
     */
    inline void SetMediaPlacement(const MediaPlacement& value) { m_mediaPlacementHasBeenSet = true; m_mediaPlacement = value; }

    /**
     * <p>The media placement for the meeting.</p>
     */
    inline void SetMediaPlacement(MediaPlacement&& value) { m_mediaPlacementHasBeenSet = true; m_mediaPlacement = std::move(value); }

    /**
     * <p>The media placement for the meeting.</p>
     */
    inline Meeting& WithMediaPlacement(const MediaPlacement& value) { SetMediaPlacement(value); return *this;}

    /**
     * <p>The media placement for the meeting.</p>
     */
    inline Meeting& WithMediaPlacement(MediaPlacement&& value) { SetMediaPlacement(std::move(value)); return *this;}


    /**
     * <p>The Region in which to create the meeting. Available values:
     * <code>ap-northeast-1</code>, <code>ap-southeast-1</code>,
     * <code>ap-southeast-2</code>, <code>ca-central-1</code>,
     * <code>eu-central-1</code>, <code>eu-north-1</code>, <code>eu-west-1</code>,
     * <code>eu-west-2</code>, <code>eu-west-3</code>, <code>sa-east-1</code>,
     * <code>us-east-1</code>, <code>us-east-2</code>, <code>us-west-1</code>,
     * <code>us-west-2</code>.</p>
     */
    inline const Aws::String& GetMediaRegion() const{ return m_mediaRegion; }

    /**
     * <p>The Region in which to create the meeting. Available values:
     * <code>ap-northeast-1</code>, <code>ap-southeast-1</code>,
     * <code>ap-southeast-2</code>, <code>ca-central-1</code>,
     * <code>eu-central-1</code>, <code>eu-north-1</code>, <code>eu-west-1</code>,
     * <code>eu-west-2</code>, <code>eu-west-3</code>, <code>sa-east-1</code>,
     * <code>us-east-1</code>, <code>us-east-2</code>, <code>us-west-1</code>,
     * <code>us-west-2</code>.</p>
     */
    inline bool MediaRegionHasBeenSet() const { return m_mediaRegionHasBeenSet; }

    /**
     * <p>The Region in which to create the meeting. Available values:
     * <code>ap-northeast-1</code>, <code>ap-southeast-1</code>,
     * <code>ap-southeast-2</code>, <code>ca-central-1</code>,
     * <code>eu-central-1</code>, <code>eu-north-1</code>, <code>eu-west-1</code>,
     * <code>eu-west-2</code>, <code>eu-west-3</code>, <code>sa-east-1</code>,
     * <code>us-east-1</code>, <code>us-east-2</code>, <code>us-west-1</code>,
     * <code>us-west-2</code>.</p>
     */
    inline void SetMediaRegion(const Aws::String& value) { m_mediaRegionHasBeenSet = true; m_mediaRegion = value; }

    /**
     * <p>The Region in which to create the meeting. Available values:
     * <code>ap-northeast-1</code>, <code>ap-southeast-1</code>,
     * <code>ap-southeast-2</code>, <code>ca-central-1</code>,
     * <code>eu-central-1</code>, <code>eu-north-1</code>, <code>eu-west-1</code>,
     * <code>eu-west-2</code>, <code>eu-west-3</code>, <code>sa-east-1</code>,
     * <code>us-east-1</code>, <code>us-east-2</code>, <code>us-west-1</code>,
     * <code>us-west-2</code>.</p>
     */
    inline void SetMediaRegion(Aws::String&& value) { m_mediaRegionHasBeenSet = true; m_mediaRegion = std::move(value); }

    /**
     * <p>The Region in which to create the meeting. Available values:
     * <code>ap-northeast-1</code>, <code>ap-southeast-1</code>,
     * <code>ap-southeast-2</code>, <code>ca-central-1</code>,
     * <code>eu-central-1</code>, <code>eu-north-1</code>, <code>eu-west-1</code>,
     * <code>eu-west-2</code>, <code>eu-west-3</code>, <code>sa-east-1</code>,
     * <code>us-east-1</code>, <code>us-east-2</code>, <code>us-west-1</code>,
     * <code>us-west-2</code>.</p>
     */
    inline void SetMediaRegion(const char* value) { m_mediaRegionHasBeenSet = true; m_mediaRegion.assign(value); }

    /**
     * <p>The Region in which to create the meeting. Available values:
     * <code>ap-northeast-1</code>, <code>ap-southeast-1</code>,
     * <code>ap-southeast-2</code>, <code>ca-central-1</code>,
     * <code>eu-central-1</code>, <code>eu-north-1</code>, <code>eu-west-1</code>,
     * <code>eu-west-2</code>, <code>eu-west-3</code>, <code>sa-east-1</code>,
     * <code>us-east-1</code>, <code>us-east-2</code>, <code>us-west-1</code>,
     * <code>us-west-2</code>.</p>
     */
    inline Meeting& WithMediaRegion(const Aws::String& value) { SetMediaRegion(value); return *this;}

    /**
     * <p>The Region in which to create the meeting. Available values:
     * <code>ap-northeast-1</code>, <code>ap-southeast-1</code>,
     * <code>ap-southeast-2</code>, <code>ca-central-1</code>,
     * <code>eu-central-1</code>, <code>eu-north-1</code>, <code>eu-west-1</code>,
     * <code>eu-west-2</code>, <code>eu-west-3</code>, <code>sa-east-1</code>,
     * <code>us-east-1</code>, <code>us-east-2</code>, <code>us-west-1</code>,
     * <code>us-west-2</code>.</p>
     */
    inline Meeting& WithMediaRegion(Aws::String&& value) { SetMediaRegion(std::move(value)); return *this;}

    /**
     * <p>The Region in which to create the meeting. Available values:
     * <code>ap-northeast-1</code>, <code>ap-southeast-1</code>,
     * <code>ap-southeast-2</code>, <code>ca-central-1</code>,
     * <code>eu-central-1</code>, <code>eu-north-1</code>, <code>eu-west-1</code>,
     * <code>eu-west-2</code>, <code>eu-west-3</code>, <code>sa-east-1</code>,
     * <code>us-east-1</code>, <code>us-east-2</code>, <code>us-west-1</code>,
     * <code>us-west-2</code>.</p>
     */
    inline Meeting& WithMediaRegion(const char* value) { SetMediaRegion(value); return *this;}

  private:

    Aws::String m_meetingId;
    bool m_meetingIdHasBeenSet;

    MediaPlacement m_mediaPlacement;
    bool m_mediaPlacementHasBeenSet;

    Aws::String m_mediaRegion;
    bool m_mediaRegionHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
