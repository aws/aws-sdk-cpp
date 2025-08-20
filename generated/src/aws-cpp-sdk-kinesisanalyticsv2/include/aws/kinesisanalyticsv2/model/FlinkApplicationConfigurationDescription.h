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
    AWS_KINESISANALYTICSV2_API FlinkApplicationConfigurationDescription() = default;
    AWS_KINESISANALYTICSV2_API FlinkApplicationConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API FlinkApplicationConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes an application's checkpointing configuration. Checkpointing is the
     * process of persisting application state for fault tolerance.</p>
     */
    inline const CheckpointConfigurationDescription& GetCheckpointConfigurationDescription() const { return m_checkpointConfigurationDescription; }
    inline bool CheckpointConfigurationDescriptionHasBeenSet() const { return m_checkpointConfigurationDescriptionHasBeenSet; }
    template<typename CheckpointConfigurationDescriptionT = CheckpointConfigurationDescription>
    void SetCheckpointConfigurationDescription(CheckpointConfigurationDescriptionT&& value) { m_checkpointConfigurationDescriptionHasBeenSet = true; m_checkpointConfigurationDescription = std::forward<CheckpointConfigurationDescriptionT>(value); }
    template<typename CheckpointConfigurationDescriptionT = CheckpointConfigurationDescription>
    FlinkApplicationConfigurationDescription& WithCheckpointConfigurationDescription(CheckpointConfigurationDescriptionT&& value) { SetCheckpointConfigurationDescription(std::forward<CheckpointConfigurationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes configuration parameters for Amazon CloudWatch logging for an
     * application.</p>
     */
    inline const MonitoringConfigurationDescription& GetMonitoringConfigurationDescription() const { return m_monitoringConfigurationDescription; }
    inline bool MonitoringConfigurationDescriptionHasBeenSet() const { return m_monitoringConfigurationDescriptionHasBeenSet; }
    template<typename MonitoringConfigurationDescriptionT = MonitoringConfigurationDescription>
    void SetMonitoringConfigurationDescription(MonitoringConfigurationDescriptionT&& value) { m_monitoringConfigurationDescriptionHasBeenSet = true; m_monitoringConfigurationDescription = std::forward<MonitoringConfigurationDescriptionT>(value); }
    template<typename MonitoringConfigurationDescriptionT = MonitoringConfigurationDescription>
    FlinkApplicationConfigurationDescription& WithMonitoringConfigurationDescription(MonitoringConfigurationDescriptionT&& value) { SetMonitoringConfigurationDescription(std::forward<MonitoringConfigurationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes parameters for how an application executes multiple tasks
     * simultaneously.</p>
     */
    inline const ParallelismConfigurationDescription& GetParallelismConfigurationDescription() const { return m_parallelismConfigurationDescription; }
    inline bool ParallelismConfigurationDescriptionHasBeenSet() const { return m_parallelismConfigurationDescriptionHasBeenSet; }
    template<typename ParallelismConfigurationDescriptionT = ParallelismConfigurationDescription>
    void SetParallelismConfigurationDescription(ParallelismConfigurationDescriptionT&& value) { m_parallelismConfigurationDescriptionHasBeenSet = true; m_parallelismConfigurationDescription = std::forward<ParallelismConfigurationDescriptionT>(value); }
    template<typename ParallelismConfigurationDescriptionT = ParallelismConfigurationDescription>
    FlinkApplicationConfigurationDescription& WithParallelismConfigurationDescription(ParallelismConfigurationDescriptionT&& value) { SetParallelismConfigurationDescription(std::forward<ParallelismConfigurationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job plan for an application. For more information about the job plan, see
     * <a
     * href="https://nightlies.apache.org/flink/flink-docs-release-1.20/internals/job_scheduling.html">Jobs
     * and Scheduling</a> in the <a
     * href="https://nightlies.apache.org/flink/flink-docs-release-1.20/">Apache Flink
     * Documentation</a>. To retrieve the job plan for the application, use the
     * <a>DescribeApplicationRequest$IncludeAdditionalDetails</a> parameter of the
     * <a>DescribeApplication</a> operation.</p>
     */
    inline const Aws::String& GetJobPlanDescription() const { return m_jobPlanDescription; }
    inline bool JobPlanDescriptionHasBeenSet() const { return m_jobPlanDescriptionHasBeenSet; }
    template<typename JobPlanDescriptionT = Aws::String>
    void SetJobPlanDescription(JobPlanDescriptionT&& value) { m_jobPlanDescriptionHasBeenSet = true; m_jobPlanDescription = std::forward<JobPlanDescriptionT>(value); }
    template<typename JobPlanDescriptionT = Aws::String>
    FlinkApplicationConfigurationDescription& WithJobPlanDescription(JobPlanDescriptionT&& value) { SetJobPlanDescription(std::forward<JobPlanDescriptionT>(value)); return *this;}
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
