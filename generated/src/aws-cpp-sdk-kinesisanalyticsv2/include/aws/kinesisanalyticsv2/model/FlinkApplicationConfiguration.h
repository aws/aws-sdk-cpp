/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/CheckpointConfiguration.h>
#include <aws/kinesisanalyticsv2/model/MonitoringConfiguration.h>
#include <aws/kinesisanalyticsv2/model/ParallelismConfiguration.h>
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
   * <p>Describes configuration parameters for a Managed Service for Apache Flink
   * application or a Studio notebook.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/FlinkApplicationConfiguration">AWS
   * API Reference</a></p>
   */
  class FlinkApplicationConfiguration
  {
  public:
    AWS_KINESISANALYTICSV2_API FlinkApplicationConfiguration();
    AWS_KINESISANALYTICSV2_API FlinkApplicationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API FlinkApplicationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes an application's checkpointing configuration. Checkpointing is the
     * process of persisting application state for fault tolerance. For more
     * information, see <a
     * href="https://nightlies.apache.org/flink/flink-docs-release-1.19/docs/dev/datastream/fault-tolerance/checkpointing/#enabling-and-configuring-checkpointing">
     * Checkpoints for Fault Tolerance</a> in the <a
     * href="https://nightlies.apache.org/flink/flink-docs-release-1.19/">Apache Flink
     * Documentation</a>. </p>
     */
    inline const CheckpointConfiguration& GetCheckpointConfiguration() const{ return m_checkpointConfiguration; }
    inline bool CheckpointConfigurationHasBeenSet() const { return m_checkpointConfigurationHasBeenSet; }
    inline void SetCheckpointConfiguration(const CheckpointConfiguration& value) { m_checkpointConfigurationHasBeenSet = true; m_checkpointConfiguration = value; }
    inline void SetCheckpointConfiguration(CheckpointConfiguration&& value) { m_checkpointConfigurationHasBeenSet = true; m_checkpointConfiguration = std::move(value); }
    inline FlinkApplicationConfiguration& WithCheckpointConfiguration(const CheckpointConfiguration& value) { SetCheckpointConfiguration(value); return *this;}
    inline FlinkApplicationConfiguration& WithCheckpointConfiguration(CheckpointConfiguration&& value) { SetCheckpointConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes configuration parameters for Amazon CloudWatch logging for an
     * application.</p>
     */
    inline const MonitoringConfiguration& GetMonitoringConfiguration() const{ return m_monitoringConfiguration; }
    inline bool MonitoringConfigurationHasBeenSet() const { return m_monitoringConfigurationHasBeenSet; }
    inline void SetMonitoringConfiguration(const MonitoringConfiguration& value) { m_monitoringConfigurationHasBeenSet = true; m_monitoringConfiguration = value; }
    inline void SetMonitoringConfiguration(MonitoringConfiguration&& value) { m_monitoringConfigurationHasBeenSet = true; m_monitoringConfiguration = std::move(value); }
    inline FlinkApplicationConfiguration& WithMonitoringConfiguration(const MonitoringConfiguration& value) { SetMonitoringConfiguration(value); return *this;}
    inline FlinkApplicationConfiguration& WithMonitoringConfiguration(MonitoringConfiguration&& value) { SetMonitoringConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes parameters for how an application executes multiple tasks
     * simultaneously.</p>
     */
    inline const ParallelismConfiguration& GetParallelismConfiguration() const{ return m_parallelismConfiguration; }
    inline bool ParallelismConfigurationHasBeenSet() const { return m_parallelismConfigurationHasBeenSet; }
    inline void SetParallelismConfiguration(const ParallelismConfiguration& value) { m_parallelismConfigurationHasBeenSet = true; m_parallelismConfiguration = value; }
    inline void SetParallelismConfiguration(ParallelismConfiguration&& value) { m_parallelismConfigurationHasBeenSet = true; m_parallelismConfiguration = std::move(value); }
    inline FlinkApplicationConfiguration& WithParallelismConfiguration(const ParallelismConfiguration& value) { SetParallelismConfiguration(value); return *this;}
    inline FlinkApplicationConfiguration& WithParallelismConfiguration(ParallelismConfiguration&& value) { SetParallelismConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    CheckpointConfiguration m_checkpointConfiguration;
    bool m_checkpointConfigurationHasBeenSet = false;

    MonitoringConfiguration m_monitoringConfiguration;
    bool m_monitoringConfigurationHasBeenSet = false;

    ParallelismConfiguration m_parallelismConfiguration;
    bool m_parallelismConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
