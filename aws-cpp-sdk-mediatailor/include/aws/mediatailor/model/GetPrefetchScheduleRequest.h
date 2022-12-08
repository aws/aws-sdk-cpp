/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

  /**
   */
  class GetPrefetchScheduleRequest : public MediaTailorRequest
  {
  public:
    AWS_MEDIATAILOR_API GetPrefetchScheduleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPrefetchSchedule"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the prefetch schedule. The name must be unique among all prefetch
     * schedules that are associated with the specified playback configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the prefetch schedule. The name must be unique among all prefetch
     * schedules that are associated with the specified playback configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the prefetch schedule. The name must be unique among all prefetch
     * schedules that are associated with the specified playback configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the prefetch schedule. The name must be unique among all prefetch
     * schedules that are associated with the specified playback configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the prefetch schedule. The name must be unique among all prefetch
     * schedules that are associated with the specified playback configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the prefetch schedule. The name must be unique among all prefetch
     * schedules that are associated with the specified playback configuration.</p>
     */
    inline GetPrefetchScheduleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the prefetch schedule. The name must be unique among all prefetch
     * schedules that are associated with the specified playback configuration.</p>
     */
    inline GetPrefetchScheduleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the prefetch schedule. The name must be unique among all prefetch
     * schedules that are associated with the specified playback configuration.</p>
     */
    inline GetPrefetchScheduleRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Returns information about the prefetch schedule for a specific playback
     * configuration. If you call <code>GetPrefetchSchedule</code> on an expired
     * prefetch schedule, MediaTailor returns an HTTP 404 status code.</p>
     */
    inline const Aws::String& GetPlaybackConfigurationName() const{ return m_playbackConfigurationName; }

    /**
     * <p>Returns information about the prefetch schedule for a specific playback
     * configuration. If you call <code>GetPrefetchSchedule</code> on an expired
     * prefetch schedule, MediaTailor returns an HTTP 404 status code.</p>
     */
    inline bool PlaybackConfigurationNameHasBeenSet() const { return m_playbackConfigurationNameHasBeenSet; }

    /**
     * <p>Returns information about the prefetch schedule for a specific playback
     * configuration. If you call <code>GetPrefetchSchedule</code> on an expired
     * prefetch schedule, MediaTailor returns an HTTP 404 status code.</p>
     */
    inline void SetPlaybackConfigurationName(const Aws::String& value) { m_playbackConfigurationNameHasBeenSet = true; m_playbackConfigurationName = value; }

    /**
     * <p>Returns information about the prefetch schedule for a specific playback
     * configuration. If you call <code>GetPrefetchSchedule</code> on an expired
     * prefetch schedule, MediaTailor returns an HTTP 404 status code.</p>
     */
    inline void SetPlaybackConfigurationName(Aws::String&& value) { m_playbackConfigurationNameHasBeenSet = true; m_playbackConfigurationName = std::move(value); }

    /**
     * <p>Returns information about the prefetch schedule for a specific playback
     * configuration. If you call <code>GetPrefetchSchedule</code> on an expired
     * prefetch schedule, MediaTailor returns an HTTP 404 status code.</p>
     */
    inline void SetPlaybackConfigurationName(const char* value) { m_playbackConfigurationNameHasBeenSet = true; m_playbackConfigurationName.assign(value); }

    /**
     * <p>Returns information about the prefetch schedule for a specific playback
     * configuration. If you call <code>GetPrefetchSchedule</code> on an expired
     * prefetch schedule, MediaTailor returns an HTTP 404 status code.</p>
     */
    inline GetPrefetchScheduleRequest& WithPlaybackConfigurationName(const Aws::String& value) { SetPlaybackConfigurationName(value); return *this;}

    /**
     * <p>Returns information about the prefetch schedule for a specific playback
     * configuration. If you call <code>GetPrefetchSchedule</code> on an expired
     * prefetch schedule, MediaTailor returns an HTTP 404 status code.</p>
     */
    inline GetPrefetchScheduleRequest& WithPlaybackConfigurationName(Aws::String&& value) { SetPlaybackConfigurationName(std::move(value)); return *this;}

    /**
     * <p>Returns information about the prefetch schedule for a specific playback
     * configuration. If you call <code>GetPrefetchSchedule</code> on an expired
     * prefetch schedule, MediaTailor returns an HTTP 404 status code.</p>
     */
    inline GetPrefetchScheduleRequest& WithPlaybackConfigurationName(const char* value) { SetPlaybackConfigurationName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_playbackConfigurationName;
    bool m_playbackConfigurationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
