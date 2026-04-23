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
#include <aws/kinesisanalyticsv2/model/CheckpointConfigurationUpdate.h>
#include <aws/kinesisanalyticsv2/model/MonitoringConfigurationUpdate.h>
#include <aws/kinesisanalyticsv2/model/ParallelismConfigurationUpdate.h>
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
   * <p>Describes updates to the configuration parameters for a Java-based Amazon
   * Kinesis Data Analytics application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/FlinkApplicationConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API FlinkApplicationConfigurationUpdate
  {
  public:
    FlinkApplicationConfigurationUpdate();
    FlinkApplicationConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    FlinkApplicationConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes updates to an application's checkpointing configuration.
     * Checkpointing is the process of persisting application state for fault
     * tolerance.</p>
     */
    inline const CheckpointConfigurationUpdate& GetCheckpointConfigurationUpdate() const{ return m_checkpointConfigurationUpdate; }

    /**
     * <p>Describes updates to an application's checkpointing configuration.
     * Checkpointing is the process of persisting application state for fault
     * tolerance.</p>
     */
    inline bool CheckpointConfigurationUpdateHasBeenSet() const { return m_checkpointConfigurationUpdateHasBeenSet; }

    /**
     * <p>Describes updates to an application's checkpointing configuration.
     * Checkpointing is the process of persisting application state for fault
     * tolerance.</p>
     */
    inline void SetCheckpointConfigurationUpdate(const CheckpointConfigurationUpdate& value) { m_checkpointConfigurationUpdateHasBeenSet = true; m_checkpointConfigurationUpdate = value; }

    /**
     * <p>Describes updates to an application's checkpointing configuration.
     * Checkpointing is the process of persisting application state for fault
     * tolerance.</p>
     */
    inline void SetCheckpointConfigurationUpdate(CheckpointConfigurationUpdate&& value) { m_checkpointConfigurationUpdateHasBeenSet = true; m_checkpointConfigurationUpdate = std::move(value); }

    /**
     * <p>Describes updates to an application's checkpointing configuration.
     * Checkpointing is the process of persisting application state for fault
     * tolerance.</p>
     */
    inline FlinkApplicationConfigurationUpdate& WithCheckpointConfigurationUpdate(const CheckpointConfigurationUpdate& value) { SetCheckpointConfigurationUpdate(value); return *this;}

    /**
     * <p>Describes updates to an application's checkpointing configuration.
     * Checkpointing is the process of persisting application state for fault
     * tolerance.</p>
     */
    inline FlinkApplicationConfigurationUpdate& WithCheckpointConfigurationUpdate(CheckpointConfigurationUpdate&& value) { SetCheckpointConfigurationUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes updates to the configuration parameters for Amazon CloudWatch
     * logging for an application.</p>
     */
    inline const MonitoringConfigurationUpdate& GetMonitoringConfigurationUpdate() const{ return m_monitoringConfigurationUpdate; }

    /**
     * <p>Describes updates to the configuration parameters for Amazon CloudWatch
     * logging for an application.</p>
     */
    inline bool MonitoringConfigurationUpdateHasBeenSet() const { return m_monitoringConfigurationUpdateHasBeenSet; }

    /**
     * <p>Describes updates to the configuration parameters for Amazon CloudWatch
     * logging for an application.</p>
     */
    inline void SetMonitoringConfigurationUpdate(const MonitoringConfigurationUpdate& value) { m_monitoringConfigurationUpdateHasBeenSet = true; m_monitoringConfigurationUpdate = value; }

    /**
     * <p>Describes updates to the configuration parameters for Amazon CloudWatch
     * logging for an application.</p>
     */
    inline void SetMonitoringConfigurationUpdate(MonitoringConfigurationUpdate&& value) { m_monitoringConfigurationUpdateHasBeenSet = true; m_monitoringConfigurationUpdate = std::move(value); }

    /**
     * <p>Describes updates to the configuration parameters for Amazon CloudWatch
     * logging for an application.</p>
     */
    inline FlinkApplicationConfigurationUpdate& WithMonitoringConfigurationUpdate(const MonitoringConfigurationUpdate& value) { SetMonitoringConfigurationUpdate(value); return *this;}

    /**
     * <p>Describes updates to the configuration parameters for Amazon CloudWatch
     * logging for an application.</p>
     */
    inline FlinkApplicationConfigurationUpdate& WithMonitoringConfigurationUpdate(MonitoringConfigurationUpdate&& value) { SetMonitoringConfigurationUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes updates to the parameters for how an application executes multiple
     * tasks simultaneously.</p>
     */
    inline const ParallelismConfigurationUpdate& GetParallelismConfigurationUpdate() const{ return m_parallelismConfigurationUpdate; }

    /**
     * <p>Describes updates to the parameters for how an application executes multiple
     * tasks simultaneously.</p>
     */
    inline bool ParallelismConfigurationUpdateHasBeenSet() const { return m_parallelismConfigurationUpdateHasBeenSet; }

    /**
     * <p>Describes updates to the parameters for how an application executes multiple
     * tasks simultaneously.</p>
     */
    inline void SetParallelismConfigurationUpdate(const ParallelismConfigurationUpdate& value) { m_parallelismConfigurationUpdateHasBeenSet = true; m_parallelismConfigurationUpdate = value; }

    /**
     * <p>Describes updates to the parameters for how an application executes multiple
     * tasks simultaneously.</p>
     */
    inline void SetParallelismConfigurationUpdate(ParallelismConfigurationUpdate&& value) { m_parallelismConfigurationUpdateHasBeenSet = true; m_parallelismConfigurationUpdate = std::move(value); }

    /**
     * <p>Describes updates to the parameters for how an application executes multiple
     * tasks simultaneously.</p>
     */
    inline FlinkApplicationConfigurationUpdate& WithParallelismConfigurationUpdate(const ParallelismConfigurationUpdate& value) { SetParallelismConfigurationUpdate(value); return *this;}

    /**
     * <p>Describes updates to the parameters for how an application executes multiple
     * tasks simultaneously.</p>
     */
    inline FlinkApplicationConfigurationUpdate& WithParallelismConfigurationUpdate(ParallelismConfigurationUpdate&& value) { SetParallelismConfigurationUpdate(std::move(value)); return *this;}

  private:

    CheckpointConfigurationUpdate m_checkpointConfigurationUpdate;
    bool m_checkpointConfigurationUpdateHasBeenSet;

    MonitoringConfigurationUpdate m_monitoringConfigurationUpdate;
    bool m_monitoringConfigurationUpdateHasBeenSet;

    ParallelismConfigurationUpdate m_parallelismConfigurationUpdate;
    bool m_parallelismConfigurationUpdateHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
