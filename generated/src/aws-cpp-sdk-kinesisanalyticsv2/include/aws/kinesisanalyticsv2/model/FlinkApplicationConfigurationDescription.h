/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/CheckpointConfigurationDescription.h>
#include <aws/kinesisanalyticsv2/model/MonitoringConfigurationDescription.h>
#include <aws/kinesisanalyticsv2/model/ParallelismConfigurationDescription.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/FlinkApplicationConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class FlinkApplicationConfigurationDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API FlinkApplicationConfigurationDescription();
    AWS_KINESISANALYTICSV2_API FlinkApplicationConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API FlinkApplicationConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes an application's checkpointing configuration. Checkpointing is the
     * process of persisting application state for fault tolerance.</p>
     */
    inline const CheckpointConfigurationDescription& GetCheckpointConfigurationDescription() const{ return m_checkpointConfigurationDescription; }
    inline bool CheckpointConfigurationDescriptionHasBeenSet() const { return m_checkpointConfigurationDescriptionHasBeenSet; }
    inline void SetCheckpointConfigurationDescription(const CheckpointConfigurationDescription& value) { m_checkpointConfigurationDescriptionHasBeenSet = true; m_checkpointConfigurationDescription = value; }
    inline void SetCheckpointConfigurationDescription(CheckpointConfigurationDescription&& value) { m_checkpointConfigurationDescriptionHasBeenSet = true; m_checkpointConfigurationDescription = std::move(value); }
    inline FlinkApplicationConfigurationDescription& WithCheckpointConfigurationDescription(const CheckpointConfigurationDescription& value) { SetCheckpointConfigurationDescription(value); return *this;}
    inline FlinkApplicationConfigurationDescription& WithCheckpointConfigurationDescription(CheckpointConfigurationDescription&& value) { SetCheckpointConfigurationDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes configuration parameters for Amazon CloudWatch logging for an
     * application.</p>
     */
    inline const MonitoringConfigurationDescription& GetMonitoringConfigurationDescription() const{ return m_monitoringConfigurationDescription; }
    inline bool MonitoringConfigurationDescriptionHasBeenSet() const { return m_monitoringConfigurationDescriptionHasBeenSet; }
    inline void SetMonitoringConfigurationDescription(const MonitoringConfigurationDescription& value) { m_monitoringConfigurationDescriptionHasBeenSet = true; m_monitoringConfigurationDescription = value; }
    inline void SetMonitoringConfigurationDescription(MonitoringConfigurationDescription&& value) { m_monitoringConfigurationDescriptionHasBeenSet = true; m_monitoringConfigurationDescription = std::move(value); }
    inline FlinkApplicationConfigurationDescription& WithMonitoringConfigurationDescription(const MonitoringConfigurationDescription& value) { SetMonitoringConfigurationDescription(value); return *this;}
    inline FlinkApplicationConfigurationDescription& WithMonitoringConfigurationDescription(MonitoringConfigurationDescription&& value) { SetMonitoringConfigurationDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes parameters for how an application executes multiple tasks
     * simultaneously.</p>
     */
    inline const ParallelismConfigurationDescription& GetParallelismConfigurationDescription() const{ return m_parallelismConfigurationDescription; }
    inline bool ParallelismConfigurationDescriptionHasBeenSet() const { return m_parallelismConfigurationDescriptionHasBeenSet; }
    inline void SetParallelismConfigurationDescription(const ParallelismConfigurationDescription& value) { m_parallelismConfigurationDescriptionHasBeenSet = true; m_parallelismConfigurationDescription = value; }
    inline void SetParallelismConfigurationDescription(ParallelismConfigurationDescription&& value) { m_parallelismConfigurationDescriptionHasBeenSet = true; m_parallelismConfigurationDescription = std::move(value); }
    inline FlinkApplicationConfigurationDescription& WithParallelismConfigurationDescription(const ParallelismConfigurationDescription& value) { SetParallelismConfigurationDescription(value); return *this;}
    inline FlinkApplicationConfigurationDescription& WithParallelismConfigurationDescription(ParallelismConfigurationDescription&& value) { SetParallelismConfigurationDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job plan for an application. For more information about the job plan, see
     * <a
     * href="https://nightlies.apache.org/flink/flink-docs-release-1.19/internals/job_scheduling.html">Jobs
     * and Scheduling</a> in the <a
     * href="https://nightlies.apache.org/flink/flink-docs-release-1.19/">Apache Flink
     * Documentation</a>. To retrieve the job plan for the application, use the
     * <a>DescribeApplicationRequest$IncludeAdditionalDetails</a> parameter of the
     * <a>DescribeApplication</a> operation.</p>
     */
    inline const Aws::String& GetJobPlanDescription() const{ return m_jobPlanDescription; }
    inline bool JobPlanDescriptionHasBeenSet() const { return m_jobPlanDescriptionHasBeenSet; }
    inline void SetJobPlanDescription(const Aws::String& value) { m_jobPlanDescriptionHasBeenSet = true; m_jobPlanDescription = value; }
    inline void SetJobPlanDescription(Aws::String&& value) { m_jobPlanDescriptionHasBeenSet = true; m_jobPlanDescription = std::move(value); }
    inline void SetJobPlanDescription(const char* value) { m_jobPlanDescriptionHasBeenSet = true; m_jobPlanDescription.assign(value); }
    inline FlinkApplicationConfigurationDescription& WithJobPlanDescription(const Aws::String& value) { SetJobPlanDescription(value); return *this;}
    inline FlinkApplicationConfigurationDescription& WithJobPlanDescription(Aws::String&& value) { SetJobPlanDescription(std::move(value)); return *this;}
    inline FlinkApplicationConfigurationDescription& WithJobPlanDescription(const char* value) { SetJobPlanDescription(value); return *this;}
    ///@}
  private:

    CheckpointConfigurationDescription m_checkpointConfigurationDescription;
    bool m_checkpointConfigurationDescriptionHasBeenSet = false;

    MonitoringConfigurationDescription m_monitoringConfigurationDescription;
    bool m_monitoringConfigurationDescriptionHasBeenSet = false;

    ParallelismConfigurationDescription m_parallelismConfigurationDescription;
    bool m_parallelismConfigurationDescriptionHasBeenSet = false;

    Aws::String m_jobPlanDescription;
    bool m_jobPlanDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
