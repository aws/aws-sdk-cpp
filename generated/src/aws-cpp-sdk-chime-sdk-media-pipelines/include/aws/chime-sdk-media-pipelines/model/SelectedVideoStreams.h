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
    AWS_CHIMESDKMEDIAPIPELINES_API SelectedVideoStreams() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API SelectedVideoStreams(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API SelectedVideoStreams& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The attendee IDs of the streams selected for a media pipeline. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAttendeeIds() const { return m_attendeeIds; }
    inline bool AttendeeIdsHasBeenSet() const { return m_attendeeIdsHasBeenSet; }
    template<typename AttendeeIdsT = Aws::Vector<Aws::String>>
    void SetAttendeeIds(AttendeeIdsT&& value) { m_attendeeIdsHasBeenSet = true; m_attendeeIds = std::forward<AttendeeIdsT>(value); }
    template<typename AttendeeIdsT = Aws::Vector<Aws::String>>
    SelectedVideoStreams& WithAttendeeIds(AttendeeIdsT&& value) { SetAttendeeIds(std::forward<AttendeeIdsT>(value)); return *this;}
    template<typename AttendeeIdsT = Aws::String>
    SelectedVideoStreams& AddAttendeeIds(AttendeeIdsT&& value) { m_attendeeIdsHasBeenSet = true; m_attendeeIds.emplace_back(std::forward<AttendeeIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The external user IDs of the streams selected for a media pipeline.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExternalUserIds() const { return m_externalUserIds; }
    inline bool ExternalUserIdsHasBeenSet() const { return m_externalUserIdsHasBeenSet; }
    template<typename ExternalUserIdsT = Aws::Vector<Aws::String>>
    void SetExternalUserIds(ExternalUserIdsT&& value) { m_externalUserIdsHasBeenSet = true; m_externalUserIds = std::forward<ExternalUserIdsT>(value); }
    template<typename ExternalUserIdsT = Aws::Vector<Aws::String>>
    SelectedVideoStreams& WithExternalUserIds(ExternalUserIdsT&& value) { SetExternalUserIds(std::forward<ExternalUserIdsT>(value)); return *this;}
    template<typename ExternalUserIdsT = Aws::String>
    SelectedVideoStreams& AddExternalUserIds(ExternalUserIdsT&& value) { m_externalUserIdsHasBeenSet = true; m_externalUserIds.emplace_back(std::forward<ExternalUserIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_attendeeIds;
    bool m_attendeeIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_externalUserIds;
    bool m_externalUserIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
