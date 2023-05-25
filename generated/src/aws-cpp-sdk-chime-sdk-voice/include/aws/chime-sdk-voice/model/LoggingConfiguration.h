/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>

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
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   * <p>The logging configuration associated with an Amazon Chime SDK Voice
   * Connector. Specifies whether SIP message logs can be sent to Amazon CloudWatch
   * Logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/LoggingConfiguration">AWS
   * API Reference</a></p>
   */
  class LoggingConfiguration
  {
  public:
    AWS_CHIMESDKVOICE_API LoggingConfiguration();
    AWS_CHIMESDKVOICE_API LoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API LoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Boolean that enables sending SIP message logs to Amazon CloudWatch.</p>
     */
    inline bool GetEnableSIPLogs() const{ return m_enableSIPLogs; }

    /**
     * <p>Boolean that enables sending SIP message logs to Amazon CloudWatch.</p>
     */
    inline bool EnableSIPLogsHasBeenSet() const { return m_enableSIPLogsHasBeenSet; }

    /**
     * <p>Boolean that enables sending SIP message logs to Amazon CloudWatch.</p>
     */
    inline void SetEnableSIPLogs(bool value) { m_enableSIPLogsHasBeenSet = true; m_enableSIPLogs = value; }

    /**
     * <p>Boolean that enables sending SIP message logs to Amazon CloudWatch.</p>
     */
    inline LoggingConfiguration& WithEnableSIPLogs(bool value) { SetEnableSIPLogs(value); return *this;}


    /**
     * <p>Enables or disables media metrics logging.</p>
     */
    inline bool GetEnableMediaMetricLogs() const{ return m_enableMediaMetricLogs; }

    /**
     * <p>Enables or disables media metrics logging.</p>
     */
    inline bool EnableMediaMetricLogsHasBeenSet() const { return m_enableMediaMetricLogsHasBeenSet; }

    /**
     * <p>Enables or disables media metrics logging.</p>
     */
    inline void SetEnableMediaMetricLogs(bool value) { m_enableMediaMetricLogsHasBeenSet = true; m_enableMediaMetricLogs = value; }

    /**
     * <p>Enables or disables media metrics logging.</p>
     */
    inline LoggingConfiguration& WithEnableMediaMetricLogs(bool value) { SetEnableMediaMetricLogs(value); return *this;}

  private:

    bool m_enableSIPLogs;
    bool m_enableSIPLogsHasBeenSet = false;

    bool m_enableMediaMetricLogs;
    bool m_enableMediaMetricLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
