/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>The video streams for a specified media pipeline. The total number of video
   * streams can't exceed 25.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/SelectedVideoStreams">AWS
   * API Reference</a></p>
   */
  class SelectedVideoStreams
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API SelectedVideoStreams();
    AWS_CHIMESDKMEDIAPIPELINES_API SelectedVideoStreams(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API SelectedVideoStreams& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attendee IDs of the streams selected for a media pipeline. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAttendeeIds() const{ return m_attendeeIds; }

    /**
     * <p>The attendee IDs of the streams selected for a media pipeline. </p>
     */
    inline bool AttendeeIdsHasBeenSet() const { return m_attendeeIdsHasBeenSet; }

    /**
     * <p>The attendee IDs of the streams selected for a media pipeline. </p>
     */
    inline void SetAttendeeIds(const Aws::Vector<Aws::String>& value) { m_attendeeIdsHasBeenSet = true; m_attendeeIds = value; }

    /**
     * <p>The attendee IDs of the streams selected for a media pipeline. </p>
     */
    inline void SetAttendeeIds(Aws::Vector<Aws::String>&& value) { m_attendeeIdsHasBeenSet = true; m_attendeeIds = std::move(value); }

    /**
     * <p>The attendee IDs of the streams selected for a media pipeline. </p>
     */
    inline SelectedVideoStreams& WithAttendeeIds(const Aws::Vector<Aws::String>& value) { SetAttendeeIds(value); return *this;}

    /**
     * <p>The attendee IDs of the streams selected for a media pipeline. </p>
     */
    inline SelectedVideoStreams& WithAttendeeIds(Aws::Vector<Aws::String>&& value) { SetAttendeeIds(std::move(value)); return *this;}

    /**
     * <p>The attendee IDs of the streams selected for a media pipeline. </p>
     */
    inline SelectedVideoStreams& AddAttendeeIds(const Aws::String& value) { m_attendeeIdsHasBeenSet = true; m_attendeeIds.push_back(value); return *this; }

    /**
     * <p>The attendee IDs of the streams selected for a media pipeline. </p>
     */
    inline SelectedVideoStreams& AddAttendeeIds(Aws::String&& value) { m_attendeeIdsHasBeenSet = true; m_attendeeIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The attendee IDs of the streams selected for a media pipeline. </p>
     */
    inline SelectedVideoStreams& AddAttendeeIds(const char* value) { m_attendeeIdsHasBeenSet = true; m_attendeeIds.push_back(value); return *this; }


    /**
     * <p>The external user IDs of the streams selected for a media pipeline.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExternalUserIds() const{ return m_externalUserIds; }

    /**
     * <p>The external user IDs of the streams selected for a media pipeline.</p>
     */
    inline bool ExternalUserIdsHasBeenSet() const { return m_externalUserIdsHasBeenSet; }

    /**
     * <p>The external user IDs of the streams selected for a media pipeline.</p>
     */
    inline void SetExternalUserIds(const Aws::Vector<Aws::String>& value) { m_externalUserIdsHasBeenSet = true; m_externalUserIds = value; }

    /**
     * <p>The external user IDs of the streams selected for a media pipeline.</p>
     */
    inline void SetExternalUserIds(Aws::Vector<Aws::String>&& value) { m_externalUserIdsHasBeenSet = true; m_externalUserIds = std::move(value); }

    /**
     * <p>The external user IDs of the streams selected for a media pipeline.</p>
     */
    inline SelectedVideoStreams& WithExternalUserIds(const Aws::Vector<Aws::String>& value) { SetExternalUserIds(value); return *this;}

    /**
     * <p>The external user IDs of the streams selected for a media pipeline.</p>
     */
    inline SelectedVideoStreams& WithExternalUserIds(Aws::Vector<Aws::String>&& value) { SetExternalUserIds(std::move(value)); return *this;}

    /**
     * <p>The external user IDs of the streams selected for a media pipeline.</p>
     */
    inline SelectedVideoStreams& AddExternalUserIds(const Aws::String& value) { m_externalUserIdsHasBeenSet = true; m_externalUserIds.push_back(value); return *this; }

    /**
     * <p>The external user IDs of the streams selected for a media pipeline.</p>
     */
    inline SelectedVideoStreams& AddExternalUserIds(Aws::String&& value) { m_externalUserIdsHasBeenSet = true; m_externalUserIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The external user IDs of the streams selected for a media pipeline.</p>
     */
    inline SelectedVideoStreams& AddExternalUserIds(const char* value) { m_externalUserIdsHasBeenSet = true; m_externalUserIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_attendeeIds;
    bool m_attendeeIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_externalUserIds;
    bool m_externalUserIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
