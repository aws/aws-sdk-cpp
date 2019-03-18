/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Describes configuration parameters for a Java-based Amazon Kinesis Data
   * Analytics application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/FlinkApplicationConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API FlinkApplicationConfiguration
  {
  public:
    FlinkApplicationConfiguration();
    FlinkApplicationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    FlinkApplicationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes an application's checkpointing configuration. Checkpointing is the
     * process of persisting application state for fault tolerance. For more
     * information, see <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.6/concepts/programming-model.html#checkpoints-for-fault-tolerance">
     * Checkpoints for Fault Tolerance</a> in the <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.6/">Apache Flink
     * Documentation</a>. </p>
     */
    inline const CheckpointConfiguration& GetCheckpointConfiguration() const{ return m_checkpointConfiguration; }

    /**
     * <p>Describes an application's checkpointing configuration. Checkpointing is the
     * process of persisting application state for fault tolerance. For more
     * information, see <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.6/concepts/programming-model.html#checkpoints-for-fault-tolerance">
     * Checkpoints for Fault Tolerance</a> in the <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.6/">Apache Flink
     * Documentation</a>. </p>
     */
    inline bool CheckpointConfigurationHasBeenSet() const { return m_checkpointConfigurationHasBeenSet; }

    /**
     * <p>Describes an application's checkpointing configuration. Checkpointing is the
     * process of persisting application state for fault tolerance. For more
     * information, see <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.6/concepts/programming-model.html#checkpoints-for-fault-tolerance">
     * Checkpoints for Fault Tolerance</a> in the <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.6/">Apache Flink
     * Documentation</a>. </p>
     */
    inline void SetCheckpointConfiguration(const CheckpointConfiguration& value) { m_checkpointConfigurationHasBeenSet = true; m_checkpointConfiguration = value; }

    /**
     * <p>Describes an application's checkpointing configuration. Checkpointing is the
     * process of persisting application state for fault tolerance. For more
     * information, see <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.6/concepts/programming-model.html#checkpoints-for-fault-tolerance">
     * Checkpoints for Fault Tolerance</a> in the <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.6/">Apache Flink
     * Documentation</a>. </p>
     */
    inline void SetCheckpointConfiguration(CheckpointConfiguration&& value) { m_checkpointConfigurationHasBeenSet = true; m_checkpointConfiguration = std::move(value); }

    /**
     * <p>Describes an application's checkpointing configuration. Checkpointing is the
     * process of persisting application state for fault tolerance. For more
     * information, see <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.6/concepts/programming-model.html#checkpoints-for-fault-tolerance">
     * Checkpoints for Fault Tolerance</a> in the <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.6/">Apache Flink
     * Documentation</a>. </p>
     */
    inline FlinkApplicationConfiguration& WithCheckpointConfiguration(const CheckpointConfiguration& value) { SetCheckpointConfiguration(value); return *this;}

    /**
     * <p>Describes an application's checkpointing configuration. Checkpointing is the
     * process of persisting application state for fault tolerance. For more
     * information, see <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.6/concepts/programming-model.html#checkpoints-for-fault-tolerance">
     * Checkpoints for Fault Tolerance</a> in the <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.6/">Apache Flink
     * Documentation</a>. </p>
     */
    inline FlinkApplicationConfiguration& WithCheckpointConfiguration(CheckpointConfiguration&& value) { SetCheckpointConfiguration(std::move(value)); return *this;}


    /**
     * <p>Describes configuration parameters for Amazon CloudWatch logging for an
     * application.</p>
     */
    inline const MonitoringConfiguration& GetMonitoringConfiguration() const{ return m_monitoringConfiguration; }

    /**
     * <p>Describes configuration parameters for Amazon CloudWatch logging for an
     * application.</p>
     */
    inline bool MonitoringConfigurationHasBeenSet() const { return m_monitoringConfigurationHasBeenSet; }

    /**
     * <p>Describes configuration parameters for Amazon CloudWatch logging for an
     * application.</p>
     */
    inline void SetMonitoringConfiguration(const MonitoringConfiguration& value) { m_monitoringConfigurationHasBeenSet = true; m_monitoringConfiguration = value; }

    /**
     * <p>Describes configuration parameters for Amazon CloudWatch logging for an
     * application.</p>
     */
    inline void SetMonitoringConfiguration(MonitoringConfiguration&& value) { m_monitoringConfigurationHasBeenSet = true; m_monitoringConfiguration = std::move(value); }

    /**
     * <p>Describes configuration parameters for Amazon CloudWatch logging for an
     * application.</p>
     */
    inline FlinkApplicationConfiguration& WithMonitoringConfiguration(const MonitoringConfiguration& value) { SetMonitoringConfiguration(value); return *this;}

    /**
     * <p>Describes configuration parameters for Amazon CloudWatch logging for an
     * application.</p>
     */
    inline FlinkApplicationConfiguration& WithMonitoringConfiguration(MonitoringConfiguration&& value) { SetMonitoringConfiguration(std::move(value)); return *this;}


    /**
     * <p>Describes parameters for how an application executes multiple tasks
     * simultaneously.</p>
     */
    inline const ParallelismConfiguration& GetParallelismConfiguration() const{ return m_parallelismConfiguration; }

    /**
     * <p>Describes parameters for how an application executes multiple tasks
     * simultaneously.</p>
     */
    inline bool ParallelismConfigurationHasBeenSet() const { return m_parallelismConfigurationHasBeenSet; }

    /**
     * <p>Describes parameters for how an application executes multiple tasks
     * simultaneously.</p>
     */
    inline void SetParallelismConfiguration(const ParallelismConfiguration& value) { m_parallelismConfigurationHasBeenSet = true; m_parallelismConfiguration = value; }

    /**
     * <p>Describes parameters for how an application executes multiple tasks
     * simultaneously.</p>
     */
    inline void SetParallelismConfiguration(ParallelismConfiguration&& value) { m_parallelismConfigurationHasBeenSet = true; m_parallelismConfiguration = std::move(value); }

    /**
     * <p>Describes parameters for how an application executes multiple tasks
     * simultaneously.</p>
     */
    inline FlinkApplicationConfiguration& WithParallelismConfiguration(const ParallelismConfiguration& value) { SetParallelismConfiguration(value); return *this;}

    /**
     * <p>Describes parameters for how an application executes multiple tasks
     * simultaneously.</p>
     */
    inline FlinkApplicationConfiguration& WithParallelismConfiguration(ParallelismConfiguration&& value) { SetParallelismConfiguration(std::move(value)); return *this;}

  private:

    CheckpointConfiguration m_checkpointConfiguration;
    bool m_checkpointConfigurationHasBeenSet;

    MonitoringConfiguration m_monitoringConfiguration;
    bool m_monitoringConfigurationHasBeenSet;

    ParallelismConfiguration m_parallelismConfiguration;
    bool m_parallelismConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
