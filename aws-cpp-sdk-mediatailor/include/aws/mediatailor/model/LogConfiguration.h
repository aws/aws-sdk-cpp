﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>Returns Amazon CloudWatch log settings for a playback
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/LogConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIATAILOR_API LogConfiguration
  {
  public:
    LogConfiguration();
    LogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    LogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The percentage of session logs that MediaTailor sends to your Cloudwatch Logs
     * account. For example, if your playback configuration has 1000 sessions and
     * percentEnabled is set to 60, MediaTailor sends logs for 600 of the sessions to
     * CloudWatch Logs. MediaTailor decides at random which of the playback
     * configuration sessions to send logs for. If you want to view logs for a specific
     * session, you can use the <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/debug-log-mode.html">debug
     * log mode</a>.</p> <p>Valid values: 0 - 100</p>
     */
    inline int GetPercentEnabled() const{ return m_percentEnabled; }

    /**
     * <p>The percentage of session logs that MediaTailor sends to your Cloudwatch Logs
     * account. For example, if your playback configuration has 1000 sessions and
     * percentEnabled is set to 60, MediaTailor sends logs for 600 of the sessions to
     * CloudWatch Logs. MediaTailor decides at random which of the playback
     * configuration sessions to send logs for. If you want to view logs for a specific
     * session, you can use the <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/debug-log-mode.html">debug
     * log mode</a>.</p> <p>Valid values: 0 - 100</p>
     */
    inline bool PercentEnabledHasBeenSet() const { return m_percentEnabledHasBeenSet; }

    /**
     * <p>The percentage of session logs that MediaTailor sends to your Cloudwatch Logs
     * account. For example, if your playback configuration has 1000 sessions and
     * percentEnabled is set to 60, MediaTailor sends logs for 600 of the sessions to
     * CloudWatch Logs. MediaTailor decides at random which of the playback
     * configuration sessions to send logs for. If you want to view logs for a specific
     * session, you can use the <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/debug-log-mode.html">debug
     * log mode</a>.</p> <p>Valid values: 0 - 100</p>
     */
    inline void SetPercentEnabled(int value) { m_percentEnabledHasBeenSet = true; m_percentEnabled = value; }

    /**
     * <p>The percentage of session logs that MediaTailor sends to your Cloudwatch Logs
     * account. For example, if your playback configuration has 1000 sessions and
     * percentEnabled is set to 60, MediaTailor sends logs for 600 of the sessions to
     * CloudWatch Logs. MediaTailor decides at random which of the playback
     * configuration sessions to send logs for. If you want to view logs for a specific
     * session, you can use the <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/debug-log-mode.html">debug
     * log mode</a>.</p> <p>Valid values: 0 - 100</p>
     */
    inline LogConfiguration& WithPercentEnabled(int value) { SetPercentEnabled(value); return *this;}

  private:

    int m_percentEnabled;
    bool m_percentEnabledHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
