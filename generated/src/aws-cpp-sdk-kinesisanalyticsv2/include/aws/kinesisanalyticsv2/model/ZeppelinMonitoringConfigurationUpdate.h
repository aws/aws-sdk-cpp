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
   * <p>Updates to the monitoring configuration for Apache Zeppelin within a Managed
   * Service for Apache Flink Studio notebook.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ZeppelinMonitoringConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class ZeppelinMonitoringConfigurationUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API ZeppelinMonitoringConfigurationUpdate() = default;
    AWS_KINESISANALYTICSV2_API ZeppelinMonitoringConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ZeppelinMonitoringConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Updates to the logging level for Apache Zeppelin within a Managed Service for
     * Apache Flink Studio notebook.</p>
     */
    inline LogLevel GetLogLevelUpdate() const { return m_logLevelUpdate; }
    inline bool LogLevelUpdateHasBeenSet() const { return m_logLevelUpdateHasBeenSet; }
    inline void SetLogLevelUpdate(LogLevel value) { m_logLevelUpdateHasBeenSet = true; m_logLevelUpdate = value; }
    inline ZeppelinMonitoringConfigurationUpdate& WithLogLevelUpdate(LogLevel value) { SetLogLevelUpdate(value); return *this;}
    ///@}
  private:

    LogLevel m_logLevelUpdate{LogLevel::NOT_SET};
    bool m_logLevelUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
