﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Describes updates to the configuration parameters for a Managed Service for
   * Apache Flink application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/FlinkApplicationConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class FlinkApplicationConfigurationUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API FlinkApplicationConfigurationUpdate();
    AWS_KINESISANALYTICSV2_API FlinkApplicationConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API FlinkApplicationConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes updates to an application's checkpointing configuration.
     * Checkpointing is the process of persisting application state for fault
     * tolerance.</p>
     */
    inline const CheckpointConfigurationUpdate& GetCheckpointConfigurationUpdate() const{ return m_checkpointConfigurationUpdate; }
    inline bool CheckpointConfigurationUpdateHasBeenSet() const { return m_checkpointConfigurationUpdateHasBeenSet; }
    inline void SetCheckpointConfigurationUpdate(const CheckpointConfigurationUpdate& value) { m_checkpointConfigurationUpdateHasBeenSet = true; m_checkpointConfigurationUpdate = value; }
    inline void SetCheckpointConfigurationUpdate(CheckpointConfigurationUpdate&& value) { m_checkpointConfigurationUpdateHasBeenSet = true; m_checkpointConfigurationUpdate = std::move(value); }
    inline FlinkApplicationConfigurationUpdate& WithCheckpointConfigurationUpdate(const CheckpointConfigurationUpdate& value) { SetCheckpointConfigurationUpdate(value); return *this;}
    inline FlinkApplicationConfigurationUpdate& WithCheckpointConfigurationUpdate(CheckpointConfigurationUpdate&& value) { SetCheckpointConfigurationUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to the configuration parameters for Amazon CloudWatch
     * logging for an application.</p>
     */
    inline const MonitoringConfigurationUpdate& GetMonitoringConfigurationUpdate() const{ return m_monitoringConfigurationUpdate; }
    inline bool MonitoringConfigurationUpdateHasBeenSet() const { return m_monitoringConfigurationUpdateHasBeenSet; }
    inline void SetMonitoringConfigurationUpdate(const MonitoringConfigurationUpdate& value) { m_monitoringConfigurationUpdateHasBeenSet = true; m_monitoringConfigurationUpdate = value; }
    inline void SetMonitoringConfigurationUpdate(MonitoringConfigurationUpdate&& value) { m_monitoringConfigurationUpdateHasBeenSet = true; m_monitoringConfigurationUpdate = std::move(value); }
    inline FlinkApplicationConfigurationUpdate& WithMonitoringConfigurationUpdate(const MonitoringConfigurationUpdate& value) { SetMonitoringConfigurationUpdate(value); return *this;}
    inline FlinkApplicationConfigurationUpdate& WithMonitoringConfigurationUpdate(MonitoringConfigurationUpdate&& value) { SetMonitoringConfigurationUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to the parameters for how an application executes multiple
     * tasks simultaneously.</p>
     */
    inline const ParallelismConfigurationUpdate& GetParallelismConfigurationUpdate() const{ return m_parallelismConfigurationUpdate; }
    inline bool ParallelismConfigurationUpdateHasBeenSet() const { return m_parallelismConfigurationUpdateHasBeenSet; }
    inline void SetParallelismConfigurationUpdate(const ParallelismConfigurationUpdate& value) { m_parallelismConfigurationUpdateHasBeenSet = true; m_parallelismConfigurationUpdate = value; }
    inline void SetParallelismConfigurationUpdate(ParallelismConfigurationUpdate&& value) { m_parallelismConfigurationUpdateHasBeenSet = true; m_parallelismConfigurationUpdate = std::move(value); }
    inline FlinkApplicationConfigurationUpdate& WithParallelismConfigurationUpdate(const ParallelismConfigurationUpdate& value) { SetParallelismConfigurationUpdate(value); return *this;}
    inline FlinkApplicationConfigurationUpdate& WithParallelismConfigurationUpdate(ParallelismConfigurationUpdate&& value) { SetParallelismConfigurationUpdate(std::move(value)); return *this;}
    ///@}
  private:

    CheckpointConfigurationUpdate m_checkpointConfigurationUpdate;
    bool m_checkpointConfigurationUpdateHasBeenSet = false;

    MonitoringConfigurationUpdate m_monitoringConfigurationUpdate;
    bool m_monitoringConfigurationUpdateHasBeenSet = false;

    ParallelismConfigurationUpdate m_parallelismConfigurationUpdate;
    bool m_parallelismConfigurationUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
