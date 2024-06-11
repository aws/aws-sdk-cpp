/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>

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
   * <p>The logging configuration associated with an Amazon Chime Voice Connector.
   * Specifies whether SIP message logs are enabled for sending to Amazon CloudWatch
   * Logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/LoggingConfiguration">AWS
   * API Reference</a></p>
   */
  class LoggingConfiguration
  {
  public:
    AWS_CHIME_API LoggingConfiguration();
    AWS_CHIME_API LoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API LoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Boolean that enables SIP message logs to Amazon CloudWatch logs.</p>
     */
    inline bool GetEnableSIPLogs() const{ return m_enableSIPLogs; }
    inline bool EnableSIPLogsHasBeenSet() const { return m_enableSIPLogsHasBeenSet; }
    inline void SetEnableSIPLogs(bool value) { m_enableSIPLogsHasBeenSet = true; m_enableSIPLogs = value; }
    inline LoggingConfiguration& WithEnableSIPLogs(bool value) { SetEnableSIPLogs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean that enables logging of detailed media metrics for Voice Connectors
     * to Amazon CloudWatch logs.</p>
     */
    inline bool GetEnableMediaMetricLogs() const{ return m_enableMediaMetricLogs; }
    inline bool EnableMediaMetricLogsHasBeenSet() const { return m_enableMediaMetricLogsHasBeenSet; }
    inline void SetEnableMediaMetricLogs(bool value) { m_enableMediaMetricLogsHasBeenSet = true; m_enableMediaMetricLogs = value; }
    inline LoggingConfiguration& WithEnableMediaMetricLogs(bool value) { SetEnableMediaMetricLogs(value); return *this;}
    ///@}
  private:

    bool m_enableSIPLogs;
    bool m_enableSIPLogsHasBeenSet = false;

    bool m_enableMediaMetricLogs;
    bool m_enableMediaMetricLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
