/**
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
    AWS_KINESISANALYTICSV2_API FlinkApplicationConfigurationUpdate() = default;
    AWS_KINESISANALYTICSV2_API FlinkApplicationConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API FlinkApplicationConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes updates to an application's checkpointing configuration.
     * Checkpointing is the process of persisting application state for fault
     * tolerance.</p>
     */
    inline const CheckpointConfigurationUpdate& GetCheckpointConfigurationUpdate() const { return m_checkpointConfigurationUpdate; }
    inline bool CheckpointConfigurationUpdateHasBeenSet() const { return m_checkpointConfigurationUpdateHasBeenSet; }
    template<typename CheckpointConfigurationUpdateT = CheckpointConfigurationUpdate>
    void SetCheckpointConfigurationUpdate(CheckpointConfigurationUpdateT&& value) { m_checkpointConfigurationUpdateHasBeenSet = true; m_checkpointConfigurationUpdate = std::forward<CheckpointConfigurationUpdateT>(value); }
    template<typename CheckpointConfigurationUpdateT = CheckpointConfigurationUpdate>
    FlinkApplicationConfigurationUpdate& WithCheckpointConfigurationUpdate(CheckpointConfigurationUpdateT&& value) { SetCheckpointConfigurationUpdate(std::forward<CheckpointConfigurationUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to the configuration parameters for Amazon CloudWatch
     * logging for an application.</p>
     */
    inline const MonitoringConfigurationUpdate& GetMonitoringConfigurationUpdate() const { return m_monitoringConfigurationUpdate; }
    inline bool MonitoringConfigurationUpdateHasBeenSet() const { return m_monitoringConfigurationUpdateHasBeenSet; }
    template<typename MonitoringConfigurationUpdateT = MonitoringConfigurationUpdate>
    void SetMonitoringConfigurationUpdate(MonitoringConfigurationUpdateT&& value) { m_monitoringConfigurationUpdateHasBeenSet = true; m_monitoringConfigurationUpdate = std::forward<MonitoringConfigurationUpdateT>(value); }
    template<typename MonitoringConfigurationUpdateT = MonitoringConfigurationUpdate>
    FlinkApplicationConfigurationUpdate& WithMonitoringConfigurationUpdate(MonitoringConfigurationUpdateT&& value) { SetMonitoringConfigurationUpdate(std::forward<MonitoringConfigurationUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to the parameters for how an application executes multiple
     * tasks simultaneously.</p>
     */
    inline const ParallelismConfigurationUpdate& GetParallelismConfigurationUpdate() const { return m_parallelismConfigurationUpdate; }
    inline bool ParallelismConfigurationUpdateHasBeenSet() const { return m_parallelismConfigurationUpdateHasBeenSet; }
    template<typename ParallelismConfigurationUpdateT = ParallelismConfigurationUpdate>
    void SetParallelismConfigurationUpdate(ParallelismConfigurationUpdateT&& value) { m_parallelismConfigurationUpdateHasBeenSet = true; m_parallelismConfigurationUpdate = std::forward<ParallelismConfigurationUpdateT>(value); }
    template<typename ParallelismConfigurationUpdateT = ParallelismConfigurationUpdate>
    FlinkApplicationConfigurationUpdate& WithParallelismConfigurationUpdate(ParallelismConfigurationUpdateT&& value) { SetParallelismConfigurationUpdate(std::forward<ParallelismConfigurationUpdateT>(value)); return *this;}
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
