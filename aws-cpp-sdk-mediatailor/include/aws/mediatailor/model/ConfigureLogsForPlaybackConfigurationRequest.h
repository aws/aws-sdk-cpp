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
   * <p>Configures Amazon CloudWatch log settings for a playback
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ConfigureLogsForPlaybackConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class ConfigureLogsForPlaybackConfigurationRequest : public MediaTailorRequest
  {
  public:
    AWS_MEDIATAILOR_API ConfigureLogsForPlaybackConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConfigureLogsForPlaybackConfiguration"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;


    /**
     * <p>The percentage of session logs that MediaTailor sends to your Cloudwatch Logs
     * account. For example, if your playback configuration has 1000 sessions and
     * percentEnabled is set to <code>60</code>, MediaTailor sends logs for 600 of the
     * sessions to CloudWatch Logs. MediaTailor decides at random which of the playback
     * configuration sessions to send logs for. If you want to view logs for a specific
     * session, you can use the <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/debug-log-mode.html">debug
     * log mode</a>.</p> <p>Valid values: <code>0</code> - <code>100</code> </p>
     */
    inline int GetPercentEnabled() const{ return m_percentEnabled; }

    /**
     * <p>The percentage of session logs that MediaTailor sends to your Cloudwatch Logs
     * account. For example, if your playback configuration has 1000 sessions and
     * percentEnabled is set to <code>60</code>, MediaTailor sends logs for 600 of the
     * sessions to CloudWatch Logs. MediaTailor decides at random which of the playback
     * configuration sessions to send logs for. If you want to view logs for a specific
     * session, you can use the <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/debug-log-mode.html">debug
     * log mode</a>.</p> <p>Valid values: <code>0</code> - <code>100</code> </p>
     */
    inline bool PercentEnabledHasBeenSet() const { return m_percentEnabledHasBeenSet; }

    /**
     * <p>The percentage of session logs that MediaTailor sends to your Cloudwatch Logs
     * account. For example, if your playback configuration has 1000 sessions and
     * percentEnabled is set to <code>60</code>, MediaTailor sends logs for 600 of the
     * sessions to CloudWatch Logs. MediaTailor decides at random which of the playback
     * configuration sessions to send logs for. If you want to view logs for a specific
     * session, you can use the <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/debug-log-mode.html">debug
     * log mode</a>.</p> <p>Valid values: <code>0</code> - <code>100</code> </p>
     */
    inline void SetPercentEnabled(int value) { m_percentEnabledHasBeenSet = true; m_percentEnabled = value; }

    /**
     * <p>The percentage of session logs that MediaTailor sends to your Cloudwatch Logs
     * account. For example, if your playback configuration has 1000 sessions and
     * percentEnabled is set to <code>60</code>, MediaTailor sends logs for 600 of the
     * sessions to CloudWatch Logs. MediaTailor decides at random which of the playback
     * configuration sessions to send logs for. If you want to view logs for a specific
     * session, you can use the <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/debug-log-mode.html">debug
     * log mode</a>.</p> <p>Valid values: <code>0</code> - <code>100</code> </p>
     */
    inline ConfigureLogsForPlaybackConfigurationRequest& WithPercentEnabled(int value) { SetPercentEnabled(value); return *this;}


    /**
     * <p>The name of the playback configuration.</p>
     */
    inline const Aws::String& GetPlaybackConfigurationName() const{ return m_playbackConfigurationName; }

    /**
     * <p>The name of the playback configuration.</p>
     */
    inline bool PlaybackConfigurationNameHasBeenSet() const { return m_playbackConfigurationNameHasBeenSet; }

    /**
     * <p>The name of the playback configuration.</p>
     */
    inline void SetPlaybackConfigurationName(const Aws::String& value) { m_playbackConfigurationNameHasBeenSet = true; m_playbackConfigurationName = value; }

    /**
     * <p>The name of the playback configuration.</p>
     */
    inline void SetPlaybackConfigurationName(Aws::String&& value) { m_playbackConfigurationNameHasBeenSet = true; m_playbackConfigurationName = std::move(value); }

    /**
     * <p>The name of the playback configuration.</p>
     */
    inline void SetPlaybackConfigurationName(const char* value) { m_playbackConfigurationNameHasBeenSet = true; m_playbackConfigurationName.assign(value); }

    /**
     * <p>The name of the playback configuration.</p>
     */
    inline ConfigureLogsForPlaybackConfigurationRequest& WithPlaybackConfigurationName(const Aws::String& value) { SetPlaybackConfigurationName(value); return *this;}

    /**
     * <p>The name of the playback configuration.</p>
     */
    inline ConfigureLogsForPlaybackConfigurationRequest& WithPlaybackConfigurationName(Aws::String&& value) { SetPlaybackConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The name of the playback configuration.</p>
     */
    inline ConfigureLogsForPlaybackConfigurationRequest& WithPlaybackConfigurationName(const char* value) { SetPlaybackConfigurationName(value); return *this;}

  private:

    int m_percentEnabled;
    bool m_percentEnabledHasBeenSet = false;

    Aws::String m_playbackConfigurationName;
    bool m_playbackConfigurationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
