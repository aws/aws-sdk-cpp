/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/LogLevel.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes configuration parameters for Amazon CloudWatch logging for a
   * Managed Service for Apache Flink Studio notebook. For more information about
   * CloudWatch logging, see <a
   * href="https://docs.aws.amazon.com/kinesisanalytics/latest/java/monitoring-overview.html">Monitoring</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ZeppelinMonitoringConfiguration">AWS
   * API Reference</a></p>
   */
  class ZeppelinMonitoringConfiguration
  {
  public:
    AWS_KINESISANALYTICSV2_API ZeppelinMonitoringConfiguration() = default;
    AWS_KINESISANALYTICSV2_API ZeppelinMonitoringConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ZeppelinMonitoringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The verbosity of the CloudWatch Logs for an application.</p>
     */
    inline LogLevel GetLogLevel() const { return m_logLevel; }
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
    inline void SetLogLevel(LogLevel value) { m_logLevelHasBeenSet = true; m_logLevel = value; }
    inline ZeppelinMonitoringConfiguration& WithLogLevel(LogLevel value) { SetLogLevel(value); return *this;}
    ///@}
  private:

    LogLevel m_logLevel{LogLevel::NOT_SET};
    bool m_logLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
